FROM python:3
ENV PYTHONUNBUFFERED=1
RUN mkdir /code
WORKDIR /code
COPY requirements.txt /code/
RUN pip install -r requirements.txt
COPY . /code/
RUN python manage.py migrate
RUN python manage.py shell < create_user.py
CMD gunicorn -b :8000 --workers 2 crypto.wsgi
EXPOSE 8000
