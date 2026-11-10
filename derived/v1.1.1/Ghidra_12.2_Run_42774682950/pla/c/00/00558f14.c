/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00558f14; name: FUN_00558f14
 */


long FUN_00558f14(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [264];
  
  if ((char)param_1[3] == '\0') {
    lVar2 = *param_1;
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar2 + 0x10));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00558f50 to 00558f53 has its CatchHandler @ 00558fc4 */
    lVar3 = FUN_00557d80(*param_1,param_1[1],(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14));
    if (lVar3 == 0) {
                    /* try { // try from 00558f80 to 00558f97 has its CatchHandler @ 00558fbc */
      FUN_0054f038(auStack_130,"external/com_github_google_re2/re2/dfa.cc",0x4e4);
                    /* try { // try from 00558f9c to 00558fa7 has its CatchHandler @ 00558fb4 */
      FUN_00551750(auStack_128,"StateSaver failed to restore state.");
                    /* WARNING: Subroutine does not return */
      FUN_005503fc(auStack_130);
    }
                    /* try { // try from 00558f5c to 00558f63 has its CatchHandler @ 00558fc0 */
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar2 + 0x10));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00558fb0 to 00558fb3 has its CatchHandler @ 00558fc0 */
      abort();
    }
  }
  else {
    lVar3 = param_1[4];
  }
  return lVar3;
}


