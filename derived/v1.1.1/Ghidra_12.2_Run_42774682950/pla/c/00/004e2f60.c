/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2f60; name: FUN_004e2f60
 */


undefined8 FUN_004e2f60(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0x1e0;
  if (param_3 != 0) {
    lVar1 = 0x1d8;
  }
  FUN_0046abb0(*(undefined8 *)(param_1 + lVar1));
  *(long *)(param_1 + lVar1) = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    FUN_0046ad60(param_2);
  }
  return 1;
}


