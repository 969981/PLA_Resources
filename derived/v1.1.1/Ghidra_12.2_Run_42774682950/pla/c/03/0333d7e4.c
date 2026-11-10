/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d7e4; name: FUN_0333d7e4
 */


uint FUN_0333d7e4(float param_1,float param_2,float param_3,float param_4)

{
  return ((int)(param_1 * 255.0) & 0xffU) << 0x10 | ((int)(param_2 * 255.0) & 0xffU) << 8 |
         (int)(param_3 * 255.0) & 0xffU | (int)(param_4 * 255.0) << 0x18;
}


