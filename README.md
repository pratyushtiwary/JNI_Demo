# Using JNI(Java Native Interface)

## Scripts

- `npm run test` :- Runs test to check if getFactorial method is returning correct value or not,
- `npm build` :- Build the java and c++ code,
- `npm start` :- Run the java code

## Requirements

- Have gcc and g++ installed on the system,
- Have jdk and jre installed on the system,
- Have nodejs and npm installed on the system,
- Make sure `JAVA_HOME` is set correctly in your system

## Troubleshoot

### Using `yarn` throws error

Please don't use yarn, as `:` script commands are not supported naming convention in yarn, instead use `npm`

### Getting `Test has been compiled by a more recent version of the Java Runtime (class file version 53.0), this version of the Java Runtime only recognizes class file versions up to 52.0` error

Open `package.json` and goto line number 5, look for `target` and `source` option and change them, use `java -version` to get your target version, make sure `target` is same as `source`.

For any other errors, mail me at [pratyushtiwary33@gmail.com](mailto:pratyushtiwary33@gmail.com)

## Reference

[https://www3.ntu.edu.sg/home/ehchua/programming/java/javanativeinterface.html](https://www3.ntu.edu.sg/home/ehchua/programming/java/javanativeinterface.html)
