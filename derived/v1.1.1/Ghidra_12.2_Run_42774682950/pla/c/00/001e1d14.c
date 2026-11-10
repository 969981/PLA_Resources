/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1d14; name: FUN_001e1d14
 */


int FUN_001e1d14(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[0xa4] != 0) {
    param_1[0xd] = param_1[0xa4];
    param_1[0xa4] = 0;
  }
  iVar1 = FUN_001fd744(param_1);
  if (iVar1 != 0) {
    FUN_001fcddc(*param_1,param_1,1);
  }
  return iVar1;
}


