/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00103730; name: FUN_00103730
 */


void FUN_00103730(void)

{
  void *__ptr;
  void *pvVar1;
  void *pvStack_18;
  
  if (DAT_0438e0e8 != (void *)0x0) {
                    /* try { // try from 00103744 to 0010374f has its CatchHandler @ 001037a8 */
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0411a020);
    __ptr = DAT_0438e0e8;
    if (DAT_0438e0e8 == (void *)0x0) {
                    /* try { // try from 0010378c to 00103797 has its CatchHandler @ 001037a8 */
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0411a020);
    }
    else {
      DAT_0438e0e8 = (void *)0x0;
                    /* try { // try from 0010375c to 00103767 has its CatchHandler @ 001037a4 */
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0411a020);
      do {
                    /* try { // try from 0010376c to 00103773 has its CatchHandler @ 001037b0 */
        pthread_join(*(pthread_t *)((long)__ptr + 0x18),&pvStack_18);
        pvVar1 = *(void **)((long)__ptr + 0x28);
                    /* try { // try from 00103778 to 0010377f has its CatchHandler @ 001037ac */
        free(__ptr);
        __ptr = pvVar1;
      } while (pvVar1 != (void *)0x0);
    }
  }
  return;
}


