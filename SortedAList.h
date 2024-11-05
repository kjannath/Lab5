#pragma once

#include "SortedList.h"

// use factor 2
#define RFACTOR 2

namespace ds {

  template <typename ItemType> // for auto-grading; please ignore
  class TestDriver; // for autograding; please ignore

  /** Array-based sorted list. */
  template <typename ItemType>
  class SortedAList : public SortedList<ItemType> {
    friend class TestDriver<ItemType>; // for autograding; please ignore

    private:
      /** The underlying array. */
      ItemType *items;

      /** Stores the current size of the list. */
      int count;

      /** Max number of items allowed. */
      int maxCnt;

      /** Resize the underlying array to the target capacity. */
      void resize(int capacity) {
        maxCnt = capacity;
        ItemType *a = new ItemType[maxCnt];
        for (int i = 0; i < count; i++) {
          a[i] = items[i];
        }
        delete[] items;
        items = a;
      }

      /** search for "it" in subarray items[left...right], return the
       * index of "it" in the array if found; otherwise, return -1
       */
      int binary_search (const ItemType & it, int left, int right) const {
        //base cases
        if (left>right)
          return -1;
        if (left==right) {
          if (items[left]==it)
            return left;
          else
            return -1;
        }
        //General case:
        int mid = (left+right)/2;

        if (items[mid]==it)
          return mid;
        else if (it>items[mid])
          return binary_search (it, mid+1, right);
        else
          return binary_search (it, left, mid-1);
      }

    public:
      /**
      * Construct a new SortedAList object.
      *
      * @param initSize initial size of the underlying array; default 100
      */
      explicit SortedAList(int initSize = 100) {
        count = 0;
        maxCnt = initSize;
        items = new ItemType[maxCnt];
      }

      /** Destroy the SortedAList object. */
      ~SortedAList() { delete[] items; }

      /** Return the number of elements in the sorted list. */
      int size() const override { return count; }

      /** Return the i-th item in the sorted list .*/
      ItemType get(int i) const override { return items[i]; }

      /** Return the smallest item. */
      ItemType smallest() const override { return items[0]; }

      /** Return the greatest item. */
      ItemType greatest() const override { return items[count - 1]; }

      inline ItemType remove(int i) override;
      inline void put(const ItemType &it) override;
      inline int find(const ItemType & it) const override;
    }; //end of SortedAList declaration 

  //Implementation of three member functions

  /**
   * Remove and return the i-th item from the sorted list.
   */
  template <typename ItemType>
  ItemType SortedAList<ItemType>::remove(int i) {
    // TODO:
    if (i < 0 || i >= count) {
        std::cout << "Error: Index " << i << " is out of range." << std::endl;
        return;
    }

    ItemType itemToRemove = items[i];
    
    // Shift items to the left
    for (int j = i; j < count - 1; j++) {
        items[j] = items[j + 1];
    }

    count--; // Decrease count
    return itemToRemove; // Return removed item
  }

  /**
   * Put "it" into the "items" array while ensuring that "items" are sorted.
   */
  template <typename ItemType>
  void SortedAList<ItemType>::put(const ItemType &it) {
    // TODO:
     if (count >= maxCnt) {
        resize(maxCnt * RFACTOR); // Resize
    }

    // Find the position to insert the item using binary search
    int pos = 0; 
    for (pos = 0; pos < count; pos++) {
        if (items[pos] > it) {
            break;
        }
    }

    // Shift items to the right 
    for (int j = count; j > pos; j--) {
        items[j] = items[j - 1];
    }

    items[pos] = it; // Insert the item
    count++; // Increase the count
  }

  /**
   * Find "it" in the sorted list using binary search, and return its position in the list
   * return -1 if "it" does not occur in the list
   */
  template <typename ItemType>
  int SortedAList<ItemType>::find (const ItemType & it) const
  {
    // TODO:
    return binary_search(it, 0, count - 1);
  }
} // namespace ds
