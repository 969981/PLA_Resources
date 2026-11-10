/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c50f0; name: FUN_004c50f0
 */


undefined8 FUN_004c50f0(long param_1,ulong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulong *)(param_1 + 0x3a0) = param_2;
    return 1;
  }
  return 0;
}


