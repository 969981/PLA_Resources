/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a5000; name: FUN_005a5000
 */


void FUN_005a5000(uint *param_1,uint param_2)

{
  uint uVar1;
  
  param_1[3] = param_2;
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  FUN_005a5020(param_1,uVar1);
  return;
}


