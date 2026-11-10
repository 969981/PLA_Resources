/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4be58; name: FUN_02e4be58
 */


void FUN_02e4be58(long param_1,undefined8 param_2,int param_3,int param_4)

{
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_02e4c2d0(param_1,param_1 + 0x38,param_2);
  }
  if ((param_3 == 1) || (param_4 == 1)) {
    FUN_02e4c2d0(param_1,param_1 + 0x50,param_2);
    return;
  }
  return;
}


