/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e07498; name: FUN_02e07498
 */


uint FUN_02e07498(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  if (uVar1 <= param_2) {
    param_2 = uVar1;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (param_2 + param_1[2]) / uVar2;
  }
  param_1[2] = (param_2 + param_1[2]) - uVar3 * uVar2;
  param_1[3] = uVar1 - param_2;
  return param_2;
}


