/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064e894; name: FUN_0064e894
 */


void FUN_0064e894(long param_1)

{
  long lVar1;
  
  FUN_006d9d14();
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_00694824(lVar1);
    FUN_002e2ea0(PTR_LAB_04373088,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_006d9cd8(param_1);
  return;
}


