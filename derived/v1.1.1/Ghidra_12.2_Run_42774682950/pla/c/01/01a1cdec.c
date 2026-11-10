/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1cdec; name: FUN_01a1cdec
 */


void FUN_01a1cdec(undefined4 param_1,float param_2,long param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 + 0xefb8) = param_1;
  *(float *)(param_3 + 0xefc0) = param_2;
  *(undefined4 *)(param_3 + 0xefc4) = 0;
  *(undefined4 *)(param_3 + 0xefbc) = param_4;
  *(undefined4 *)(param_3 + 0xefb4) = *(undefined4 *)(param_3 + 0x36c);
  if (param_2 <= 1.1920929e-07) {
    *(undefined4 *)(param_3 + 0x36c) = param_1;
  }
  return;
}


