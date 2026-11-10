/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809e84; name: FUN_00809e84
 */


void FUN_00809e84(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_0080f324();
  puVar1 = PTR_DAT_04377928;
  param_1[0x247] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e60f4(param_1 + 0x248,0x12);
  *(undefined2 *)(param_1 + 0x264) = 0x40;
  *(undefined1 *)(param_1 + 0x26b) = 0;
  param_1[0xfec] = 0;
  *(undefined4 *)(param_1 + 0xfed) = 0;
  memset(param_1 + 0x25c,0,0x40);
  FUN_007f3f10(*(undefined8 *)PTR_DAT_04377910,param_1);
  puVar1 = PTR_DAT_043773c0;
  lVar2 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  FUN_007ff698(*(undefined8 *)(lVar2 + 8),param_1);
  lVar2 = FUN_008551bc(*(undefined8 *)puVar1);
  FUN_00808b54(*(undefined8 *)(lVar2 + 0x10),param_1);
  return;
}


