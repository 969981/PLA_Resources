/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192ca0c; name: FUN_0192ca0c
 */


void FUN_0192ca0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_0437a780 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437a780);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
  }
  lVar2 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar2;
  lVar2 = FUN_0192cd08(*(long *)(lVar2 + 0x78) + 0x7c8,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar2 + 0x18);
  }
  return;
}


