/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293ee00; name: FUN_0293ee00
 */


bool FUN_0293ee00(short param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  if ((*PTR_DAT_043795f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_043795f8);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    FUN_02c4fb44(auStack_20,param_1);
    iVar2 = FUN_02c4fc60(auStack_20,0x12);
    bVar1 = iVar2 == 5;
  }
  return bVar1;
}


