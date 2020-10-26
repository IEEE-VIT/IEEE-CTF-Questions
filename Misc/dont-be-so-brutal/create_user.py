from django.contrib.auth.models import User

user, exists = User.objects.get_or_create(username="admin")
if not exists:
    user.set_password("hackerman")
    user.save()
