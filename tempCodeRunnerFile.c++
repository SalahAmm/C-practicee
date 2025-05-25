
        switch(op) {
            case '+':
                result = num1 + num2;
                std::cout << result;
                break;
            case '-':
                result = num1 - num2;
                std::cout << result;
                break;
            case '*':
                result = num1 * num2;
                std::cout << result;
                break;
            case '/':
                result = num1 / num2;
                std::cout << result;
                break;
            default:
                std::cout << "Enter the 4 main operator (+ - / *)";
        }