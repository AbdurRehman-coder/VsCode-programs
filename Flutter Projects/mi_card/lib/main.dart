import 'dart:math';

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:english_words/english_words.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Codes',
      home: Scaffold(
        backgroundColor: Colors.teal.shade500,
        body: SafeArea(
          child: Center(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                CircleAvatar(
                    radius: 40.0,
                    backgroundImage: AssetImage('images/barack-obama.jpg')),
                Text(
                  'Obama',
                  style: TextStyle(
                      fontSize: 30.8,
                      fontFamily: 'Pattaya',
                      letterSpacing: 2.5,
                      decoration: TextDecoration.underline),
                ),
                Text(
                  'Flutter Developer',
                  style: TextStyle(
                    fontSize: 25.0,
                    fontFamily: 'Limelight',
                    fontWeight: FontWeight.bold,
                    letterSpacing: 3.0,
                  ),
                ),
                SizedBox(
                  width: 200,
                  child: Divider(
                    color: Colors.white,
                  ),
                ),
                Card(
                  color: Colors.white,
                  margin: EdgeInsets.symmetric(
                    vertical: 10.0,
                    horizontal: 20.0,
                  ),
                  child: Padding(
                    padding: const EdgeInsets.all(3.0),
                    child: ListTile(
                      leading: Icon(
                        Icons.phone,
                        color: Colors.teal,
                        size: 20,
                      ),
                      title: Text(
                        '+92 3075780268',
                        style: TextStyle(
                          fontSize: 20,
                          color: Colors.black,
                        ),
                      ),
                    ),
                  ),
                ),
                Card(
                  margin: EdgeInsets.symmetric(
                    vertical: 10.0,
                    horizontal: 20.0,
                  ),
                  child: Padding(
                    padding: EdgeInsets.all(3.0),
                    child: ListTile(
                      leading: Icon(
                        Icons.email,
                        color: Colors.teal,
                        size: 20,
                      ),
                      title: Text(
                        'rehman268@gmail',
                        style: TextStyle(
                          fontSize: 20,
                          fontFamily: 'Pattaya',
                          color: Colors.black,
                        ),
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
