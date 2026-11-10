/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf680; name: FUN_031bf680
 */


undefined4
FUN_031bf680(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  short sVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  int *piVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  undefined8 uVar38;
  int local_b8 [2];
  long local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_68;
  int local_64;
  
  lVar13 = (long)(int)param_3[1] + -1;
  puVar10 = (undefined8 *)*param_3;
  uVar4 = *(undefined4 *)puVar10;
  *(int *)(param_3 + 1) = (int)lVar13;
  *puVar10 = puVar10[lVar13];
  iVar6 = (int)param_3[1];
  uVar14 = 1;
  if (2 < iVar6) {
    uVar12 = 1;
    if (*(int *)(*param_3 + 0x14) < *(int *)(*param_3 + 0xc)) {
      uVar12 = 2;
    }
    uVar14 = (ulong)uVar12;
  }
  if ((int)uVar14 < iVar6) {
    uVar20 = 0;
    do {
      uVar19 = uVar14 & 0xffffffff;
      lVar13 = *param_3;
      iVar17 = (int)uVar14;
      if (*(int *)(lVar13 + (long)(int)uVar20 * 8 + 4) <= *(int *)(lVar13 + (long)iVar17 * 8 + 4))
      break;
      lVar21 = (long)(int)uVar20 * 8;
      uVar23 = *(undefined8 *)(lVar13 + lVar21);
      *(undefined8 *)(lVar13 + lVar21) = *(undefined8 *)(lVar13 + (long)iVar17 * 8);
      *(undefined8 *)(lVar13 + (long)iVar17 * 8) = uVar23;
      uVar14 = (long)(iVar17 << 1) | 1;
      lVar13 = (long)(iVar17 << 1) + 2;
      if ((int)lVar13 < (int)param_3[1]) {
        uVar12 = (uint)uVar14;
        if (*(int *)(*param_3 + lVar13 * 8 + 4) < *(int *)(*param_3 + uVar14 * 8 + 4)) {
          uVar12 = uVar12 + 1;
        }
        uVar14 = (ulong)uVar12;
      }
      uVar20 = uVar19;
    } while ((int)uVar14 < iVar6);
  }
  FUN_031c027c(param_8);
  sVar11 = *(short *)((long)param_1 + 0x6e);
  uVar12 = *(uint *)((long)param_1 + 0x84);
  fVar26 = **(float **)(param_7 + 0x48);
  lVar13 = tpidr_el0;
  iVar6 = (uVar12 + (int)sVar11) * 4;
  if (uVar12 + (int)sVar11 == 0) {
    piVar8 = (int *)0x0;
    iVar17 = 0;
    goto LAB_031bf820;
  }
  lVar21 = *(long *)(lVar13 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar21;
  }
  lVar21 = *(long *)(lVar21 + 8);
  uVar14 = (ulong)(int)(iVar6 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar21 + 0x10) < uVar14) {
LAB_031bf980:
    piVar8 = (int *)FUN_032ce670();
  }
  else {
    piVar8 = *(int **)(lVar21 + 0x18);
    uVar14 = (long)piVar8 + uVar14;
    if (*(ulong *)(lVar21 + 0x20) < uVar14) goto LAB_031bf980;
    *(ulong *)(lVar21 + 0x18) = uVar14;
  }
  sVar11 = *(short *)((long)param_1 + 0x6e);
  uVar12 = *(uint *)((long)param_1 + 0x84);
  iVar17 = uVar12 + (int)sVar11;
LAB_031bf820:
  piVar16 = piVar8;
  if (0 < sVar11) {
    lVar21 = param_1[0xf];
    uVar12 = (int)sVar11 & 3;
    if ((int)sVar11 - 1U < 3) {
      lVar22 = 0;
    }
    else {
      lVar22 = 0;
      do {
        piVar15 = piVar16;
        iVar28 = (int)lVar21 + (int)lVar22;
        piVar16 = piVar8 + lVar22;
        lVar22 = lVar22 + 4;
        *piVar16 = iVar28;
        piVar16[1] = iVar28 + 1;
        piVar16[2] = iVar28 + 2;
        piVar16[3] = iVar28 + 3;
        piVar16 = piVar16 + 4;
      } while ((int)sVar11 - uVar12 != (int)lVar22);
      piVar16 = piVar15 + 4;
    }
    if (uVar12 != 0) {
      iVar28 = (int)lVar22 + (int)lVar21;
      piVar15 = piVar16;
      do {
        piVar16 = piVar15 + 1;
        *piVar15 = iVar28;
        uVar12 = uVar12 - 1;
        iVar28 = iVar28 + 1;
        piVar15 = piVar16;
      } while (uVar12 != 0);
    }
    uVar12 = *(uint *)((long)param_1 + 0x84);
  }
  if (0 < (int)uVar12) {
    lVar21 = param_1[0x10];
    uVar18 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      lVar22 = 0;
    }
    else {
      lVar22 = 0;
      piVar15 = piVar16;
      do {
        piVar24 = piVar15;
        iVar28 = (int)lVar21 + (int)lVar22;
        piVar15 = piVar16 + lVar22;
        lVar22 = lVar22 + 4;
        *piVar15 = iVar28;
        piVar15[1] = iVar28 + 1;
        piVar15[2] = iVar28 + 2;
        piVar15[3] = iVar28 + 3;
        piVar15 = piVar15 + 4;
      } while (uVar12 - uVar18 != (int)lVar22);
      piVar16 = piVar24 + 4;
    }
    if (uVar18 != 0) {
      iVar28 = (int)lVar22 + (int)lVar21;
      do {
        *piVar16 = iVar28;
        uVar18 = uVar18 - 1;
        iVar28 = iVar28 + 1;
        piVar16 = piVar16 + 1;
      } while (uVar18 != 0);
    }
  }
  local_64 = iVar6;
  if (0 < iVar17) {
    piVar16 = piVar8;
    do {
      if (*(int *)(param_4 + 0x18) <= *(int *)(param_4 + 0x1c)) break;
      iVar6 = *piVar16;
      local_68 = iVar6;
      FUN_031c039c(param_8,&local_68);
      uVar12 = *(uint *)((long)param_1 + 0x8c);
      uVar18 = uVar12 >> 0x16;
      if (*(uint *)((long)param_2 + 100) != uVar18) {
        param_2[0xb] = *(long *)(*(long *)(*param_2 + 0x38) + (ulong)uVar18 * 0xf0 + 8);
        *(uint *)((long)param_2 + 100) = uVar18;
      }
      FUN_031bf4b0(param_2,uVar12);
      lVar21 = param_2[9];
      if (uVar12 == 0xffffffff) {
        uVar23 = 0;
      }
      else {
        uVar23 = FUN_031befdc(lVar21,uVar12);
      }
      *(undefined8 *)(lVar21 + 0x48) = uVar23;
      plVar9 = (long *)param_2[3];
      if (plVar9 == (long *)0x0) {
LAB_031bfa6c:
        fVar33 = ((float)param_1[0x2c] + (float)param_1[0x2e]) * 0.5;
        fVar35 = ((float)((ulong)param_1[0x2c] >> 0x20) + (float)((ulong)param_1[0x2e] >> 0x20)) *
                 0.5;
        fVar37 = ((float)param_1[0x2d] + (float)param_1[0x2f]) * 0.5;
        fVar27 = (float)param_1[0x18] - fVar33;
        fVar29 = (float)((ulong)param_1[0x18] >> 0x20) - fVar35;
        fVar31 = (float)param_1[0x19] - fVar37;
        fVar27 = fVar27 * fVar27;
        fVar29 = fVar29 * fVar29;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar27 + fVar29 + fVar31;
        fVar31 = fVar27 + fVar29 + fVar31;
        uVar23 = CONCAT44(fVar31,fVar32);
        uVar38 = NEON_frsqrte(uVar23,4);
        fVar27 = (float)uVar38;
        fVar29 = (float)((ulong)uVar38 >> 0x20);
        uVar38 = NEON_frsqrts(uVar23,CONCAT44(fVar29 * fVar29,fVar27 * fVar27),4);
        fVar27 = fVar27 * (float)uVar38;
        fVar29 = fVar29 * (float)((ulong)uVar38 >> 0x20);
        uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar29 * fVar29,fVar27 * fVar27),4);
        iVar28 = -(uint)(fVar32 <= 0.0);
        iVar30 = -(uint)(fVar31 <= 0.0);
        fVar32 = (float)uVar23 * fVar27 * fVar32;
        fVar31 = (float)((ulong)uVar23 >> 0x20) * fVar29 * fVar31;
        fVar27 = (float)param_1[0x20];
        fVar29 = (float)((ulong)param_1[0x20] >> 0x20);
        if ((*(byte *)((long)param_1 + 0x8a) >> 4 & 1) == 0) {
          fVar33 = fVar33 - fVar27;
          fVar35 = fVar35 - fVar29;
          fVar37 = fVar37 - (float)param_1[0x21];
          fVar33 = fVar33 * fVar33;
          fVar35 = fVar35 * fVar35;
          fVar37 = fVar37 * fVar37;
          fVar27 = fVar37 + fVar33 + fVar35;
          fVar37 = fVar37 + fVar33 + fVar35;
          uVar23 = CONCAT44(fVar37,fVar27);
          uVar38 = NEON_frsqrte(uVar23,4);
          fVar29 = (float)uVar38;
          fVar33 = (float)((ulong)uVar38 >> 0x20);
          uVar38 = NEON_frsqrts(uVar23,CONCAT44(fVar33 * fVar33,fVar29 * fVar29),4);
          fVar29 = fVar29 * (float)uVar38;
          fVar33 = fVar33 * (float)((ulong)uVar38 >> 0x20);
          uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar33 * fVar33,fVar29 * fVar29),4);
          iVar34 = -(uint)(fVar27 <= 0.0);
          iVar36 = -(uint)(fVar37 <= 0.0);
          fVar27 = fVar27 * (float)uVar23 * fVar29;
          fVar37 = fVar37 * (float)((ulong)uVar23 >> 0x20) * fVar33;
          uVar23 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar37,0) & ~(byte)iVar36,
                                                        CONCAT13((byte)((uint)fVar27 >> 0x18) &
                                                                 ~(byte)((uint)iVar34 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar27 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar34 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar27 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar27,0) & ~(byte)iVar34)))))));
        }
        else {
          fVar27 = (float)param_1[0x30] - fVar27;
          fVar29 = (float)((ulong)param_1[0x30] >> 0x20) - fVar29;
          fVar35 = (float)param_1[0x31] - (float)param_1[0x21];
          fVar27 = fVar27 * fVar27;
          fVar29 = fVar29 * fVar29;
          fVar35 = fVar35 * fVar35;
          fVar33 = fVar27 + fVar29 + fVar35;
          fVar35 = fVar27 + fVar29 + fVar35;
          uVar23 = CONCAT44(fVar35,fVar33);
          uVar38 = NEON_frsqrte(uVar23,4);
          fVar27 = (float)uVar38;
          fVar29 = (float)((ulong)uVar38 >> 0x20);
          uVar38 = NEON_frsqrts(uVar23,CONCAT44(fVar29 * fVar29,fVar27 * fVar27),4);
          fVar27 = fVar27 * (float)uVar38;
          fVar29 = fVar29 * (float)((ulong)uVar38 >> 0x20);
          uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar29 * fVar29,fVar27 * fVar27),4);
          iVar34 = -(uint)(fVar33 <= 0.0);
          iVar36 = -(uint)(fVar35 <= 0.0);
          fVar33 = fVar33 * (float)uVar23 * fVar27;
          fVar35 = fVar35 * (float)((ulong)uVar23 >> 0x20) * fVar29;
          fVar27 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                   CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                            ~(byte)((uint)iVar34 >> 0x10),
                                            CONCAT11((byte)((uint)fVar33 >> 8) &
                                                     ~(byte)((uint)iVar34 >> 8),
                                                     SUB41(fVar33,0) & ~(byte)iVar34)));
          uVar23 = CONCAT44(*(float *)(param_1[0x28] + 0x14) +
                            (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) &
                                             ~(byte)((uint)iVar36 >> 0x18),
                                             CONCAT16((byte)((uint)fVar35 >> 0x10) &
                                                      ~(byte)((uint)iVar36 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar35 >> 8) &
                                                               ~(byte)((uint)iVar36 >> 8),
                                                               CONCAT14(SUB41(fVar35,0) &
                                                                        ~(byte)iVar36,fVar27)))) >>
                                   0x20),*(float *)(param_1[0x28] + 0x14) + fVar27);
        }
        fVar27 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                 CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                          ~(byte)((uint)iVar28 >> 0x10),
                                          CONCAT11((byte)((uint)fVar32 >> 8) &
                                                   ~(byte)((uint)iVar28 >> 8),
                                                   SUB41(fVar32,0) & ~(byte)iVar28)));
        plVar9 = (long *)param_1[2];
        if (plVar9 == (long *)0x0) {
          fVar27 = fVar26 + fVar27 + (float)uVar23;
        }
        else {
          local_b0 = *param_1;
          local_98 = 1;
          local_a8 = param_1 + 1;
          local_a0 = param_1 + 0x16;
          local_90 = CONCAT44(fVar26,fVar26);
          uStack_88 = CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                               CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar31 >> 8) &
                                                  ~(byte)((uint)iVar30 >> 8),
                                                  CONCAT14(SUB41(fVar31,0) & ~(byte)iVar30,fVar27)))
                              );
          local_80 = uVar23;
          fVar27 = (float)(**(code **)(*plVar9 + 0x28))(plVar9,&local_b0);
          fVar27 = fVar26 + fVar27;
        }
        if ((fVar27 <= *(float *)(param_7 + 0x38)) &&
           ((pfVar25 = *(float **)(param_7 + 0x48),
            (*(byte *)(*(long *)(param_4 + 0x48) + 0xe) & 3) == 0 || (fVar27 < *pfVar25)))) {
          *pfVar25 = fVar27;
          if ((*(byte *)((long)pfVar25 + 0xe) & 3) == 0) {
            fVar27 = (float)FUN_031c01d0(param_6);
            pfVar25[1] = fVar27;
            if (fVar27 < *(float *)(param_7 + 0x34)) {
              *(float *)(param_7 + 0x34) = fVar27;
              *(uint *)(param_7 + 0x30) = uVar12;
            }
          }
          local_b8[0] = iVar6;
          FUN_031c0498(param_5,uVar12,local_b8);
          fVar27 = **(float **)(param_7 + 0x48) +
                   *(float *)(param_7 + 0x3c) * (*(float **)(param_7 + 0x48))[1];
          if (fVar27 <= *(float *)(param_7 + 0x38)) {
            uVar5 = *(ushort *)(*(long *)(param_4 + 0x48) + 0xe);
            *(ushort *)(*(long *)(param_4 + 0x48) + 0xe) = uVar5 & 0xfffc | 1;
            if ((uVar5 & 1) == 0) {
              uVar18 = *(uint *)(param_3 + 1);
              if (*(int *)((long)param_3 + 0xc) <= (int)uVar18) break;
              lVar21 = (long)(int)uVar18;
              *(uint *)(param_3 + 1) = uVar18 + 1;
              puVar1 = (uint *)(*param_3 + lVar21 * 8);
              *puVar1 = uVar12;
              puVar1[1] = (uint)fVar27;
              lVar22 = *param_3;
              puVar2 = (undefined4 *)(lVar22 + lVar21 * 8);
              uVar3 = *puVar2;
              iVar6 = puVar2[1];
              if (0 < (int)uVar18) {
                do {
                  uVar7 = uVar18 - 1;
                  uVar12 = uVar18;
                  if (-1 < (int)uVar7) {
                    uVar12 = uVar7;
                  }
                  if (*(int *)(lVar22 + (long)((int)uVar12 >> 1) * 8 + 4) <= iVar6) {
                    lVar21 = (long)(int)uVar18;
                    break;
                  }
                  lVar21 = (long)((ulong)uVar12 << 0x20) >> 0x21;
                  *(undefined8 *)(lVar22 + (long)(int)uVar18 * 8) =
                       *(undefined8 *)(lVar22 + lVar21 * 8);
                  lVar22 = *param_3;
                  uVar18 = (int)uVar12 >> 1;
                } while (1 < (int)uVar7);
              }
              *(undefined4 *)(lVar22 + lVar21 * 8) = uVar3;
              *(int *)(*param_3 + lVar21 * 8 + 4) = iVar6;
            }
            else {
              FUN_031c0534(param_3,uVar12);
            }
          }
        }
      }
      else {
        local_b0 = *param_2;
        local_98 = 1;
        local_a8 = param_2 + 1;
        local_a0 = param_2 + 0x16;
        uVar14 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_b0);
        if ((uVar14 & 1) != 0) goto LAB_031bfa6c;
      }
      piVar16 = piVar16 + 1;
    } while (piVar16 < piVar8 + iVar17);
  }
  *(ushort *)(*(long *)(param_4 + 0x50) + 0xe) =
       *(ushort *)(*(long *)(param_4 + 0x50) + 0xe) & 0xfffc | 2;
  lVar21 = *(long *)(lVar13 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar21;
  }
  lVar13 = *(long *)(lVar21 + 8);
  uVar14 = (ulong)(int)(local_64 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar13 + 0x10) < uVar14) || (*(long *)(lVar13 + 0x18) != (long)piVar8 + uVar14))
     || (*(int **)(lVar13 + 0x28) == piVar8)) {
    FUN_032cedf0();
  }
  else {
    *(int **)(lVar13 + 0x18) = piVar8;
  }
  return uVar4;
}


