class UsersController < ApplicationController
  before_action :set_user, only: [:show, :edit, :update, :destroy]

  # GET /users
  # GET /users.json
  def index
    @users = User.all
  end

  # GET /users/1
  # GET /users/1.json
  def show
   respond_to do |format|
    if @user.id === TRUE
      format.html { redirect_to "/advertisment/#{@user}"}
      format.json { render :show, status: :ok, location: "/advertisment/#{@user}" }
    else
      format.html { render :show }
      format.json { render json: @user.errors, status: :unprocessable_entity }
  end
  end
  end
  
  # GET /users/new
  def new
    @user = User.new
  end

  # GET /users/1/edit
  def edit
       render :file => "#{Rails.root}/public/404.html", :status => 404, :layout => false
  end

  # POST /users
  # POST /users.json
  def create
    @user = User.new(user_params)

    respond_to do |format|
      if @user.save
        format.html { redirect_to "/advertisment/#{@user}", notice: 'User was successfully created.' }
        format.json { render :show, status: :created, location: "/advertisment/#{@user}" }
      else
        format.html { render :new }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_user
    begin
    @user = User.find params[:id]
  rescue
    flash[:error] = "User not found"
    render :file => "#{Rails.root}/public/404.html", :status => 404, :layout => false
  end
    end

    # Never trust parameters from the scary internet, only allow the white list through.
    def user_params
      params.require(:user).permit(:name, :email, :secret_fact, :password, :password_confirmation)
    end
end
