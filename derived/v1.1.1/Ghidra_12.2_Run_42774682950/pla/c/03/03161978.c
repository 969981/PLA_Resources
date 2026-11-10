/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03161978; name: FUN_03161978
 */


/* WARNING: Removing unreachable block (ram,0x03162310) */
/* WARNING: Removing unreachable block (ram,0x03161e04) */
/* WARNING: Removing unreachable block (ram,0x03161da0) */
/* WARNING: Removing unreachable block (ram,0x03161e68) */
/* WARNING: Removing unreachable block (ram,0x03162378) */

void FUN_03161978(float param_1,long param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,int *param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,float *param_12,float *param_13)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ushort *__src;
  ulong uVar16;
  undefined8 uVar17;
  short sVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  undefined1 *puVar25;
  ushort *puVar26;
  long lVar27;
  ushort uVar28;
  long lVar29;
  uint *puVar30;
  long *plVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_e0 [2];
  undefined1 *local_d8;
  ulong local_d0;
  undefined1 *local_c8;
  int local_c0;
  float *local_b8;
  undefined8 local_b0;
  float *local_a8;
  undefined8 local_a0;
  float *local_98;
  int local_90;
  int *local_88;
  undefined8 local_80;
  int *local_78;
  int local_70;
  
  lVar13 = nn::os::GetSystemTick();
  lVar14 = nn::os::GetSystemTick();
  lVar15 = *(long *)(param_2 + 0x30);
  if (param_1 <=
      *(float *)(lVar15 + (long)*(int *)(param_2 + 0x38) * 4 + 0x60) + *(float *)(param_2 + 0x40)) {
    *param_12 = param_1;
    *param_13 = param_1;
    goto LAB_03161ac8;
  }
  if (*(int *)(param_2 + 0x14) < 0) {
    local_88 = (int *)CONCAT44(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x3c));
    uVar17 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    lVar27 = *(long *)(param_2 + 0x10) >> 0x20;
    lVar24 = *(long *)(*(long *)(*(long *)(lVar15 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0xf0) + 0x38
                      );
    lVar29 = *(long *)(lVar24 + lVar27 * 0x18);
    fVar33 = *(float *)(lVar29 + 0x18);
    if (param_1 <= fVar33) {
      fVar32 = *(float *)(lVar29 + 0x1c);
      fVar34 = fVar33;
      if (fVar33 <= fVar32 + 0.001) {
LAB_03161ab8:
        *param_12 = fVar33;
        *param_13 = fVar34;
        goto LAB_03161ac8;
      }
      uVar3 = (uint)param_3 & 0x3fffff;
      if (*(int *)(*(long *)(lVar29 + 0x28) + (ulong)uVar3 * 4) != -1) {
        bVar4 = *(byte *)(*(long *)(lVar29 + 0x60) + (long)*param_8);
        if ((bVar4 != 0xff) &&
           (bVar5 = *(byte *)(*(long *)(lVar29 + 0x60) + (long)param_8[1]), bVar5 != 0xff)) {
          fVar33 = fVar32 + *(float *)(lVar29 + 0x20) * (float)bVar4;
          fVar34 = fVar32 + *(float *)(lVar29 + 0x20) * (float)bVar5;
          goto LAB_03161ab8;
        }
      }
      if (*(char *)(lVar24 + lVar27 * 0x18 + 0x10) != '\x01') {
        lVar29 = FUN_03165a00(lVar24 + lVar27 * 0x18);
      }
      sVar6 = (short)param_4[2];
      local_88 = (int *)0x0;
      local_80 = 0x8000000000000000;
      local_70 = (int)sVar6;
      lVar15 = tpidr_el0;
      if (local_70 == 0) {
        sVar18 = 0;
        local_78 = (int *)0x0;
      }
      else {
        lVar24 = *(long *)(lVar15 + 0x38d490);
        if (lVar24 == 0) {
          lVar24 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar24;
        }
        lVar24 = *(long *)(lVar24 + 8);
        uVar16 = (long)(int)sVar6 * 8 + 0x7fU & 0xffffffffffffff80;
        if (*(ulong *)(lVar24 + 0x10) < uVar16) {
LAB_03162504:
          local_78 = (int *)FUN_032ce670(lVar24);
        }
        else {
          local_78 = *(int **)(lVar24 + 0x18);
          uVar16 = (long)local_78 + uVar16;
          if (*(ulong *)(lVar24 + 0x20) < uVar16) goto LAB_03162504;
          *(ulong *)(lVar24 + 0x18) = uVar16;
        }
        sVar18 = (short)param_4[2];
      }
      local_80 = CONCAT44((int)sVar6,(int)local_80) | 0x8000000000000000;
      iVar2 = (int)*(short *)((long)param_4 + 10) + (int)sVar18;
      local_a8 = (float *)0x0;
      local_a0 = 0x8000000000000000;
      local_90 = iVar2;
      local_88 = local_78;
      if (iVar2 == 0) {
        local_98 = (float *)0x0;
      }
      else {
        lVar24 = *(long *)(lVar15 + 0x38d490);
        if (lVar24 == 0) {
          lVar24 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar24;
        }
        lVar24 = *(long *)(lVar24 + 8);
        uVar16 = (ulong)(int)(iVar2 * 8 + 0x7fU & 0xffffff80);
        if (uVar16 <= *(ulong *)(lVar24 + 0x10)) {
          local_98 = *(float **)(lVar24 + 0x18);
          uVar16 = (long)local_98 + uVar16;
          if (uVar16 <= *(ulong *)(lVar24 + 0x20)) {
            *(ulong *)(lVar24 + 0x18) = uVar16;
            goto LAB_03161c24;
          }
        }
        local_98 = (float *)FUN_032ce670(lVar24);
      }
LAB_03161c24:
      local_b8 = (float *)0x0;
      local_a0 = CONCAT44(iVar2,(int)local_a0) | 0x8000000000000000;
      local_b0 = 0x8000000000000000;
      local_d8 = (undefined1 *)
                 CONCAT44(*(undefined4 *)(lVar29 + 0x18),*(undefined4 *)(lVar29 + 0x18));
      local_a8 = local_98;
      FUN_0316a4d0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),
                   param_3 & 0xffffffff,param_4,param_5,param_6,param_2,&local_d8,&local_88,
                   &local_a8,&local_b8,param_2 + 0xc10);
      iVar2 = (int)local_a0 * 2;
      if ((int)local_a0 == 0) {
        __src = (ushort *)0x0;
      }
      else {
        lVar24 = *(long *)(lVar15 + 0x38d490);
        if (lVar24 == 0) {
          lVar24 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar24;
        }
        lVar24 = *(long *)(lVar24 + 8);
        uVar16 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
        if (uVar16 <= *(ulong *)(lVar24 + 0x10)) {
          __src = *(ushort **)(lVar24 + 0x18);
          uVar16 = (long)__src + uVar16;
          if (uVar16 <= *(ulong *)(lVar24 + 0x20)) {
            *(ulong *)(lVar24 + 0x18) = uVar16;
            goto LAB_03161ce0;
          }
        }
        __src = (ushort *)FUN_032ce670();
      }
LAB_03161ce0:
      iVar23 = (int)local_b0;
      lVar24 = (long)(int)local_b0;
      local_d8 = (undefined1 *)0x0;
      local_d0 = 0x8000000000000000;
      local_c0 = (int)local_b0;
      if ((int)local_b0 == 0) {
        local_c8 = (undefined1 *)0x0;
      }
      else {
        lVar27 = *(long *)(lVar15 + 0x38d490);
        if (lVar27 == 0) {
          lVar27 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar27;
        }
        lVar27 = *(long *)(lVar27 + 8);
        uVar16 = lVar24 + 0x7fU & 0xffffffffffffff80;
        if (uVar16 <= *(ulong *)(lVar27 + 0x10)) {
          local_c8 = *(undefined1 **)(lVar27 + 0x18);
          if (local_c8 + uVar16 <= *(undefined1 **)(lVar27 + 0x20)) {
            *(undefined1 **)(lVar27 + 0x18) = local_c8 + uVar16;
            goto LAB_03161d34;
          }
        }
        local_c8 = (undefined1 *)FUN_032ce670(lVar27);
      }
LAB_03161d34:
      iVar10 = (int)local_d0;
      local_d0 = CONCAT44(iVar23,(int)local_d0) | 0x8000000000000000;
      if (0 < (int)local_a0) {
        fVar33 = local_a8[1];
        fVar34 = *(float *)(lVar29 + 0x1c);
        iVar23 = (int)((fVar33 - fVar34) * *(float *)(lVar29 + 0x24));
        fVar32 = *local_a8 * 253.0 + 0.5;
        if (fVar32 < 0.0) {
          uVar28 = 0;
          if (fVar33 <= fVar34 || iVar23 != 0) goto LAB_03161dac;
LAB_03162784:
          uVar22 = 0x100;
        }
        else {
          uVar28 = (ushort)(int)fVar32;
          if (fVar34 < fVar33 && iVar23 == 0) goto LAB_03162784;
LAB_03161dac:
          uVar22 = (ushort)(iVar23 << 8);
        }
        *__src = uVar22 | uVar28;
        if ((int)local_a0 != 1) {
          fVar32 = *(float *)(lVar29 + 0x1c);
          fVar33 = local_a8[3];
          iVar23 = (int)((fVar33 - fVar32) * *(float *)(lVar29 + 0x24));
          fVar34 = local_a8[2] * 253.0 + 0.5;
          if (fVar34 < 0.0) {
            uVar28 = 0;
            if (fVar33 <= fVar32 || iVar23 != 0) goto LAB_03161e10;
LAB_03162798:
            uVar22 = 0x100;
          }
          else {
            uVar28 = (ushort)(int)fVar34;
            if (fVar32 < fVar33 && iVar23 == 0) goto LAB_03162798;
LAB_03161e10:
            uVar22 = (ushort)(iVar23 << 8);
          }
          __src[1] = uVar22 | uVar28;
          if ((int)local_a0 != 2) {
            fVar32 = *(float *)(lVar29 + 0x1c);
            fVar33 = local_a8[5];
            iVar23 = (int)((fVar33 - fVar32) * *(float *)(lVar29 + 0x24));
            fVar34 = local_a8[4] * 253.0 + 0.5;
            if (fVar34 < 0.0) {
              uVar28 = 0;
              if (fVar33 <= fVar32 || iVar23 != 0) goto LAB_03161e74;
LAB_031627ac:
              uVar22 = 0x100;
            }
            else {
              uVar28 = (ushort)(int)fVar34;
              if (fVar32 < fVar33 && iVar23 == 0) goto LAB_031627ac;
LAB_03161e74:
              uVar22 = (ushort)(iVar23 << 8);
            }
            __src[2] = uVar22 | uVar28;
            if ((int)local_a0 != 3) {
              fVar32 = *(float *)(lVar29 + 0x1c);
              fVar33 = local_a8[7];
              iVar23 = (int)((fVar33 - fVar32) * *(float *)(lVar29 + 0x24));
              fVar34 = local_a8[6] * 253.0 + 0.5;
              if (fVar34 < 0.0) {
                uVar28 = 0;
                if (fVar33 <= fVar32 || iVar23 != 0) goto LAB_0316231c;
LAB_031627c0:
                uVar22 = 0x100;
              }
              else {
                uVar28 = (ushort)(int)fVar34;
                if (fVar32 < fVar33 && iVar23 == 0) goto LAB_031627c0;
LAB_0316231c:
                uVar22 = (ushort)(iVar23 << 8);
              }
              __src[3] = uVar22 | uVar28;
              if ((int)local_a0 != 4) {
                lVar24 = (local_a0 & 0xffffffff) - 4;
                pfVar21 = local_a8 + 9;
                puVar26 = __src + 4;
                do {
                  pfVar1 = pfVar21 + -1;
                  fVar32 = *pfVar21;
                  pfVar21 = pfVar21 + 2;
                  fVar34 = *pfVar1 * 253.0 + 0.5;
                  iVar23 = (int)((fVar32 - *(float *)(lVar29 + 0x1c)) * *(float *)(lVar29 + 0x24));
                  fVar33 = 0.0;
                  if (0.0 <= fVar34) {
                    fVar33 = fVar34;
                  }
                  uVar28 = 0x100;
                  if (fVar32 <= *(float *)(lVar29 + 0x1c) || iVar23 != 0) {
                    uVar28 = (ushort)(iVar23 << 8);
                  }
                  lVar24 = lVar24 + -1;
                  *puVar26 = uVar28 | (ushort)(int)fVar33;
                  puVar26 = puVar26 + 1;
                } while (lVar24 != 0);
              }
            }
          }
        }
      }
      if (iVar10 != (int)local_b0) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)local_b0);
      }
      if (((0 < (int)local_b0) &&
          (*local_c8 = (char)(int)((*local_b8 - *(float *)(lVar29 + 0x1c)) *
                                  *(float *)(lVar29 + 0x24)), (int)local_b0 != 1)) &&
         (local_c8[1] = (char)(int)((local_b8[1] - *(float *)(lVar29 + 0x1c)) *
                                   *(float *)(lVar29 + 0x24)), (int)local_b0 != 2)) {
        lVar24 = (local_b0 & 0xffffffff) - 2;
        pfVar21 = local_b8 + 2;
        puVar25 = local_c8 + 2;
        do {
          lVar24 = lVar24 + -1;
          *puVar25 = (char)(int)((*pfVar21 - *(float *)(lVar29 + 0x1c)) * *(float *)(lVar29 + 0x24))
          ;
          pfVar21 = pfVar21 + 1;
          puVar25 = puVar25 + 1;
        } while (lVar24 != 0);
      }
      iVar23 = param_4[1];
      iVar10 = param_4[2];
      sVar6 = *(short *)((long)param_4 + 10);
      local_d8 = local_c8;
      memcpy((void *)(*(long *)(lVar29 + 0x50) + (long)*param_4 * 2),__src,(long)(short)iVar10 << 1)
      ;
      if (0 < (long)sVar6) {
        memcpy((void *)(*(long *)(lVar29 + 0x50) + (long)iVar23 * 2),__src + (short)iVar10,
               (long)sVar6 << 1);
      }
      local_e0[0] = uVar3;
      FUN_0315d2e4(lVar29,local_e0,&local_d8);
      if (((0 < (int)local_80) &&
          (*(char *)(*(long *)(lVar29 + 0x60) + (long)*local_88) =
                (char)(int)(((float)local_88[1] - *(float *)(lVar29 + 0x1c)) *
                           *(float *)(lVar29 + 0x24)), (int)local_80 != 1)) &&
         ((*(char *)(*(long *)(lVar29 + 0x60) + (long)local_88[2]) =
                (char)(int)(((float)local_88[3] - *(float *)(lVar29 + 0x1c)) *
                           *(float *)(lVar29 + 0x24)), (int)local_80 != 2 &&
          ((*(char *)(*(long *)(lVar29 + 0x60) + (long)local_88[4]) =
                 (char)(int)(((float)local_88[5] - *(float *)(lVar29 + 0x1c)) *
                            *(float *)(lVar29 + 0x24)), (int)local_80 != 3 &&
           (*(char *)(*(long *)(lVar29 + 0x60) + (long)local_88[6]) =
                 (char)(int)(((float)local_88[7] - *(float *)(lVar29 + 0x1c)) *
                            *(float *)(lVar29 + 0x24)), (int)local_80 != 4)))))) {
        lVar24 = 0;
        lVar27 = (local_80 & 0xffffffff) - 4;
        do {
          lVar8 = lVar24 + 0x24;
          lVar9 = lVar24 + 0x20;
          lVar27 = lVar27 + -1;
          lVar24 = lVar24 + 8;
          *(char *)(*(long *)(lVar29 + 0x60) + (long)*(int *)((long)local_88 + lVar9)) =
               (char)(int)((*(float *)((long)local_88 + lVar8) - *(float *)(lVar29 + 0x1c)) *
                          *(float *)(lVar29 + 0x24));
        } while (lVar27 != 0);
      }
      plVar31 = *(long **)(param_2 + 0x48);
      if (plVar31 != (long *)0x0) {
        puVar30 = (uint *)((long)plVar31 + 0xc);
        uVar19 = *puVar30;
        iVar23 = (int)plVar31[1];
        uVar3 = iVar23 + 1;
        if (iVar23 < (int)(uVar19 & 0x3fffffff)) {
          lVar24 = *plVar31;
        }
        else {
          lVar24 = *plVar31;
          if (0x3ffffffe < iVar23) {
            FUN_032bd0a8(uVar3);
            uVar19 = *puVar30;
          }
          uVar19 = (uVar19 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar19) {
            uVar19 = 0x3fffffff;
          }
          uVar7 = uVar3;
          if ((int)uVar3 <= (int)uVar19) {
            uVar7 = uVar19;
          }
          lVar24 = FUN_032bd1d4(PTR_PTR_0434a080,uVar7,4,lVar24,iVar23,puVar30);
          iVar23 = (int)plVar31[1];
          *plVar31 = lVar24;
        }
        *(uint *)(lVar24 + (long)iVar23 * 4) = (uint)param_3;
        *(uint *)(plVar31 + 1) = uVar3;
      }
      puVar25 = local_c8;
      fVar32 = *(float *)(lVar29 + 0x18);
      fVar34 = *(float *)(lVar29 + 0x1c);
      fVar33 = fVar32;
      if (fVar34 + 0.001 < fVar32) {
        fVar35 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(lVar29 + 0x60) + (long)param_8[1]));
        fVar33 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(lVar29 + 0x60) + (long)*param_8));
        fVar32 = fVar34 + *(float *)(lVar29 + 0x20) * fVar33;
        fVar33 = fVar34 + *(float *)(lVar29 + 0x20) * fVar35;
      }
      *param_12 = fVar32;
      *param_13 = fVar33;
      if (local_c8 == local_d8) {
        local_d0 = local_d0 & 0xffffffff00000000;
      }
      lVar24 = (long)local_c0;
      lVar29 = *(long *)(lVar15 + 0x38d490);
      if (lVar29 == 0) {
        lVar29 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar29;
      }
      lVar29 = *(long *)(lVar29 + 8);
      uVar16 = lVar24 + 0x7fU & 0xffffffffffffff80;
      if (((*(ulong *)(lVar29 + 0x10) < uVar16) ||
          (*(undefined1 **)(lVar29 + 0x18) != puVar25 + uVar16)) ||
         (*(undefined1 **)(lVar29 + 0x28) == puVar25)) {
        if (puVar25 != (undefined1 *)0x0) {
          if (*(ulong *)(lVar29 + 0x10) < uVar16) {
            *(int *)(*(long *)(lVar29 + 8) + 0x20) = *(int *)(*(long *)(lVar29 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar29 + 0x40) + 0x18))(*(long **)(lVar29 + 0x40),puVar25);
          }
          else if (*(undefined1 **)(lVar29 + 0x18) == puVar25 + uVar16) {
            *(undefined1 **)(lVar29 + 0x18) = puVar25;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar29,puVar25);
          }
        }
      }
      else {
        *(undefined1 **)(lVar29 + 0x18) = puVar25;
      }
      uVar20 = local_d0;
      puVar11 = PTR_PTR_0434a080;
      uVar16 = local_d0 >> 0x20;
      local_d0 = local_d0 & 0xffffffff00000000;
      if ((-1 < (long)uVar20) && (local_d8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_d8,(uint)uVar16 & 0x3fffffff);
      }
      lVar29 = *(long *)(lVar15 + 0x38d490);
      if (lVar29 == 0) {
        lVar29 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar29;
      }
      lVar29 = *(long *)(lVar29 + 8);
      uVar16 = (ulong)(int)(iVar2 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar29 + 0x10) < uVar16) ||
          (*(long *)(lVar29 + 0x18) != (long)__src + uVar16)) ||
         (*(ushort **)(lVar29 + 0x28) == __src)) {
        if (__src != (ushort *)0x0) {
          if (*(ulong *)(lVar29 + 0x10) < uVar16) {
            *(int *)(*(long *)(lVar29 + 8) + 0x20) = *(int *)(*(long *)(lVar29 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar29 + 0x40) + 0x18))(*(long **)(lVar29 + 0x40),__src);
          }
          else if (*(long *)(lVar29 + 0x18) == (long)__src + uVar16) {
            *(ushort **)(lVar29 + 0x18) = __src;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar29,__src);
          }
        }
      }
      else {
        *(ushort **)(lVar29 + 0x18) = __src;
      }
      uVar16 = local_b0;
      uVar3 = local_b0._4_4_;
      local_b0 = (ulong)local_b0._4_4_ << 0x20;
      if ((-1 < (long)uVar16) && (local_b8 != (float *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_b8,uVar3 << 2);
      }
      iVar2 = local_90;
      pfVar21 = local_98;
      if (local_98 == local_a8) {
        local_a0 = local_a0 & 0xffffffff00000000;
      }
      lVar29 = *(long *)(lVar15 + 0x38d490);
      if (lVar29 == 0) {
        lVar29 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar29;
      }
      lVar29 = *(long *)(lVar29 + 8);
      uVar16 = (ulong)(int)(iVar2 * 8 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar29 + 0x10) < uVar16) ||
          (*(long *)(lVar29 + 0x18) != uVar16 + (long)pfVar21)) ||
         (*(float **)(lVar29 + 0x28) == pfVar21)) {
        if (pfVar21 != (float *)0x0) {
          if (*(ulong *)(lVar29 + 0x10) < uVar16) {
            *(int *)(*(long *)(lVar29 + 8) + 0x20) = *(int *)(*(long *)(lVar29 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar29 + 0x40) + 0x18))(*(long **)(lVar29 + 0x40),pfVar21);
          }
          else if (*(long *)(lVar29 + 0x18) == uVar16 + (long)pfVar21) {
            *(float **)(lVar29 + 0x18) = pfVar21;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar29,pfVar21);
          }
        }
      }
      else {
        *(float **)(lVar29 + 0x18) = pfVar21;
      }
      uVar16 = local_a0;
      uVar20 = (ulong)local_a0._4_4_;
      local_a0 = (ulong)local_a0._4_4_ << 0x20;
      if ((-1 < (long)uVar16) && (local_a8 != (float *)0x0)) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a8,(uVar20 & 0x3fffffff) << 3);
      }
      iVar2 = local_70;
      piVar12 = local_78;
      if (local_78 == local_88) {
        local_80 = local_80 & 0xffffffff00000000;
      }
      lVar29 = *(long *)(lVar15 + 0x38d490);
      if (lVar29 == 0) {
        lVar29 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar29;
      }
      lVar15 = *(long *)(lVar29 + 8);
      uVar16 = (ulong)(int)(iVar2 * 8 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar15 + 0x10) < uVar16) ||
          (*(long *)(lVar15 + 0x18) != uVar16 + (long)piVar12)) ||
         (*(int **)(lVar15 + 0x28) == piVar12)) {
        if (piVar12 != (int *)0x0) {
          if (*(ulong *)(lVar15 + 0x10) < uVar16) {
            *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),piVar12);
          }
          else if (*(long *)(lVar15 + 0x18) == uVar16 + (long)piVar12) {
            *(int **)(lVar15 + 0x18) = piVar12;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar15,piVar12);
          }
        }
      }
      else {
        *(int **)(lVar15 + 0x18) = piVar12;
      }
      uVar16 = local_80;
      uVar20 = (ulong)local_80._4_4_;
      local_80 = (ulong)local_80._4_4_ << 0x20;
      if ((-1 < (long)uVar16) && (local_88 != (int *)0x0)) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_88,(uVar20 & 0x3fffffff) << 3);
      }
      goto LAB_03161ac8;
    }
    uVar17 = *(undefined8 *)(param_2 + 0x20);
    local_88 = (int *)CONCAT44(param_1,param_1);
  }
  FUN_031736a0(lVar15,uVar17,param_3 & 0xffffffff,param_4,param_5,param_6,param_7,param_8,param_10,
               param_11,param_2,&local_88,&local_a8,&local_d8,param_2 + 0xcf8);
  *param_12 = local_a8._0_4_;
  *param_13 = local_d8._0_4_;
LAB_03161ac8:
  lVar15 = nn::os::GetSystemTick();
  *(long *)(param_2 + 0xc00) = (lVar15 - lVar14) + *(long *)(param_2 + 0xc00);
  *(int *)(param_2 + 0xc08) = *(int *)(param_2 + 0xc08) + 1;
  lVar14 = nn::os::GetSystemTick();
  *(long *)(param_2 + 0x58) = (lVar14 - lVar13) + *(long *)(param_2 + 0x58);
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
  return;
}


