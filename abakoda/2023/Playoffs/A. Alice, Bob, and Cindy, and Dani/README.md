# A. Alice, Bob, and Cindy, and Dani
> Original Source: [ABaKoDa 2023 Long Contest - Alice, Bob, and Cindy, and Dani](https://codeforces.com/group/cRJbcAFEwS/contest/103496/problem/A)

## Description
Welcome to the 2021 Abakoda Long Contest! All our problem stories will revolve around the various misadventures of the high school students `Alice`, `Bob`, and `Cindy`, who had previously appeared in a similar long contest from last year (from the same problem author!). But the executives demand a new fourth character—the freshman `Dani`! We don't know much about him, other than the fact that he has a mysterious past... Maybe we'll learn more about him throughout the different stories?

Unfortunately, problem stories (which we'll call episodes) can usually only accommodate at most three different characters at a time. Now that there are four characters, for each episode, we'd have to pick one of the four to be excluded from that episode's hijinks. The fans certainly didn't like that!

Because of this backlash, we won't really be seeing much of `Dani`, outside of the few episodes he had already appeared in... What a shame that we'll never see the resolution of his character arc...

Oh well, nothing that can be done about that. The programming task that we have is simple. You will be given the names of three characters that appeared in some episode. Identify which among the four of `Alice`, `Bob`, `Cindy`, `Dani` is missing.## I/O
### Input
Input consists of a single line containing three space-separated names from among `Alice`, `Bob`, `Cindy`, `Dani`, in some order.
### Output
Output the name of the character that was **not** given in the input.## Constraints

| | |
|--|--|
|Time| $1.00s$ |
|Memory| 256MB |
|Constraints| `Alice Bob Cindy Dani` pick 3, random order|

## Testcases

### test 1
Input:
```
Alice Bob Cindy
```
output:

```
Dani
```

### test 2
Input:
```
Cindy Dani Alice
```
output:

```
Bob
```