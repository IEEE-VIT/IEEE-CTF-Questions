Rails.application.routes.draw do

  scope '/advertisment' do
      get 'authentication/login'

      get '/home', to: 'static_pages#home'
      get '/help', to: 'static_pages#help'
      get '/challenges', to: 'static_pages#challenges'
      get '/register', to: 'static_pages#register'
      resources :users
      get '/users/edit', to: 'main#not_found'
      root 'static_pages#home'
      post '/authentication/login', to: 'authentication#authlogin'  
      get '*unmatched_route', to: 'main#not_found'
      get '*unprocessable_entity', to: 'main#not_found'
  end
  get '*unmatched_route', to: 'main#not_found'
  get '*unprocessable_entity', to: 'main#not_found'
end
