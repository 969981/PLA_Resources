/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372878; name: FUN_03372878
 */


void FUN_03372878(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (*param_3 != 0) {
    uVar1 = *param_2 / *param_3;
  }
  uVar2 = 0;
  if (param_3[1] != 0) {
    uVar2 = param_2[1] / param_3[1];
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = 0;
  if (param_3[2] != 0) {
    uVar1 = param_2[2] / param_3[2];
  }
  uVar2 = 0;
  if (param_3[3] != 0) {
    uVar2 = param_2[3] / param_3[3];
  }
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}


