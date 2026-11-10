/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316085c; name: FUN_0316085c
 */


/* WARNING: Removing unreachable block (ram,0x031613d0) */
/* WARNING: Removing unreachable block (ram,0x03160d80) */
/* WARNING: Removing unreachable block (ram,0x03160d18) */
/* WARNING: Removing unreachable block (ram,0x03160de8) */
/* WARNING: Removing unreachable block (ram,0x03161440) */

undefined8
FUN_0316085c(long param_1,uint param_2,long param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,int *param_8,undefined8 param_9,undefined8 param_10,
            undefined8 param_11)

{
  float *pfVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ushort uVar17;
  short sVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  float *pfVar24;
  int iVar25;
  long lVar26;
  undefined1 *puVar27;
  ushort *puVar28;
  ushort uVar29;
  undefined8 uVar30;
  long lVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ushort *local_198;
  uint local_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  uint local_128;
  float *local_120;
  undefined8 local_118;
  float *local_110;
  undefined8 local_108;
  float *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar11 = nn::os::GetSystemTick();
  lVar12 = nn::os::GetSystemTick();
  lVar13 = *(long *)(param_1 + 0x30);
  fVar33 = *(float *)(param_1 + 0x3c);
  uVar32 = (uint)param_7;
  if (*(float *)(lVar13 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) + *(float *)(param_1 + 0x40) <
      fVar33) {
    uVar19 = *(uint *)(param_3 + 8);
    uVar20 = 0xffffffff;
    if (uVar19 != 0xffffffff) {
      uVar20 = uVar19 & 0x3fffff | param_2 & 0xffc00000;
    }
    uVar2 = uVar19;
    if ((*(byte *)(param_3 + 0x10) & 0x40) == 0) {
      uVar2 = uVar20;
    }
    uVar20 = uVar2 & 0x3fffff;
    uVar21 = (ulong)uVar20;
    lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0) + 0x20);
    iVar10 = *(int *)(lVar26 + 0x30);
    if (*(int *)(param_1 + 0x14) < 0) {
      iVar25 = *(int *)(lVar26 + 0x60);
      uVar19 = uVar20 - iVar10;
      if ((int)uVar20 < iVar10) {
        uVar19 = uVar20;
        if ((*(int *)(lVar26 + 0x78) == 0) ||
           (uVar19 = *(uint *)(*(long *)(lVar26 + 0x70) + uVar21 * 4), uVar19 != 0xffffffff)) {
          lVar31 = *(long *)(lVar26 + 0x130) + (long)(int)(uVar19 * iVar25) * 4;
          lVar26 = *(long *)(lVar26 + 0xc0);
          goto LAB_03161300;
        }
        lVar31 = *(long *)(lVar26 + 0x58) + (long)(int)(iVar25 * uVar20) * 4;
        lVar15 = lVar31 + (long)iVar25 * 4;
        lVar26 = *(long *)(lVar26 + 0x28) + uVar21 * 0x14;
      }
      else {
        lVar31 = *(long *)(lVar26 + 0x150) + (long)(int)(iVar25 * uVar19) * 4;
        lVar26 = *(long *)(lVar26 + 0xe0);
LAB_03161300:
        lVar15 = lVar31 + (long)iVar25 * 4;
        lVar26 = lVar26 + (long)(int)uVar19 * 0x14;
      }
      local_f0 = (int *)CONCAT44(fVar33,fVar33);
      iVar10 = FUN_031715c0(lVar13,*(undefined8 *)(param_1 + 0x20),uVar2,lVar26,lVar31,lVar15,
                            param_7 & 0xffffffff,param_8,param_9,param_10,param_11,param_1,&local_f0
                            ,param_1 + 2000);
    }
    else {
      if ((int)uVar20 < iVar10) {
        if ((*(int *)(lVar26 + 0x78) == 0) ||
           (uVar20 = *(uint *)(*(long *)(lVar26 + 0x70) + uVar21 * 4), uVar20 != 0xffffffff)) {
          lVar26 = *(long *)(lVar26 + 0xc0) + (long)(int)uVar20 * 0x14;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x28) + uVar21 * 0x14;
        }
      }
      else {
        lVar26 = *(long *)(lVar26 + 0xe0) + (long)(int)(uVar20 - iVar10) * 0x14;
      }
      uVar21 = param_7 >> 0x16 & 0x3ff;
      lVar31 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x38) + uVar21 * 0xf0) + 0x38) +
                        (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
      uVar29 = *(ushort *)(*(long *)(lVar31 + 0x50) + ((ulong)uVar19 & 0x3fffff) * 2);
      uVar17 = uVar29 >> 8;
      if (0xfe < uVar17) {
        sVar3 = (short)param_8[2];
        local_f0 = (int *)0x0;
        local_e8 = 0x8000000000000000;
        local_d8 = CONCAT44(local_d8._4_4_,(int)sVar3);
        lVar13 = tpidr_el0;
        if (sVar3 == 0) {
          sVar18 = 0;
          local_e0 = (int *)0x0;
        }
        else {
          lVar31 = *(long *)(lVar13 + 0x38d490);
          if (lVar31 == 0) {
            lVar31 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar31;
          }
          lVar31 = *(long *)(lVar31 + 8);
          uVar16 = (long)(int)sVar3 * 8 + 0x7fU & 0xffffffffffffff80;
          if (*(ulong *)(lVar31 + 0x10) < uVar16) {
LAB_0316162c:
            local_e0 = (int *)FUN_032ce670(lVar31);
          }
          else {
            local_e0 = *(int **)(lVar31 + 0x18);
            uVar16 = (long)local_e0 + uVar16;
            if (*(ulong *)(lVar31 + 0x20) < uVar16) goto LAB_0316162c;
            *(ulong *)(lVar31 + 0x18) = uVar16;
          }
          sVar18 = (short)param_8[2];
        }
        local_e8 = CONCAT44((int)sVar3,(int)local_e8) | 0x8000000000000000;
        iVar10 = (int)*(short *)((long)param_8 + 10) + (int)sVar18;
        local_110 = (float *)0x0;
        local_108 = (undefined8 *)0x8000000000000000;
        local_f8 = iVar10;
        local_f0 = local_e0;
        if (iVar10 == 0) {
          local_100 = (float *)0x0;
        }
        else {
          lVar31 = *(long *)(lVar13 + 0x38d490);
          if (lVar31 == 0) {
            lVar31 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar31;
          }
          lVar31 = *(long *)(lVar31 + 8);
          uVar16 = (ulong)(int)(iVar10 * 8 + 0x7fU & 0xffffff80);
          if (uVar16 <= *(ulong *)(lVar31 + 0x10)) {
            local_100 = *(float **)(lVar31 + 0x18);
            uVar16 = (long)local_100 + uVar16;
            if (uVar16 <= *(ulong *)(lVar31 + 0x20)) {
              *(ulong *)(lVar31 + 0x18) = uVar16;
              goto LAB_03160bc4;
            }
          }
          local_100 = (float *)FUN_032ce670(lVar31);
        }
LAB_03160bc4:
        local_108 = (undefined8 *)(CONCAT44(iVar10,(int)local_108) | 0x8000000000000000);
        local_118 = 0x8000000000000000;
        local_120 = (float *)0x0;
        lVar15 = *(long *)(param_1 + 0x30);
        plVar14 = (long *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x38) + uVar21 * 0xf0) + 0x38) +
                          (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
        local_110 = local_100;
        if ((char)plVar14[2] == '\x01') {
          lVar31 = *plVar14;
        }
        else {
          lVar31 = FUN_03165a00(plVar14);
          lVar15 = *(long *)(param_1 + 0x30);
        }
        local_140 = (undefined1 *)
                    CONCAT44(*(undefined4 *)(lVar31 + 0x18),*(undefined4 *)(lVar31 + 0x18));
        FUN_0316a4d0(lVar15,*(undefined8 *)(param_1 + 0x20),param_7 & 0xffffffff,param_8,param_9,
                     param_10,param_1,&local_140,&local_f0,&local_110,&local_120,param_1 + 0x630);
        iVar10 = (int)local_108 * 2;
        if ((int)local_108 == 0) {
          local_198 = (ushort *)0x0;
        }
        else {
          lVar15 = *(long *)(lVar13 + 0x38d490);
          if (lVar15 == 0) {
            lVar15 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar15;
          }
          lVar15 = *(long *)(lVar15 + 8);
          uVar21 = (ulong)(int)(iVar10 + 0x7fU & 0xffffff80);
          if (*(ulong *)(lVar15 + 0x10) < uVar21) {
LAB_03161614:
            local_198 = (ushort *)FUN_032ce670();
          }
          else {
            local_198 = *(ushort **)(lVar15 + 0x18);
            uVar21 = (long)local_198 + uVar21;
            if (*(ulong *)(lVar15 + 0x20) < uVar21) goto LAB_03161614;
            *(ulong *)(lVar15 + 0x18) = uVar21;
          }
          if (0 < (int)local_108) {
            fVar33 = local_110[1];
            fVar34 = *(float *)(lVar31 + 0x1c);
            iVar25 = (int)((fVar33 - fVar34) * *(float *)(lVar31 + 0x24));
            fVar35 = *local_110 * 253.0 + 0.5;
            if (fVar35 < 0.0) {
              uVar29 = 0;
              if (!(fVar34 < fVar33 && iVar25 == 0)) goto LAB_03160d24;
LAB_031617d4:
              uVar17 = 0x100;
            }
            else {
              uVar29 = (ushort)(int)fVar35;
              if (!(fVar33 <= fVar34 || iVar25 != 0)) goto LAB_031617d4;
LAB_03160d24:
              uVar17 = (ushort)(iVar25 << 8);
            }
            *local_198 = uVar17 | uVar29;
            if ((int)local_108 != 1) {
              fVar35 = *(float *)(lVar31 + 0x1c);
              fVar33 = local_110[3];
              iVar25 = (int)((fVar33 - fVar35) * *(float *)(lVar31 + 0x24));
              fVar34 = local_110[2] * 253.0 + 0.5;
              if (fVar34 < 0.0) {
                uVar29 = 0;
                if (!(fVar35 < fVar33 && iVar25 == 0)) goto LAB_03160d8c;
LAB_031617e8:
                uVar17 = 0x100;
              }
              else {
                uVar29 = (ushort)(int)fVar34;
                if (!(fVar33 <= fVar35 || iVar25 != 0)) goto LAB_031617e8;
LAB_03160d8c:
                uVar17 = (ushort)(iVar25 << 8);
              }
              local_198[1] = uVar17 | uVar29;
              if ((int)local_108 != 2) {
                fVar35 = *(float *)(lVar31 + 0x1c);
                fVar33 = local_110[5];
                iVar25 = (int)((fVar33 - fVar35) * *(float *)(lVar31 + 0x24));
                fVar34 = local_110[4] * 253.0 + 0.5;
                if (fVar34 < 0.0) {
                  uVar29 = 0;
                  if (!(fVar35 < fVar33 && iVar25 == 0)) goto LAB_03160df4;
LAB_031617fc:
                  uVar17 = 0x100;
                }
                else {
                  uVar29 = (ushort)(int)fVar34;
                  if (!(fVar33 <= fVar35 || iVar25 != 0)) goto LAB_031617fc;
LAB_03160df4:
                  uVar17 = (ushort)(iVar25 << 8);
                }
                local_198[2] = uVar17 | uVar29;
                if ((int)local_108 != 3) {
                  fVar35 = *(float *)(lVar31 + 0x1c);
                  fVar33 = local_110[7];
                  iVar25 = (int)((fVar33 - fVar35) * *(float *)(lVar31 + 0x24));
                  fVar34 = local_110[6] * 253.0 + 0.5;
                  if (fVar34 < 0.0) {
                    uVar29 = 0;
                    if (!(fVar35 < fVar33 && iVar25 == 0)) goto LAB_031613dc;
LAB_03161810:
                    uVar17 = 0x100;
                  }
                  else {
                    uVar29 = (ushort)(int)fVar34;
                    if (!(fVar33 <= fVar35 || iVar25 != 0)) goto LAB_03161810;
LAB_031613dc:
                    uVar17 = (ushort)(iVar25 << 8);
                  }
                  local_198[3] = uVar17 | uVar29;
                  if ((int)local_108 != 4) {
                    lVar15 = ((ulong)local_108 & 0xffffffff) - 4;
                    pfVar24 = local_110 + 9;
                    puVar28 = local_198 + 4;
                    do {
                      pfVar1 = pfVar24 + -1;
                      fVar35 = *pfVar24;
                      pfVar24 = pfVar24 + 2;
                      fVar34 = *pfVar1 * 253.0 + 0.5;
                      iVar25 = (int)((fVar35 - *(float *)(lVar31 + 0x1c)) *
                                    *(float *)(lVar31 + 0x24));
                      fVar33 = 0.0;
                      if (0.0 <= fVar34) {
                        fVar33 = fVar34;
                      }
                      uVar29 = 0x100;
                      if (fVar35 <= *(float *)(lVar31 + 0x1c) || iVar25 != 0) {
                        uVar29 = (ushort)(iVar25 << 8);
                      }
                      lVar15 = lVar15 + -1;
                      *puVar28 = uVar29 | (ushort)(int)fVar33;
                      puVar28 = puVar28 + 1;
                    } while (lVar15 != 0);
                  }
                }
              }
            }
          }
        }
        iVar7 = param_8[2];
        iVar25 = param_8[1];
        sVar3 = *(short *)((long)param_8 + 10);
        memcpy((void *)(*(long *)(lVar31 + 0x50) + (long)*param_8 * 2),local_198,
               (long)(short)iVar7 << 1);
        if (0 < (long)sVar3) {
          memcpy((void *)(*(long *)(lVar31 + 0x50) + (long)iVar25 * 2),local_198 + (short)iVar7,
                 (long)sVar3 << 1);
        }
        uVar29 = local_198[(int)((ulong)uVar19 & 0x3fffff) - *param_8];
        lVar15 = *(long *)(lVar13 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar15;
        }
        lVar15 = *(long *)(lVar15 + 8);
        uVar21 = (ulong)(int)(iVar10 + 0x7fU & 0xffffff80);
        if (*(ulong *)(lVar15 + 0x10) < uVar21) {
          *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),local_198);
        }
        else {
          lVar22 = (long)local_198 + uVar21;
          if ((*(long *)(lVar15 + 0x18) == lVar22) && (*(ushort **)(lVar15 + 0x28) != local_198)) {
            *(ushort **)(lVar15 + 0x18) = local_198;
          }
          else if (*(long *)(lVar15 + 0x18) == lVar22) {
            *(ushort **)(lVar15 + 0x18) = local_198;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar15,local_198);
          }
        }
        uVar20 = (uint)local_118;
        lVar15 = (long)(int)(uint)local_118;
        local_128 = (uint)local_118;
        local_140 = (undefined1 *)0x0;
        local_138 = 0x8000000000000000;
        if ((uint)local_118 == 0) {
          local_130 = (undefined1 *)0x0;
        }
        else {
          lVar22 = *(long *)(lVar13 + 0x38d490);
          if (lVar22 == 0) {
            lVar22 = FUN_0333d16c(0,1);
            *(long *)(lVar13 + 0x38d490) = lVar22;
          }
          lVar22 = *(long *)(lVar22 + 8);
          uVar21 = lVar15 + 0x7fU & 0xffffffffffffff80;
          if (uVar21 <= *(ulong *)(lVar22 + 0x10)) {
            local_130 = *(undefined1 **)(lVar22 + 0x18);
            if (local_130 + uVar21 <= *(undefined1 **)(lVar22 + 0x20)) {
              *(undefined1 **)(lVar22 + 0x18) = local_130 + uVar21;
              goto LAB_03160f08;
            }
          }
          local_130 = (undefined1 *)FUN_032ce670(lVar22);
        }
LAB_03160f08:
        local_138._4_4_ = uVar20 | 0x80000000;
        if ((int)local_138 != (uint)local_118) {
          local_138._0_4_ = (uint)local_118;
        }
        if (((0 < (int)(uint)local_118) &&
            (*local_130 = (char)(int)((*local_120 - *(float *)(lVar31 + 0x1c)) *
                                     *(float *)(lVar31 + 0x24)), (uint)local_118 != 1)) &&
           (local_130[1] = (char)(int)((local_120[1] - *(float *)(lVar31 + 0x1c)) *
                                      *(float *)(lVar31 + 0x24)), (uint)local_118 != 2)) {
          lVar15 = (local_118 & 0xffffffff) - 2;
          pfVar24 = local_120 + 2;
          puVar27 = local_130 + 2;
          do {
            lVar15 = lVar15 + -1;
            *puVar27 = (char)(int)((*pfVar24 - *(float *)(lVar31 + 0x1c)) *
                                  *(float *)(lVar31 + 0x24));
            pfVar24 = pfVar24 + 1;
            puVar27 = puVar27 + 1;
          } while (lVar15 != 0);
        }
        local_148[0] = uVar32 & 0x3fffff;
        local_140 = local_130;
        FUN_0315d2e4(lVar31,local_148,&local_140);
        puVar27 = local_130;
        if (local_130 == local_140) {
          local_138._0_4_ = 0;
        }
        lVar22 = (long)(int)local_128;
        lVar15 = *(long *)(lVar13 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar15;
        }
        puVar8 = PTR_PTR_0434a080;
        lVar15 = *(long *)(lVar15 + 8);
        uVar21 = lVar22 + 0x7fU & 0xffffffffffffff80;
        if (((*(ulong *)(lVar15 + 0x10) < uVar21) ||
            (*(undefined1 **)(lVar15 + 0x18) != puVar27 + uVar21)) ||
           (*(undefined1 **)(lVar15 + 0x28) == puVar27)) {
          if (puVar27 != (undefined1 *)0x0) {
            if (*(ulong *)(lVar15 + 0x10) < uVar21) {
              *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),puVar27);
            }
            else if (*(undefined1 **)(lVar15 + 0x18) == puVar27 + uVar21) {
              *(undefined1 **)(lVar15 + 0x18) = puVar27;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar15,puVar27);
            }
          }
        }
        else {
          *(undefined1 **)(lVar15 + 0x18) = puVar27;
        }
        uVar20 = local_138._4_4_;
        local_138 = (ulong)local_138._4_4_ << 0x20;
        if ((-1 < (int)uVar20) && (local_140 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_140,uVar20 & 0x3fffffff);
        }
        if ((((0 < (int)local_e8) &&
             (*(char *)(*(long *)(lVar31 + 0x60) + (long)*local_f0) =
                   (char)(int)(((float)local_f0[1] - *(float *)(lVar31 + 0x1c)) *
                              *(float *)(lVar31 + 0x24)), (int)local_e8 != 1)) &&
            (*(char *)(*(long *)(lVar31 + 0x60) + (long)local_f0[2]) =
                  (char)(int)(((float)local_f0[3] - *(float *)(lVar31 + 0x1c)) *
                             *(float *)(lVar31 + 0x24)), (int)local_e8 != 2)) &&
           ((*(char *)(*(long *)(lVar31 + 0x60) + (long)local_f0[4]) =
                  (char)(int)(((float)local_f0[5] - *(float *)(lVar31 + 0x1c)) *
                             *(float *)(lVar31 + 0x24)), (int)local_e8 != 3 &&
            (*(char *)(*(long *)(lVar31 + 0x60) + (long)local_f0[6]) =
                  (char)(int)(((float)local_f0[7] - *(float *)(lVar31 + 0x1c)) *
                             *(float *)(lVar31 + 0x24)), (int)local_e8 != 4)))) {
          lVar15 = 0;
          lVar22 = (local_e8 & 0xffffffff) - 4;
          do {
            lVar5 = lVar15 + 0x24;
            lVar6 = lVar15 + 0x20;
            lVar22 = lVar22 + -1;
            lVar15 = lVar15 + 8;
            *(char *)(*(long *)(lVar31 + 0x60) + (long)*(int *)((long)local_f0 + lVar6)) =
                 (char)(int)((*(float *)((long)local_f0 + lVar5) - *(float *)(lVar31 + 0x1c)) *
                            *(float *)(lVar31 + 0x24));
          } while (lVar22 != 0);
        }
        plVar14 = *(long **)(param_1 + 0x48);
        if (plVar14 != (long *)0x0) {
          puVar23 = (uint *)((long)plVar14 + 0xc);
          uVar19 = *puVar23;
          iVar10 = (int)plVar14[1];
          uVar20 = iVar10 + 1;
          if (iVar10 < (int)(uVar19 & 0x3fffffff)) {
            lVar15 = *plVar14;
          }
          else {
            lVar15 = *plVar14;
            if (0x3ffffffe < iVar10) {
              FUN_032bd0a8(uVar20);
              uVar19 = *puVar23;
            }
            uVar19 = (uVar19 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar4 = uVar20;
            if ((int)uVar20 <= (int)uVar19) {
              uVar4 = uVar19;
            }
            lVar15 = FUN_032bd1d4(puVar8,uVar4,4,lVar15,iVar10,puVar23);
            iVar10 = (int)plVar14[1];
            *plVar14 = lVar15;
          }
          *(uint *)(lVar15 + (long)iVar10 * 4) = uVar32;
          *(uint *)(plVar14 + 1) = uVar20;
        }
        uVar21 = local_118;
        uVar20 = local_118._4_4_;
        local_118 = (ulong)local_118._4_4_ << 0x20;
        if ((-1 < (long)uVar21) && (local_120 != (float *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_120,uVar20 << 2);
        }
        iVar10 = local_f8;
        pfVar24 = local_100;
        if (local_100 == local_110) {
          local_108 = (undefined8 *)((ulong)local_108 & 0xffffffff00000000);
        }
        lVar15 = *(long *)(lVar13 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar15;
        }
        lVar15 = *(long *)(lVar15 + 8);
        uVar21 = (ulong)(int)(iVar10 * 8 + 0x7fU & 0xffffff80);
        if (((*(ulong *)(lVar15 + 0x10) < uVar21) ||
            (*(long *)(lVar15 + 0x18) != uVar21 + (long)pfVar24)) ||
           (*(float **)(lVar15 + 0x28) == pfVar24)) {
          if (pfVar24 != (float *)0x0) {
            if (*(ulong *)(lVar15 + 0x10) < uVar21) {
              *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),pfVar24);
            }
            else if (*(long *)(lVar15 + 0x18) == uVar21 + (long)pfVar24) {
              *(float **)(lVar15 + 0x18) = pfVar24;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar15,pfVar24);
            }
          }
        }
        else {
          *(float **)(lVar15 + 0x18) = pfVar24;
        }
        uVar21 = (ulong)local_108;
        uVar16 = (ulong)local_108._4_4_;
        local_108 = (undefined8 *)((ulong)local_108._4_4_ << 0x20);
        if ((-1 < (long)uVar21) && (local_110 != (float *)0x0)) {
          (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_110,(uVar16 & 0x3fffffff) << 3);
        }
        piVar9 = local_e0;
        if (local_e0 == local_f0) {
          local_e8 = local_e8 & 0xffffffff00000000;
        }
        iVar10 = (int)local_d8;
        lVar15 = *(long *)(lVar13 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar13 + 0x38d490) = lVar15;
        }
        lVar13 = *(long *)(lVar15 + 8);
        uVar21 = (ulong)(int)(iVar10 * 8 + 0x7fU & 0xffffff80);
        if (((*(ulong *)(lVar13 + 0x10) < uVar21) ||
            (*(long *)(lVar13 + 0x18) != uVar21 + (long)piVar9)) ||
           (*(int **)(lVar13 + 0x28) == piVar9)) {
          if (piVar9 != (int *)0x0) {
            if (*(ulong *)(lVar13 + 0x10) < uVar21) {
              *(int *)(*(long *)(lVar13 + 8) + 0x20) = *(int *)(*(long *)(lVar13 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))(*(long **)(lVar13 + 0x40),piVar9);
            }
            else if (*(long *)(lVar13 + 0x18) == uVar21 + (long)piVar9) {
              *(int **)(lVar13 + 0x18) = piVar9;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar13,piVar9);
            }
          }
        }
        else {
          *(int **)(lVar13 + 0x18) = piVar9;
        }
        uVar21 = local_e8;
        uVar16 = (ulong)local_e8._4_4_;
        local_e8 = (ulong)local_e8._4_4_ << 0x20;
        if ((-1 < (long)uVar21) && (local_f0 != (int *)0x0)) {
          (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_f0,(uVar16 & 0x3fffffff) << 3);
        }
        fVar33 = *(float *)(param_1 + 0x3c);
        uVar17 = uVar29 >> 8;
        lVar13 = *(long *)(param_1 + 0x30);
      }
      local_f0 = (int *)CONCAT44(*(float *)(lVar31 + 0x20) * (float)uVar17 +
                                 *(float *)(lVar31 + 0x1c),(float)(uVar29 & 0xff) * 0.0039525693);
      local_110 = (float *)CONCAT44(fVar33,fVar33);
      iVar10 = FUN_031703d0(lVar13,*(undefined8 *)(param_1 + 0x20),param_11,param_7 & 0xffffffff,
                            param_8,param_9,param_10,uVar2,lVar26,param_1,&local_110,&local_f0,
                            param_1 + 0x718);
    }
    if (iVar10 == 0) {
      uVar30 = 0;
      goto LAB_03160a28;
    }
  }
  plVar14 = *(long **)(param_1 + 0x28);
  if (plVar14 != (long *)0x0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_f0 = (int *)CONCAT44(local_f0._4_4_,param_2);
    local_c0 = 0xffffffff;
    local_d0 = 0;
    uStack_c8 = 0;
    local_100 = (float *)&local_f0;
    local_140 = (undefined1 *)
                CONCAT44(*(undefined4 *)(param_1 + 0x44),
                         *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
    local_110 = *(float **)(param_1 + 0x30);
    local_108 = &local_140;
    local_f8 = CONCAT31(local_f8._1_3_,0x80);
    local_e8 = param_3;
    local_e0 = param_4;
    local_d8 = param_5;
    local_90 = uVar32;
    local_88 = param_8;
    uStack_80 = param_9;
    local_78 = param_10;
    uVar21 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_110);
    uVar30 = 0;
    if ((uVar21 & 1) == 0) goto LAB_03160a28;
  }
  uVar30 = 1;
LAB_03160a28:
  lVar13 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x620) = (lVar13 - lVar12) + *(long *)(param_1 + 0x620);
  *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
  lVar12 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x58) = (lVar12 - lVar11) + *(long *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return uVar30;
}


