/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023cb70; name: FUN_0023cb70
 */


uint FUN_0023cb70(long param_1,long *param_2,uint *param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  uVar8 = *(uint *)(param_1 + 0x14);
  uVar3 = uVar8 & 3;
  switch(uVar3) {
  case 0:
    uVar10 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf;
    lVar9 = *(long *)(param_4 + 0xc0);
    lVar13 = *(long *)(param_4 + 200);
    if (lVar9 != 0 || lVar13 != 0) goto LAB_0023ce54;
    goto LAB_0023cf08;
  case 1:
    lVar9 = *(long *)(param_1 + 0x18);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0x10;
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    break;
  case 2:
    uVar10 = *(uint *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar13 = ((ulong)(uVar10 >> 8) & 0xc) + ((ulong)(uVar10 >> 2) & 3) * 0x14 +
             ((ulong)(uVar10 >> 0xc) & 1) * 0xc +
             (((ulong)(uVar10 << 4) & 0x30) + ((ulong)uVar10 & 0x30) | (ulong)(uVar10 >> 6) & 8);
    if (((uVar8 & 0x1c0) == 0) ||
       ((pbVar1 = (byte *)(lVar9 + lVar13), 2 < *pbVar1 - 0xb &&
        ((uVar8 = uVar8 >> 6 & 7, uVar8 < 2 ||
         ((2 < pbVar1[4] - 0xb &&
          ((uVar8 < 3 ||
           ((2 < pbVar1[8] - 0xb &&
            ((uVar8 < 4 ||
             ((2 < pbVar1[0xc] - 0xb &&
              ((uVar8 < 5 ||
               ((2 < pbVar1[0x10] - 0xb &&
                ((uVar8 < 6 ||
                 ((2 < pbVar1[0x14] - 0xb && ((uVar8 != 7 || (2 < pbVar1[0x18] - 0xb))))))))))))))))
           )))))))))) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      *(byte *)(param_1 + 0x48) =
           (*(byte *)(param_1 + 0x48) & 0xf | *(char *)(lVar9 + lVar13) << 4) + 0x20;
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xd0;
    }
    break;
  case 3:
    uVar10 = *(uint *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
    pbVar1 = (byte *)(lVar9 + ((ulong)(uVar10 >> 8) & 0xc) + ((ulong)(uVar10 >> 2) & 3) * 0x14 +
                              ((ulong)(uVar10 >> 0xc) & 1) * 0xc +
                              (((ulong)(uVar10 << 4) & 0x30) + ((ulong)uVar10 & 0x30) |
                              (ulong)(uVar10 >> 6) & 8));
    uVar7 = (uint)*pbVar1;
    uVar6 = (uint)pbVar1[4];
    uVar8 = 1;
  }
  lVar9 = lVar9 + (ulong)((uVar10 & 3) * 0x10 + (uVar10 >> 2 & 3) * 0x14);
  if (*(byte *)(lVar9 + 1) - 5 < 2) {
LAB_0023cd9c:
    uVar8 = 1;
    uVar10 = 2;
    if (*(char *)(lVar9 + 1) == '\a') goto LAB_0023ce40;
LAB_0023cdb0:
    if ((1 < uVar3) &&
       ((*(char *)(lVar9 + 0x11) == '\a' || ((uVar3 == 3 && (*(char *)(lVar9 + 0x21) == '\a'))))))
    goto LAB_0023ce40;
    lVar9 = *(long *)(param_4 + 0xc0);
    lVar13 = *(long *)(param_4 + 200);
    if (lVar9 != 0 || lVar13 != 0) goto LAB_0023ce54;
  }
  else {
    if (uVar3 < 2) {
LAB_0023ce30:
      uVar10 = 0;
      cVar4 = *(char *)(lVar9 + 1);
    }
    else {
      if (*(byte *)(lVar9 + 0x11) - 5 < 2) goto LAB_0023cd9c;
      if (uVar3 != 3) goto LAB_0023ce30;
      uVar12 = (uint)(*(byte *)(lVar9 + 0x21) - 5 < 2);
      uVar10 = uVar12 << 1;
      uVar8 = uVar12 | uVar8;
      cVar4 = *(char *)(lVar9 + 1);
    }
    if (cVar4 != '\a') goto LAB_0023cdb0;
LAB_0023ce40:
    uVar10 = uVar10 | 8;
    uVar8 = 1;
    lVar9 = *(long *)(param_4 + 0xc0);
    lVar13 = *(long *)(param_4 + 200);
    if (lVar9 != 0 || lVar13 != 0) {
LAB_0023ce54:
      if (lVar13 != 0) {
        lVar9 = lVar13;
      }
      if (*(char *)(lVar9 + 0x16) == '\x03') {
        uVar12 = *(uint *)(lVar9 + 0x10);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0xc + (ulong)uVar12 + 2);
        if (uVar14 != 0) {
          uVar11 = 0;
          piVar15 = (int *)(lVar9 + (ulong)uVar12 + 0x10);
          do {
            piVar2 = (int *)(lVar9 + 0xc + (ulong)(*piVar15 + uVar12));
            if (*piVar2 == 6) {
              bVar5 = *(byte *)(piVar2 + 1);
              if ((bVar5 & 1) == 0) {
                uVar11 = uVar11 | 1;
              }
              else {
                uVar11 = uVar11 | (uint)*(byte *)((long)piVar2 + 5) << 6 | 3;
              }
              if ((bVar5 >> 3 & 1) != 0) {
                uVar11 = uVar11 | (uint)*(byte *)((long)piVar2 + 9) << 8 | 4;
              }
              if ((bVar5 >> 2 & 1) != 0) {
                uVar11 = uVar11 | (uint)*(byte *)(piVar2 + 2) << 10 | 8;
              }
              uVar11 = (bVar5 & 2) << 3 | (bVar5 >> 4 & 1) << 5 | uVar11;
            }
            piVar15 = piVar15 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          goto LAB_0023cf0c;
        }
      }
    }
  }
LAB_0023cf08:
  uVar11 = 0;
LAB_0023cf0c:
  uVar12 = uVar10 | 4;
  if (uVar11 == 0) {
    uVar12 = uVar10;
  }
  uVar8 = uVar8 | uVar11 != 0;
  if (uVar12 == 0 && uVar11 == 0) {
    *param_3 = uVar7;
    param_3[1] = uVar6;
    *param_2 = 2;
    return uVar8 ^ 1;
  }
  if (uVar3 == 3) {
    *param_3 = uVar7;
    param_3[1] = uVar6;
    param_3[2] = uVar12;
    *param_2 = 3;
  }
  else {
    *param_3 = (uint)(*(byte *)(param_1 + 0x48) >> 4);
    param_3[1] = 0;
    param_3[2] = uVar12 | 1;
    *param_2 = 3;
  }
  if (uVar11 == 0) {
    return uVar8 ^ 1;
  }
  param_3[3] = uVar11;
  *param_2 = *param_2 + 1;
  return uVar8 ^ 1;
}


