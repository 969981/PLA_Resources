/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009417a8; name: FUN_009417a8
 */


void FUN_009417a8(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  if (*(int *)(lVar3 + 0x54) != 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x98);
  iVar2 = *(int *)(*(long *)(lVar3 + 0x58) + 0x10d4);
  if (iVar2 != 4) {
    if (iVar2 == 3) {
      uVar4 = FUN_0295e488(*(undefined8 *)(lVar3 + 0x370));
      iVar2 = FUN_02941224(uVar4,0);
      lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      *(undefined4 *)(lVar3 + 0x54) = 3;
      lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      *(bool *)(lVar3 + 0x228) = iVar2 == 2;
      lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      *(uint *)(lVar3 + 0x58) = (uint)(iVar2 != 2);
      return;
    }
    if (iVar2 != 1) {
      lVar3 = FUN_00923bbc();
      *(undefined4 *)(lVar3 + 0x54) = 2;
      lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      *(undefined1 *)(lVar3 + 0x228) = 0;
      return;
    }
  }
  lVar3 = FUN_00923bbc();
  *(undefined4 *)(lVar3 + 0x54) = 1;
  lVar3 = FUN_0093428c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = FUN_0093428c(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
    bVar1 = *(short *)(*(long *)(lVar3 + 0x70) + 0x74) != 0;
  }
  lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  *(bool *)(lVar3 + 0x228) = bVar1;
  return;
}


