/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325ba10; name: FUN_0325ba10
 */


void FUN_0325ba10(long param_1)

{
  if (((float)*(undefined8 *)(param_1 + 0x80) < (float)*(undefined8 *)(param_1 + 0x70) ||
      (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) <
      (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20)) ||
      (float)*(undefined8 *)(param_1 + 0x88) < (float)*(undefined8 *)(param_1 + 0x78)) {
    FUN_0333e0b0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}


