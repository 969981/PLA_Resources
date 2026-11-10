/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f7d4; name: FUN_0336f7d4
 */


void FUN_0336f7d4(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = uVar1 - uVar2;
  param_1[1] = (param_2[1] - (ulong)(uVar1 < uVar2)) - param_3[1];
  uVar1 = param_2[2];
  uVar2 = param_3[2];
  param_1[2] = uVar1 - uVar2;
  param_1[3] = (param_2[3] - (ulong)(uVar1 < uVar2)) - param_3[3];
  uVar1 = param_2[4];
  uVar2 = param_3[4];
  param_1[4] = uVar1 - uVar2;
  param_1[5] = (param_2[5] - (ulong)(uVar1 < uVar2)) - param_3[5];
  return;
}


