# Control Structures in Programming

Control structures let you dictate the flow of your program: which code runs and under what conditions. This guide covers the most common structures for beginners: `if`, `else`, `else if` / `elif`, and `switch`/`case`.

---

## Table of Contents

1. [What Are Control Structures?](#what-are-control-structures)
2. [`if` Statement](#if-statement)
3. [`else` and `else if` / `elif`](#else-and-else-if--elif)
4. [`switch` / `case`](#switch--case)
5. [Comparison of `if` vs `switch`](#comparison-of-if-vs-switch)
6. [Best Practices](#best-practices)
7. [Common Errors & How to Fix Them](#common-errors--how-to-fix-them)
8. [Exercises](#exercises)

---

## What Are Control Structures?
Control structures allow your program to make decisions and repeat actions. They control which blocks of code execute based on conditions or cases.

- **Conditional** structures (`if`, `switch`) choose code paths.
- **Loop** structures (`for`, `while`) repeat code (not covered here).

---

## `if` Statement
Runs a block of code only if a condition is true.

```javascript
// JavaScript
let age = 18;
if (age >= 18) {
  console.log("You are an adult.");
}
```

```python
# Python
age = 18
if age >= 18:
    print("You are an adult.")
```

**Key points:**
- Condition inside parentheses (JavaScript) or after `if` (Python).
- Body inside braces `{}` or indented block.

---

## `else` and `else if` / `elif`
Extend `if` to run alternate blocks when the first condition is false or check additional conditions.

### JavaScript
```javascript
let score = 75;
if (score >= 90) {
  console.log("Grade A");
} else if (score >= 75) {
  console.log("Grade B");
} else {
  console.log("Grade C or lower");
}
```

### Python
```python
score = 75
if score >= 90:
    print("Grade A")
elif score >= 75:
    print("Grade B")
else:
    print("Grade C or lower")
```

**Key points:**
- `else if` (JavaScript) vs `elif` (Python).
- Only one branch executes.

---

## `switch` / `case`
Selects a block to run based on the value of an expression. Useful when checking one variable against many options.

### JavaScript
```javascript
let day = 3;
switch (day) {
  case 1:
    console.log("Monday");
    break;
  case 2:
    console.log("Tuesday");
    break;
  case 3:
    console.log("Wednesday");
    break;
  default:
    console.log("Another day");
}
```

### Python (using `match` in 3.10+)
```python
day = 3
match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case _:
        print("Another day")
```

**Key points:**
- Use `break` in JavaScript to prevent falling through.
- `default` (JS) or wildcard `_` (Python) handles unmatched cases.

---

## Comparison of `if` vs `switch`

| Aspect              | `if` / `else if`            | `switch` / `case`                      |
| ------------------- | ---------------------------- | -------------------------------------- |
| When to use         | Complex conditions (ranges)  | Single-variable equality checks       |
| Syntax              | Multiple `if` statements     | One block with many `case` labels     |
| Readability         | Can become lengthy           | Cleaner for many discrete values      |
| Fall-through        | Not applicable               | Must use `break` to avoid fall-through|

---

## Best Practices

- Use `if`/`else if` for ranges or complex conditions.
- Use `switch`/`case` when comparing one value against many constants.
- Always include a fallback (`else` or `default`).
- Keep blocks small: delegate logic to functions when code grows.
- Indent consistently for readability.

---

## Common Errors & How to Fix Them

| Error                        | Cause                                            | Fix                                                    |
| ---------------------------- | ------------------------------------------------ | ------------------------------------------------------ |
| Missing braces or colon      | Forgot `{}` in JS or `:` in Python               | Add braces `{}` or colon `:` and indent block         |
| No `break` in `switch`       | Fall-through to next case                        | Add `break` after each case block                     |
| Unreachable `else` or `case` | Conditions overlap or unreachable code branch    | Reorder or adjust conditions so each is reachable     |

---

## Exercises

1. Write an `if` statement that prints "Even" or "Odd" for a given number.
2. Create a grade converter: input a score (0–100) and output A/B/C/D/F via `if`/`elif`.
3. Use a `switch` (or `match`) to map numbers 1–4 to seasons (Spring, Summer, Autumn, Winter).
4. Experiment: omit `break` in one `case` and observe what happens.


---

You’ve now learned how to guide your program’s decisions using `if`, `else`, `elif`/`else if`, and `switch`/`case`. Keep practicing by combining these with loops and functions to build dynamic logic!

