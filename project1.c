import csv
def write_into_csv(info_list):
    with open("student_info.csv","a" , newline="") as csv_file:
        writer = csv.writer(csv_file)
        if csv_file.tell() == 0:
            writer.writerow(["Name" , "Age" , "Contact_number" , "Email_id"])

        writer.writerow(info_list)


if __name__ == "__main__":
    condition = True
    student_num = 1

    while condition:
        student_info = input("enter information of a student for student_num #{} in the following format (Name Age Contact_number Email_id):".format(student_num))
       

        student_info_list = student_info.split(" ")
       

        print("\nThe entered information is: \nName: {}\nAge: {}\nContact_number: {}\nEmail_id: {}".format( student_info_list[0], student_info_list[1], student_info_list[2], student_info_list[3]))

        choice_check = input("Is the entered information correct?(yes/no):")
        if choice_check == "yes":
              write_into_csv(student_info_list)
              condition_check = input("enter (yes/no) if u want information of another student")
              if condition_check == " yes":
                condition = True
                student_num+=1
              elif condition_check == " no":
                condition = False

        elif choice_check == "no":
            print("\nplease reenter the values")
print("Thank you for using the school administration tool!")


        
    

       


