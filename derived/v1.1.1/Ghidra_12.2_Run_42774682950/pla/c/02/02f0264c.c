/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0264c; name: FUN_02f0264c
 */


void FUN_02f0264c(long param_1,uint param_2)

{
  byte bVar1;
  undefined1 auStack_28 [8];
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x70))();
  if (param_2 < 2) {
    if (*(int *)(param_1 + 0x58) != 0) {
      if ((*(byte *)(param_1 + 0x7a) & 0x38) == 0x10) {
        *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xdf | 0x18;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x90))();
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x40))();
    bVar1 = *(byte *)(param_1 + 0xb8) | 0x10;
    *(byte *)(param_1 + 0xb8) = bVar1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb8);
  }
  *(byte *)(param_1 + 0xb8) = bVar1 | 0x20;
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    FUN_02dec630(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x58),auStack_28);
    FUN_02ede6bc(DAT_0440a178,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x210),param_1,auStack_28)
    ;
  }
  return;
}


