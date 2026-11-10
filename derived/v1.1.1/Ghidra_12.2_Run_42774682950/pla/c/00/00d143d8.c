/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d143d8; name: FUN_00d143d8
 */


void FUN_00d143d8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(DAT_043ab4f8 + 8);
  FUN_00d1446c(uVar3);
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379600;
  *(undefined8 *)PTR_DAT_04379608 = uVar2;
  FUN_02c50c00(uVar2,uVar3);
  return;
}


