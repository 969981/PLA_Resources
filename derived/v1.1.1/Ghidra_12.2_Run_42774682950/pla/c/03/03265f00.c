/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265f00; name: FUN_03265f00
 */


void FUN_03265f00(long param_1,undefined1 *param_2)

{
  *param_2 = 0;
  if (*(int *)(param_1 + 0xc0) < 2) {
    return;
  }
  FUN_032673d0(*(undefined8 *)(param_1 + 0xb8),0,*(int *)(param_1 + 0xc0) + -1,param_1,param_2);
  return;
}


