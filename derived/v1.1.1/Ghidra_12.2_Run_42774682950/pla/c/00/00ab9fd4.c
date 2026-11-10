/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab9fd4; name: FUN_00ab9fd4
 */


void FUN_00ab9fd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04379c28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar2;
  FUN_02913904(uVar2,param_1,param_2);
  return;
}


