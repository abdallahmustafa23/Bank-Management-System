# Bank Management System 🏦

A comprehensive C++ project designed to manage banking operations through three distinct development phases. This system handles multiple user roles including Clients, Employees, and Admins.

## 🚀 Project Overview
![System Overview](overview.jpeg)
The system is built with a focus on Object-Oriented Programming (OOP) principles, featuring inheritance (Person -> Client/Employee -> Admin) and a structured data management system using file handling.

### Key Modules:
* **Client Module:** Handling login, deposits, withdrawals, and balance inquiries.
* **Employee Module:** Managing client accounts and personal info.
* **Admin Module:** Full control over employees and system data.

---

## 📅 Development Roadmap

### ✅ Phase 1: Core Foundation (Data Modeling)
![Phase 1 Details](phase%201.jpeg)
*Focus: Creating the basic class structure and validation logic.*
- [ ] **Person Class:** Base class for all users (ID, Name, Password).
- [ ] **Client Class:** Includes balance, deposit, withdraw, and transfer functions.
- [ ] **Employee & Admin Classes:** Managing salaries and specific permissions.
- [ ] **Validation Class:** Static methods for name length (5-20 chars) and password (8-20 chars).

### ⏳ Phase 2: Data Persistence (File Management)
![Phase 2 Part 1](phase%202.0.jpeg)
![Phase 2 Part 2](phase%202.1.jpeg)
*Focus: Managing data using text files and abstract interfaces.*
- [ ] **File Storage:** Implementing `Clients.txt`, `Employee.txt`, and `Admin.txt`.
- [ ] **Parser Class:** Handling string splitting and object conversion.
- [ ] **FileManager Class:** Implementing the `DataSourceInterface` for full CRUD operations on files.
- [ ] **Advanced Logic:** Adding search and edit capabilities for clients and employees.

### 🔜 Phase 3: Application Logic & UI (Presentation)
![Phase 3 Logic](phase%203.jpeg)
*Focus: Building the user menus and application flow.*
- [ ] **Manager Classes:** Implementing `ClientManager`, `EmployeeManager`, and `AdminManager` logic.
- [ ] **Screen System:** Creating a static `Screens` class for navigation and login options.
- [ ] **App Runner:** Implementing the final `runApp()` to glue all systems together.

---

## 🛠️ Built With
* **Language:** C++
* **Design Pattern:** Layered Architecture & OOP
* **Storage:** Flat file system (.txt)

## 👥 Team
* **Team Lead:** @abdallahmustafa23
* Team Members: 
