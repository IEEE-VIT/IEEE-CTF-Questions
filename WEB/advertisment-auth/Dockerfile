FROM ruby:2.5
RUN apt-get update -qq && apt-get install -y nodejs sqlite3 libsqlite3-dev
RUN mkdir /app
WORKDIR /app
COPY Gemfile /app/Gemfile
COPY Gemfile.lock /app/Gemfile.lock
RUN bundle install
COPY . /app

# Add a script to be executed every time the container starts.
COPY entrypoint.sh /usr/bin/
RUN chmod +x /usr/bin/entrypoint.sh
ENTRYPOINT ["entrypoint.sh"]
EXPOSE 3000

# Start the main process.
RUN bundle exec rake db:create db:migrate db:seed
CMD ["rails", "server", "-b", "0.0.0.0"]

