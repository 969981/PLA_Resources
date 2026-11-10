/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb86a0; name: FUN_01bb86a0
 */


void FUN_01bb86a0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (uVar1 < param_2) {
    FUN_01bbf588(param_1,param_2 - uVar1);
    return;
  }
  if (param_2 < uVar1) {
    param_1[1] = *param_1 + param_2 * 4;
    return;
  }
  return;
}


