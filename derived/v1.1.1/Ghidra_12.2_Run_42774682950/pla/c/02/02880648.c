/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02880648; name: FUN_02880648
 */


void FUN_02880648(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 local_24;
  
  if (((*PTR_DAT_0437b6a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b6a8), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e4b8,PTR_DAT_0437b6b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6a8);
  }
  *(undefined8 *)PTR_DAT_0437e4b0 = *(undefined8 *)PTR_DAT_0437b6b0;
  nn::time::Finalize();
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  *(undefined8 *)PTR_DAT_043796c8 = *(undefined8 *)PTR_DAT_043796c0;
  FUN_00d9ebdc();
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379678), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c650();
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  *(undefined8 *)PTR_DAT_04379e50 = *(undefined8 *)PTR_DAT_04379e48;
  FUN_02929388();
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  *(undefined8 *)PTR_DAT_04379c38 = *(undefined8 *)PTR_DAT_04379c30;
  FUN_029122c0();
  if (((*PTR_DAT_0437b548 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b548), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04387ce0,PTR_DAT_0437b550,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b548);
  }
  lVar5 = *(long *)PTR_DAT_0437b550;
  *(long *)PTR_DAT_0437b558 = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)FUN_0120ca1c();
    lVar4 = *plVar3;
    *(long *)PTR_DAT_0437e8f8 = lVar4;
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x50;
    }
    FUN_0275c5c8(lVar5,lVar1);
    if (((*PTR_DAT_043821d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043821d8), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04387d08,PTR_DAT_043821e0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043821d8);
    }
    lVar4 = *(long *)PTR_DAT_043821e0;
    *(long *)PTR_DAT_043821e8 = lVar4;
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x50;
    }
    FUN_0275c5c8(lVar5,lVar1);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar5 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar5;
  if (lVar5 != 0) {
    FUN_01148a04();
  }
  FUN_02a47478();
  FUN_02a6ab5c();
  local_24 = 0;
  FUN_02880a14(*(undefined8 *)PTR_DAT_04387cc0,&local_24);
  FUN_02a474d4();
  *(undefined1 *)(param_1 + 0xc1) = 1;
  nn::time::Finalize();
  return;
}


