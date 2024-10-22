
# Lexicographic Tree

## Description
This project is a **console application** that implements a **Binary Search Tree (BST)** to insert words in lexicographical order. The program simulates a dictionary where words are picked randomly, inserted into a tree, and can be displayed in either a table or tree format.

### Features
- Insert random words into a lexicographical binary search tree.
- Display the words and their occurrences in a table format.
- Visualize the tree structure as ASCII in the console.
- Track the total number of unique and repeated words.

## Getting Started

### Prerequisites
To compile and run the application, you will need:
- A C compiler (e.g., `gcc`)
- `make` (if using the provided `Makefile`)

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/zeineuub/Lexicographic-Tree.git
   ```

2. Navigate to the project directory:
   ```bash
   cd Lexicographic-Tree
   ```

3. Compile the project using the Makefile:
   ```bash
   make
   ```

4. Run the application:
   ```bash
   ./lexicographic-tree
   ```

### Usage

- When you run the application, it will prompt you to choose between two modes:
  - **Simulation Mode**: Displays words as they are randomly picked and inserted into the tree.
  - **Dictionary Mode**: Displays the entire tree after all words are inserted.
  
- You will then be prompted to specify how many words to insert into the tree.
  
- Once all words are inserted, the dictionary can be displayed both as a table and in tree format.

### Example

```bash
> Insert word: apple
> Insert word: banana
> Insert word: cherry

Tree Structure:
       apple
         \
       banana
          \
        cherry

Table:
   ¤-------------------¤---------------------¤
   |        Word        |  Number of Occurrences |
   ¤-------------------¤---------------------¤
   | apple              |            1       |
   | banana             |            1       |
   | cherry             |            1       |
   ¤-------------------¤---------------------¤
```

## Project Structure

```
.
├── src/                # Source code files
│   ├── main.c          # Main file to run the application
│   ├── dico.c          # Dictionary management functions
│   ├── arbre.c         # Binary search tree implementation
│   ├── dico.h          # Header file for dictionary functions
│   ├── arbre.h         # Header file for binary search tree functions
├── Makefile            # Makefile to build the project
└── README.md           # Project documentation
```

## Future Improvements
- Add support for deleting words from the tree.
- Implement word search functionality within the tree.
- Enhance the visual tree representation for more complex trees.

