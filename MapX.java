/*

**Map**

• A Map is an interface in Java that is part of the java.util package.
• It is not a part of the Collection interface.
• It was introduced in JDK 1.2.
• Syntax:
    package java.util;

    public interface Map 
    {
        // methods
    }
• Hierarchy of Map Interface:

    => Map (main interface)
        o SortedMap (interface)
            o NavigableMap (interface)
            o TreeMap (class)
        o HashMap (class)
            o LinkedHashMap (class)
        o Hashtable (class)

**Properties of Map**

1. A Map stores data in key–value pairs.
   e.g:
    Key   Value
    101   deepak
    102   amit
    103   rahul
    104   deepak

   Each row is called an Entry.

2. In a Map, keys must be unique, but values can be repeated.

3. A Map can have only one null key, but it can have many null values.

4. A Map does not maintain any sorting or insertion order.

*/

import java.util.*;

class MapX
{
    public static void main(String Args[])
    {
        Map hm = new HashMap();

        hm.put(101, "Amit");
        hm.put(102, "Mayuresh");
        hm.put(103, "Sidd");

       System.out.println("containsKey(key) : " + hm.containsKey(103));

       System.out.println("containsValue(value) : " + hm.containsValue("Amit"));

       System.out.println("get(key) : " + hm.get(102));

       System.out.println("isEmpty() : " + hm.isEmpty());

       System.out.println("remove(key) : " + hm.remove(102));

       System.out.println("replace(key, value) : " + hm.replace(101, "Sumit"));

       System.out.println("size() : " + hm.size());

        System.out.println(hm);
    }

}

