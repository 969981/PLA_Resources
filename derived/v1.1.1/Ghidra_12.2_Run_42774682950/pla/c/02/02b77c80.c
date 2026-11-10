/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b77c80; name: FUN_02b77c80
 */


long FUN_02b77c80(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_1,param_2);
  if (lVar1 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  return lVar1;
}


