# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the rails db:seed command (or created alongside the database with db:setup).
#
# Examples:
#
 #  movies = Movie.create([{ name: 'Star Wars' }, { name: 'Lord of the Rings' }])
#   Character.create(name: 'Luke', movie: movies.first)

users = User.create([{id: 1 }, {name: "admin" }, {email: "admin@ieeevit.org" }, {secret_fact: "Passphrases are always kept secret" }, {password_digest: "$2a$12$ey7vxtDiVQAIsUmTTbYUtO2.AMivMGf1sRX2cqyAlyQKAU4.8tsmG" }])
p "Created #{User.count} users"

#users = Users.execute("INSERT INTO users (id , name, email, secret_fact, password_digest) VALUES (?, ?, ?, ?, ?)", ["1", "admin", "admin@ieeevit.org", "Passphrases are always kept secret", "$2a$12$ey7vxtDiVQAIsUmTTbYUtO2.AMivMGf1sRX2cqyAlyQKAU4.8tsmG"])
