#ifndef __SORTED_ALIST_H__
#define __SORTED_ALIST_H__

#include "SortedList.h"

// use factor 2
#define RFACTOR 2

namespace ds {

template <typename ItemType> class TestDriver; // for autograding; please ignore

/** Array-based sorted list. */
template <typename ItemType> class SortedAList : public SortedList<ItemType> {
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
};

/**
 * Remove and return the i-th item from the sorted list.
 */
template <typename ItemType> ItemType SortedAList<ItemType>::remove(int i) {
  // TODO:
}

/**
 * Put "it" into the "items" array while ensuring that "items" are sorted.
 */
template <typename ItemType>
void SortedAList<ItemType>::put(const ItemType &it) {
  // TODO:
}

} // namespace ds

#endif // __SORTED_ALIST_H__