class MainController < ActionController::Base
def not_found
    render :file => "#{Rails.root}/views/static_pages/404.html", :status => 404, :layout => false
end
end
