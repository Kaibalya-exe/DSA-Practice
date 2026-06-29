# C++ STL Vector Basics

Today I learned the fundamentals of C++ vectors.

---

## What is a Vector?

A vector is a dynamic array provided by the C++ STL that can grow and shrink automatically.

Example:

```cpp
vector<int> v;
```

---

## Functions Learned

### push_back()

Adds an element to the end.

```cpp
v.push_back(10);
```

---

### pop_back()

Removes the last element.

```cpp
v.pop_back();
```

---

### size()

Returns the number of elements.

```cpp
v.size();
```

---

### front()

Returns the first element.

```cpp
v.front();
```

---

### back()

Returns the last element.

```cpp
v.back();
```

---

### capacity()

Returns the allocated capacity.

```cpp
v.capacity();
```

---

## Static vs Dynamic Allocation

### Static Allocation

```cpp
int arr[10];
```

Characteristics:
- Fixed size
- Memory allocated during compilation
- Cannot grow

---

### Dynamic Allocation

```cpp
vector<int> v;
```

Characteristics:
- Size can change during runtime
- Memory allocated dynamically
- More flexible

---

## What I Learned

Through learning vectors, I understood:

- Dynamic memory concepts
- STL containers
- Array alternatives
- Memory allocation differences
- Basic vector operations