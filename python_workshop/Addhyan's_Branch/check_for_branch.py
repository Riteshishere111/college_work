# Details Table banane ke liye chota sa Program................
# User se details lene ke liye
name = input("Apna naam daaliye ji : ")
dob = eval(input("Apna date of birth (DD/MM/YYYY) daaliye ji : "))
father_name = input("Apne pita ji ka naam daaliye: ")
mother_name = input("Apne maa ka naam daaliye: ")
email = input("Apna email daaliye ji : ")
phone = eval(input("Apna phone number daaliye ji : "))
address = input("Apna address daaliye ji : ")
hobbies = input("Aapke shauk kya hain? (comma se separate karein): ")
password = eval(input("Apna password daaliye ji {EX= 1234} : "))

# Table print karne ke liye aapan esa kuch bana rahe hai ..................
print("\nDetails Table:")
print("-" * 60) # jo  (-) hai bo aapan 60 barr chalana hai to isko aapan 60* kar dete hai .................
print("Name:          | ",name)
print("Date of Birth: | ",dob)
print("Father's Name: | ",father_name)
print("Mother's Name: | ",mother_name)
print("Phone:         | ",phone)
print("Address:       | ",address)
print("Hobbies:       | ",hobbies)
print("Email:         | ",email)
print("Password:      | ",password)
print("-" * 60)
