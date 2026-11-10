/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00559aa0; name: FUN_00559aa0
 */


uint FUN_00559aa0(long param_1,long *param_2,undefined8 *param_3,byte param_4,byte param_5,
                 byte param_6,undefined1 *param_7,long *param_8,undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  pthread_rwlock_t **pppStack_80;
  char local_78;
  long local_70;
  undefined8 uStack_68;
  pthread_rwlock_t *local_60;
  char local_58;
  
  *param_8 = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_60 = (pthread_rwlock_t *)(param_1 + 0x68);
    *param_7 = 0;
    local_58 = '\0';
    iVar3 = pthread_rwlock_rdlock(local_60);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lStack_a8 = param_2[1];
    local_b0 = *param_2;
    pppStack_80 = &local_60;
    uStack_98 = param_3[1];
    local_a0 = *param_3;
    local_88 = 0;
    local_78 = '\0';
    local_90._0_2_ = (ushort)(param_4 & 1);
    local_90 = CONCAT13(param_6,CONCAT12(param_5,(ushort)local_90)) & 0x101ffff;
    local_70 = 0;
    uStack_68 = param_9;
                    /* try { // try from 00559b4c to 00559b57 has its CatchHandler @ 00559c6c */
    FUN_005597e4(param_1,&local_b0);
    if (local_88 == 1) {
      uVar4 = 0;
    }
    else if (local_88 == 2) {
      uVar4 = 1;
      lVar2 = *param_2 + param_2[1];
      if (((param_5 ^ param_6) & 1) == 0) {
        lVar2 = *param_2;
      }
      *param_8 = lVar2;
    }
    else {
      uVar1 = (ulong)(byte)(local_90._2_1_ << 1 | local_90._1_1_ << 2 | local_90._3_1_);
                    /* try { // try from 00559c04 to 00559c0b has its CatchHandler @ 00559c54 */
      uVar4 = (*(code *)(&PTR_LAB_041869d0)[uVar1 * 2])
                        (param_1 + (*(long *)(&DAT_041869d8 + uVar1 * 0x10) >> 1),&local_b0);
      if (local_78 == '\0') {
        *param_8 = local_70;
      }
      else {
        uVar4 = 0;
        *param_7 = 1;
      }
    }
    if (local_58 == '\0') {
      iVar3 = pthread_rwlock_unlock(local_60);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00559c50 to 00559c53 has its CatchHandler @ 00559c68 */
        abort();
      }
    }
    else {
                    /* try { // try from 00559b94 to 00559bb3 has its CatchHandler @ 00559c68 */
      iVar3 = pthread_rwlock_unlock(local_60);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  else {
    uVar4 = 0;
    *param_7 = 1;
  }
  return uVar4 & 1;
}


