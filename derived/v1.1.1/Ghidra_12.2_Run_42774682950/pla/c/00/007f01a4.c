/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f01a4; name: FUN_007f01a4
 */


bool FUN_007f01a4(uint *param_1,uint *param_2)

{
  return (*param_2 >> 0xd & 0x1f) < (*param_1 >> 0xd & 0x1f);
}


