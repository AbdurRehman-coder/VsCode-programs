import 'package:flutter/material.dart';

void main() {
  runApp(poorApp());
}

class poorApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData.dark(),
      home: Scaffold(
        backgroundColor: Colors.lightGreenAccent[900],
        appBar: AppBar(
            title: Text(
              'iPhone Apple',
            ),
            backgroundColor: Colors.blue),
        body: Center(
          child: Image.asset("image/diamond.png"),
        ),
      ),
    );
  }
}
