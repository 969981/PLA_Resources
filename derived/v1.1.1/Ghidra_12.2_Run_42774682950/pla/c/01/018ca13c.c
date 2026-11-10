/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ca13c; name: FUN_018ca13c
 */


void FUN_018ca13c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04379e40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379e40);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar2;
  FUN_02928980(uVar2,param_1 + 8,0,1);
  return;
}


