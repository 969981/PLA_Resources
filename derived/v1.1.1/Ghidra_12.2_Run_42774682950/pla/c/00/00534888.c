/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534888; name: FUN_00534888
 */


void FUN_00534888(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 2;
                    /* try { // try from 005348a4 to 005348a7 has its CatchHandler @ 005348b0 */
    FUN_002f5c80(param_1 + 0x18);
  }
  return;
}


