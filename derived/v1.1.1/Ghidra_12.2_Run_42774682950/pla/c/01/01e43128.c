/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e43128; name: FUN_01e43128
 */


undefined4 FUN_01e43128(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if ((*PTR_DAT_0437a648 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a648);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
  }
  lVar3 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar3;
  if (param_2 < 0x20) {
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)(lVar3 + 0x230) + 0x110) + (long)(int)param_2 * 8 + 0x28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


