class AuthenticationController < ApplicationController
  require 'json'

  def login
  end

  def authlogin
    username = params[:session]["name"]
    @user = User.find_by_name(params[:session]["name"])
    if @user.present? && @user.authenticate(params[:session]["password"])
      token = Auth.encode(name: @user.name)
      cookies["challenge"] = token
      cookies["current_user"] = @user.name
      if @user.name === "admin"
        cookies["flag"] = "IEECTF{JWTs_AR3_AW3S0M3_WITH_T4STY_C00KI3$}"
      end
    else
      cookies["challenge"] = "incorrect"
    end
    redirect_to '/advertisment/authentication/login'
  end
  
end
