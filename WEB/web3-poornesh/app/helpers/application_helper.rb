module ApplicationHelper
	def fullTitle(page_title = '')
		base_title = 'S3CR3T : WEBSITE'
		if page_title.empty?
			base_title
		else
			'S3CR3T ' + page_title + ' : WEBSITE'
		end
	end

	def current_user(user = '')
		if cookies().key?("challenge")
			if request.original_url.include? "login"
				login()
			end
		else
			'All The Best!'
		end
	end

	def login
		rsa_decode = Auth.decode(cookies['challenge'])
		if rsa_decode.include? "Invalid"
			hmac_decode = Auth.hmac_decode(cookies['challenge'])
			if hmac_decode.include? "Invalid"
				return "Incorrect Username/Password"#Token"
			end
				if "#{hmac_decode[0]['name']}" === "admin"
					return "#{hmac_decode[0]['name']}:Q29uZ3JhdHMhIGFkbWluIFBhc3N3b3JkIEZvdW5kLiBLaWRzIGxpa2UgYmlzY3VpdHM="
					end
			#return "Login Success"
			return "Current user is: #{hmac_decode[0]['name']}"
		end
		return "Login Success"
		#rsa_decode
	end
	
end
