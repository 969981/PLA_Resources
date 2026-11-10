/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850958; name: FUN_00850958
 */


void FUN_00850958(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_043773c0;
  if (param_2 < 0x18) {
    lVar3 = FUN_008551b4(*(undefined8 *)PTR_DAT_043773c0);
    lVar3 = lVar3 + (ulong)param_2 * 0x30;
    *(undefined8 *)(lVar3 + 0x6450) = 0;
    *(undefined8 *)(lVar3 + 0x6458) = 0;
    *(undefined8 *)(lVar3 + 0x6460) = 0;
    *(undefined8 *)(lVar3 + 0x6468) = 0;
    *(undefined8 *)(lVar3 + 0x6470) = 0;
    *(undefined4 *)(lVar3 + 0x6478) = 0;
    *(undefined1 *)(lVar3 + 0x647c) = 0;
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if (bVar1 < 0x18) {
    lVar3 = FUN_008551b4(*(undefined8 *)puVar2);
    lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
    *(undefined8 *)(lVar3 + 0x6450) = 0;
    *(undefined8 *)(lVar3 + 0x6458) = 0;
    *(undefined8 *)(lVar3 + 0x6460) = 0;
    *(undefined8 *)(lVar3 + 0x6468) = 0;
    *(undefined8 *)(lVar3 + 0x6470) = 0;
    *(undefined4 *)(lVar3 + 0x6478) = 0;
    *(undefined1 *)(lVar3 + 0x647c) = 0;
    *(byte *)(param_1 + 0x28) = param_2;
    return;
  }
  *(byte *)(param_1 + 0x28) = param_2;
  return;
}


