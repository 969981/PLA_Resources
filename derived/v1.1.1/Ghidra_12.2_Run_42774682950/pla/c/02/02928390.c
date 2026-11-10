/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02928390; name: FUN_02928390
 */


void FUN_02928390(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04379e40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379e40);
    if (iVar1 != 0) {
      FUN_00100250(param_1,PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar2;
  FUN_029278b4(param_1,uVar2,param_2);
  return;
}


