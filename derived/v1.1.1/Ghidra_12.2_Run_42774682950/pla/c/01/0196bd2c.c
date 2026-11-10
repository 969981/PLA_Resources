/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196bd2c; name: FUN_0196bd2c
 */


long FUN_0196bd2c(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_40;
  long lStack_38;
  long local_30;
  long *local_28;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar4;
  plVar5 = *(long **)(*(long *)(param_1 + 0x70) + 0x218);
  plVar1 = (long *)PTR_DAT_04379c88;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 0xb;
  }
  local_40 = *plVar1;
  plVar1 = (long *)PTR_PTR_04379d00;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 0xc;
  }
  lStack_38 = *plVar1;
  if (plVar5 == (long *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = plVar5[0xd];
  }
  local_28 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_28 = plVar5;
    lVar3 = FUN_01e65b28(uVar4,&local_40);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_28 = plVar5;
    lVar3 = FUN_01e65b28(uVar4,&local_40);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return lVar3 + 8;
}


