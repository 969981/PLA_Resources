/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c6110; name: FUN_004c6110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004c6110(long param_1,int param_2,long param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong local_168 [4];
  ulong local_148 [12];
  ulong local_e8 [16];
  ulong local_68;
  
  uVar19 = *(ulong *)(param_1 + 0x1750);
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((param_4 < uVar19) ||
     ((*(long *)(param_1 + 0x860) != 0 && (param_4 < *(long *)(param_1 + 6000) + uVar19)))) {
    uVar8 = 0x10f;
    uVar9 = 0x16c;
    goto LAB_004c6184;
  }
  if ((*(int *)(param_1 + 0x84) == 4) && (iVar4 = FUN_004ce3e0(param_1,param_4,0,1), iVar4 == 0)) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x1750) = 0;
  iVar4 = FUN_004c9920(param_1);
  if (((iVar4 != 0) && (iVar4 = FUN_004c9a40(param_1), iVar4 == 0)) &&
     (*(int *)(param_1 + 0x84) != 6)) {
    uVar8 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    if ((int)uVar8 == 0) {
      return 0xffffffff;
    }
  }
  if (*(long *)(param_1 + 0x860) != 0) {
    uVar8 = FUN_004c6770(param_1,param_2,param_3 + uVar19,*(undefined8 *)(param_1 + 6000),&local_68)
    ;
    if ((int)uVar8 < 1) {
LAB_004c6720:
      *(ulong *)(param_1 + 0x1750) = uVar19;
      return uVar8;
    }
    uVar19 = local_68 + uVar19;
  }
  if (uVar19 == param_4) {
    if (((*(byte *)(param_1 + 0x5d0) >> 4 & 1) != 0) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
      FUN_004c9870(param_1);
    }
    *param_5 = param_4;
    return 1;
  }
  uVar5 = FUN_004c5ac0(param_1);
  uVar18 = (ulong)uVar5;
  uVar6 = FUN_004c5af0(param_1);
  uVar20 = *(ulong *)(param_1 + 0x600);
  if (0x20 < uVar20) {
    uVar8 = 0x44;
    uVar9 = 0x233;
    goto LAB_004c6184;
  }
  uVar21 = (ulong)uVar6;
  if ((uVar20 == 0) || (*(long *)(param_1 + 0x468) == 0)) {
LAB_004c62e0:
    uVar20 = 1;
  }
  else {
    FUN_0041c7c0();
    uVar7 = FUN_0041c7b0();
    if (((uVar7 >> 0x17 & 1) == 0) ||
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0)) goto LAB_004c62e0;
  }
  uVar2 = _UNK_03888e98;
  uVar1 = _DAT_03888e90;
  if (uVar6 - 1 < uVar5) {
    param_4 = param_4 - uVar19;
    if (param_2 != 0x17) {
      if (param_4 == 0) goto LAB_004c657c;
LAB_004c656c:
      uVar10 = 0;
      if (uVar21 != 0) {
        uVar10 = (param_4 - 1) / uVar21;
      }
      uVar10 = uVar10 + 1;
      uVar17 = param_4;
      do {
        uVar22 = uVar20;
        if (uVar10 <= uVar20) {
          uVar22 = uVar10;
        }
        uVar10 = 0;
        if (uVar22 != 0) {
          uVar10 = uVar17 / uVar22;
        }
        if (uVar10 < uVar18) {
          if (uVar22 != 0) {
            uVar11 = uVar17 - uVar10 * uVar22;
            if (uVar22 < 8) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar22 & 0xfffffffffffffff8;
              uVar16 = uVar13;
              puVar15 = local_148;
              uVar23 = uVar1;
              uVar24 = uVar2;
              do {
                uVar16 = uVar16 - 8;
                uVar25 = uVar23 + 4;
                uVar26 = uVar24 + 4;
                uVar27 = uVar23 + 6;
                uVar28 = uVar24 + 6;
                puVar15[-3] = uVar10 + (uVar24 < uVar11);
                puVar15[-4] = uVar10 + (uVar23 < uVar11);
                puVar15[-1] = uVar10 + (uVar24 + 2 < uVar11);
                puVar15[-2] = uVar10 + (uVar23 + 2 < uVar11);
                uVar23 = uVar23 + 8;
                uVar24 = uVar24 + 8;
                puVar15[1] = uVar10 + (uVar26 < uVar11);
                *puVar15 = uVar10 + (uVar25 < uVar11);
                puVar15[3] = uVar10 + (uVar28 < uVar11);
                puVar15[2] = uVar10 + (uVar27 < uVar11);
                puVar15 = puVar15 + 8;
              } while (uVar16 != 0);
              if (uVar22 == uVar13) goto LAB_004c66d4;
            }
            do {
              uVar16 = uVar10;
              if (uVar13 < uVar11) {
                uVar16 = uVar10 + 1;
              }
              local_168[uVar13] = uVar16;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar22);
          }
        }
        else if (uVar22 != 0) {
          if (uVar22 < 8) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar22 & 0xfffffffffffffff8;
            uVar10 = (uVar11 - 8 >> 3) + 1;
            uVar13 = uVar10 & 3;
            if (uVar11 - 8 < 0x18) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              lVar12 = uVar13 - uVar10;
              puVar15 = local_e8;
              do {
                puVar15[-0xf] = uVar18;
                puVar15[-0x10] = uVar18;
                puVar15[-0xd] = uVar18;
                puVar15[-0xe] = uVar18;
                lVar14 = lVar14 + 0x20;
                lVar12 = lVar12 + 4;
                puVar15[-0xb] = uVar18;
                puVar15[-0xc] = uVar18;
                puVar15[-9] = uVar18;
                puVar15[-10] = uVar18;
                puVar15[1] = uVar18;
                *puVar15 = uVar18;
                puVar15[3] = uVar18;
                puVar15[2] = uVar18;
                puVar15[5] = uVar18;
                puVar15[4] = uVar18;
                puVar15[7] = uVar18;
                puVar15[6] = uVar18;
                puVar15[9] = uVar18;
                puVar15[8] = uVar18;
                puVar15[0xb] = uVar18;
                puVar15[10] = uVar18;
                puVar15[0xd] = uVar18;
                puVar15[0xc] = uVar18;
                puVar15[0xf] = uVar18;
                puVar15[0xe] = uVar18;
                puVar15[-7] = uVar18;
                puVar15[-8] = uVar18;
                puVar15[-5] = uVar18;
                puVar15[-6] = uVar18;
                puVar15[-3] = uVar18;
                puVar15[-4] = uVar18;
                puVar15[-1] = uVar18;
                puVar15[-2] = uVar18;
                puVar15 = puVar15 + 0x20;
              } while (lVar12 != 0);
            }
            if (uVar13 != 0) {
              lVar12 = -uVar13;
              puVar15 = local_148 + lVar14;
              do {
                puVar15[-3] = uVar18;
                puVar15[-4] = uVar18;
                puVar15[-1] = uVar18;
                puVar15[-2] = uVar18;
                bVar3 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                puVar15[1] = uVar18;
                *puVar15 = uVar18;
                puVar15[3] = uVar18;
                puVar15[2] = uVar18;
                puVar15 = puVar15 + 8;
              } while (bVar3);
            }
            if (uVar22 == uVar11) goto LAB_004c66d4;
          }
          do {
            local_168[uVar11] = uVar18;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar22);
        }
LAB_004c66d4:
        uVar8 = FUN_004c6910(param_1,param_2,param_3 + uVar19,local_168,uVar22,0,&local_68);
        if ((int)uVar8 < 1) goto LAB_004c6720;
        param_4 = uVar17 - local_68;
        if (param_4 == 0) goto LAB_004c6728;
        uVar19 = local_68 + uVar19;
        if (param_4 != 0) goto LAB_004c656c;
LAB_004c657c:
        uVar10 = 1;
        uVar17 = param_4;
      } while( true );
    }
    if (param_4 == 0) goto LAB_004c6360;
LAB_004c6350:
    uVar10 = 0;
    if (uVar21 != 0) {
      uVar10 = (param_4 - 1) / uVar21;
    }
    uVar10 = uVar10 + 1;
    uVar22 = param_4;
    do {
      uVar17 = uVar20;
      if (uVar10 <= uVar20) {
        uVar17 = uVar10;
      }
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar22 / uVar17;
      }
      if (uVar10 < uVar18) {
        if (uVar17 != 0) {
          uVar11 = uVar22 - uVar10 * uVar17;
          if (uVar17 < 8) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar17 & 0xfffffffffffffff8;
            uVar16 = uVar13;
            puVar15 = local_148;
            uVar23 = uVar1;
            uVar24 = uVar2;
            do {
              uVar16 = uVar16 - 8;
              uVar25 = uVar23 + 4;
              uVar26 = uVar24 + 4;
              uVar27 = uVar23 + 6;
              uVar28 = uVar24 + 6;
              puVar15[-3] = uVar10 + (uVar24 < uVar11);
              puVar15[-4] = uVar10 + (uVar23 < uVar11);
              puVar15[-1] = uVar10 + (uVar24 + 2 < uVar11);
              puVar15[-2] = uVar10 + (uVar23 + 2 < uVar11);
              uVar23 = uVar23 + 8;
              uVar24 = uVar24 + 8;
              puVar15[1] = uVar10 + (uVar26 < uVar11);
              *puVar15 = uVar10 + (uVar25 < uVar11);
              puVar15[3] = uVar10 + (uVar28 < uVar11);
              puVar15[2] = uVar10 + (uVar27 < uVar11);
              puVar15 = puVar15 + 8;
            } while (uVar16 != 0);
            if (uVar17 == uVar13) goto LAB_004c64bc;
          }
          do {
            uVar16 = uVar10;
            if (uVar13 < uVar11) {
              uVar16 = uVar10 + 1;
            }
            local_168[uVar13] = uVar16;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar17);
        }
      }
      else if (uVar17 != 0) {
        if (uVar17 < 8) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar17 & 0xfffffffffffffff8;
          uVar10 = (uVar11 - 8 >> 3) + 1;
          uVar13 = uVar10 & 3;
          if (uVar11 - 8 < 0x18) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            lVar12 = uVar13 - uVar10;
            puVar15 = local_e8;
            do {
              puVar15[-0xf] = uVar18;
              puVar15[-0x10] = uVar18;
              puVar15[-0xd] = uVar18;
              puVar15[-0xe] = uVar18;
              lVar14 = lVar14 + 0x20;
              lVar12 = lVar12 + 4;
              puVar15[-0xb] = uVar18;
              puVar15[-0xc] = uVar18;
              puVar15[-9] = uVar18;
              puVar15[-10] = uVar18;
              puVar15[1] = uVar18;
              *puVar15 = uVar18;
              puVar15[3] = uVar18;
              puVar15[2] = uVar18;
              puVar15[5] = uVar18;
              puVar15[4] = uVar18;
              puVar15[7] = uVar18;
              puVar15[6] = uVar18;
              puVar15[9] = uVar18;
              puVar15[8] = uVar18;
              puVar15[0xb] = uVar18;
              puVar15[10] = uVar18;
              puVar15[0xd] = uVar18;
              puVar15[0xc] = uVar18;
              puVar15[0xf] = uVar18;
              puVar15[0xe] = uVar18;
              puVar15[-7] = uVar18;
              puVar15[-8] = uVar18;
              puVar15[-5] = uVar18;
              puVar15[-6] = uVar18;
              puVar15[-3] = uVar18;
              puVar15[-4] = uVar18;
              puVar15[-1] = uVar18;
              puVar15[-2] = uVar18;
              puVar15 = puVar15 + 0x20;
            } while (lVar12 != 0);
          }
          if (uVar13 != 0) {
            lVar12 = -uVar13;
            puVar15 = local_148 + lVar14;
            do {
              puVar15[-3] = uVar18;
              puVar15[-4] = uVar18;
              puVar15[-1] = uVar18;
              puVar15[-2] = uVar18;
              bVar3 = lVar12 != -1;
              lVar12 = lVar12 + 1;
              puVar15[1] = uVar18;
              *puVar15 = uVar18;
              puVar15[3] = uVar18;
              puVar15[2] = uVar18;
              puVar15 = puVar15 + 8;
            } while (bVar3);
          }
          if (uVar17 == uVar11) goto LAB_004c64bc;
        }
        do {
          local_168[uVar11] = uVar18;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar17);
      }
LAB_004c64bc:
      uVar8 = FUN_004c6910(param_1,0x17,param_3 + uVar19,local_168,uVar17,0,&local_68);
      if ((int)uVar8 < 1) goto LAB_004c6720;
      param_4 = uVar22 - local_68;
      uVar17 = uVar22;
      if (param_4 == 0) {
LAB_004c6728:
        uVar22 = uVar17;
LAB_004c672c:
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xdc) = 0;
        if ((((int)uVar8 == (int)uVar22) && ((*(byte *)(param_1 + 0x5d0) >> 4 & 1) != 0)) &&
           ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
          FUN_004c9870(param_1);
        }
        *param_5 = uVar17 + uVar19;
        return 1;
      }
      uVar17 = local_68;
      if ((*(byte *)(param_1 + 0x5d0) & 1) != 0) goto LAB_004c672c;
      uVar19 = local_68 + uVar19;
      if (param_4 != 0) goto LAB_004c6350;
LAB_004c6360:
      uVar10 = 1;
      uVar22 = param_4;
    } while( true );
  }
  uVar8 = 0x44;
  uVar9 = 0x243;
LAB_004c6184:
  FUN_004c99a0(param_1,0x50,0x9e,uVar8,"external/openssl/ssl/record/rec_layer_s3.c",uVar9);
  return 0xffffffff;
}


