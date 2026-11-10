/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2634; name: FUN_007f2634
 */


void FUN_007f2634(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 1;
  return;
}


