/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316294c; name: FUN_0316294c
 */


/* WARNING: Removing unreachable block (ram,0x031632d0) */
/* WARNING: Removing unreachable block (ram,0x0316316c) */
/* WARNING: Removing unreachable block (ram,0x03163108) */
/* WARNING: Removing unreachable block (ram,0x031631d0) */
/* WARNING: Removing unreachable block (ram,0x03163338) */

void FUN_0316294c(long param_1,undefined8 *param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  float *pfVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  float **ppfVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ushort *__dest;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  char *pcVar22;
  float *pfVar23;
  ushort uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  ushort *puVar29;
  ushort uVar30;
  ulong uVar31;
  uint uVar32;
  void *__s;
  int iVar33;
  ulong uVar34;
  void *pvVar35;
  ulong uVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint local_1a0;
  uint local_158;
  uint local_150;
  uint local_140 [2];
  uint local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  float *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  uint local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0 [2];
  undefined8 local_a8;
  float **local_a0;
  undefined8 local_98;
  float **local_90;
  uint local_88;
  long local_80;
  undefined8 uStack_78;
  
  lVar12 = nn::os::GetSystemTick();
  lVar13 = nn::os::GetSystemTick();
  lVar14 = *(long *)(param_1 + 0x30);
  sVar5 = (short)param_4[2];
  uVar31 = (ulong)sVar5;
  fVar38 = *(float *)(param_1 + 0x3c);
  uVar32 = (uint)*(short *)((long)param_4 + 10);
  local_158 = (uint)param_3;
  if (*(float *)(lVar14 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) + *(float *)(param_1 + 0x40) <
      fVar38) {
    if (*(int *)(param_1 + 0x14) < 0) {
      local_130 = (float *)CONCAT44(fVar38,fVar38);
      FUN_0316d580(lVar14,*(undefined8 *)(param_1 + 0x20),param_2,param_3 & 0xffffffff,param_4,
                   param_5,param_6,param_1,&local_130,param_7,param_1 + 0x560);
      lVar14 = *(long *)(param_1 + 0x28);
      goto joined_r0x03163a74;
    }
    uVar34 = param_3 >> 0x16 & 0x3ff;
    iVar33 = (int)*(short *)((long)param_4 + 10) + (int)sVar5;
    lVar37 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 0x38) + uVar34 * 0xf0) + 0x38) +
                      (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
    local_130 = (float *)0x0;
    local_128 = 0x8000000000000000;
    local_118 = CONCAT44(local_118._4_4_,iVar33);
    lVar14 = tpidr_el0;
    if (iVar33 == 0) {
      uVar19 = 0;
      __dest = (ushort *)0x0;
      local_130 = (float *)0x0;
      local_128 = 0x8000000000000000;
      local_120 = (float *)0x0;
      uVar17 = uVar31;
      uVar18 = uVar32;
    }
    else {
      lVar21 = *(long *)(lVar14 + 0x38d490);
      if (lVar21 == 0) {
        lVar21 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar21;
      }
      lVar15 = *(long *)(lVar21 + 8);
      uVar17 = (ulong)(int)(iVar33 * 8 + 0x7fU & 0xffffff80);
      if (*(ulong *)(lVar15 + 0x10) < uVar17) {
LAB_03163374:
        local_120 = (float *)FUN_032ce670();
        lVar21 = *(long *)(lVar14 + 0x38d490);
      }
      else {
        local_120 = *(float **)(lVar15 + 0x18);
        uVar17 = (long)local_120 + uVar17;
        if (*(ulong *)(lVar15 + 0x20) < uVar17) goto LAB_03163374;
        *(ulong *)(lVar15 + 0x18) = uVar17;
      }
      local_128 = CONCAT44(iVar33,(uint)local_128) | 0x8000000000000000;
      local_130 = local_120;
      if (lVar21 == 0) {
        lVar21 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar21;
      }
      lVar21 = *(long *)(lVar21 + 8);
      uVar17 = (ulong)(int)(iVar33 * 2 + 0x7fU & 0xffffff80);
      if (*(ulong *)(lVar21 + 0x10) < uVar17) {
LAB_03163394:
        __dest = (ushort *)FUN_032ce670();
      }
      else {
        __dest = *(ushort **)(lVar21 + 0x18);
        uVar17 = (long)__dest + uVar17;
        if (*(ulong *)(lVar21 + 0x20) < uVar17) goto LAB_03163394;
        *(ulong *)(lVar21 + 0x18) = uVar17;
      }
      uVar19 = (int)(short)*(ushort *)((long)param_4 + 10) + (int)(short)*(ushort *)(param_4 + 2);
      uVar17 = (ulong)*(ushort *)(param_4 + 2);
      uVar18 = (uint)*(ushort *)((long)param_4 + 10);
    }
    uVar36 = (ulong)uVar19;
    iVar25 = param_4[1];
    memcpy(__dest,(void *)(*(long *)(lVar37 + 0x50) + (long)*param_4 * 2),
           -(uVar17 >> 0xf & 1) & 0xfffffffffffe0000 | (uVar17 & 0xffff) << 1);
    if (0 < (short)uVar18) {
      memcpy(__dest + (short)uVar17,(void *)(*(long *)(lVar37 + 0x50) + (long)iVar25 * 2),
             -((ulong)(uVar18 >> 0xf) & 1) & 0xfffffffffffe0000 | ((ulong)uVar18 & 0xffff) << 1);
    }
    if (0 < (int)uVar19) {
      pcVar22 = (char *)((long)__dest + 1);
LAB_03162b08:
      if (*pcVar22 != -1) goto code_r0x03162b14;
      plVar16 = (long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) +
                                            uVar34 * 0xf0) + 0x38) +
                        (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
      local_1a0 = local_158 & 0x3fffff;
      if ((char)plVar16[2] == '\x01') {
        lVar21 = *plVar16;
      }
      else {
        lVar21 = FUN_03165a00();
      }
      local_80 = 0;
      uStack_78 = -0x8000000000000000;
      local_a0 = (float **)0x0;
      local_98 = (undefined8 *)0x8000000000000000;
      uVar19 = (uint)sVar5;
      local_88 = uVar19;
      if (uVar19 == 0) {
        local_90 = (float **)0x0;
      }
      else {
        lVar15 = *(long *)(lVar14 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar15;
        }
        lVar15 = *(long *)(lVar15 + 8);
        uVar34 = uVar31 * 8 + 0x7f & 0xffffffffffffff80;
        if (uVar34 <= *(ulong *)(lVar15 + 0x10)) {
          local_90 = *(float ***)(lVar15 + 0x18);
          uVar34 = (long)local_90 + uVar34;
          if (uVar34 <= *(ulong *)(lVar15 + 0x20)) {
            *(ulong *)(lVar15 + 0x18) = uVar34;
            goto LAB_03162f04;
          }
        }
        local_90 = (float **)FUN_032ce670(lVar15);
      }
LAB_03162f04:
      local_98 = (undefined8 *)(CONCAT44(uVar19,(int)local_98) | 0x8000000000000000);
      local_a8 = CONCAT44(*(undefined4 *)(lVar37 + 0x18),*(undefined4 *)(lVar37 + 0x18));
      local_a0 = local_90;
      FUN_0316a4d0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                   param_3 & 0xffffffff,param_4,param_5,param_6,param_1,&local_a8,&local_a0,
                   &local_130,&local_80,param_1 + 0x3c0);
      uVar19 = local_88;
      ppfVar11 = local_90;
      if ((((0 < (int)local_98) &&
           (*(char *)(*(long *)(lVar21 + 0x60) + (long)*(int *)local_a0) =
                 (char)(int)((*(float *)((long)local_a0 + 4) - *(float *)(lVar21 + 0x1c)) *
                            *(float *)(lVar21 + 0x24)), (int)local_98 != 1)) &&
          (*(char *)(*(long *)(lVar21 + 0x60) + (long)*(int *)(local_a0 + 1)) =
                (char)(int)((*(float *)((long)local_a0 + 0xc) - *(float *)(lVar21 + 0x1c)) *
                           *(float *)(lVar21 + 0x24)), (int)local_98 != 2)) &&
         ((*(char *)(*(long *)(lVar21 + 0x60) + (long)*(int *)(local_a0 + 2)) =
                (char)(int)((*(float *)((long)local_a0 + 0x14) - *(float *)(lVar21 + 0x1c)) *
                           *(float *)(lVar21 + 0x24)), (int)local_98 != 3 &&
          (*(char *)(*(long *)(lVar21 + 0x60) + (long)*(int *)(local_a0 + 3)) =
                (char)(int)((*(float *)((long)local_a0 + 0x1c) - *(float *)(lVar21 + 0x1c)) *
                           *(float *)(lVar21 + 0x24)), (int)local_98 != 4)))) {
        lVar37 = 0;
        lVar15 = ((ulong)local_98 & 0xffffffff) - 4;
        do {
          lVar8 = lVar37 + 0x24;
          lVar9 = lVar37 + 0x20;
          lVar15 = lVar15 + -1;
          lVar37 = lVar37 + 8;
          *(char *)(*(long *)(lVar21 + 0x60) + (long)*(int *)((long)local_a0 + lVar9)) =
               (char)(int)((*(float *)((long)local_a0 + lVar8) - *(float *)(lVar21 + 0x1c)) *
                          *(float *)(lVar21 + 0x24));
        } while (lVar15 != 0);
      }
      if (local_90 == local_a0) {
        local_98 = (undefined8 *)((ulong)local_98 & 0xffffffff00000000);
      }
      lVar37 = *(long *)(lVar14 + 0x38d490);
      if (lVar37 == 0) {
        lVar37 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar37;
      }
      lVar37 = *(long *)(lVar37 + 8);
      uVar34 = (ulong)(int)(uVar19 * 8 + 0x7f & 0xffffff80);
      if (((*(ulong *)(lVar37 + 0x10) < uVar34) ||
          (*(long *)(lVar37 + 0x18) != uVar34 + (long)ppfVar11)) ||
         (*(float ***)(lVar37 + 0x28) == ppfVar11)) {
        if (ppfVar11 != (float **)0x0) {
          if (*(ulong *)(lVar37 + 0x10) < uVar34) {
            *(int *)(*(long *)(lVar37 + 8) + 0x20) = *(int *)(*(long *)(lVar37 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar37 + 0x40) + 0x18))(*(long **)(lVar37 + 0x40),ppfVar11);
          }
          else if (*(long *)(lVar37 + 0x18) == uVar34 + (long)ppfVar11) {
            *(float ***)(lVar37 + 0x18) = ppfVar11;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar37,ppfVar11);
          }
        }
      }
      else {
        *(float ***)(lVar37 + 0x18) = ppfVar11;
      }
      uVar34 = (ulong)local_98;
      puVar10 = PTR_PTR_0434a080;
      uVar17 = (ulong)local_98._4_4_;
      local_98 = (undefined8 *)((ulong)local_98._4_4_ << 0x20);
      if ((-1 < (long)uVar34) && (local_a0 != (float **)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_a0,(uVar17 & 0x3fffffff) << 3);
      }
      uVar19 = (uint)local_128;
      if (0 < (int)(uint)local_128) {
        fVar38 = local_130[1];
        fVar39 = *(float *)(lVar21 + 0x1c);
        iVar25 = (int)((fVar38 - fVar39) * *(float *)(lVar21 + 0x24));
        fVar40 = *local_130 * 253.0 + 0.5;
        if (fVar40 < 0.0) {
          uVar30 = 0;
          if (!(fVar39 < fVar38 && iVar25 == 0)) goto LAB_03163114;
LAB_03163bb0:
          uVar24 = 0x100;
        }
        else {
          uVar30 = (ushort)(int)fVar40;
          if (!(fVar38 <= fVar39 || iVar25 != 0)) goto LAB_03163bb0;
LAB_03163114:
          uVar24 = (ushort)(iVar25 << 8);
        }
        *__dest = uVar24 | uVar30;
        if ((uint)local_128 != 1) {
          fVar40 = *(float *)(lVar21 + 0x1c);
          fVar38 = local_130[3];
          iVar25 = (int)((fVar38 - fVar40) * *(float *)(lVar21 + 0x24));
          fVar39 = local_130[2] * 253.0 + 0.5;
          if (fVar39 < 0.0) {
            uVar30 = 0;
            if (!(fVar40 < fVar38 && iVar25 == 0)) goto LAB_03163178;
LAB_03163bc4:
            uVar24 = 0x100;
          }
          else {
            uVar30 = (ushort)(int)fVar39;
            if (!(fVar38 <= fVar40 || iVar25 != 0)) goto LAB_03163bc4;
LAB_03163178:
            uVar24 = (ushort)(iVar25 << 8);
          }
          __dest[1] = uVar24 | uVar30;
          if ((uint)local_128 != 2) {
            fVar40 = *(float *)(lVar21 + 0x1c);
            fVar38 = local_130[5];
            iVar25 = (int)((fVar38 - fVar40) * *(float *)(lVar21 + 0x24));
            fVar39 = local_130[4] * 253.0 + 0.5;
            if (fVar39 < 0.0) {
              uVar30 = 0;
              if (!(fVar40 < fVar38 && iVar25 == 0)) goto LAB_031631dc;
LAB_03163bd8:
              uVar24 = 0x100;
            }
            else {
              uVar30 = (ushort)(int)fVar39;
              if (!(fVar38 <= fVar40 || iVar25 != 0)) goto LAB_03163bd8;
LAB_031631dc:
              uVar24 = (ushort)(iVar25 << 8);
            }
            __dest[2] = uVar24 | uVar30;
            if ((uint)local_128 != 3) {
              fVar40 = *(float *)(lVar21 + 0x1c);
              fVar38 = local_130[7];
              iVar25 = (int)((fVar38 - fVar40) * *(float *)(lVar21 + 0x24));
              fVar39 = local_130[6] * 253.0 + 0.5;
              if (fVar39 < 0.0) {
                uVar30 = 0;
                if (!(fVar40 < fVar38 && iVar25 == 0)) goto LAB_031632dc;
LAB_03163bf4:
                uVar24 = 0x100;
              }
              else {
                uVar30 = (ushort)(int)fVar39;
                if (!(fVar38 <= fVar40 || iVar25 != 0)) goto LAB_03163bf4;
LAB_031632dc:
                uVar24 = (ushort)(iVar25 << 8);
              }
              __dest[3] = uVar24 | uVar30;
              if ((uint)local_128 != 4) {
                lVar37 = (local_128 & 0xffffffff) - 4;
                pfVar23 = local_130 + 9;
                puVar29 = __dest + 4;
                do {
                  pfVar1 = pfVar23 + -1;
                  fVar40 = *pfVar23;
                  pfVar23 = pfVar23 + 2;
                  fVar39 = *pfVar1 * 253.0 + 0.5;
                  iVar25 = (int)((fVar40 - *(float *)(lVar21 + 0x1c)) * *(float *)(lVar21 + 0x24));
                  fVar38 = 0.0;
                  if (0.0 <= fVar39) {
                    fVar38 = fVar39;
                  }
                  uVar30 = 0x100;
                  if (fVar40 <= *(float *)(lVar21 + 0x1c) || iVar25 != 0) {
                    uVar30 = (ushort)(iVar25 << 8);
                  }
                  lVar37 = lVar37 + -1;
                  *puVar29 = uVar30 | (ushort)(int)fVar38;
                  puVar29 = puVar29 + 1;
                } while (lVar37 != 0);
              }
            }
          }
        }
      }
      iVar4 = param_4[2];
      sVar6 = *(short *)((long)param_4 + 10);
      iVar25 = param_4[1];
      memcpy((void *)(*(long *)(lVar21 + 0x50) + (long)*param_4 * 2),__dest,(long)(short)iVar4 << 1)
      ;
      if (0 < (long)sVar6) {
        memcpy((void *)(*(long *)(lVar21 + 0x50) + (long)iVar25 * 2),__dest + (short)iVar4,
               (long)sVar6 << 1);
      }
      local_b0[0] = local_1a0;
      FUN_0315d564(lVar21,local_b0,&local_80);
      plVar16 = *(long **)(param_1 + 0x48);
      if (plVar16 != (long *)0x0) {
        puVar28 = (uint *)((long)plVar16 + 0xc);
        uVar20 = *puVar28;
        iVar25 = (int)plVar16[1];
        uVar18 = iVar25 + 1;
        if (iVar25 < (int)(uVar20 & 0x3fffffff)) {
          lVar37 = *plVar16;
        }
        else {
          lVar37 = *plVar16;
          if (0x3ffffffe < iVar25) {
            FUN_032bd0a8(uVar18);
            uVar20 = *puVar28;
          }
          uVar20 = (uVar20 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          uVar26 = uVar18;
          if ((int)uVar18 <= (int)uVar20) {
            uVar26 = uVar20;
          }
          lVar37 = FUN_032bd1d4(puVar10,uVar26,4,lVar37,iVar25,puVar28);
          iVar25 = (int)plVar16[1];
          *plVar16 = lVar37;
        }
        *(uint *)(lVar37 + (long)iVar25 * 4) = local_158;
        *(uint *)(plVar16 + 1) = uVar18;
      }
      lVar37 = uStack_78;
      uVar18 = uStack_78._4_4_;
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      if ((-1 < lVar37) && (local_80 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_80,uVar18 << 2);
      }
      uVar18 = (uint)local_128;
      goto LAB_03162b28;
    }
    uVar18 = 0;
    goto LAB_03162b2c;
  }
  iVar33 = uVar32 + (int)sVar5;
  *(int *)(param_7 + 2) = iVar33;
  uVar19 = iVar33 + 0x1f >> 5;
  if ((int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff) < (int)uVar19) {
    uVar18 = (*(uint *)((long)param_7 + 0xc) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar20 = uVar19;
    if ((int)uVar19 <= (int)uVar18) {
      uVar20 = uVar18;
    }
    lVar14 = FUN_032bd1d4(PTR_PTR_0434a080,uVar20,4,*param_7,(int)param_7[1]);
    *param_7 = lVar14;
  }
  uVar18 = *(uint *)(param_7 + 1);
  if (uVar18 != uVar19) {
    *(uint *)(param_7 + 1) = uVar19;
    uVar18 = uVar19;
  }
  __s = (void *)*param_7;
  uVar34 = (ulong)(int)uVar18;
  pvVar35 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar17 = uVar34;
  }
  else {
    uVar17 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar36 = uVar34;
    if (uVar17 <= uVar34) {
      uVar36 = uVar17;
    }
    pvVar2 = (void *)((long)__s + uVar36 * 4);
    uVar17 = uVar34 - uVar36;
    if (__s < pvVar2) {
      memset(__s,0xff,uVar36 << 2);
      do {
        pvVar35 = (void *)((long)pvVar35 + 4);
      } while (pvVar35 < pvVar2);
    }
  }
  if ((3 < uVar17) && (0 < (long)(uVar17 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar35 + (uVar17 & 0xfffffffffffffffc) * 4);
    pvVar3 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar35 + 0x10U)) {
      pvVar3 = (void *)((long)pvVar35 + 0x10U);
    }
    uVar17 = (long)pvVar3 + ~(ulong)pvVar35;
    memset(pvVar35,0xff,uVar17 + 0x10 & 0xfffffffffffffff0);
    uVar19 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
    uVar36 = (ulong)uVar19 & 7;
    if ((uVar19 & 7) != 0) {
      do {
        pvVar35 = (void *)((long)pvVar35 + 0x10);
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    if (0x6f < uVar17) {
      do {
        pvVar35 = (void *)((long)pvVar35 + 0x80);
      } while (pvVar35 < pvVar2);
    }
  }
  if (pvVar35 < (void *)((long)__s + (long)(int)uVar18 * 4)) {
    memset(pvVar35,0xff,(long)__s + ~(ulong)pvVar35 + uVar34 * 4 + 4 & 0xfffffffffffffffc);
    lVar14 = *(long *)(param_1 + 0x28);
    goto joined_r0x03163a74;
  }
  goto LAB_03162d4c;
code_r0x03162b14:
  uVar36 = uVar36 - 1;
  pcVar22 = pcVar22 + 2;
  if (uVar36 == 0) goto code_r0x03162b20;
  goto LAB_03162b08;
code_r0x03162b20:
  lVar21 = lVar37;
  uVar18 = 0;
LAB_03162b28:
  lVar37 = lVar21;
LAB_03162b2c:
  if (uVar18 != uVar19) {
    local_128 = CONCAT44(local_128._4_4_,uVar19);
  }
  if (0 < (int)uVar19) {
    uVar30 = *__dest;
    fVar38 = *(float *)(lVar37 + 0x1c);
    fVar39 = *(float *)(lVar37 + 0x20);
    *local_130 = (float)(uVar30 & 0xff) * 0.0039525693;
    local_130[1] = fVar38 + fVar39 * (float)(uVar30 >> 8);
    if (uVar19 != 1) {
      uVar30 = __dest[1];
      fVar38 = *(float *)(lVar37 + 0x1c);
      fVar39 = *(float *)(lVar37 + 0x20);
      local_130[2] = (float)(uVar30 & 0xff) * 0.0039525693;
      local_130[3] = fVar38 + fVar39 * (float)(uVar30 >> 8);
      if (uVar19 != 2) {
        uVar30 = __dest[2];
        fVar38 = *(float *)(lVar37 + 0x1c);
        fVar39 = *(float *)(lVar37 + 0x20);
        local_130[4] = (float)(uVar30 & 0xff) * 0.0039525693;
        local_130[5] = fVar38 + fVar39 * (float)(uVar30 >> 8);
        if (uVar19 != 3) {
          uVar30 = __dest[3];
          fVar38 = *(float *)(lVar37 + 0x1c);
          fVar39 = *(float *)(lVar37 + 0x20);
          local_130[6] = (float)(uVar30 & 0xff) * 0.0039525693;
          local_130[7] = fVar38 + fVar39 * (float)(uVar30 >> 8);
          if (uVar19 != 4) {
            lVar21 = (ulong)uVar19 - 4;
            pfVar23 = local_130 + 9;
            puVar29 = __dest + 4;
            do {
              uVar30 = *puVar29;
              fVar38 = *(float *)(lVar37 + 0x1c);
              fVar39 = *(float *)(lVar37 + 0x20);
              lVar21 = lVar21 + -1;
              pfVar23[-1] = (float)(uVar30 & 0xff) * 0.0039525693;
              *pfVar23 = fVar38 + fVar39 * (float)(uVar30 >> 8);
              pfVar23 = pfVar23 + 2;
              puVar29 = puVar29 + 1;
            } while (lVar21 != 0);
          }
        }
      }
    }
  }
  lVar37 = *(long *)(lVar14 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar37;
  }
  lVar37 = *(long *)(lVar37 + 8);
  uVar34 = (ulong)(int)(iVar33 * 2 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar37 + 0x10) < uVar34) || (*(long *)(lVar37 + 0x18) != (long)__dest + uVar34))
     || (*(ushort **)(lVar37 + 0x28) == __dest)) {
    if (__dest != (ushort *)0x0) {
      if (*(ulong *)(lVar37 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar37 + 8) + 0x20) = *(int *)(*(long *)(lVar37 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar37 + 0x40) + 0x18))(*(long **)(lVar37 + 0x40),__dest);
      }
      else if (*(long *)(lVar37 + 0x18) == (long)__dest + uVar34) {
        *(ushort **)(lVar37 + 0x18) = __dest;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar37,__dest);
      }
    }
  }
  else {
    *(ushort **)(lVar37 + 0x18) = __dest;
  }
  local_a0 = (float **)CONCAT44(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
  FUN_0316c250(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,
               param_3 & 0xffffffff,param_4,param_5,param_6,param_1,&local_a0,&local_130,param_7,
               param_1 + 0x4a8);
  pfVar23 = local_120;
  if (local_120 == local_130) {
    local_128 = local_128 & 0xffffffff00000000;
  }
  iVar33 = (int)local_118;
  lVar37 = *(long *)(lVar14 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar37;
  }
  lVar14 = *(long *)(lVar37 + 8);
  uVar34 = (ulong)(int)(iVar33 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar14 + 0x10) < uVar34) || (*(long *)(lVar14 + 0x18) != uVar34 + (long)pfVar23))
     || (*(float **)(lVar14 + 0x28) == pfVar23)) {
    if (pfVar23 != (float *)0x0) {
      if (*(ulong *)(lVar14 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar14 + 8) + 0x20) = *(int *)(*(long *)(lVar14 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))(*(long **)(lVar14 + 0x40),pfVar23);
      }
      else if (*(long *)(lVar14 + 0x18) == uVar34 + (long)pfVar23) {
        *(float **)(lVar14 + 0x18) = pfVar23;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar14,pfVar23);
      }
    }
  }
  else {
    *(float **)(lVar14 + 0x18) = pfVar23;
  }
  uVar34 = local_128;
  uVar17 = (ulong)local_128._4_4_;
  local_128 = (ulong)local_128._4_4_ << 0x20;
  if ((-1 < (long)uVar34) && (local_130 != (float *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_130,(uVar17 & 0x3fffffff) << 3);
    lVar14 = *(long *)(param_1 + 0x28);
    goto joined_r0x03163a74;
  }
LAB_03162d4c:
  lVar14 = *(long *)(param_1 + 0x28);
joined_r0x03163a74:
  if (lVar14 != 0) {
    uVar34 = (ulong)local_130 >> 0x20;
    local_130 = (float *)CONCAT44((int)uVar34,0xffffffff);
    local_100 = 0xffffffff;
    local_98 = &local_a8;
    local_90 = (float **)&local_130;
    local_128 = 0;
    local_120 = (float *)0x0;
    local_118 = 0;
    local_e8 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    uStack_108 = param_2[1];
    local_110 = *param_2;
    local_a8 = CONCAT44(*(undefined4 *)(param_1 + 0x44),
                        *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
    local_a0 = *(float ***)(param_1 + 0x30);
    local_88 = local_88 & 0xffffff00;
    lVar14 = *(long *)(local_a0[7] + (param_3 >> 0x16 & 0x3ff) * 0x3c);
    uVar19 = (uint)sVar5;
    local_d0 = local_158;
    local_c8 = param_4;
    uStack_c0 = param_5;
    local_b8 = param_6;
    if (0 < (int)uVar19) {
      uVar18 = 0;
      local_150 = local_158 & 0xffc00000;
      do {
        uVar20 = 1 << (ulong)(uVar18 & 0x1f);
        if ((*(uint *)(*param_7 + (ulong)(uVar18 >> 5) * 4) & uVar20) != 0) {
          lVar37 = *(long *)(lVar14 + 0x20);
          local_138[0] = *param_4 + uVar18;
          iVar33 = *(int *)(lVar37 + 0x30);
          iVar25 = *(int *)(lVar37 + 0x60);
          uVar27 = local_138[0] | local_150;
          uVar26 = local_138[0] - iVar33;
          if ((int)local_138[0] < iVar33) {
            lVar15 = *(long *)(lVar37 + 0x28);
            uVar26 = local_138[0];
            if (*(int *)(lVar37 + 0x78) != 0) {
              uVar26 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)local_138[0] * 4);
            }
            if (uVar26 == 0xffffffff) {
              lVar21 = *(long *)(lVar37 + 0x58) + (long)(int)(iVar25 * local_138[0]) * 4;
              uVar26 = local_138[0];
            }
            else {
              lVar21 = *(long *)(lVar37 + 0x130) + (long)(int)(uVar26 * iVar25) * 4;
              lVar15 = *(long *)(lVar37 + 0xc0);
            }
          }
          else {
            lVar21 = *(long *)(lVar37 + 0x150) +
                     (long)(int)(iVar25 * ((uVar18 + *param_4) - iVar33)) * 4;
            lVar15 = *(long *)(lVar37 + 0xe0);
          }
          FUN_03195eb0(lVar14,local_138,&local_80);
          lStack_d8 = uStack_78;
          local_e0 = local_80;
          local_100 = uVar27;
          local_f8 = lVar15 + (long)(int)uVar26 * 0x14;
          lStack_f0 = lVar21;
          local_e8 = lVar21 + (long)iVar25 * 4;
          uVar34 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_a0);
          if ((uVar34 & 1) == 0) {
            lVar37 = (ulong)(uVar18 >> 5) * 4;
            *(uint *)(*param_7 + lVar37) = *(uint *)(*param_7 + lVar37) & (uVar20 ^ 0xffffffff);
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar19 != uVar18);
    }
    if (0 < (int)uVar32) {
      iVar33 = 0;
      uVar31 = uVar31 & 0xffffffff;
      local_158 = local_158 & 0xffc00000;
      do {
        iVar25 = (int)sVar5;
        uVar18 = iVar25 + iVar33;
        uVar20 = 1 << (ulong)(uVar18 & 0x1f);
        if ((*(uint *)(*param_7 + (long)((int)uVar18 >> 5) * 4) & uVar20) != 0) {
          local_140[0] = iVar33 + param_4[1];
          lVar37 = *(long *)(lVar14 + 0x20);
          iVar7 = *(int *)(lVar37 + 0x60);
          uVar26 = local_140[0] | local_158;
          iVar4 = *(int *)(lVar37 + 0x30);
          if ((int)local_140[0] < iVar4) {
            lVar15 = *(long *)(lVar37 + 0x28);
            uVar27 = local_140[0];
            if (*(int *)(lVar37 + 0x78) != 0) {
              uVar27 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)local_140[0] * 4);
            }
            if (uVar27 == 0xffffffff) {
              lVar21 = *(long *)(lVar37 + 0x58) + (long)(int)(iVar7 * local_140[0]) * 4;
              uVar27 = local_140[0];
            }
            else {
              lVar21 = *(long *)(lVar37 + 0x130) + (long)(int)(uVar27 * iVar7) * 4;
              lVar15 = *(long *)(lVar37 + 0xc0);
            }
          }
          else {
            uVar27 = (param_4[1] + ((int)uVar31 - iVar25)) - iVar4;
            lVar21 = *(long *)(lVar37 + 0x150) + (long)(int)(iVar7 * (local_140[0] - iVar4)) * 4;
            lVar15 = *(long *)(lVar37 + 0xe0);
          }
          FUN_03195eb0(lVar14,local_140,&local_80);
          lStack_d8 = uStack_78;
          local_e0 = local_80;
          local_100 = uVar26;
          local_f8 = lVar15 + (long)(int)uVar27 * 0x14;
          lStack_f0 = lVar21;
          local_e8 = lVar21 + (long)iVar7 * 4;
          uVar34 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_a0);
          if ((uVar34 & 1) == 0) {
            lVar37 = ((long)((ulong)uVar18 << 0x20) >> 0x25) * 4;
            *(uint *)(*param_7 + lVar37) = *(uint *)(*param_7 + lVar37) & (uVar20 ^ 0xffffffff);
          }
        }
        iVar33 = iVar33 + 1;
        uVar31 = (ulong)((int)uVar31 + 1);
      } while (iVar25 + iVar33 < (int)(uVar32 + uVar19));
    }
  }
  lVar14 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x3b0) = (lVar14 - lVar13) + *(long *)(param_1 + 0x3b0);
  *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
  lVar13 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x58) = (lVar13 - lVar12) + *(long *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


