/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084a030; name: FUN_0084a030
 */


void FUN_0084a030(long param_1,uint param_2)

{
  if (0xffffffe < param_2) {
    param_2 = 0xfffffff;
  }
  *(uint *)(param_1 + 0x60) = param_2;
  return;
}


