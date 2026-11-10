/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168da1c; name: FUN_0168da1c
 */


undefined8 FUN_0168da1c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *local_28;
  
  uVar1 = FUN_016780c8(param_2,0);
  uVar3 = FUN_01673270(param_2,1);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_28);
  FUN_0111b748(local_28,uVar1,uVar3);
  if ((local_28 != (long *)0x0) && (uVar4 = FUN_02a43a5c(local_28[0xb]), (uVar4 & 1) != 0)) {
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return 0;
}


