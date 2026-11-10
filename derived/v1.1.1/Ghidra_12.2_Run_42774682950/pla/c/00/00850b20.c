/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850b20; name: FUN_00850b20
 */


void FUN_00850b20(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [32];
  
  FUN_00850720(param_1 + 0x48);
  FUN_00850720(param_1 + 0x60);
  if (*(byte *)(param_1 + 0x28) < 0x18) {
    lVar1 = FUN_008551b4(*(undefined8 *)PTR_DAT_043773c0);
    lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
    *(undefined8 *)(lVar1 + 0x6450) = 0;
    *(undefined8 *)(lVar1 + 0x6458) = 0;
    *(undefined8 *)(lVar1 + 0x6460) = 0;
    *(undefined8 *)(lVar1 + 0x6468) = 0;
    *(undefined8 *)(lVar1 + 0x6470) = 0;
    *(undefined4 *)(lVar1 + 0x6478) = 0;
    *(undefined1 *)(lVar1 + 0x647c) = 0;
  }
  FUN_007f0ce0(auStack_30);
  FUN_007f0d34(auStack_30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0xfd;
  FUN_007f0f88(param_1 + 8,auStack_30);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


