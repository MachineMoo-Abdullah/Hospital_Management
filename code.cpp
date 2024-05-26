#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;


struct Person {
    string firstname;
    string lastname;
    string id; 
    string age;
};

struct Patient {
	string firstname;
    string lastname;
    string id; 
    string age;
    string medicalHistory;
};

struct Staff{
	string firstname;
    string lastname;
    string id; 
    string age;
    string specialty;
};

struct Appointment {
    string patientID;
    string staffID;
    string appointmentDate;
    string appointmentTime;
};


void addPatient();
void addStaff();
void displayMenu();
void displayPatient();
void displayStaff();
void deletePatient();
void deleteStaff();
void updatePatient();
void updateStaff();
void showAllPatients();
void showAllStaff();
void scheduleAppointment();
void updateAppointment();
void cancelAppointment();
void showAllAppointments();
bool checkAvailability(string id, string date, string time);

Patient p;
Staff s;
Appointment a;


int main() {
    char m; 
    int menu;
    char sub_menu;
    cout << "*********************************************************************************************************************" << endl;
		cout << "*                                                                                                                   *" << endl;
		cout << "*                                      A I R   U N I V E R S I T Y                                                  *" << endl;
		cout << "*                                H O S P I T A L  M A N A G E M E N T  S Y S T E M                                  *" << endl;
		cout << "*                                                                                                                   *" << endl;
		cout << "*********************************************************************************************************************" << endl;
		cout<<"\n\n\n\n\n\n\t\t\tLoading Please Wait....\t| ";
	
		char bar = 178;
		for(int i = 0 ;i< 35;i++)
		{
			cout<<bar;
			if(i<10)
			{
				Sleep(300);
			}
			if(i>=10 && i < 20)
			{
				Sleep(200);
			}
			if(i>=20 && i < 25)
			{
				Sleep(100);
			}
		}
		system("cls");
    while(true)
    {
	    displayMenu();
	    cin >> menu;
	
	    if(menu == 1)
	    {
	            system("cls");
	            cout << "**********************************************************\***********************************************************" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*                                            PATIENT                                                                *" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*********************************************************************************************************************" << endl;
				cout << "------ENTER ANY CHOICE:------" << endl << endl;
			    cout << "\t\n\t1.\tPress n: Add new patient" << endl;
			    cout << "\t\n\t1.\tPress i: Display individual patient record" << endl;
			    cout << "\t\n\t1.\tPress d: Delete patient record" << endl;
			    cout << "\t\n\t1.\tPress u: Update patient record" << endl;
			    cout << "\t\n\t1.\tPress a: Show all patient records" << endl;
			    cin >> sub_menu;
			    if (sub_menu == 'i')
			    {
		            system("cls");
		            displayPatient();
		            cout << "Enter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
		        else if (sub_menu == 'd')
		        {
		            system("cls");
		            deletePatient();
		            cout << "Enter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		    	}
		        else if( sub_menu == 'u')
		        {
	            	system("cls");
	            	updatePatient();
	            	cout << "Enter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
	            }
		        else if (sub_menu == 'n')
		        {
		        	system("cls");
		            addPatient();
		            cout << "Enter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
		        else if (sub_menu == 'a')
		        {
		            system("cls");
		            showAllPatients();
		            cout << "Enter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
		        
		      	else 
		      		cout << "**** Invalid Choice ****" << endl << "Please enter from the given options" << endl;
		    }
	        else if(menu == 2)
	        {
	       		system("cls");
	            cout << "*********************************************************************************************************************" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*                                           MANAGE STAFF                                                            *" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*********************************************************************************************************************" << endl;
				cout << "------ENTER ANY CHOICE:------" << endl << endl;
	            cout << "\t\n\t1.\tPress m: Add new medical staff" << endl;
			    cout << "\t\n\t2.\tPress s: Display individual staff record" << endl;
			    cout << "\t\n\t1.\tPress f: Delete staff record" << endl;
			    cout << "\t\n\t1.\tPress v: Update staff record" << endl;
			    cout << "\t\n\t1.\tPress b: Show all staff records" << endl;
			    cin>>sub_menu;
		        if (sub_menu == 'm')
		        {
				    system("cls");
		            addStaff();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit: ";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
	            else if (sub_menu == 's')
		        {
		            system("cls");
		            displayStaff();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		         }
		        
		        else if (sub_menu == 'f')
		        {
		            system("cls");
		            deleteStaff();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		         }
		        else if (sub_menu == 'v')
		        {
		            system("cls");
		            updateStaff();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		      	}
		        else if (sub_menu == 'm')
		        {
		            system("cls");
		            showAllStaff();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
		        
		      	else 
		      		cout << "**** Invalid Choice ****" << endl << "Please enter from the given options" << endl;
	    }
	    else if(menu == 3)
	        {
	       		system("cls");
	             cout << "*********************************************************************************************************************" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*                                           MANAGE APPOINTMENTS                                                     *" << endl;
				cout << "*                                                                                                                   *" << endl;
				cout << "*********************************************************************************************************************" << endl;
				cout << "------ENTER ANY CHOICE:------" << endl << endl;
	            cout << "\t\n\t1.\tPress s: Schedule appointment" << endl;
			    cout << "\t\n\t1.\tPress u: Update appointment" << endl;
			    cout << "\t\n\t1.\tPress c: Cancel appointment" << endl;
			    cout << "\t\n\t1.\tPress a: Show all appointments" << endl;
			    cin>>sub_menu;
		        if (sub_menu == 's')
		        {
				    system("cls");
		            showAllAppointments();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		        }
	            else if (sub_menu == 'u')
		        {
		            system("cls");
		            updateAppointment();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		         }
		        
		        else if (sub_menu == 'c')
		        {
		            system("cls");
		            cancelAppointment();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		         }
		        else if (sub_menu == 'a')
		        {
		            system("cls");
		            scheduleAppointment();
		            cout << "\n\n\tEnter 'm' to continue to menu or any other key to exit:";
					cin >> m;
					if(m == m)
					{
						continue;
					}
		      	}
		      	else 
		      		cout << "\n\n\t**** Invalid Choice ****" << endl << "\n\n\tPlease enter from the given options" << endl;
	    }
	    else if(menu == 4)
	    {
	    	cout<<"\n\n\t\t\tThank you for Visiting our Hospital System";
	    	exit(0);
		}
	  	else 
	  		cout << "\n\n\t**** Invalid Choice ****" << endl << "\n\n\tPlease enter from the given options" << endl;
	}
}




void displayMenu() {
    system("cls");
		
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                      A I R   U N I V E R S I T Y                                                  *" << endl;
	cout << "*                                H O S P I T A L  M A N A G E M E N T  S Y S T E M                                  *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	cout << "\n\t\t******************" << endl;
	cout << "\t\t*  C H O I C E S  *" << endl;
	cout << "\t\t*******************" << endl;
    cout << "\t\n\t1.\tPress 1: Patient" << endl;
    cout << "\t\n\t2.\tPress 2: Manage Appointments" << endl;
    cout << "\t\n\t3.\tPress 3: Manage medical staff" << endl;
    cout << "\t\n\t4.\tPress 4: Exit" << endl;
}
void addPatient() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           ADD PATIENT                                                             *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    cout << "Enter Patient ID:" << endl;
    cin >> p.id;

    string filename = "patient_" + p.id + ".txt";
    fstream file(filename, ios::in);

    while (file >> p.firstname >> p.lastname >> p.id) {
        if (p.id == p.id) {
            cout << "This ID already exists" << endl << endl;
            file.close();
            return;
        }
    }
    
    cin.ignore();
    cout << "\n\n\tEnter First Name: " ;
    cin >> p.firstname;

    cout << "\n\n\tEnter Last Name: " ;
    cin >> p.lastname;

    cout << "\n\n\tEnter Age: ";
    cin >> p.age;

    cout << "\n\n\tEnter Medical History: " ;
    cin >> p.medicalHistory;

    ofstream outFile(filename, ios::app);
    if (outFile << p.firstname << " " << p.lastname << " " << p.id << " " << p.age << " " << p.medicalHistory) {
        cout << "\n\t---------- RECORD ADDED SUCCESSFULLY ----------" << endl;
    } else {
        cout << "\n\n\tRecord not added" << endl;
    }
}

void addStaff() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           ADD STAFF                                                               *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    cout << "\n\n\tEnter Staff ID:";
    cin >> s.id;

    string filename = "staff_" + s.id + ".txt";
    fstream file(filename, ios::in | ios::out | ios::app);

    while (file >> s.firstname >> s.lastname >> s.id) {
        if (s.id == s.id) {
            cout << "\n\n\tThis ID already exists" << endl << endl;
            file.close();
            return;
        }
    }

    cin.ignore();
    cout << "\n\n\tEnter First Name: ";
    cin >> s.firstname;

    cout << "\n\n\tEnter Last Name: ";
    cin >> s.lastname;

    cout << "\n\n\tEnter Age:" << endl;
    cin >> s.age;

    cout << "\n\n\tEnter Specialty:" << endl;
    cin >> s.specialty;

    ofstream outFile(filename, ios::app);
    if (outFile << s.firstname << " " << s.lastname << " " << s.id << " " << s.age << " " << s.specialty) {
        cout << "\n\t---------- RECORD ADDED SUCCESSFULLY ----------" << endl;
    } else {
        cout << "\n\n\tRecord not added" << endl;
    }
}

void displayPatient() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           DISPLAY PATIENT                                                         *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string id;
    cout << "\n\n\tEnter the Patient ID you want to display:" << endl;
    cin >> id;

    string filename = "patient_" + id + ".txt";
    fstream file(filename);

    if (file.is_open()) {
        file >> p.firstname >> p.lastname >> p.id >> p.age >> p.medicalHistory;
        cout << "  ---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "                        HOSPITAL MANAGEMENT SYSTEM" << endl;
        cout << "                        Patient Record" << endl;
        cout << "  ---------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        cout << "\n\n\tFirst Name: " << p.firstname << endl;
        cout << "\n\n\tLast Name: " << p.lastname << endl;
        cout << "\n\n\tPatient ID: " << p.id << endl;
        cout << "\n\n\tAge: " << p.age << endl;
        cout << "\n\n\tMedical History: " << p.medicalHistory << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
    } else {
        cout << "\n\n\tFile not opening or record does not exist" << endl;
    }
}

void displayStaff() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           DISPLAY STAFF                                                           *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string id;
    cout << "\n\n\tEnter the Staff ID you want to display : " ;
    cin >> id;

    string filename = "staff_" + id + ".txt";
    fstream file(filename);

    if (file.is_open()) {
        file >> s.firstname >> s.lastname >> s.id >> s.age >> s.specialty;
        cout << "  ---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "                        HOSPITAL MANAGEMENT SYSTEM" << endl;
        cout << "                        Staff Record" << endl;
        cout << "  ---------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        cout << "\n\n\tFirst Name: " << s.firstname << endl;
        cout << "\n\n\tLast Name: " << s.lastname << endl;
        cout << "\n\n\tStaff ID: " << s.id << endl;
        cout << "\n\n\tAge: " << s.age << endl;
        cout << "\n\n\tSpecialty: " << s.specialty << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
    } else {
        cout << "\n\n\tFile not opening or record does not exist" << endl;
    }
}

void deletePatient() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           DELETE PATIENT                                                          *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
		
    string id;
    cout << "\n\n\tEnter Patient ID to delete record:";
    cin >> id;

    string filename = "patient_" + id + ".txt";

    if (remove(filename.c_str()) == 0) {
        cout << "\n\n\tRecord deleted successfully" << endl;
    } else {
        cout << "\n\n\tRecord not deleted" << endl;
    }
}

void deleteStaff() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           DELETE STAFF                                                            *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string id;
    cout << "\n\n\tEnter Staff ID to delete record:" ;
    cin >> id;

    string filename = "staff_" + id + ".txt";

    if (remove(filename.c_str()) == 0) {
        cout << "\n\n\tRecord deleted successfully" << endl;
    } else {
        cout << "\n\n\tRecord not deleted" << endl;
    }
}

void updatePatient() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           UPDATE PATIENT                                                          *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string id;
    cout << "\n\n\tEnter the Patient ID you want to update record:" << endl;
    cin >> id;

    string filename = "patient_" + id + ".txt";
    fstream file(filename, ios::out);

    file >> p.firstname >> p.lastname >> p.id >> p.age >> p.medicalHistory;
	if(id == p.id)
	{
		cout << "  ---------------------------------------------------------------------------------------------------------------" << endl;
		cout << "                        Update Data for Patient ID " << id << endl;
		cout << "  ---------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
		
		cout << "\n\n\tEnter Patient ID:" << endl;
		cin >> p.id;
		
		string newFilename = "patient_" + p.id + ".txt";
		fstream newFile(newFilename,ios::out | ios::app);
		
		if (newFile.is_open()) {
		    cin.ignore();
		     cout << "\n\n\tEnter First Name: " ;
		    cin >> p.firstname;
		
		    cout << "\n\n\tEnter Last Name: " ;
		    cin >> p.lastname;
		
		    cout << "\n\n\tEnter Age: ";
		    cin >> p.age;
		
		    cout << "\n\n\tEnter Medical History: " ;
		    cin >> p.medicalHistory;
		    if (newFile << p.firstname << " " << p.lastname << " " << p.id << " " << p.age << " " << p.medicalHistory) {
		        cout << "---------- Record Updated Successfully ----------" << endl;
		        if (remove(filename.c_str()) == 0) {
		            cout << "\n\n\tOld record deleted" << endl;
		        } else {
		            cout << "\n\n\tOld record not deleted" << endl;
		        }
		    } else {
		        cout << "\n\n\tError updating" << endl;
		    }
		} else {
		    cout << "\n\n\tError opening file" << endl;
		}
	}
}

void updateStaff() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           UPDATE STAFF                                                            *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string id;
    cout << "\n\n\tEnter the Staff ID you want to update record: " ;
    cin >> id;

    string filename = "staff_" + id + ".txt";
    fstream file(filename, ios::out);

    file >> s.firstname >> s.lastname >> s.id >> s.age >> s.specialty;

    cout << "  ---------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                        Update Data for Staff ID " << id << endl;
    cout << "  ---------------------------------------------------------------------------------------------------------------" << endl << endl << endl;

    cout << "Enter Staff ID:" << endl;
    cin >> s.id;

    string newFilename = "staff_" + s.id + ".txt";
    fstream newFile(newFilename, ios::out | ios::app);

    if (newFile.is_open()) {
        cin.ignore();
        cout << "\n\n\tEnter First Name: " ;
	    cin >> s.firstname;
	
	    cout << "\n\n\tEnter Last Name: " ;
	    cin >> s.lastname;
	
	    cout << "\n\n\tEnter Age: ";
	    cin >> s.age;
	
        cout << "\n\n\tEnter Specialty: ";
        cin >> s.specialty;

        if (newFile << s.firstname << " " << s.lastname << " " << s.id << " " << s.age << " " << s.specialty) {
            cout << "---------- Record Updated Successfully ----------" << endl;
            if (remove(filename.c_str()) == 0) {
                cout << "\n\n\tOld record deleted" << endl;
            } else {
                cout << "\n\n\tOld record not deleted" << endl;
            }
        } else {
            cout << "\n\n\tError updating" << endl;
        }
    } else {
        cout << "\n\n\tError opening file" << endl;
    }
}

void showAllPatients() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           SHOW ALL PATIENTS                                                       *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
 //   Patient p;
   
    cout << left << setw(25) << "Name" << setw(15) << "ID" << setw(10) << "Age" << setw(50) << "Medical History" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 1; i < 200; i++) {
        string filename = "patient_" + to_string(i) + ".txt";
        fstream file(filename);

        if (file.is_open()) {
            while (file >> p.firstname >> p.lastname >> p.id >> p.age >> p.medicalHistory) {
                cout << left << setw(25) << p.firstname + " " + p.lastname << setw(15) << p.id << setw(10) << p.age << setw(50) << p.medicalHistory << endl;
               file.close();
            }
             
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

void showAllStaff() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           SHOW ALL STAFF                                                          *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;

    cout << left << setw(25) << "Name" << setw(15) << "ID" << setw(10) << "Age" << setw(30) << "Specialty" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 1; i < 200; i++) {
        string filename = "staff_" + to_string(i) + ".txt";
        fstream file(filename);

        if (file.is_open()) {
            while (file >> s.firstname >> s.lastname >> s.id >> s.age >> s.specialty) {
                cout << left << setw(25) << s.firstname + " " + s.lastname << setw(15) << s.id << setw(10) << s.age << setw(30) << s.specialty << endl;
                file.close();
            }
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

void scheduleAppointment() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           SCHEDULE APPOINTMENT                                                    *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    cout << "\n\n\tEnter Patient ID:" << endl;
    cin >> a.patientID;
    cout << "\n\n\tEnter Staff ID:" << endl;
    cin >> a.staffID;
    cout << "\n\n\tEnter Appointment Date (YYYY-MM-DD):" << endl;
    cin >> a.appointmentDate;
    cout << "\n\n\tEnter Appointment Time (HH:MM):" << endl;
    cin >> a.appointmentTime;

    if (checkAvailability(a.staffID, a.appointmentDate, a.appointmentTime)) {
        cout << "Staff member is not available at this time. Please choose another time." << endl;
        return;
    }

    string filename = "appointment_" + a.patientID + ".txt";
    ofstream outFile(filename, ios::app);

    if (outFile << a.patientID << " " << a.staffID << " " << a.appointmentDate << " " << a.appointmentTime) {
        cout << "---------- APPOINTMENT SCHEDULED SUCCESSFULLY ----------" << endl;
    } else {
        cout << "\n\n\tAppointment not scheduled" << endl;
    }
}

void updateAppointment() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           UPDATE APPOINTMENT                                                      *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string patientID, staffID;
    cout << "\n\n\tEnter the Patient ID for the appointment you want to update: " ;
    cin >> patientID;
    cout << "\n\n\tEnter the Staff ID for the appointment you want to update: ";
    cin >> staffID;

    string filename = "appointment_" + patientID +  ".txt";
    fstream file(filename, ios::out | ios::app);

    file >> a.patientID >> a.staffID >> a.appointmentDate >> a.appointmentTime;

    cout << "  ---------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                        Update Appointment for Patient ID " << patientID << " and Staff ID " << staffID << endl;
    cout << "  ---------------------------------------------------------------------------------------------------------------" << endl << endl << endl;

    cout << "\n\n\tEnter Patient ID: " ;
    cin >> a.patientID;
    cout << "\n\n\tEnter Staff ID: ";
    cin >> a.staffID;
    cout << "\n\n\tEnter Appointment Date (YYYY-MM-DD): " ;
    cin >> a.appointmentDate;
    cout << "\n\n\tEnter Appointment Time (HH:MM): ";
    cin >> a.appointmentTime;

    if (checkAvailability(a.staffID, a.appointmentDate, a.appointmentTime)) {
        cout << "Staff member is not available at this time. Please choose another time." << endl;
        return;
    }

    string newFilename = "appointment_" + a.patientID +  ".txt";
    fstream newFile(newFilename, ios::out | ios::app);

    if (newFile.is_open()) {
        if (newFile << a.patientID << " " << a.staffID << " " << a.appointmentDate << " " << a.appointmentTime) {
            cout << "---------- Appointment Updated Successfully ----------" << endl;
            if (remove(filename.c_str()) == 0) {
                cout << "Old appointment deleted" << endl;
            } else {
                cout << "Old appointment not deleted" << endl;
            }
        } else {
            cout << "Error updating appointment" << endl;
        }
    } else {
        cout << "Error opening file" << endl;
    }
}

void cancelAppointment() {
	cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           CANCEL APPOINTMENT                                                      *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	
    string patientID, staffID;
    cout << "\n\n\tEnter Patient ID to cancel appointment: " ;
    cin >> patientID;
    cout << "\n\n\tEnter Staff ID to cancel appointment: ";
    cin >> staffID;

    string filename = "appointment_" + patientID + ".txt";

    if (remove(filename.c_str()) == 0) {
        cout << "\n\n\tAppointment canceled successfully" << endl;
    } else {
        cout << "\n\n\tAppointment not canceled" << endl;
    }
}

void showAllAppointments() {
    cout << "*********************************************************************************************************************" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*                                           SHOW ALL APPOINTMENTS                                                   *" << endl;
	cout << "*                                                                                                                   *" << endl;
	cout << "*********************************************************************************************************************" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "Patient ID" << setw(15) << "Staff ID" << setw(15) << "Date" << setw(15) << "Time" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 1; i < 2000; i++) {
        string filename = "appointment_" + to_string(i) + ".txt";
        fstream file(filename);

        if (file.is_open()) {
            while (file >> a.patientID >> a.staffID >> a.appointmentDate >> a.appointmentTime) {
                cout << left << setw(15) << a.patientID << setw(15) << a.staffID << setw(15) << a.appointmentDate << setw(15) << a.appointmentTime << endl;
                file.close();
            }
        }
    } 
 	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

bool checkAvailability(string id, string date, string time) {
    for (int i = 1; i < 2000; i++) {
        string filename = "appointment_" + to_string(i) + ".txt";
        fstream file(filename);

        if (file.is_open()) {
            while (file >> a.patientID >> a.staffID >> a.appointmentDate >> a.appointmentTime) {
                if (a.staffID == id && a.appointmentDate == date && a.appointmentTime == time) {
                    return true;
                }
                file.close();
            }
        }
    }
    return false;
}
