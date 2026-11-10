/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d61b0; name: FUN_029d61b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_029d61b0(long param_1,long param_2,long param_3,ushort *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  
  bVar8 = (*(byte *)(param_3 + 0x168) & 7) != 0;
  cVar15 = *(char *)(param_3 + 0x2dc);
  cVar1 = *(char *)(param_3 + 0x2dd);
  bVar9 = cVar15 != '\x12';
  bVar10 = cVar15 != '\x02';
  bVar11 = cVar1 == '\x12';
  bVar12 = cVar1 == '\x02';
  cVar5 = *(char *)(param_3 + 0x389);
  bVar6 = bVar11 || bVar8 && bVar12;
  cVar13 = cVar1;
  if (cVar5 < '\0') {
    bVar7 = bVar6;
    if (!bVar9 || !bVar10 && bVar8) {
      if (bVar11 || bVar8 && bVar12) {
        cVar13 = '\x12';
      }
      goto LAB_029d621c;
    }
joined_r0x029d62c4:
    if (bVar7) {
      cVar13 = cVar15;
    }
    if (cVar15 == '\v') goto LAB_029d626c;
LAB_029d6228:
    if ((cVar13 == '\v') || (*(char *)(param_3 + 0x2de) == '\v')) goto LAB_029d626c;
  }
  else {
    if (bVar9 && (bVar10 || !bVar8)) {
      bVar7 = bVar11 || bVar8 && bVar12;
      goto joined_r0x029d62c4;
    }
    cVar13 = '\0';
    if (!bVar11 && (!bVar8 || !bVar12)) {
      cVar13 = cVar1;
    }
LAB_029d621c:
    if (cVar13 != '\v') goto LAB_029d6228;
LAB_029d626c:
    uVar4 = *param_4;
    uVar16 = (uint)uVar4;
    if (uVar4 < 0x93) {
      if (uVar16 - 0x4d < 3) {
        return 1;
      }
    }
    else if (uVar4 < 600) {
      if (uVar16 == 0x93) {
        return 1;
      }
      if (uVar4 == 0xb2) {
        return 1;
      }
    }
    else {
      if (uVar4 == 600) {
        return 1;
      }
      if (uVar16 == 0x2ee) {
        return 1;
      }
    }
  }
  cVar13 = cVar1;
  if (cVar5 < '\0') {
    bVar7 = bVar6;
    if (!bVar9 || !bVar10 && bVar8) {
      if (bVar11 || bVar8 && bVar12) {
        cVar13 = '\x12';
      }
      goto LAB_029d62dc;
    }
joined_r0x029d6350:
    if (bVar7) {
      cVar13 = cVar15;
    }
    if (cVar15 == '\a') goto LAB_029d631c;
LAB_029d62e8:
    if ((cVar13 == '\a') || (*(char *)(param_3 + 0x2de) == '\a')) goto LAB_029d631c;
  }
  else {
    if (bVar9 && (bVar10 || !bVar8)) {
      bVar7 = bVar11 || bVar8 && bVar12;
      goto joined_r0x029d6350;
    }
    cVar13 = '\0';
    if (!bVar11 && (!bVar8 || !bVar12)) {
      cVar13 = cVar1;
    }
LAB_029d62dc:
    if (cVar13 != '\a') goto LAB_029d62e8;
LAB_029d631c:
    if (*(int *)param_4 == 0xd4) {
      return 1;
    }
    if (*(int *)param_4 == 0x14f) {
      return 1;
    }
  }
  cVar13 = cVar1;
  if (cVar5 < '\0') {
    if (!bVar9 || !bVar10 && bVar8) {
      if (bVar11 || bVar8 && bVar12) {
        cVar13 = '\x12';
      }
      goto LAB_029d6368;
    }
joined_r0x029d6470:
    if (bVar6) {
      cVar13 = cVar15;
    }
    if (cVar15 == '\x0e') goto LAB_029d63a8;
LAB_029d6374:
    if ((cVar13 == '\x0e') || (*(char *)(param_3 + 0x2de) == '\x0e')) goto LAB_029d63a8;
  }
  else {
    if (bVar9 && (bVar10 || !bVar8)) {
      bVar6 = bVar11 || bVar8 && bVar12;
      goto joined_r0x029d6470;
    }
    cVar13 = '\0';
    if (!bVar11 && (!bVar8 || !bVar12)) {
      cVar13 = cVar1;
    }
LAB_029d6368:
    if (cVar13 != '\x0e') goto LAB_029d6374;
LAB_029d63a8:
    if (*(int *)param_4 == 0x149) {
      return 1;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x7d);
  bVar3 = *(byte *)(param_3 + 0x7d);
  cVar13 = cVar1;
  if (cVar5 < '\0') {
    if (bVar9 && (bVar10 || !bVar8)) goto joined_r0x029d6478;
    cVar15 = cVar1;
    if (!bVar11 && (!bVar8 || !bVar12)) goto joined_r0x029d641c;
    cVar15 = '\x12';
  }
  else {
    if (!bVar9 || !bVar10 && bVar8) {
      cVar13 = '\0';
      cVar15 = '\0';
      if (!bVar11 && (!bVar8 || !bVar12)) {
        cVar13 = cVar1;
        cVar15 = cVar1;
      }
      goto joined_r0x029d641c;
    }
joined_r0x029d6478:
    if (!bVar11 && (!bVar8 || !bVar12)) goto joined_r0x029d641c;
  }
  cVar13 = cVar15;
joined_r0x029d641c:
  if (((cVar15 != '\x10') && (cVar13 != '\x10')) && (*(char *)(param_3 + 0x2de) != '\x10')) {
    return 0;
  }
  if (((byte)param_4[0x12] >> 2 & 1) == 0) {
    return 0;
  }
  if (bVar2 == 0x1f) {
    return 1;
  }
  if (bVar3 == 0x1f) {
    return 1;
  }
  uVar16 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
  if (bVar2 < 6) {
    lVar14 = 0;
  }
  else if (bVar2 < 0xc) {
    lVar14 = 2;
  }
  else if (bVar2 < 0x12) {
    lVar14 = 1;
  }
  else if (bVar2 < 0x18) {
    lVar14 = 3;
  }
  else {
    lVar14 = (ulong)(bVar2 < 0x1e) << 2;
  }
  if (uVar16 < 3) {
    cVar15 = (&PTR_DAT_042775a8)[(int)uVar16][lVar14];
  }
  else {
    cVar15 = '\x02';
  }
  if (bVar3 < 6) {
    lVar14 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar14 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar14 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar14 = 3;
  }
  else {
    lVar14 = (ulong)(bVar3 < 0x1e) << 2;
  }
  if (uVar16 < 3) {
    if (cVar15 != (&PTR_DAT_042775a8)[(int)uVar16][lVar14]) {
      return 1;
    }
  }
  else if (cVar15 != '\x02') {
    return 1;
  }
  return 0;
}


