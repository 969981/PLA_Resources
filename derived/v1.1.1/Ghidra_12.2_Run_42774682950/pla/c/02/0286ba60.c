/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286ba60; name: FUN_0286ba60
 */


void FUN_0286ba60(long param_1,uint *param_2)

{
  if (*param_2 < 4) {
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x2d48) =
         *(undefined4 *)(&DAT_03889b00 + (long)(int)*param_2 * 4);
  }
  return;
}


