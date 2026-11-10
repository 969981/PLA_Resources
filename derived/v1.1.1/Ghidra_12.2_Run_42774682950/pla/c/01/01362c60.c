/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01362c60; name: FUN_01362c60
 */


bool FUN_01362c60(long *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = FUN_00a3e9dc(*param_1 + 0xf0,auStack_30);
    if (lVar5 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_02a9b49c();
      bVar2 = bVar2 & 1;
    }
    lVar5 = FUN_009cfbc8(*param_1 + 0xf0,auStack_28);
    if (lVar5 == 0) {
      bVar3 = 0;
    }
    else {
      if ((*PTR_DAT_0437a0d0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
        if (iVar4 != 0) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
      }
      bVar3 = FUN_028a0114(lVar5,PTR_DAT_0437a0d8);
      bVar3 = bVar3 & 1;
    }
    lVar5 = FUN_00ab4364(*param_1 + 0xf0,auStack_38);
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(lVar5 + 0x200) == 2;
    }
    bVar1 = (bVar3 & bVar2 & bVar1) != 0;
  }
  return bVar1;
}


