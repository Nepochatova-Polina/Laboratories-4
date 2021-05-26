#ifndef PATIENT_H
#define PATIENT_H




#include "iostream"
#include <utility>
#include "QString"
#include "set"

using namespace std;
/**
 * @class  keep private information about patient.
 */
class Patient {
public:
    QString name = "anonumys";
    QString sex = "female";
    int age = 21;
    int height = 165;
    int weight = 70;
    bool fullSurvey = false;
/**
 * @class  simple class for pattern "Builder"
 * @brief Class contains small constructors for each parameter and main constructor which return element of class Patient
 */
    class Builder {
    private:
        Patient *newPatient;
    public:
        Builder() {
            newPatient = new Patient();
        }

        Builder withName(QString patientName) {
            newPatient->name = move(patientName);
            return *this;
        }

        Builder withSex(QString patientSex) {
            if(patientSex == "male" || patientSex == "female" ) {
                newPatient->sex = move(patientSex);
            }else{
                throw invalid_argument( "Wrong information about Patient's sex" );
            }
            return *this;
        }

        Builder withAge(int patientAge) {
            if(patientAge > 0 ) {
                newPatient->age = patientAge;
            }else{
                throw invalid_argument( "Wrong information about Patient's age" );
            }
            return *this;
        }

        Builder withHeight(int patientHeight) {
            if(patientHeight > 0 ) {
                newPatient->height = patientHeight;
            }else{
                throw invalid_argument( "Wrong information about Patient's height" );
            }
            return *this;
        }

        Builder withWeight(int patientWeight) {
            if(patientWeight > 0 ) {
                newPatient->weight = patientWeight;
            }else{
                throw invalid_argument( "Wrong information about Patient's weight" );
            }
            return *this;
        }

        Builder Survey(bool survey) {
            newPatient->fullSurvey = survey;
            return *this;
        }

        /**
         * @brief main constructor
         * @return element of class Patient
         *
         */
        Patient build() {
            return *newPatient;
        }

    };
        QString ShowInfo() const;
};


#endif // PATIENT_H
