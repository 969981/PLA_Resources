/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294c4d8; name: FUN_0294c4d8
 */


void FUN_0294c4d8(long param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  
  uVar2 = *(uint *)(param_2 + 0x110);
  if (1 < uVar2) {
    return;
  }
  if (**(int **)(param_2 + 0x58) != 3) {
    return;
  }
  bVar3 = *(byte *)(param_3 + 0x7d);
  if (bVar3 < 6) {
    uVar7 = 0;
  }
  else if (bVar3 < 0xc) {
    uVar7 = 2;
  }
  else {
    uVar8 = 3;
    if (0x17 < bVar3) {
      uVar8 = (uint)(bVar3 < 0x1e) << 2;
    }
    uVar1 = 1;
    if (0x11 < bVar3) {
      uVar1 = uVar8;
    }
    uVar7 = (ulong)uVar1;
  }
  bVar4 = *(byte *)(param_2 + 0x130);
  uVar8 = (uint)bVar3 - (uint)(byte)(&DAT_03a7eb48)[uVar7];
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  if (uVar2 == 1) {
    puVar11 = &DAT_03a7ebe5;
LAB_0294c594:
    if (bVar4 < 5) {
      if (puVar11[uVar7] != puVar11[bVar4]) goto LAB_0294c5ac;
      goto LAB_0294c5ec;
    }
    if (puVar11[uVar7] == '\x02') goto LAB_0294c5ec;
LAB_0294c5ac:
    iVar6 = 3;
    if ((uint)uVar7 < 2) {
      iVar6 = 0;
    }
    uVar8 = iVar6 + uVar8;
    if (4 < (uVar8 & 0xff)) {
      uVar8 = 5;
    }
    puVar12 = (undefined2 *)(param_1 + ((ulong)uVar8 & 0xff) * 0x1a + 0x9c);
  }
  else {
    if (uVar2 == 0) {
      puVar11 = &DAT_03a7ebe0;
      goto LAB_0294c594;
    }
LAB_0294c5ec:
    iVar6 = 0;
    if ((uint)uVar7 != (uint)bVar4) {
      iVar6 = 3;
    }
    uVar8 = iVar6 + uVar8;
    if (4 < (uVar8 & 0xff)) {
      uVar8 = 5;
    }
    puVar12 = (undefined2 *)(param_1 + ((ulong)uVar8 & 0xff) * 0x1a);
  }
  uVar5 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_3 + 0x60) + 0x98));
  *puVar12 = uVar5;
  uVar5 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_3 + 0x60) + 0x98));
  puVar12[1] = uVar5;
  if (param_4 == (long *)0x0) goto LAB_0294c6a0;
  if ((bVar3 == 0x1f) || (bVar4 = *(byte *)(*param_4 + 0x7d), bVar4 == 0x1f)) goto LAB_0294c6f4;
  uVar2 = *(uint *)(param_2 + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
joined_r0x0294c6b4:
    if (uVar2 < 3) goto LAB_0294c6b8;
LAB_0294c674:
    cVar9 = '\x02';
    if (bVar4 < 6) goto LAB_0294c6d0;
LAB_0294c680:
    if (bVar4 < 0xc) {
      lVar10 = 2;
    }
    else if (bVar4 < 0x12) {
      lVar10 = 1;
    }
    else if (bVar4 < 0x18) {
      lVar10 = 3;
    }
    else {
      lVar10 = (ulong)(bVar4 < 0x1e) << 2;
    }
  }
  else {
    if (bVar3 < 0xc) {
      lVar10 = 2;
      goto joined_r0x0294c6b4;
    }
    if (bVar3 < 0x12) {
      lVar10 = 1;
    }
    else {
      if (0x17 < bVar3) {
        lVar10 = (ulong)(bVar3 < 0x1e) << 2;
        goto joined_r0x0294c6b4;
      }
      lVar10 = 3;
    }
    if (2 < uVar2) goto LAB_0294c674;
LAB_0294c6b8:
    cVar9 = (&PTR_DAT_04276838)[(int)uVar2][lVar10];
    if (5 < bVar4) goto LAB_0294c680;
LAB_0294c6d0:
    lVar10 = 0;
  }
  if (uVar2 < 3) {
    if (cVar9 == (&PTR_DAT_04276838)[(int)uVar2][lVar10]) goto LAB_0294c6a0;
  }
  else if (cVar9 == '\x02') {
LAB_0294c6a0:
    puVar12[4] = 0;
    *(undefined4 *)(puVar12 + 2) = 0;
    return;
  }
LAB_0294c6f4:
  uVar5 = FUN_02c6849c(*(undefined8 *)(*(long *)(*param_4 + 0x60) + 0x98));
  puVar12[3] = uVar5;
  uVar5 = FUN_02c6f924(*(undefined8 *)(*(long *)(*param_4 + 0x60) + 0x98));
  puVar12[4] = uVar5;
  puVar12[2] = (short)param_4[1];
  return;
}


