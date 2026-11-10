/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d155b0; name: FUN_00d155b0
 */


undefined4 FUN_00d155b0(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar2 != 0))
  {
    FUN_00100250(&LAB_00d15ee4,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  lVar3 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar3;
  uVar1 = *(byte *)(lVar3 + 0x50) - 1;
  if (uVar1 < 10) {
    return *(undefined4 *)(&DAT_03a781ac + (long)(char)uVar1 * 4);
  }
  return 1;
}


