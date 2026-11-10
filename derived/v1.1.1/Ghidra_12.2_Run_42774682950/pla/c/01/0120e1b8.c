/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e1b8; name: FUN_0120e1b8
 */


long FUN_0120e1b8(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  uVar1 = FUN_00d15d74();
  if (uVar1 < 2) {
    param_1 = param_1 + 4;
  }
  else if (uVar1 == 7) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = param_1 + 0xc;
  }
  return param_1;
}


