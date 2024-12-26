#include<stdio.h>
#include<string.h>

int main() 
{
    // Declaration
    int EventID;
    int ParticipantsID[6];
    float fee = 2023.4;
    char CityName[50];
    int participants = 6;

    // Input Vaccination Center ID
    printf("Enter Vaccination Center ID: ");
    scanf("%d", &EventID);

    // Input Participant ID
    for (int i = 0; i < participants; i++) 
    {
        printf("Enter %d Participant ID: ", i + 1);
        scanf("%d", &ParticipantsID[i]);
    }

    // Input City Name
    printf("Enter City Name: ");
    scanf("%s", CityName);

    // Calculate Total Fee
    float total_Fee = fee * participants;

    // Display Total Fee
    printf("Total Fee: %f\n", total_Fee);

    // Display City Name
    printf("City Name: %s\n", CityName);

    //Find First Even and Odd Values In ParticipantsID
    int firsteven,firstodd;
    int eveni,oddi;
    for(int i=0 ;   i<=5    ;i++)
    {
        if(ParticipantsID[i]%2==0)
        {
            firsteven = ParticipantsID[i];
            eveni = i;
            break;
        }
        
    }
    for(int i=0 ;   i<=5    ;i++)
    {
        if(ParticipantsID[i]%2!=0)
        {
            firstodd = ParticipantsID[i];
            oddi = i;
            break;
        }
        
    }

    //SWAP First Even and odd
    int x;
    x = ParticipantsID[eveni];  
    ParticipantsID[eveni] = ParticipantsID[oddi];
    ParticipantsID[oddi] = x;

    // Input Character
    char character;
    printf("Enter Character: ");
    scanf(" %c", &character);

    // Check Character with CityName Last Character
    int length = strlen(CityName);
    if (character == CityName[length - 1]) 
    {
        printf("Matched!\n");
    } else {
        printf("Not Matched!\n");
    }

    // Print ParticipantsID Odd values in Reverse Order
    for (int i = 5; i >= 0; i--) 
    {
        if (ParticipantsID[i] % 2 != 0) 
        {
            printf("%d\n", ParticipantsID[i]);
        }
    }
    
    int temp[6];
    for(int i = 0; i<=5; i++)
    {
        temp[i] = ParticipantsID[i];
    }

    //Find First and Second Minimum
    int newmin = ParticipantsID[0];
    int lastmin = ParticipantsID[1];

    for(int i = 2; i<6; i++)
    {
        if(ParticipantsID[i]<newmin)
        {
            lastmin = newmin;
            newmin = ParticipantsID[i];
            
        }
        else if (ParticipantsID[i]<lastmin)
        {
            lastmin = ParticipantsID[i];
        }
    }

    int isprime = 1;
    for(int i = 2 ;i<=EventID/2; i++)
    {
        if(EventID%i==0)
        {
            isprime = 0;
            break;
        }

    }
    if(isprime==1)
    {
    int count = 0;
    EventID++;
    while(count<3)
    {
        int isprime = 1;
        for(int i = 2 ;i<=EventID/2; i++)
        {
            if(EventID%i==0)
            {
                isprime = 0;
                break;
            }
            else
            {
                isprime = 1;
            }
        }
        if(isprime==1)
        {
            printf("%d ",EventID);
            count++;
            {
                if(count==2)
                {
                    break;
                }
            }
        }
        EventID++;
    }
    }
    // Count Uppercase Letters in CityName
    int uppercaseCount = 0;
    for (int i = 0; i<= strlen(CityName); i++) 
    {
        if (CityName[i] >= 'A' && CityName[i] <= 'Z') 
        {
            uppercaseCount++;
        }
    }
  
    
    // Store Uppercase Letters in New Array (NEW) and print when half are Capital
    char NEW[25];
    int j = 0;
    if(uppercaseCount>=strlen(CityName)/2)
    {
    for (int i = 0; i < strlen(CityName); i++) 
    {
        if (CityName[i] >= 'A' && CityName[i] <= 'Z') 
        {
            NEW[j] = CityName[i];
            j++;}
    }
    NEW[j]='\0';
    puts(NEW);
    }

    return 0;
}
