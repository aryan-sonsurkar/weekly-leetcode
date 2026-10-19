bool isValid(char* s) {
    int top = -1;
    char stack[10000];

    for (int i = 0; i < strlen(s); i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        }
        else {
            if (top == -1)
                return false;

            if ((stack[top] == '(' && s[i] == ')') ||
                (stack[top] == '[' && s[i] == ']') ||
                (stack[top] == '{' && s[i] == '}')) {
                top--;
            }
            else {
                return false;
            }
        }
    }

    return top == -1;
}