/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1f970; name: FUN_01e1f970
 */


void FUN_01e1f970(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0xd0) == 0) {
    *param_1 = 0;
    return;
  }
  FUN_017dca7c();
  return;
}


