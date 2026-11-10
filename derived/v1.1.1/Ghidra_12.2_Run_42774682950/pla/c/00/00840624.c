/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840624; name: FUN_00840624
 */


void FUN_00840624(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if ((*(short *)(param_1 + 0x5e8) == -1) ||
     ((uint)*(byte *)(param_1 + 0x5eb) !=
      (~(-1 << (ulong)(*(byte *)(param_1 + 0x5ea) & 0x1f)) & 0xffU))) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


