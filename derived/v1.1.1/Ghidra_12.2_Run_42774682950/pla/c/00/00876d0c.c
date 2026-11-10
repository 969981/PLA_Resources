/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876d0c; name: FUN_00876d0c
 */


void FUN_00876d0c(undefined2 *param_1)

{
  *param_1 = 0xff01;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined4 *)(param_1 + 4) = 0x7000000;
  param_1[2] = param_1[2] & 0xfff0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x7000000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}


