# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā klade[^1]  
  
![C language logo](https://cdn.iconscout.com/icon/free/png-256/free-c-58-1175247.png?f=webp)

## 1.nodarbības "atziņas"
**Manas pirmās Linux komandas:**  
  1.  uname (print system information)
  1.  uname -a (print all system information)
  1.  **man** *function* (man is the interface to the system reference manuals)
  1.  whoami (print effective userid)
  1.  pwd (print name of current/working directory)
  1.  history (GNU History Library - lists all previously executed functions)

>Lai atvērtu Linux termināli -> Ctrl + Alt + T.

## 2.nodarbības "atziņas"
Lielai daļai funkciju ir opcijas/atslēgas, kas maina funckcijas darbību. Terminālī, kā arī šajās atziņās, šīs opcijas tiks apzīmētas -x veidā.
  1.  . un .. (ar punktiem apzīmē paslēptus dokumentus/mapes)
  1. ls (list directory contents):
     
     - ls -a (do not ignore entries starting with .) (uzrāda arī apslēptos dokumentus)
     - ls -r (reverse order while sorting)
     - ls -l (dereference - when showing file information for a symbolic link, show informa‐
              tion  for  the file the link references rather than for the link
              itself)
     - ls -t (sort by modification time, newest first)
  1. cd (change directory command. Lai tā strādātu - cd vēlamā atrašanās vieta vai cd /atrašanas vieta/apakšatrašanās vieta/):
     
       - cd (iet uz sākuma atrašanās vietu. To pašu var panākt ar cd ~ un cd /home/user)
       - cd . (doties uz tagadējo atrašanās vietu)
       - cd .. (doties uz iepriekšējo atrašanās vietu - doties vienu apakšzaru atpakaļ)
       - cd home vai cd home/ vai cd /home vajadzētu darīt to pašu darbību.
  1. mkdir (make directories. Example: mkdir text_1.txt, makes a file with that name in your current directory)
  1. echo (display a line of text. Works as the print function. Example: echo La La, returns La La)
       - echo text > file (If a file with that name doesn't exist, it creates a file and writes the text in the file. If it exists, it overwrites it with the new text. Example: echo 12345 > text_1.txt)
       - echo text >> file (If a file with that name doesn't exist, it creates a file and writes the text in the file. If it exists, it adds the new text in a new line. Example: echo 12345 >> text_1.txt)
       - the option -e before text allows to use modification tools (enables interpretation of backslash escapes),
         for example \n to write in a new line or \r to return cursor to the beginning (carriage return). Example: echo -e "12345\n6789" returns numbers 12345 enter 6789. Ķepiņas ir obligātas.
    
  1. cat (reads from document and returns information. Example: cat text_1.txt)
  1. touch (change file timestamps)
  1. rm (remove files or directories. Example: rm text_1.txt deletes it)
      - rm text_*.txt will remove all variants of text_blank.text files, for example: text_1.txt and text_2.txt will be deleted.
      - **To be sure that no extra files are selected, it is recommended to use ls text_*.txt first)**
  1. History data can be pushed in a txt file. For example: history > history_20230912_Class_02.txt
  1. hexdump -C (see hex information about files)
  1. nano text.txt (create text.txt and open it in text editor Nano)
  1. chmod 444 text.txt (edit permissions of the file text.txt. 444 means read, read read. 7 means write... it is decimal from binary)
  1. script.sh is a script (sh. is an executable shell file. To launch it, say ./script.sh.) The first line has to be:
     - !#/bin/sh
  1. cp (copy smth)



>Opcijas var apvienot un to secība nav svarīga. -l -a ir tas pats, kas -la, ir tas pats, kas -al...

>Katrai opcijai ir pilnā versija, kuru var izmantot priekšā rakstot divas "-" zīmes. Piemēram: -a ir tas pats, kas --all.

Informācija, lai noformētu lapu: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax.

[^1]: Lapa izveidota 05.09.23

$${\color{Red}**Beigas**}$$
