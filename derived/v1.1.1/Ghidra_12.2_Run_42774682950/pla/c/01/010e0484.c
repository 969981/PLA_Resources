/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0484; name: FUN_010e0484
 */


void FUN_010e0484(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_14;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  local_14 = 0;
  uVar2 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar2;
  uVar2 = FUN_01147f0c(uVar2,&local_14);
  local_28 = 0x54600;
  FUN_010dfd6c(uVar2,param_1 + 0x68,&local_28);
  return;
}


