
1. Input and Initialization:
<ul>
    <li>Declare an integer array a of size 50.</li>
    <li>Read the size of the array (n) and the elements from the user.</li></ul>
2. Before Deletion:
    <ul><li>Traverse and print the array elements to show the state before deletion.</li></ul>

3. Deletion Process: 
<ul>
    <li>Use a loop starting from index 0 to n-2 to shift each element one position to the left.</li>
    <li>The first element a[0] is overwritten by a[1], a[1] by a[2], and so on.</li>
    <li>The last element is effectively removed by reducing the array size (n--).</li>
</ul>
5. After Deletion:
<ul>
    <li>Traverse the array again, now of size n, and print the remaining elements after deletion.</li></ul>

For program go to the <i>Deletion_at_begin.cpp</i> file.