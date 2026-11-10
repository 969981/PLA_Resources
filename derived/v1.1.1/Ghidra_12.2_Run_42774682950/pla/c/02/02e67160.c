/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e67160; name: FUN_02e67160
 */


bool FUN_02e67160(long param_1,int param_2)

{
  long lVar1;
  
  param_2 = *(int *)(param_1 + 0x14) + param_2;
  lVar1 = FUN_02e671a0(param_1,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),param_2)
  ;
  if (lVar1 != 0) {
    *(long *)(param_1 + 8) = lVar1;
    *(int *)(param_1 + 0x14) = param_2;
  }
  return lVar1 != 0;
}


