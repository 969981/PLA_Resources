/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091b868; name: FUN_0091b868
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0091b868(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(char *)((long)param_2 + 0x14) == '\0')) {
    lVar8 = param_2[4];
    if (((((lVar8 == 0) || (*(char *)((long)param_2 + 0x34) == '\0')) &&
         ((lVar11 = param_2[8], lVar11 == 0 || (*(char *)((long)param_2 + 0x54) == '\0')))) &&
        ((lVar12 = param_2[0xc], lVar12 == 0 || (*(char *)((long)param_2 + 0x74) == '\0')))) &&
       (((lVar13 = param_2[0x10], lVar13 == 0 || (*(char *)((long)param_2 + 0x94) == '\0')) &&
        ((lVar14 = param_2[0x14], lVar14 == 0 || (*(char *)((long)param_2 + 0xb4) == '\0'))))))
    goto LAB_0091b8c8;
    if ((lVar9 != 0) && (*(char *)((long)param_2 + 0x14) == '\0')) {
      lVar9 = 0;
      *param_2 = 0;
    }
  }
  else {
    lVar8 = param_2[4];
  }
  if ((lVar8 == 0) || (*(char *)((long)param_2 + 0x34) != '\0')) {
    lVar11 = param_2[8];
    if (lVar11 != 0) goto LAB_0091be74;
LAB_0091be10:
    lVar12 = param_2[0xc];
    if (lVar12 == 0) goto LAB_0091be18;
LAB_0091be8c:
    if (*(char *)((long)param_2 + 0x74) != '\0') goto LAB_0091be18;
    lVar12 = 0;
    param_2[0xc] = 0;
    lVar13 = param_2[0x10];
    if (lVar13 != 0) goto LAB_0091bea4;
LAB_0091be20:
    lVar14 = param_2[0x14];
  }
  else {
    lVar8 = 0;
    param_2[4] = 0;
    lVar11 = param_2[8];
    if (lVar11 == 0) goto LAB_0091be10;
LAB_0091be74:
    if (*(char *)((long)param_2 + 0x54) != '\0') goto LAB_0091be10;
    lVar11 = 0;
    param_2[8] = 0;
    lVar12 = param_2[0xc];
    if (lVar12 != 0) goto LAB_0091be8c;
LAB_0091be18:
    lVar13 = param_2[0x10];
    if (lVar13 == 0) goto LAB_0091be20;
LAB_0091bea4:
    if (*(char *)((long)param_2 + 0x94) != '\0') goto LAB_0091be20;
    lVar13 = 0;
    param_2[0x10] = 0;
    lVar14 = param_2[0x14];
  }
  if ((lVar14 != 0) && (*(char *)((long)param_2 + 0xb4) == '\0')) {
    lVar14 = 0;
    param_2[0x14] = 0;
  }
LAB_0091b8c8:
  cVar17 = '\x02';
  if (lVar9 == 0) {
    cVar17 = '\x01';
  }
  cVar2 = lVar9 != 0;
  if (lVar8 != 0) {
    cVar2 = cVar17;
  }
  if (lVar11 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (lVar12 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (lVar13 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (lVar14 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 != '\x01') {
    bVar6 = lVar9 != 0;
    if ((bool)bVar6) {
      iVar15 = (int)param_2[1];
    }
    else {
      iVar15 = 0;
    }
    iVar5 = iVar15;
    if (lVar8 != 0) {
      bVar1 = iVar15 <= (int)param_2[5] && (bool)bVar6;
      iVar5 = (int)param_2[5];
      bVar6 = 1;
      if (bVar1) {
        iVar5 = iVar15;
      }
    }
    iVar15 = iVar5;
    if (lVar11 != 0) {
      bVar3 = bVar6 ^ 1;
      bVar6 = 1;
      iVar15 = (int)param_2[9];
      if (!(bool)((int)param_2[9] < iVar5 | bVar3)) {
        iVar15 = iVar5;
      }
    }
    iVar5 = iVar15;
    if (lVar12 != 0) {
      bVar3 = bVar6 ^ 1;
      bVar6 = 1;
      iVar5 = (int)param_2[0xd];
      if (!(bool)((int)param_2[0xd] < iVar15 | bVar3)) {
        iVar5 = iVar15;
      }
    }
    iVar15 = iVar5;
    if (lVar13 != 0) {
      bVar3 = bVar6 ^ 1;
      bVar6 = 1;
      iVar15 = (int)param_2[0x11];
      if (!(bool)((int)param_2[0x11] < iVar5 | bVar3)) {
        iVar15 = iVar5;
      }
    }
    iVar5 = iVar15;
    if ((lVar14 != 0) &&
       (iVar5 = (int)param_2[0x15], !(bool)((int)param_2[0x15] < iVar15 | bVar6 ^ 1))) {
      iVar5 = iVar15;
    }
    if ((lVar9 != 0) && (iVar5 < (int)param_2[1])) {
      lVar9 = 0;
      *param_2 = 0;
    }
    if ((lVar8 != 0) && (iVar5 < (int)param_2[5])) {
      lVar8 = 0;
      param_2[4] = 0;
    }
    if ((lVar11 != 0) && (iVar5 < (int)param_2[9])) {
      lVar11 = 0;
      param_2[8] = 0;
    }
    if ((lVar12 != 0) && (iVar5 < (int)param_2[0xd])) {
      lVar12 = 0;
      param_2[0xc] = 0;
    }
    if ((lVar13 != 0) && (iVar5 < (int)param_2[0x11])) {
      lVar13 = 0;
      param_2[0x10] = 0;
    }
    if ((lVar14 != 0) && (iVar5 < (int)param_2[0x15])) {
      lVar14 = 0;
      param_2[0x14] = 0;
    }
    cVar17 = '\x02';
    if (lVar9 == 0) {
      cVar17 = '\x01';
    }
    cVar2 = lVar9 != 0;
    if (lVar8 != 0) {
      cVar2 = cVar17;
    }
    if (lVar11 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (lVar12 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (lVar13 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (lVar14 != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (cVar2 != '\x01') {
      cVar17 = (char)param_2[0x18];
      if (cVar17 != '\x1f') {
        if ((lVar9 != 0) && (*(char *)(*(long *)(lVar9 + 0x70) + 0x7d) == cVar17)) {
          lVar9 = 0;
          *param_2 = 0;
        }
        if ((lVar8 != 0) && (*(char *)(*(long *)(lVar8 + 0x70) + 0x7d) == cVar17)) {
          lVar8 = 0;
          param_2[4] = 0;
        }
        if ((lVar11 != 0) && (*(char *)(*(long *)(lVar11 + 0x70) + 0x7d) == cVar17)) {
          lVar11 = 0;
          param_2[8] = 0;
        }
        if ((lVar12 != 0) && (*(char *)(*(long *)(lVar12 + 0x70) + 0x7d) == cVar17)) {
          lVar12 = 0;
          param_2[0xc] = 0;
        }
        if ((lVar13 != 0) && (*(char *)(*(long *)(lVar13 + 0x70) + 0x7d) == cVar17)) {
          lVar13 = 0;
          param_2[0x10] = 0;
        }
        if ((lVar14 != 0) && (*(char *)(*(long *)(lVar14 + 0x70) + 0x7d) == cVar17)) {
          lVar14 = 0;
          param_2[0x14] = 0;
        }
      }
      cVar17 = '\x02';
      if (lVar9 == 0) {
        cVar17 = '\x01';
      }
      cVar2 = lVar9 != 0;
      if (lVar8 != 0) {
        cVar2 = cVar17;
      }
      if (lVar11 != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (lVar12 != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (lVar13 != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (lVar14 != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (cVar2 != '\x01') {
        bVar1 = lVar9 != 0;
        if (bVar1) {
          uVar7 = *(uint *)(param_2 + 3);
        }
        else {
          uVar7 = 0;
        }
        uVar16 = uVar7;
        uVar4 = bVar1;
        if (lVar8 != 0) {
          uVar4 = true;
          uVar16 = *(uint *)(param_2 + 7);
          if (*(uint *)(param_2 + 7) <= uVar7 && bVar1) {
            uVar16 = uVar7;
          }
        }
        uVar7 = uVar16;
        if (lVar11 != 0) {
          bVar6 = uVar4 ^ 1;
          uVar4 = true;
          uVar7 = *(uint *)(param_2 + 0xb);
          if (!(bool)(uVar16 < *(uint *)(param_2 + 0xb) | bVar6)) {
            uVar7 = uVar16;
          }
        }
        uVar16 = uVar7;
        if (lVar12 != 0) {
          bVar6 = uVar4 ^ 1;
          uVar4 = true;
          uVar16 = *(uint *)(param_2 + 0xf);
          if (!(bool)(uVar7 < *(uint *)(param_2 + 0xf) | bVar6)) {
            uVar16 = uVar7;
          }
        }
        uVar7 = uVar16;
        if (lVar13 != 0) {
          bVar6 = uVar4 ^ 1;
          uVar4 = true;
          uVar7 = *(uint *)(param_2 + 0x13);
          if (!(bool)(uVar16 < *(uint *)(param_2 + 0x13) | bVar6)) {
            uVar7 = uVar16;
          }
        }
        uVar16 = uVar7;
        if ((lVar14 != 0) &&
           (uVar16 = *(uint *)(param_2 + 0x17),
           !(bool)(uVar7 < *(uint *)(param_2 + 0x17) | uVar4 ^ 1))) {
          uVar16 = uVar7;
        }
        if ((lVar9 != 0) && (*(uint *)(param_2 + 3) < uVar16)) {
          lVar9 = 0;
          *param_2 = 0;
        }
        if ((lVar8 != 0) && (*(uint *)(param_2 + 7) < uVar16)) {
          lVar8 = 0;
          param_2[4] = 0;
        }
        if ((lVar11 != 0) && (*(uint *)(param_2 + 0xb) < uVar16)) {
          lVar11 = 0;
          param_2[8] = 0;
        }
        if ((lVar12 != 0) && (*(uint *)(param_2 + 0xf) < uVar16)) {
          lVar12 = 0;
          param_2[0xc] = 0;
        }
        if ((lVar13 != 0) && (*(uint *)(param_2 + 0x13) < uVar16)) {
          lVar13 = 0;
          param_2[0x10] = 0;
        }
        if ((lVar14 != 0) && (*(uint *)(param_2 + 0x17) < uVar16)) {
          lVar14 = 0;
          param_2[0x14] = 0;
        }
        cVar17 = '\x02';
        if (lVar9 == 0) {
          cVar17 = '\x01';
        }
        cVar2 = lVar9 != 0;
        if (lVar8 != 0) {
          cVar2 = cVar17;
        }
        if (lVar11 != 0) {
          cVar2 = cVar2 + '\x01';
        }
        if (lVar12 != 0) {
          cVar2 = cVar2 + '\x01';
        }
        if (lVar13 != 0) {
          cVar2 = cVar2 + '\x01';
        }
        if (lVar14 != 0) {
          cVar2 = cVar2 + '\x01';
        }
        if (cVar2 != '\x01') {
          bVar1 = *param_2 != 0;
          if (bVar1) {
            bVar6 = *(byte *)(*(long *)(*param_2 + 0x70) + 0x7d);
            lVar9 = param_2[4];
          }
          else {
            bVar6 = 0x1f;
            lVar9 = param_2[4];
          }
          if (lVar9 == 0) {
            uVar10 = 0;
            lVar9 = param_2[8];
            bVar3 = bVar6;
          }
          else {
            bVar3 = *(byte *)(*(long *)(lVar9 + 0x70) + 0x7d);
            uVar7 = (uint)(bVar3 < bVar6) | bVar1 ^ 1;
            uVar10 = (ulong)uVar7;
            bVar1 = true;
            if (uVar7 == 0) {
              bVar3 = bVar6;
            }
            lVar9 = param_2[8];
          }
          if (lVar9 == 0) {
            lVar9 = param_2[0xc];
          }
          else {
            bVar6 = *(byte *)(*(long *)(lVar9 + 0x70) + 0x7d);
            uVar7 = 2;
            if (bVar3 <= bVar6 && bVar1) {
              uVar7 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar7;
            if (bVar3 <= bVar6 && bVar1) {
              bVar6 = bVar3;
            }
            bVar1 = true;
            lVar9 = param_2[0xc];
            bVar3 = bVar6;
          }
          if (lVar9 == 0) {
            lVar9 = param_2[0x10];
          }
          else {
            bVar6 = *(byte *)(*(long *)(lVar9 + 0x70) + 0x7d);
            uVar7 = 3;
            if (bVar3 <= bVar6 && bVar1) {
              uVar7 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar7;
            if (bVar3 <= bVar6 && bVar1) {
              bVar6 = bVar3;
            }
            bVar1 = true;
            lVar9 = param_2[0x10];
            bVar3 = bVar6;
          }
          if (lVar9 == 0) {
            lVar9 = param_2[0x14];
          }
          else {
            bVar6 = *(byte *)(*(long *)(lVar9 + 0x70) + 0x7d);
            uVar7 = 4;
            if (bVar3 <= bVar6 && bVar1) {
              uVar7 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar7;
            if (bVar3 <= bVar6 && bVar1) {
              bVar6 = bVar3;
            }
            bVar1 = true;
            lVar9 = param_2[0x14];
            bVar3 = bVar6;
          }
          if (lVar9 == 0) {
            if (!bVar1) {
              param_1[2] = 0;
              param_1[3] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              return;
            }
          }
          else {
            uVar7 = 5;
            if (bVar3 <= *(byte *)(*(long *)(lVar9 + 0x70) + 0x7d) && bVar1) {
              uVar7 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar7;
          }
          param_2 = param_2 + uVar10 * 4;
          lVar9 = *param_2;
          lVar8 = param_2[1];
          lVar11 = param_2[3];
          param_1[2] = param_2[2];
          param_1[3] = lVar11;
          *param_1 = lVar9;
          param_1[1] = lVar8;
          return;
        }
      }
    }
  }
  if (lVar9 == 0) {
    if (lVar8 == 0) {
      if (lVar11 == 0) {
        if (lVar12 == 0) {
          if (lVar13 == 0) {
            if (lVar14 == 0) {
              param_1[2] = 0;
              param_1[3] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              return;
            }
            param_2 = param_2 + 0x14;
          }
          else {
            param_2 = param_2 + 0x10;
          }
        }
        else {
          param_2 = param_2 + 0xc;
        }
      }
      else {
        param_2 = param_2 + 8;
      }
    }
    else {
      param_2 = param_2 + 4;
    }
  }
  lVar9 = *param_2;
  lVar8 = param_2[1];
  lVar11 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar11;
  *param_1 = lVar9;
  param_1[1] = lVar8;
  return;
}


