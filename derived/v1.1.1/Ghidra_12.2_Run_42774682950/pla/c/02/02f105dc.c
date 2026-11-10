/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f105dc; name: FUN_02f105dc
 */


undefined4
FUN_02f105dc(float param_1,long *param_2,ushort param_3,long param_4,byte param_5,uint param_6,
            undefined8 *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  ushort uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_90;
  undefined1 local_88;
  
  if (param_2 == (long *)0x0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar13 = (ulong)uVar1;
  if (uVar1 == 0) {
    lVar10 = 0;
    fVar14 = 101.0;
    uVar11 = 0;
LAB_02f10800:
    bVar3 = false;
    iVar6 = 2;
    goto LAB_02f10804;
  }
  param_2 = (long *)*param_2;
  lVar9 = *param_2;
  lVar10 = lVar9;
  if (param_4 == 0) {
    uVar2 = *(uint *)(lVar9 + 0x2a3);
    if ((param_6 & 1) == 0) {
      if (((uVar2 >> 0x10 & 1) == 0) &&
         ((uVar2 & 0x6000000) == 0 && (*(ushort *)(lVar9 + 0x198) & 0x100) == 0)) {
        fVar14 = *(float *)(lVar9 + 0x2a8);
        if (param_1 < fVar14) {
          uVar11 = 1;
          goto LAB_02f108e4;
        }
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
LAB_02f108e4:
        lVar10 = 0;
        fVar14 = 101.0;
      }
      if (uVar1 != 1) {
        lVar9 = param_2[1];
        if ((((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) &&
            ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0)) &&
           ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0)) {
          uVar11 = uVar11 + 1;
          if (*(float *)(lVar9 + 0x2a8) <= param_1) {
            lVar10 = lVar9;
            fVar14 = *(float *)(lVar9 + 0x2a8);
          }
        }
        if (uVar1 == 2) {
          bVar3 = false;
          iVar6 = 2;
          goto LAB_02f10804;
        }
        lVar9 = param_2[2];
        if ((((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) &&
            ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0)) &&
           ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0)) {
          uVar11 = uVar11 + 1;
          if (*(float *)(lVar9 + 0x2a8) <= param_1) {
            lVar10 = lVar9;
            fVar14 = *(float *)(lVar9 + 0x2a8);
          }
        }
        if (uVar1 != 3) {
          param_2 = param_2 + 3;
          lVar9 = uVar13 * 8 + -0x18;
          iVar6 = 2;
          do {
            lVar8 = *param_2;
            if (((*(uint *)(lVar8 + 0x2a3) >> 0x10 & 1) == 0) &&
               ((*(uint *)(lVar8 + 0x2a3) & 0x6000000) == 0 &&
                (*(ushort *)(lVar8 + 0x198) & 0x100) == 0)) {
              uVar11 = uVar11 + 1;
              if (*(float *)(lVar8 + 0x2a8) <= param_1) {
                lVar10 = lVar8;
                fVar14 = *(float *)(lVar8 + 0x2a8);
              }
            }
            bVar3 = false;
            param_2 = param_2 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
          goto LAB_02f10804;
        }
      }
      goto LAB_02f10800;
    }
    if (((uVar2 >> 0x10 & 1) == 0) &&
       ((uVar2 & 0x6000000) == 0 && (*(ushort *)(lVar9 + 0x198) & 0x100) == 0)) {
      fVar15 = *(float *)(lVar9 + 0x2a8);
      if (param_1 < fVar15) {
        uVar12 = 1;
        goto LAB_02f10d94;
      }
      iVar5 = FUN_02ecddbc(lVar9,&local_90);
      bVar4 = iVar5 == 0;
      bVar3 = param_3 != 0 && bVar4;
      fVar14 = 101.0;
      if (!bVar4) {
        fVar14 = fVar15;
      }
      iVar6 = 2;
      if (!bVar4) {
        iVar6 = iVar5;
      }
      lVar10 = 0;
      if (!bVar4) {
        lVar10 = lVar9;
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
LAB_02f10d94:
      bVar3 = false;
      iVar6 = 2;
      lVar10 = 0;
      fVar14 = 101.0;
    }
    uVar11 = uVar12;
    if (uVar1 != 1) {
      lVar9 = param_2[1];
      if ((((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) &&
          ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0)) &&
         ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0)) {
        fVar15 = *(float *)(lVar9 + 0x2a8);
        uVar11 = uVar12 + 1;
        if (fVar15 <= param_1) {
          iVar5 = FUN_02ecddbc(lVar9,&local_90);
          if (iVar5 != 0) {
            lVar10 = lVar9;
            iVar6 = iVar5;
            fVar14 = fVar15;
          }
          bVar3 = (bool)(bVar3 | (uVar12 < param_3 && iVar5 == 0));
        }
      }
      if (uVar1 != 2) {
        lVar9 = param_2[2];
        if ((((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) &&
            ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0)) &&
           ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0)) {
          fVar15 = *(float *)(lVar9 + 0x2a8);
          uVar11 = uVar11 + 1;
          if (fVar15 <= param_1) {
            iVar5 = FUN_02ecddbc(lVar9,&local_90);
            if (iVar5 != 0) {
              lVar10 = lVar9;
              iVar6 = iVar5;
              fVar14 = fVar15;
            }
            bVar3 = (bool)(bVar3 | (uVar11 <= param_3 && iVar5 == 0));
          }
        }
        if (uVar1 != 3) {
          param_2 = param_2 + 3;
          lVar9 = uVar13 * 8 + -0x18;
          do {
            lVar8 = *param_2;
            if (((*(uint *)(lVar8 + 0x2a3) >> 0x10 & 1) == 0) &&
               ((*(uint *)(lVar8 + 0x2a3) & 0x6000000) == 0 &&
                (*(ushort *)(lVar8 + 0x198) & 0x100) == 0)) {
              fVar15 = *(float *)(lVar8 + 0x2a8);
              uVar11 = uVar11 + 1;
              if (fVar15 <= param_1) {
                iVar5 = FUN_02ecddbc(lVar8,&local_90);
                if (iVar5 != 0) {
                  lVar10 = lVar8;
                  iVar6 = iVar5;
                  fVar14 = fVar15;
                }
                bVar3 = (bool)(bVar3 | (uVar11 <= param_3 && iVar5 == 0));
              }
            }
            param_2 = param_2 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
    }
    goto LAB_02f10804;
  }
  if (((*(long *)(lVar9 + 0x28) == param_4) && ((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0)) &&
     ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0 && (*(ushort *)(lVar9 + 0x198) & 0x100) == 0)) {
    fVar14 = *(float *)(lVar9 + 0x2a8);
    if (param_1 < fVar14) {
      uVar11 = 1;
      goto LAB_02f10904;
    }
    if ((param_6 & 1) != 0) {
      iVar6 = FUN_02ecddbc(lVar9,&local_90);
      bVar3 = param_3 != 0 && iVar6 == 0;
      if (iVar6 != 0) goto LAB_02f10730;
      uVar11 = 1;
      goto joined_r0x02f10914;
    }
    bVar3 = false;
    iVar6 = 2;
LAB_02f10730:
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
LAB_02f10904:
    bVar3 = false;
joined_r0x02f10914:
    fVar14 = 101.0;
    iVar6 = 2;
    lVar10 = 0;
  }
  if (uVar1 == 1) goto LAB_02f10804;
  lVar9 = param_2[1];
  uVar12 = uVar11;
  if (*(long *)(lVar9 + 0x28) == param_4) {
    if ((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) {
      if ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0) {
        if ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0) {
          fVar15 = *(float *)(lVar9 + 0x2a8);
          uVar12 = uVar11 + 1;
          if (fVar15 <= param_1) {
            if ((param_6 & 1) == 0) {
              iVar5 = 2;
            }
            else {
              iVar5 = FUN_02ecddbc(lVar9,&local_90);
              bVar3 = (bool)(bVar3 | (uVar11 < param_3 && iVar5 == 0));
              if (iVar5 == 0) goto joined_r0x02f10a4c;
            }
            lVar10 = lVar9;
            fVar14 = fVar15;
            iVar6 = iVar5;
          }
        }
      }
    }
  }
joined_r0x02f10a4c:
  uVar11 = uVar12;
  if (uVar1 == 2) goto LAB_02f10804;
  lVar9 = param_2[2];
  if (((*(long *)(lVar9 + 0x28) == param_4) && ((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0)) &&
     (((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0 && ((*(ushort *)(lVar9 + 0x198) >> 8 & 1) == 0)))
     ) {
    fVar15 = *(float *)(lVar9 + 0x2a8);
    uVar11 = uVar11 + 1;
    if (fVar15 <= param_1) {
      if ((param_6 & 1) == 0) {
        iVar5 = 2;
      }
      else {
        iVar5 = FUN_02ecddbc(lVar9,&local_90);
        bVar3 = (bool)(bVar3 | (uVar11 <= param_3 && iVar5 == 0));
        if (iVar5 == 0) goto joined_r0x02f109a4;
      }
      lVar10 = lVar9;
      fVar14 = fVar15;
      iVar6 = iVar5;
    }
  }
joined_r0x02f109a4:
  if (uVar1 != 3) {
    param_2 = param_2 + 3;
    lVar9 = uVar13 * 8 + -0x18;
    do {
      lVar8 = *param_2;
      if (((*(long *)(lVar8 + 0x28) == param_4) && ((*(uint *)(lVar8 + 0x2a3) >> 0x10 & 1) == 0)) &&
         ((*(uint *)(lVar8 + 0x2a3) & 0x6000000) == 0 && (*(ushort *)(lVar8 + 0x198) & 0x100) == 0))
      {
        fVar15 = *(float *)(lVar8 + 0x2a8);
        uVar11 = uVar11 + 1;
        if (fVar15 <= param_1) {
          if ((param_6 & 1) == 0) {
            iVar5 = 2;
          }
          else {
            iVar5 = FUN_02ecddbc(lVar8,&local_90);
            bVar3 = (bool)(bVar3 | (uVar11 <= param_3 && iVar5 == 0));
            if (iVar5 == 0) goto LAB_02f10a08;
          }
          iVar6 = iVar5;
          lVar10 = lVar8;
          fVar14 = fVar15;
        }
      }
LAB_02f10a08:
      param_2 = param_2 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
LAB_02f10804:
  if (uVar11 < param_3) {
    return 1;
  }
  lVar9 = 0;
  if ((fVar14 <= param_1) && ((fVar14 == param_1 & param_5) == 0)) {
    if (lVar10 == 0) {
      lVar9 = 0;
    }
    else {
      *param_7 = *(undefined8 *)(lVar10 + 0x180);
      if (((param_6 & 1) == 0) || (iVar6 == 1)) {
        uVar1 = *(uint *)(lVar10 + 0x2a3);
        if ((uVar1 >> 0x10 & 1) == 0) {
          *(uint *)(lVar10 + 0x2a3) =
               uVar1 & 0xfff00000 | uVar1 & 0xffff | (param_8 & 7) << 0x11 | 0x10000;
        }
        local_90 = 0x400000000;
        local_88 = 0;
        FUN_02ecc3d4(lVar10,&local_90,1);
      }
      lVar9 = lVar10;
    }
  }
  uVar7 = 0x50;
  if ((param_6 & 1) == 0) {
    uVar7 = 2;
  }
  if (bVar3 || lVar9 != 0) {
    uVar7 = 1;
  }
  return uVar7;
}


