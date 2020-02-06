# Abstract

<p> This is an API of the data structure: "DataFrame", whose job is to hold values of the four SoR type </p>

<p> This data structure should be able to store larget amounts of data in memory efficiently.</p>

# DataFrame

The data structure can take in indefinite number of columns. 

The data structure can print itself.

New Columns can be added to the structure.

User can pull Columns or elements from the structure.

# Column

Columns are data structures that hold one of the four types of items: Int, Float, Bool, and String.

# Potential uses

* User can initialize the DataFrame either with a set of columns or empty.

* User can remove or edit a single element from any column by calling get(nn) on the DataFrame, which returns the pointer pointing to the column; then call set() or remove() on the pointer.

* User can add an entire column of any type into the dataframe

* User can print the entire dataframe by calling print() on the DataFrame.

* User can use ncol() and nrow() to check the size of columns and rows.

* User can get a single element by using get(COLUMN, ROW) or get(ROW_NAME, COLUMN_NAME)