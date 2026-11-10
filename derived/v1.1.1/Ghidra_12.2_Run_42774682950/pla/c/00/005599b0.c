/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005599b0; name: FUN_005599b0
 */


undefined8 FUN_005599b0(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (*param_3 != 0) {
    return 1;
  }
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 2));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_3 == 0) {
    puVar3 = (undefined4 *)param_1[9];
    *puVar3 = 0;
    puVar3[0xc] = puVar3[10];
    lVar2 = 0xc;
    if (*(char *)(param_2 + 0x20) != '\0') {
      lVar2 = 8;
    }
                    /* try { // try from 00559a20 to 00559a3f has its CatchHandler @ 00559a7c */
    FUN_005582f8(param_1,puVar3,*(undefined4 *)(*param_1 + lVar2),param_4);
    lVar2 = FUN_005578ac(param_1,param_1[9],0,param_4);
    if (lVar2 == 0) {
      uVar4 = 0;
      goto LAB_00559a4c;
    }
    *param_3 = lVar2;
  }
  uVar4 = 1;
LAB_00559a4c:
                    /* try { // try from 00559a4c to 00559a53 has its CatchHandler @ 00559a9c */
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 2));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00559a78 to 00559a7b has its CatchHandler @ 00559a9c */
    abort();
  }
  return uVar4;
}


