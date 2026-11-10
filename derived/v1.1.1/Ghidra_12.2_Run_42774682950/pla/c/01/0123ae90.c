/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123ae90; name: FUN_0123ae90
 */


undefined8 FUN_0123ae90(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    if (*param_3 < uVar1) {
      FUN_0123a160(param_1,param_3);
      return 1;
    }
    FUN_0123a160(param_1,param_2);
    if (*param_2 <= *param_3) {
      return 1;
    }
    param_1 = param_2;
  }
  else {
    if (uVar1 <= *param_3) {
      return 0;
    }
    FUN_0123a160(param_2,param_3);
    if (*param_1 <= *param_2) {
      return 1;
    }
    param_3 = param_2;
  }
  FUN_0123a160(param_1,param_3);
  return 2;
}


