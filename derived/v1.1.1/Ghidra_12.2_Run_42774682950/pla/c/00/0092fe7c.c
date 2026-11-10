/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092fe7c; name: FUN_0092fe7c
 */


undefined4 FUN_0092fe7c(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  char cVar10;
  long lVar11;
  
  lVar5 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  lVar11 = *(long *)(lVar5 + 0x70);
  lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0x98);
  bVar2 = *(byte *)(lVar11 + 0x7d);
  uVar3 = *(uint *)(lVar5 + 0x110);
  if (bVar2 < 6) {
    lVar4 = 0;
  }
  else if (bVar2 < 0xc) {
    lVar4 = 2;
  }
  else if (bVar2 < 0x12) {
    lVar4 = 1;
  }
  else {
    lVar4 = 3;
    if (0x17 < bVar2) {
      lVar4 = (ulong)(bVar2 < 0x1e) << 2;
    }
  }
  if ((uVar3 < 3) && ((&PTR_DAT_041b8848)[(int)uVar3][lVar4] == '\x01')) {
    puVar8 = *(uint **)(lVar5 + 0x58);
    if ((*(byte *)((long)puVar8 + 0x1041) & 0x1c) != 0) {
      return 0;
    }
    if (*puVar8 < 2) {
      uVar6 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x98));
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      uVar6 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x98));
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
  }
  if (param_2 < 6) {
    lVar5 = 0;
  }
  else if (param_2 < 0xc) {
    lVar5 = 2;
  }
  else if (param_2 < 0x12) {
    lVar5 = 1;
  }
  else if (param_2 < 0x18) {
    lVar5 = 3;
  }
  else {
    lVar5 = (ulong)(param_2 < 0x1e) << 2;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x98);
  iVar1 = *(int *)(lVar11 + 0x110);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      puVar9 = &DAT_03a7ebe5;
      goto joined_r0x0092ffc4;
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  puVar9 = &DAT_03a7ebe0;
joined_r0x0092ffc4:
  if (*(byte *)(lVar11 + 0x130) < 5) {
    cVar10 = puVar9[*(byte *)(lVar11 + 0x130)];
  }
  else {
    cVar10 = '\x02';
  }
  if (cVar10 == puVar9[lVar5]) {
    return 0;
  }
  uVar7 = 1;
  if (**(int **)(lVar11 + 0x58) != 0) {
    uVar7 = 2;
  }
  return uVar7;
}


