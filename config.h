// Define the Month struct
typedef struct {
  const char cz[10];
  const char en[10];
  const char czD[10];
} Month;

// Define the array of months
Month m[] = {
    {"leden", "january", "leden"},        {"unor", "february", "únor"},
    {"brezen", "march", "březen"},        {"duben", "april", "duben"},
    {"kveten", "may", "květen"},          {"cerven", "june", "červen"},
    {"cervenec", "july", "červenec"},     {"srpen", "august", "srpen"},
    {"zari", "september", "září"},        {"rijen", "october", "říjen"},
    {"listopad", "november", "listopad"}, {"prosinec", "december", "prosinec"}};
