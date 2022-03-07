string pigLatin(string word) {
    string vowels = "ueoai";
    if (vowels.find(word[0]) != string::npos) return word + "way";
    char consonant = word[0];
    word.erase(0, 1);
    return word + consonant + "ay";
}