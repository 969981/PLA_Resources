/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00474310; name: FUN_00474310
 */


size_t FUN_00474310(byte *param_1,void *param_2,size_t param_3)

{
  if (((ulong)(*param_1 >> 2) & 0xe) + 2 == param_3) {
    memcpy(param_2,param_1 + 0x10,param_3);
    return param_3;
  }
  return 0;
}


