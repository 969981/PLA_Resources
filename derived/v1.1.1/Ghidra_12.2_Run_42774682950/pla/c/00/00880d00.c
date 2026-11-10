/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00880d00; name: FUN_00880d00
 */


ulong FUN_00880d00(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  bVar6 = *param_3;
  if (bVar6 == 0) {
    return 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x2b68) + 0x98);
  bVar2 = param_3[1];
  iVar1 = *(int *)(lVar8 + 0x110);
  if (iVar1 == 0) {
    if (5 < bVar2) goto LAB_00880d6c;
    puVar9 = (undefined4 *)&DAT_03a7eb50;
LAB_00880d5c:
    uVar7 = puVar9[bVar2];
  }
  else {
    if (iVar1 == 1) {
      if (5 < bVar2) goto LAB_00880d6c;
      bVar3 = *(byte *)(*(long *)(lVar8 + 0x58) + 0x55);
      if (bVar3 - 1 < 3) {
        puVar9 = &DAT_03a7eb80;
      }
      else if (bVar3 == 5) {
        puVar9 = (undefined4 *)&DAT_03a7ebb0;
      }
      else if (bVar3 == 4) {
        puVar9 = (undefined4 *)&DAT_03a7eb98;
      }
      else {
        puVar9 = &DAT_03a7eb68;
      }
      goto LAB_00880d5c;
    }
    if ((iVar1 == 2) && (bVar2 < 6)) {
      puVar9 = (undefined4 *)&DAT_03a7ebc8;
      goto LAB_00880d5c;
    }
LAB_00880d6c:
    uVar7 = 5;
  }
  bVar4 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 0xf1) == (uVar7 & 0xff);
  if (bVar4) {
    *param_2 = bVar2;
    bVar6 = *param_3;
  }
  uVar5 = (ulong)bVar4;
  if (bVar6 < 2) {
    return uVar5;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x2b68) + 0x98);
  bVar2 = param_3[2];
  iVar1 = *(int *)(lVar8 + 0x110);
  if (iVar1 == 0) {
    if (5 < bVar2) goto LAB_00880dfc;
    puVar9 = (undefined4 *)&DAT_03a7eb50;
  }
  else if (iVar1 == 1) {
    if (5 < bVar2) goto LAB_00880dfc;
    bVar3 = *(byte *)(*(long *)(lVar8 + 0x58) + 0x55);
    if (bVar3 - 1 < 3) {
      puVar9 = &DAT_03a7eb80;
    }
    else if (bVar3 == 5) {
      puVar9 = (undefined4 *)&DAT_03a7ebb0;
    }
    else if (bVar3 == 4) {
      puVar9 = (undefined4 *)&DAT_03a7eb98;
    }
    else {
      puVar9 = &DAT_03a7eb68;
    }
  }
  else {
    if ((iVar1 != 2) || (5 < bVar2)) {
LAB_00880dfc:
      uVar7 = 5;
      goto LAB_00880e00;
    }
    puVar9 = (undefined4 *)&DAT_03a7ebc8;
  }
  uVar7 = puVar9[bVar2];
LAB_00880e00:
  if ((uint)*(byte *)(*(long *)(param_1 + 0x58) + 0xf1) == (uVar7 & 0xff)) {
    param_2[uVar5] = bVar2;
    bVar6 = *param_3;
    uVar5 = (ulong)(bVar4 + 1);
  }
  if (2 < bVar6) {
    uVar10 = 3;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x2b68) + 0x98);
      iVar1 = *(int *)(lVar8 + 0x110);
      bVar2 = param_3[uVar10];
      uVar11 = (ulong)bVar2;
      if (iVar1 == 2) {
        uVar7 = 5;
        if (bVar2 < 6) {
          uVar7 = *(uint *)(&DAT_03a7ebc8 + uVar11 * 4);
        }
      }
      else if (iVar1 == 1) {
        uVar7 = 5;
        if (bVar2 < 6) {
          bVar3 = *(byte *)(*(long *)(lVar8 + 0x58) + 0x55);
          if (bVar3 - 1 < 3) {
            uVar7 = (&DAT_03a7eb80)[uVar11];
          }
          else if (bVar3 == 4) {
            uVar7 = *(uint *)(&DAT_03a7eb98 + uVar11 * 4);
          }
          else if (bVar3 == 5) {
            uVar7 = *(uint *)(&DAT_03a7ebb0 + uVar11 * 4);
          }
          else {
            uVar7 = (&DAT_03a7eb68)[uVar11];
          }
        }
      }
      else {
        uVar7 = 5;
        if ((iVar1 == 0) && (uVar7 = 5, bVar2 < 6)) {
          uVar7 = *(uint *)(&DAT_03a7eb50 + uVar11 * 4);
        }
      }
      if ((uint)*(byte *)(*(long *)(param_1 + 0x58) + 0xf1) == (uVar7 & 0xff)) {
        uVar11 = uVar5 & 0xff;
        uVar5 = (ulong)((int)uVar5 + 1);
        param_2[uVar11] = bVar2;
        bVar6 = *param_3;
      }
      bVar4 = uVar10 < bVar6;
      uVar10 = uVar10 + 1;
    } while (bVar4);
  }
  return uVar5;
}


