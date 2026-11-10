/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064fd7c; name: FUN_0064fd7c
 */


void FUN_0064fd7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    param_1 = param_1 + 0x51;
  }
  else {
    param_1 = *(long *)(param_1 + 0x60);
  }
                    /* try { // try from 0064fd98 to 0064fd9b has its CatchHandler @ 0064fda4 */
  FUN_00682930(param_1);
  return;
}


