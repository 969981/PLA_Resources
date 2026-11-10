/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112ec2c; name: FUN_0112ec2c
 */


byte FUN_0112ec2c(long param_1,uint param_2)

{
  if ((int)param_2 < 0x3d5) {
    return *(byte *)(param_1 + (ulong)param_2 * 0x58 + 0xdc) >> 1 & 1;
  }
  return 0;
}


