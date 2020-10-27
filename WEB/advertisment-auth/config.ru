# This file is used by Rack-based servers to start the application.

require_relative 'config/environment'

map '/advertisment' do
    run Rails.application
end

