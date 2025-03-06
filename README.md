---
layout:
  title:
    visible: true
  description:
    visible: false
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# Home Page

## Introduction

Welcome, this gitbook is my personal archive of writeups / contest record / answers which I had participated / taken / practiced from various contests.

## Overview

Most of the solution will be given by my personal explanation, if possible, most of the answers are validated to pass all test cases, unless specifically mentioned.

Note that most of the solutions are written in Python. If you guys want the other language, you may just call GPT / coding AI etc to translate it, but I **highly recommend you try it yourself instead**.

This gitbook aims to serve as a study resource for students / amateurs / passerby who is interested on competitive programming (CP) preparing and familiarize the actual challenge.

If you are really good at competitive programming, feel free to point out any optimization / hints / criticize my solutions, and I will be grateful to consider the insightful comments.

## Structure

The table of content consists of following:

* Contest Category
  * Year
    * Rounds
      * Questions

## Usage

1. Browse the questions from table of content, which is at the left sidebar.
2. Use search function to search for questions.
3. Attempt the questions independently before checking solutions (if provided) to maximize learning.
4. Or even better, go to [source page](https://github.com/eaglePB2/writeups) for details.

## Contributions

If you found that your solution is working, and passed all test cases, while the pages still haven't provided the solution, you can contribute by those few ways:

1. Fork the repository.
2. Create a new branch for the contributions.
3. Submit a pull request with explanation how the code works.













Most of the solution is written in Python, since it is fastest to implement while being more and more popular in ML / DL phases.

As be cautious: most of the solution breaks the production rule to gain maximum performance, or we can say, the worst possible method while suffice the time and space constraints. (Meanwhile I would try my best to write writeups while following the production rule, unless the contraints forces to break the rules.)

Example: bird sightseeing given only 5 types of birds, I will use arr = \[0,0,0,0,0] and count frequency instead of creating an enumerator to capture all unique values and frequency, as the before is straightforward and faster to implement.
