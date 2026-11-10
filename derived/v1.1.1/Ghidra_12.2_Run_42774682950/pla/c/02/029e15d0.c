/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e15d0; name: FUN_029e15d0
 */


void FUN_029e15d0(long param_1,undefined1 *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  
  *param_2 = 0;
  pcVar13 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar2 = *param_3;
  uVar11 = (ulong)bVar2;
  if ((((((*pcVar13 == '\0') || (pcVar13[2] != bVar2)) &&
        ((pcVar13[3] == '\0' || (pcVar13[5] != bVar2)))) &&
       ((pcVar13[6] == '\0' || (pcVar13[8] != bVar2)))) &&
      ((pcVar13[9] == '\0' || (pcVar13[0xb] != bVar2)))) &&
     ((pcVar13[0xc] == '\0' || (pcVar13[0xe] != bVar2)))) {
    if (pcVar13[0xf] == '\0') {
      return;
    }
    if (pcVar13[0x11] != bVar2) {
      return;
    }
  }
  lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + uVar11 * 8 + 0x120);
  if (*(short *)(lVar15 + 0x74) == 0) {
    return;
  }
  if (*(short *)(lVar15 + 0x70) == 0x1ed) {
    return;
  }
  if (*(short *)(lVar15 + 0x70) == 0x305) {
    return;
  }
  bVar8 = (*(byte *)(lVar15 + 0x168) & 7) != 0;
  bVar2 = *(byte *)(lVar15 + 0x2dc);
  uVar16 = (ushort)bVar2;
  bVar3 = *(byte *)(lVar15 + 0x2dd);
  uVar17 = (ushort)bVar3;
  bVar9 = bVar3 != 0x12;
  bVar10 = bVar3 == 2;
  uVar18 = uVar17;
  if (*(char *)(lVar15 + 0x389) < '\0') {
    if (bVar2 != 0x12 && (bVar2 != 2 || !bVar8)) {
      if (!bVar9 || bVar8 && bVar10) goto LAB_029e171c;
    }
    else {
      uVar16 = uVar17;
      if (!bVar9 || bVar8 && bVar10) {
        uVar16 = 0x12;
LAB_029e171c:
        uVar18 = uVar16;
      }
    }
  }
  else if (bVar2 != 0x12 && (bVar2 != 2 || !bVar8)) {
    if (!bVar9 || bVar8 && bVar10) goto LAB_029e171c;
  }
  else {
    uVar18 = 0;
    uVar16 = 0;
    if (bVar9 && (!bVar8 || !bVar10)) {
      uVar18 = uVar17;
      uVar16 = uVar17;
    }
  }
  lVar12 = *(long *)(param_1 + 0x20);
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x10) + 8) + uVar11 * 8 + 0x120)
  ;
  uVar6 = *(ushort *)(param_3 + 2);
  uVar17 = uVar6 & 0x1f;
  uVar7 = uVar6 >> 5 & 0x1f;
  uVar6 = uVar6 >> 10 & 0x1f;
  bVar2 = *(byte *)(lVar14 + 0x2dc);
  bVar3 = *(byte *)(lVar14 + 0x2dd);
  bVar4 = *(byte *)(lVar15 + 0x2de);
  uVar1 = *(uint *)(param_3 + 4);
  bVar5 = *(byte *)(lVar14 + 0x2de);
  *(char *)(lVar14 + 0x2dd) = (char)uVar7;
  *(char *)(lVar14 + 0x2de) = (char)uVar6;
  *(uint *)(lVar14 + 0x2e0) = uVar1;
  *(char *)(lVar14 + 0x2dc) = (char)uVar17;
  if (bVar2 == uVar17 && bVar3 == uVar7) {
    if (bVar5 != uVar6) goto LAB_029e1788;
  }
  else if ((bVar2 != uVar7 || bVar3 != uVar17) || bVar5 != uVar6) {
LAB_029e1788:
    bVar8 = true;
    goto LAB_029e179c;
  }
  bVar8 = false;
LAB_029e179c:
  FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x1a,uVar11,uVar1 & 0xff);
  if (((bVar8) && (param_3[10] != 0)) && (*(char *)(lVar15 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar15 + 0x7d),0);
  }
  if (param_3[8] == 0) {
    uVar17 = *(ushort *)(param_3 + 2);
    if ((uVar17 == (ushort)(uVar16 & 0x1f | (uVar18 & 0x1f) << 5 | (bVar4 & 0x1f) << 10)) ||
       (((uVar17 ^ uVar17 >> 5) & 0x1f) != 0)) {
      if (param_3[9] != 0) {
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
      }
    }
    else {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x120,*param_3,
                   uVar17 & 0x1f,0xffff0000);
    }
  }
  if (bVar8) {
    if ((param_3[0xe] & 0x7f) != 0) {
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0xc);
    }
    if ((param_3[10] != 0) && (*(char *)(lVar15 + 0x7d) != '\x1f')) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
    }
  }
  *param_2 = bVar8;
  return;
}


