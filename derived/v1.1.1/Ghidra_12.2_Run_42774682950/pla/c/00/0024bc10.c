/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024bc10; name: FUN_0024bc10
 */


void FUN_0024bc10(undefined1 *param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 8) = param_2;
    *param_1 = 0x90;
  }
  return;
}


