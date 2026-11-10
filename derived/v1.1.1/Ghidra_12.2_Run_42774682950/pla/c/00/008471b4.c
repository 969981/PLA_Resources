/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008471b4; name: FUN_008471b4
 */


void FUN_008471b4(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_04377ff8 + 0x10);
  FUN_007f1ae4(param_1 + 1);
  FUN_007f1ae4(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = PTR_DAT_043779d0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *(undefined4 *)puVar2;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined1 *)((long)param_1 + 0x4a) = 0xfd;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return;
}


