/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2ebc; name: FUN_001f2ebc
 */


void FUN_001f2ebc(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x10f8) = 0;
  auVar1 = FUN_001f8fb4();
  *(undefined1 (*) [16])(param_1 + 0xff8) = auVar1;
  *(byte *)(param_1 + 0x10fc) = *(byte *)(param_1 + 0x10fc) & 0xfd;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x1040) = 0;
  *(undefined8 *)(param_1 + 0x1050) = 0;
  *(undefined4 *)(param_1 + 0x1058) = 0;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0x90;
  FUN_001f2f28(param_1,auVar1._0_8_,auVar1._8_8_);
  return;
}


