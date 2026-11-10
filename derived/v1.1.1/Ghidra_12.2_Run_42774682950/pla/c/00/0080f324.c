/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f324; name: FUN_0080f324
 */


void FUN_0080f324(long *param_1)

{
  undefined *puVar1;
  
  FUN_007f48fc();
  param_1[0x23a] = 0;
  puVar1 = PTR_DAT_04377970;
  param_1[0x23b] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x23c) = 0;
  FUN_007e60f4(param_1 + 0x23d,0x14);
  FUN_007e60f4(param_1 + 0x241,0x15);
  param_1[0x245] = 0;
  *(undefined2 *)(param_1 + 0x246) = 0;
  *(undefined1 *)((long)param_1 + 0x1232) = 0;
  *(undefined1 *)(param_1 + 0x232) = 1;
  return;
}


