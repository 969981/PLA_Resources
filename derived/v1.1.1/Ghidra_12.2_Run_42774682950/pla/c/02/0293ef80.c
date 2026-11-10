/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293ef80; name: FUN_0293ef80
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0293ef80(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  
  if (param_2 == '\x03') {
    bVar10 = (*(byte *)(param_1 + 0x168) & 7) != 0;
    cVar14 = *(char *)(param_1 + 0x2dc);
    cVar3 = *(char *)(param_1 + 0x2dd);
    bVar5 = cVar3 != '\x12';
    bVar6 = cVar3 == '\x02';
    cVar12 = cVar3;
    if (*(char *)(param_1 + 0x389) < '\0') {
      if (cVar14 != '\x12' && (cVar14 != '\x02' || !bVar10)) {
        if (!bVar5 || bVar10 && bVar6) goto LAB_0293f0d0;
      }
      else {
        cVar14 = cVar3;
        if (!bVar5 || bVar10 && bVar6) {
          cVar14 = '\x12';
LAB_0293f0d0:
          cVar12 = cVar14;
        }
      }
    }
    else if (cVar14 != '\x12' && (cVar14 != '\x02' || !bVar10)) {
      if (!bVar5 || bVar10 && bVar6) goto LAB_0293f0d0;
    }
    else {
      cVar14 = '\0';
      cVar12 = '\0';
      if (bVar5 && (!bVar10 || !bVar6)) {
        cVar14 = cVar3;
        cVar12 = cVar3;
      }
    }
    if (cVar14 == '\x0e') {
      return 0;
    }
    if (cVar12 == '\x0e') {
      return 0;
    }
    if (*(char *)(param_1 + 0x2de) == '\x0e') {
      return 0;
    }
    goto LAB_0293f1c4;
  }
  if (param_2 != '\x04') {
    return 0;
  }
  bVar5 = (*(byte *)(param_1 + 0x168) & 7) != 0;
  cVar14 = *(char *)(param_1 + 0x2dc);
  cVar3 = *(char *)(param_1 + 0x2dd);
  bVar6 = cVar14 != '\x12';
  bVar7 = cVar14 != '\x02';
  bVar8 = cVar3 == '\x12';
  bVar9 = cVar3 == '\x02';
  cVar12 = *(char *)(param_1 + 0x389);
  bVar10 = bVar8 || bVar5 && bVar9;
  cVar15 = cVar3;
  if (cVar12 < '\0') {
    bVar4 = bVar10;
    if (bVar6 && (bVar7 || !bVar5)) goto joined_r0x0293f10c;
    cVar13 = cVar3;
    if (bVar8 || bVar5 && bVar9) {
      cVar15 = '\x12';
      cVar13 = '\x12';
    }
  }
  else if (bVar6 && (bVar7 || !bVar5)) {
    bVar4 = bVar8 || bVar5 && bVar9;
joined_r0x0293f10c:
    cVar13 = cVar14;
    if (bVar4) {
      cVar15 = cVar14;
    }
  }
  else {
    cVar15 = '\0';
    cVar13 = '\0';
    if (!bVar8 && (!bVar5 || !bVar9)) {
      cVar15 = cVar3;
      cVar13 = cVar3;
    }
  }
  if (cVar13 == '\x05') {
    return 0;
  }
  if (cVar15 == '\x05') {
    return 0;
  }
  cVar15 = *(char *)(param_1 + 0x2de);
  if (cVar15 == '\x05') {
    return 0;
  }
  cVar13 = cVar3;
  if (cVar12 < '\0') {
    if (bVar6 && (bVar7 || !bVar5)) goto joined_r0x0293f180;
    cVar16 = cVar3;
    if (bVar8 || bVar5 && bVar9) {
      cVar13 = '\x12';
      cVar16 = '\x12';
    }
  }
  else if (bVar6 && (bVar7 || !bVar5)) {
    bVar10 = bVar8 || bVar5 && bVar9;
joined_r0x0293f180:
    cVar16 = cVar14;
    if (bVar10) {
      cVar13 = cVar14;
    }
  }
  else {
    cVar13 = '\0';
    cVar16 = '\0';
    if (!bVar8 && (!bVar5 || !bVar9)) {
      cVar13 = cVar3;
      cVar16 = cVar3;
    }
  }
  if (cVar16 == '\b') {
    return 0;
  }
  if (cVar13 == '\b') {
    return 0;
  }
  if (cVar15 == '\b') {
    return 0;
  }
  cVar13 = cVar3;
  if (cVar12 < '\0') {
    if (bVar6 && (bVar7 || !bVar5)) goto joined_r0x0293f1e8;
    cVar14 = cVar3;
    if (!bVar8 && (!bVar5 || !bVar9)) goto LAB_0293f1a8;
    cVar14 = '\x12';
LAB_0293f1a4:
    cVar13 = cVar14;
  }
  else if (bVar6 && (bVar7 || !bVar5)) {
joined_r0x0293f1e8:
    if (bVar8 || bVar5 && bVar9) goto LAB_0293f1a4;
  }
  else {
    cVar14 = '\0';
    cVar13 = '\0';
    if (!bVar8 && (!bVar5 || !bVar9)) {
      cVar14 = cVar3;
      cVar13 = cVar3;
    }
  }
LAB_0293f1a8:
  if (cVar14 == '\x04') {
    return 0;
  }
  if (cVar13 == '\x04') {
    return 0;
  }
  if (cVar15 == '\x04') {
    return 0;
  }
LAB_0293f1c4:
  iVar11 = FUN_029506a8(param_1,0xe);
  iVar2 = iVar11 + 0xf;
  if (-1 < iVar11) {
    iVar2 = iVar11;
  }
  uVar1 = iVar2 >> 4;
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


