/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00558994; name: FUN_00558994
 */


undefined8 FUN_00558994(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 005589bc to 005589cb has its CatchHandler @ 005589fc */
  uVar2 = FUN_00558a1c(param_1,param_2,param_3);
                    /* try { // try from 005589d0 to 005589d7 has its CatchHandler @ 005589f8 */
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005589f4 to 005589f7 has its CatchHandler @ 005589f8 */
    abort();
  }
  return uVar2;
}


