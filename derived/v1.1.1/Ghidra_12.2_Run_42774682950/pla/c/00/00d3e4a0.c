/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3e4a0; name: FUN_00d3e4a0
 */


long FUN_00d3e4a0(long param_1,byte *param_2,int *param_3,byte param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  byte bVar30;
  long lVar31;
  
  if (param_2 != (byte *)0x0) {
    *param_2 = 0;
  }
  iVar2 = *param_3;
  piVar12 = *(int **)(param_1 + 0x38);
  iVar26 = param_3[2];
  bVar6 = *(char *)((long)param_3 + 0xd) != '\0';
  uVar19 = (uint)*(ushort *)(param_3 + 1);
  if (bVar6) {
    uVar19 = (uint)(iVar2 == 0x1ea);
  }
  cVar5 = (char)param_3[3];
  iVar3 = param_3[5];
  if (bVar6) {
    iVar26 = 2;
  }
  if (bVar6) {
    iVar2 = 0;
    cVar5 = '\0';
    iVar3 = 0;
  }
  if ((6 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar13 != 0)) {
    puVar18 = (uint *)((long)piVar12 + uVar13);
    uVar25 = (ulong)*puVar18;
    if (((uint *)((long)puVar18 + uVar25) != (uint *)0x0) &&
       (uVar20 = (ulong)*(uint *)((long)puVar18 + uVar25), uVar20 != 0)) {
      lVar27 = uVar25 + uVar13;
      lVar21 = 0;
      do {
        uVar22 = (ulong)*(uint *)((long)piVar12 + lVar21 + lVar27 + 4);
        lVar24 = lVar21 + (uVar22 - (long)*(int *)((long)piVar12 + lVar21 + uVar22 + lVar27 + 4)) +
                          lVar27;
        uVar11 = *(ushort *)((long)piVar12 + lVar24 + 4);
        if (uVar11 < 5) {
          if (iVar2 == 0) goto LAB_00d3e5b8;
        }
        else {
          uVar9 = (ulong)*(ushort *)((long)piVar12 + lVar24 + 8);
          iVar7 = 0;
          if (uVar9 != 0) {
            iVar7 = *(int *)((long)piVar12 + lVar21 + uVar22 + uVar9 + lVar27 + 4);
          }
          if (iVar7 == iVar2) {
LAB_00d3e5b8:
            if (-4 - ((long)piVar12 + uVar22 + uVar13 + uVar25) == lVar21) {
              return 0;
            }
            uVar4 = *(ushort *)((long)piVar12 + lVar24 + 10);
            uVar20 = (ulong)uVar4;
            if (uVar11 < 7) goto LAB_00d3eb14;
            if (uVar4 == 0) {
              uVar20 = 0;
              goto LAB_00d3eb14;
            }
            uVar14 = (ulong)*(uint *)((long)piVar12 + lVar21 + uVar20 + uVar22 + lVar27 + 4);
            lVar24 = uVar20 + uVar14 + uVar22;
            lVar17 = lVar24 + lVar27;
            uVar9 = (ulong)*(uint *)((long)piVar12 + lVar21 + lVar17 + 4);
            if (uVar20 + uVar9 * 4 + uVar14 + uVar22 == lVar24) goto LAB_00d3eb14;
            lVar23 = uVar13 + uVar25;
            lVar15 = 0;
            lVar10 = uVar9 * 4;
            lVar29 = -lVar24;
            lVar28 = lVar24;
            goto LAB_00d3e63c;
          }
        }
        lVar21 = lVar21 + 4;
      } while (uVar20 * 4 != lVar21);
    }
  }
  return 0;
LAB_00d3e7dc:
  piVar12 = (int *)(lVar27 + 4);
  bVar30 = param_4;
  goto LAB_00d3e7e0;
LAB_00d3e894:
  bVar30 = 0;
  piVar12 = (int *)(lVar21 + 4);
  goto LAB_00d3e7e0;
LAB_00d3e63c:
  do {
    uVar13 = (ulong)*(uint *)((long)piVar12 + lVar21 + lVar15 + lVar24 + lVar23 + 8);
    lVar1 = lVar28 + uVar13;
    lVar31 = (long)*(int *)((long)piVar12 + lVar21 + lVar1 + lVar23 + 8);
    lVar16 = (lVar1 - lVar31) + lVar21 + lVar23;
    uVar11 = *(ushort *)((long)piVar12 + lVar16 + 8);
    if (uVar11 < 5) {
      if (uVar19 == 0) goto LAB_00d3e68c;
    }
    else {
      uVar9 = (ulong)*(ushort *)((long)piVar12 + lVar16 + 0xc);
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = *(uint *)((long)piVar12 + lVar21 + lVar1 + uVar9 + lVar23 + 8);
      }
      if (uVar8 == uVar19) {
LAB_00d3e68c:
        if (((lVar29 - uVar13) - ((long)puVar18 + uVar25)) + -8 != lVar21) {
          lVar31 = -lVar31;
          lVar24 = (long)piVar12 + lVar21 + lVar1 + lVar27 + 8;
          goto LAB_00d3e6b4;
        }
        break;
      }
    }
    lVar15 = lVar15 + 4;
    lVar28 = lVar28 + 4;
    lVar29 = lVar29 + -4;
  } while (lVar10 != lVar15);
  lVar15 = 0;
  lVar28 = -lVar24;
  do {
    uVar13 = (ulong)*(uint *)((long)piVar12 + lVar21 + lVar15 + lVar17 + 8);
    lVar23 = lVar24 + uVar13;
    lVar1 = lVar21 + lVar23 + lVar27;
    lVar31 = (long)*(int *)((long)piVar12 + lVar1 + 8);
    lVar16 = lVar23 - lVar31;
    lVar29 = lVar16 + lVar21 + lVar27;
    uVar11 = *(ushort *)((long)piVar12 + lVar29 + 8);
    if (uVar11 < 5) {
      if (((lVar28 - uVar13) - ((long)puVar18 + uVar25)) + -8 != lVar21) {
        uVar13 = (ulong)*(ushort *)((long)piVar12 + lVar21 + lVar16 + lVar27 + 0xe);
        lVar24 = (long)piVar12 + lVar1 + 8;
        goto LAB_00d3eadc;
      }
      break;
    }
    uVar13 = (ulong)*(ushort *)((long)piVar12 + lVar29 + 0xc);
    if ((uVar13 == 0) || (*(int *)((long)piVar12 + lVar21 + lVar23 + uVar13 + lVar27 + 8) == 0)) {
      lVar31 = -lVar31;
      lVar24 = (long)piVar12 + lVar1 + 8;
      goto LAB_00d3e6b4;
    }
    lVar15 = lVar15 + 4;
    lVar24 = lVar24 + 4;
    lVar28 = lVar28 + -4;
  } while (lVar10 != lVar15);
LAB_00d3eb14:
  lVar17 = uVar20 + *(uint *)((long)piVar12 + lVar21 + uVar20 + uVar22 + lVar27 + 4);
  lVar17 = lVar17 + (ulong)*(uint *)((long)piVar12 + lVar21 + lVar17 + uVar22 + lVar27 + 8);
  lVar24 = lVar21 + lVar17 + uVar22 + lVar27;
  lVar31 = (long)*(int *)((long)piVar12 + lVar24 + 8);
  lVar24 = (long)piVar12 + lVar24 + 8;
  uVar11 = *(ushort *)((long)piVar12 + lVar21 + (lVar17 - lVar31) + uVar22 + lVar27 + 8);
  lVar31 = -lVar31;
LAB_00d3e6b4:
  uVar4 = *(ushort *)(lVar24 + lVar31 + 6);
  uVar13 = (ulong)uVar4;
  if (6 < uVar11) {
    if (uVar4 == 0) {
      uVar13 = 0;
    }
    else {
      uVar20 = (ulong)*(uint *)(lVar24 + uVar13);
      uVar25 = (ulong)*(uint *)((long)(lVar24 + uVar13) + uVar20);
      lVar21 = uVar25 * 4;
      if (uVar25 != 0) {
        if (cVar5 == '\0') {
          lVar15 = lVar24 + uVar13 + uVar20;
          lVar17 = 0;
          lVar27 = lVar15 + 4;
          do {
            uVar25 = (ulong)*(uint *)(lVar27 + lVar17);
            lVar23 = (long)*(int *)(lVar27 + uVar25 + lVar17);
            lVar28 = uVar25 - lVar23;
            lVar23 = -lVar23;
            uVar11 = *(ushort *)(lVar27 + lVar28 + lVar17);
            if (uVar11 < 5) {
              lVar17 = uVar20 + uVar13 + lVar24 + uVar25 + lVar17;
              if (lVar17 != -4) {
LAB_00d3e734:
                piVar12 = (int *)(lVar17 + 4);
                goto LAB_00d3e738;
              }
              break;
            }
            uVar22 = (ulong)*(ushort *)(lVar15 + lVar28 + lVar17 + 8);
            if ((uVar22 == 0) || (*(char *)(lVar27 + uVar25 + uVar22 + lVar17) == '\0')) {
              lVar17 = uVar20 + uVar13 + lVar24 + uVar25 + lVar17;
              goto LAB_00d3e734;
            }
            lVar17 = lVar17 + 4;
          } while (lVar21 != lVar17);
        }
        else {
          lVar27 = 0;
          lVar17 = lVar24 + uVar20 + uVar13;
          do {
            uVar25 = (ulong)*(uint *)(lVar17 + lVar27 + 4);
            lVar15 = lVar17 + uVar25 + lVar27;
            lVar23 = (long)*(int *)(lVar15 + 4);
            lVar28 = lVar17 + (uVar25 - lVar23) + lVar27;
            uVar11 = *(ushort *)(lVar28 + 4);
            if (((4 < uVar11) && (uVar22 = (ulong)*(ushort *)(lVar28 + 8), uVar22 != 0)) &&
               (*(char *)(lVar17 + uVar25 + uVar22 + lVar27 + 4) == '\x01')) {
              lVar23 = -lVar23;
              piVar12 = (int *)(lVar15 + 4);
              goto LAB_00d3e738;
            }
            lVar27 = lVar27 + 4;
          } while (lVar21 != lVar27);
        }
        lVar17 = uVar13 + uVar20;
        lVar27 = lVar17 + 8;
        do {
          lVar17 = lVar17 + 4;
          uVar25 = (ulong)*(uint *)(lVar24 + lVar17);
          lVar15 = lVar24 + uVar25;
          lVar23 = -(long)*(int *)(lVar15 + lVar17);
          lVar28 = lVar24 + (uVar25 - (long)*(int *)(lVar15 + lVar17));
          uVar11 = *(ushort *)(lVar28 + lVar17);
          if (uVar11 < 5) {
            piVar12 = (int *)(lVar15 + lVar17);
            if (piVar12 != (int *)0x0) goto LAB_00d3e738;
            break;
          }
          uVar20 = (ulong)*(ushort *)(lVar28 + lVar27);
          if ((uVar20 == 0) || (*(char *)(lVar24 + uVar25 + uVar20 + lVar17) == '\0')) {
            piVar12 = (int *)(lVar15 + lVar17);
            goto LAB_00d3e738;
          }
          lVar21 = lVar21 + -4;
          lVar27 = lVar27 + 4;
        } while (lVar21 != 0);
      }
    }
  }
LAB_00d3eadc:
  puVar18 = (uint *)((long)(lVar24 + uVar13) + (ulong)*(uint *)(lVar24 + uVar13) + 4);
  piVar12 = (int *)((long)puVar18 + (ulong)*puVar18);
  lVar23 = -(long)*piVar12;
  uVar11 = *(ushort *)((long)piVar12 - (long)*piVar12);
LAB_00d3e738:
  uVar19 = 2;
  if ((param_5 & 1) != 0) {
    uVar19 = 3;
  }
  param_5 = param_5 & 1;
  if ((param_4 & 1) == 0) {
    uVar19 = param_5;
  }
  uVar4 = *(ushort *)((long)piVar12 + lVar23 + 6);
  uVar13 = (ulong)uVar4;
  if (6 < uVar11) {
    puVar18 = (uint *)((long)piVar12 + uVar13);
    if (uVar4 != 0) {
      uVar25 = (ulong)*puVar18;
      lVar21 = (ulong)*(uint *)((long)puVar18 + uVar25) * 4;
      if ((ulong)*(uint *)((long)puVar18 + uVar25) != 0) {
        lVar24 = uVar13 + uVar25;
        lVar27 = 0;
        lVar17 = lVar24 + 4;
        do {
          uVar20 = (ulong)*(uint *)((long)piVar12 + lVar27 + lVar17);
          lVar15 = uVar20 - (long)*(int *)((long)piVar12 + lVar27 + uVar20 + lVar17);
          if (*(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar17) < 5) {
            if (uVar19 == 0) goto LAB_00d3e7c0;
          }
          else {
            uVar11 = *(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar24 + 8);
            if ((ulong)uVar11 == 0) {
              uVar8 = (uint)uVar11;
            }
            else {
              uVar8 = (uint)*(char *)((long)piVar12 + lVar27 + uVar20 + uVar11 + lVar17);
            }
            if (uVar8 == uVar19) {
LAB_00d3e7c0:
              lVar27 = (long)piVar12 + lVar27 + uVar20 + uVar25 + uVar13;
              if (lVar27 != -4) goto LAB_00d3e7dc;
              break;
            }
          }
          lVar27 = lVar27 + 4;
        } while (lVar21 != lVar27);
        lVar27 = 0;
        lVar17 = lVar24 + 4;
        do {
          uVar20 = (ulong)*(uint *)((long)piVar12 + lVar27 + lVar17);
          lVar15 = uVar20 - (long)*(int *)((long)piVar12 + lVar27 + uVar20 + lVar17);
          if (*(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar17) < 5) {
            if (param_5 == 0) goto LAB_00d3e87c;
          }
          else {
            uVar11 = *(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar24 + 8);
            if ((ulong)uVar11 == 0) {
              uVar19 = (uint)uVar11;
            }
            else {
              uVar19 = (uint)*(char *)((long)piVar12 + lVar27 + uVar20 + uVar11 + lVar17);
            }
            if (uVar19 == param_5) {
LAB_00d3e87c:
              lVar21 = (long)piVar12 + lVar27 + uVar20 + uVar25 + uVar13;
              if (lVar21 != -4) goto LAB_00d3e894;
              break;
            }
          }
          lVar27 = lVar27 + 4;
        } while (lVar21 != lVar27);
      }
    }
    uVar19 = 2;
    if ((param_4 & 1) == 0) {
      uVar19 = 0;
    }
    if (uVar4 == 0) {
      uVar13 = 0;
    }
    else {
      uVar25 = (ulong)*puVar18;
      lVar21 = (ulong)*(uint *)((long)puVar18 + uVar25) * 4;
      if ((ulong)*(uint *)((long)puVar18 + uVar25) != 0) {
        lVar24 = uVar13 + uVar25;
        lVar27 = 0;
        lVar17 = lVar24 + 4;
        do {
          uVar20 = (ulong)*(uint *)((long)piVar12 + lVar27 + lVar17);
          lVar15 = uVar20 - (long)*(int *)((long)piVar12 + lVar27 + uVar20 + lVar17);
          if (*(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar17) < 5) {
            if (uVar19 == 0) {
LAB_00d3ebfc:
              lVar27 = (long)piVar12 + lVar27 + uVar20 + uVar25 + uVar13;
              if (lVar27 != -4) goto LAB_00d3e7dc;
              break;
            }
          }
          else {
            uVar11 = *(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar24 + 8);
            if ((ulong)uVar11 == 0) {
              uVar8 = (uint)uVar11;
            }
            else {
              uVar8 = (uint)*(char *)((long)piVar12 + lVar27 + uVar20 + uVar11 + lVar17);
            }
            if (uVar8 == uVar19) goto LAB_00d3ebfc;
          }
          lVar27 = lVar27 + 4;
        } while (lVar21 != lVar27);
        lVar27 = 0;
        lVar17 = lVar24 + 4;
        do {
          uVar20 = (ulong)*(uint *)((long)piVar12 + lVar27 + lVar17);
          lVar15 = uVar20 - (long)*(int *)((long)piVar12 + lVar27 + uVar20 + lVar17);
          if (*(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar17) < 5) {
            lVar21 = (long)piVar12 + lVar27 + uVar20 + uVar25 + uVar13;
            if (lVar21 != -4) goto LAB_00d3e894;
            break;
          }
          uVar22 = (ulong)*(ushort *)((long)piVar12 + lVar27 + lVar15 + lVar24 + 8);
          if ((uVar22 == 0) ||
             (*(char *)((long)piVar12 + lVar27 + uVar20 + uVar22 + lVar17) == '\0')) {
            bVar30 = 0;
            piVar12 = (int *)((long)piVar12 + lVar27 + uVar20 + uVar25 + uVar13 + 4);
            goto LAB_00d3e7e0;
          }
          lVar27 = lVar27 + 4;
        } while (lVar21 != lVar27);
      }
    }
  }
  puVar18 = (uint *)((long)((long)piVar12 + uVar13) + (ulong)*(uint *)((long)piVar12 + uVar13) + 4);
  piVar12 = (int *)((long)puVar18 + (ulong)*puVar18);
  if (((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
      (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar13 == 0)) ||
     ((cVar5 = *(char *)((long)piVar12 + uVar13), cVar5 != '\x03' && (cVar5 != '\x02')))) {
    bVar30 = 0;
  }
  else {
    bVar30 = 1;
  }
LAB_00d3e7e0:
  lVar21 = FUN_00d3f6f0(piVar12,iVar2,iVar26,iVar3);
  if ((lVar21 == 0) && (lVar21 = FUN_00d3f6f0(piVar12,iVar2,iVar26,0), lVar21 == 0)) {
    puVar18 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (6 - (long)*piVar12)));
    puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18 + 4);
    lVar21 = (long)puVar18 + (ulong)*puVar18;
  }
  if (param_2 != (byte *)0x0) {
    if ((param_4 & 1) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = ~bVar30 & 1;
    }
  }
  return lVar21;
}


