/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143db8; name: thunk_FUN_01143d18
 */


void thunk_FUN_01143d18(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uStack_14 = 0;
  uVar2 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar2;
  uVar2 = FUN_01147f0c(uVar2,&uStack_14);
  auStack_18[0] = 1;
  FUN_0111a63c(uVar2,&DAT_03a7919c,auStack_18);
  return;
}


