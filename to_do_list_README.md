Project Title: Task Saver in File (C Program)

Description:  
  This C program allows you to save your daily tasks into a text file.  
  You can enter a specific day and then list multiple tasks for that day.  
  When you type `exit`, the program stops taking input and saves all tasks in the chosen file.

───────────────────────────────
🧠 Features:
───────────────────────────────
  - Stores tasks along with the day you plan to do them.  
  - Appends new tasks to an existing file without deleting old ones.  
  - Accepts unlimited task entries until you type `exit`.  

───────────────────────────────
⚙️ How to Use:
───────────────────────────────
1. Open the code in any C compiler (Code::Blocks, Dev C++, or an online compiler).  
2. Replace `[enter the file name]` in this line:  
   file = fopen("[enter the file name]", "a");
   with your desired filename, for example:  
   file = fopen("tasks.txt", "a");
3. Run the program.  
4. Enter the day when prompted.  
5. Enter your tasks one by one.  
6. Type `exit` when you’re done adding tasks.  
7. Check the file you specified — it will now contain all your saved tasks.  
