/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013974d0; name: FUN_013974d0
 */


bool FUN_013974d0(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  char local_48 [8];
  long local_40;
  char local_38 [8];
  long local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  if (local_28 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    FUN_0275d180(local_38);
    if (local_38[0] == '\0') {
      bVar5 = false;
      plVar1 = local_28;
    }
    else {
      FUN_011222b8(local_48,local_28);
      if (local_48[0] == '\0') {
        bVar5 = false;
      }
      else {
        uVar4 = (local_30 - local_40) * 1000000000;
        uVar3 = ((long)uVar4 >> 0x20) * 0x26d694b3 + ((uVar4 & 0xfffffe00) * 0x26d694b3 >> 0x20);
        bVar5 = ((long)(((long)uVar4 >> 0x20) * 0x112e0be8 + ((long)uVar3 >> 0x20) +
                       ((uVar4 & 0xfffffe00) * 0x112e0be8 + (uVar3 & 0xffffffff) >> 0x20)) >> 0x1a)
                - ((long)uVar4 >> 0x3f) < 0x5460;
      }
      if (local_38[0] != '\0') {
        local_38[0] = '\0';
      }
      local_48[0] = '\0';
      plVar1 = local_28;
    }
    if ((plVar1 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar1[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  return bVar5;
}


