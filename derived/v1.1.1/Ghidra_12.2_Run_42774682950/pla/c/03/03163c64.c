/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03163c64; name: FUN_03163c64
 */


/* WARNING: Removing unreachable block (ram,0x031647ec) */
/* WARNING: Removing unreachable block (ram,0x03164484) */
/* WARNING: Removing unreachable block (ram,0x03164420) */
/* WARNING: Removing unreachable block (ram,0x031644e8) */
/* WARNING: Removing unreachable block (ram,0x03164854) */
/* WARNING: Type propagation algorithm not settling */

void FUN_03163c64(long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 *param_6,ulong param_7,int *param_8,undefined8 param_9,
                 undefined8 param_10,long *param_11)

{
  float *pfVar1;
  undefined1 *puVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  bool bVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  ushort *__src;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  undefined1 *puVar44;
  float *pfVar45;
  ushort uVar46;
  uint uVar47;
  char *pcVar48;
  undefined1 *puVar49;
  ushort *puVar50;
  uint uVar51;
  ulong uVar52;
  ushort uVar53;
  uint uVar54;
  void *pvVar55;
  int iVar56;
  undefined1 *puVar57;
  void *pvVar58;
  uint *puVar59;
  uint uVar60;
  long lVar61;
  ulong uVar62;
  long lVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  long *local_250;
  uint local_218;
  uint local_200;
  uint local_1e0 [2];
  uint local_1d8 [2];
  uint local_1d0 [2];
  undefined8 local_1c8;
  float *local_1c0;
  undefined8 local_1b8;
  float *local_1b0;
  uint local_1a8;
  int *local_1a0;
  undefined8 local_198;
  int *local_190;
  uint local_188;
  float *local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 uStack_168;
  undefined1 local_160 [72];
  long local_118;
  float *pfStack_110;
  undefined4 *local_108;
  undefined1 local_100;
  float local_f8;
  undefined4 local_f4;
  undefined4 auStack_f0 [2];
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined1 *local_a0;
  long lStack_98;
  uint local_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar30 = nn::os::GetSystemTick();
  lVar31 = nn::os::GetSystemTick();
  sVar7 = (short)param_8[2];
  uVar38 = (ulong)sVar7;
  uVar51 = *(uint *)(param_3 + 8);
  iVar56 = (int)*(short *)((long)param_8 + 10);
  uVar3 = iVar56 + sVar7;
  *(uint *)(param_11 + 2) = uVar3;
  uVar36 = (int)(uVar3 + 0x1f) >> 5;
  if ((int)(*(uint *)((long)param_11 + 0xc) & 0x3fffffff) < (int)uVar36) {
    uVar60 = (*(uint *)((long)param_11 + 0xc) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar60) {
      uVar60 = 0x3fffffff;
    }
    uVar47 = uVar36;
    if ((int)uVar36 <= (int)uVar60) {
      uVar47 = uVar60;
    }
    lVar32 = FUN_032bd1d4(PTR_PTR_0434a080,uVar47,4,*param_11,(int)param_11[1]);
    *param_11 = lVar32;
  }
  uVar60 = *(uint *)(param_11 + 1);
  if (uVar60 != uVar36) {
    *(uint *)(param_11 + 1) = uVar36;
    uVar60 = uVar36;
  }
  local_c0 = 0xffffffff;
  local_b8 = 0;
  lStack_b0 = 0;
  local_108 = auStack_f0;
  local_a8 = 0;
  uStack_c8 = param_6[1];
  local_d0 = *param_6;
  iVar35 = (int)sVar7;
  lVar32 = (long)iVar35;
  uVar47 = (uint)param_7;
  local_78 = param_10;
  uVar62 = param_7 >> 0x16 & 0x3ff;
  uStack_80 = param_9;
  fVar64 = *(float *)(param_1 + 0x3c);
  local_f8 = fVar64 + fVar64;
  local_f4 = *(undefined4 *)(param_1 + 0x44);
  local_118 = *(long *)(param_1 + 0x30);
  pfStack_110 = &local_f8;
  local_100 = 0;
  lVar43 = *(long *)(*(long *)(local_118 + 0x38) + uVar62 * 0xf0);
  uVar36 = (uint)sVar7;
  auStack_f0[0] = param_2;
  local_e8 = param_3;
  uStack_e0 = param_4;
  local_d8 = param_5;
  local_90 = uVar47;
  local_88 = param_8;
  if (fVar64 <= *(float *)(local_118 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) +
                *(float *)(param_1 + 0x40)) {
    pvVar55 = (void *)*param_11;
    uVar62 = (ulong)(int)uVar60;
    pvVar58 = pvVar55;
    if (((ulong)pvVar55 & 0xf) == 0) {
      uVar52 = uVar62;
    }
    else {
      uVar52 = 4 - (((ulong)pvVar55 & 0xf) >> 2);
      uVar40 = uVar62;
      if (uVar52 <= uVar62) {
        uVar40 = uVar52;
      }
      uVar52 = uVar62 - uVar40;
      if (pvVar55 < (void *)((long)pvVar55 + uVar40 * 4)) {
        memset(pvVar55,0xff,uVar40 * 4);
        pvVar58 = (void *)((long)pvVar55 + uVar40 * 4);
      }
    }
    if ((3 < uVar52) && (0 < (long)(uVar52 & 0xfffffffffffffffc))) {
      pvVar4 = (void *)((long)pvVar58 + (uVar52 & 0xfffffffffffffffc) * 4);
      if (pvVar4 <= (void *)((long)pvVar58 + 0x10U)) {
        pvVar4 = (void *)((long)pvVar58 + 0x10U);
      }
      memset(pvVar58,0xff,(long)pvVar4 + ~(ulong)pvVar58 + 0x10 & 0xfffffffffffffff0);
      pvVar58 = (void *)((long)pvVar58 +
                        ((long)pvVar4 + ~(ulong)pvVar58 & 0xfffffffffffffff0) + 0x10);
    }
    if (pvVar58 < (void *)((long)pvVar55 + (long)(int)uVar60 * 4)) {
      memset(pvVar58,0xff,(long)pvVar55 + ~(ulong)pvVar58 + uVar62 * 4 + 4 & 0xfffffffffffffffc);
      lVar32 = *(long *)(param_1 + 0x28);
      goto joined_r0x03164ec8;
    }
LAB_03164dd4:
    lVar32 = *(long *)(param_1 + 0x28);
  }
  else {
    uVar52 = (ulong)uVar51 & 0x3fffff;
    uVar51 = (uint)uVar52;
    if (-1 < *(int *)(param_1 + 0x14)) {
      lVar63 = *(long *)(*(long *)(lVar43 + 0x38) + (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
      local_218 = uVar47 & 0x3fffff;
      lVar61 = tpidr_el0;
      iVar8 = uVar3 * 2;
      if (uVar3 == 0) {
        __src = (ushort *)0x0;
      }
      else {
        lVar39 = *(long *)(lVar61 + 0x38d490);
        if (lVar39 == 0) {
          lVar39 = FUN_0333d16c(0,1);
          *(long *)(lVar61 + 0x38d490) = lVar39;
        }
        lVar39 = *(long *)(lVar39 + 8);
        uVar52 = (ulong)(int)(iVar8 + 0x7fU & 0xffffff80);
        if (uVar52 <= *(ulong *)(lVar39 + 0x10)) {
          __src = *(ushort **)(lVar39 + 0x18);
          uVar52 = (long)__src + uVar52;
          if (uVar52 <= *(ulong *)(lVar39 + 0x20)) {
            *(ulong *)(lVar39 + 0x18) = uVar52;
            goto LAB_03163e74;
          }
        }
        __src = (ushort *)FUN_032ce670();
      }
LAB_03163e74:
      local_170 = local_160;
      uStack_168 = 0x8000004000000000;
      nn::os::LockMutex((MutexType *)&DAT_04434b70);
      puVar49 = local_170;
      puVar28 = PTR_PTR_0434a090;
      uVar37 = (uint)(uStack_168 >> 0x20);
      uStack_168 = uStack_168 & 0xffffffff00000000;
      uVar60 = *(uint *)(*(long *)(lVar63 + 0x28) + (param_7 & 0x3fffff) * 4);
      if (uVar60 == 0xffffffff) {
        nn::os::UnlockMutex((MutexType *)&DAT_04434b70);
        plVar33 = (long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) +
                                              uVar62 * 0xf0) + 0x38) +
                          (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
        if ((char)plVar33[2] == '\x01') {
          lVar63 = *plVar33;
        }
        else {
          lVar63 = FUN_03165a00();
        }
        puVar28 = PTR_PTR_0434a090;
        uVar60 = (int)((uVar3 - 1) * uVar3) >> 1;
        local_250 = (long *)PTR_PTR_0434a090;
        if ((int)(uStack_168._4_4_ & 0x3fffffff) < (int)uVar60) {
          uVar37 = (uStack_168._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar37) {
            uVar37 = 0x3fffffff;
          }
          if ((int)uVar60 <= (int)uVar37) {
            uVar60 = uVar37;
          }
          local_170 = (undefined1 *)
                      FUN_032bd1d4(PTR_PTR_0434a090,uVar60,1,local_170,uStack_168 & 0xffffffff,
                                   (long)&uStack_168 + 4);
        }
        local_180 = (float *)0x0;
        local_178 = 0x8000000000000000;
        local_1a0 = (int *)0x0;
        local_198 = 0x8000000000000000;
        local_188 = uVar36;
        if (iVar35 == 0) {
          local_190 = (int *)0x0;
        }
        else {
          lVar39 = *(long *)(lVar61 + 0x38d490);
          if (lVar39 == 0) {
            lVar39 = FUN_0333d16c(0,1);
            *(long *)(lVar61 + 0x38d490) = lVar39;
          }
          lVar39 = *(long *)(lVar39 + 8);
          uVar62 = lVar32 * 8 + 0x7fU & 0xffffffffffffff80;
          if (uVar62 <= *(ulong *)(lVar39 + 0x10)) {
            local_190 = *(int **)(lVar39 + 0x18);
            uVar62 = (long)local_190 + uVar62;
            if (uVar62 <= *(ulong *)(lVar39 + 0x20)) {
              *(ulong *)(lVar39 + 0x18) = uVar62;
              goto LAB_03164294;
            }
          }
          local_190 = (int *)FUN_032ce670(lVar39);
        }
LAB_03164294:
        local_1c0 = (float *)0x0;
        local_1b8 = 0x8000000000000000;
        local_198 = CONCAT44(uVar36,(int)local_198) | 0x8000000000000000;
        local_1a8 = uVar3;
        local_1a0 = local_190;
        if (uVar3 == 0) {
          local_1b0 = (float *)0x0;
        }
        else {
          lVar39 = *(long *)(lVar61 + 0x38d490);
          if (lVar39 == 0) {
            lVar39 = FUN_0333d16c(0,1);
            *(long *)(lVar61 + 0x38d490) = lVar39;
          }
          lVar39 = *(long *)(lVar39 + 8);
          uVar62 = (ulong)(int)(uVar3 * 8 + 0x7f & 0xffffff80);
          if (uVar62 <= *(ulong *)(lVar39 + 0x10)) {
            local_1b0 = *(float **)(lVar39 + 0x18);
            uVar62 = (long)local_1b0 + uVar62;
            if (uVar62 <= *(ulong *)(lVar39 + 0x20)) {
              *(ulong *)(lVar39 + 0x18) = uVar62;
              goto LAB_03164304;
            }
          }
          local_1b0 = (float *)FUN_032ce670(lVar39);
        }
LAB_03164304:
        local_1b8 = CONCAT44(uVar3,(int)local_1b8) | 0x8000000000000000;
        local_1c8 = CONCAT44(*(undefined4 *)(lVar63 + 0x18),*(undefined4 *)(lVar63 + 0x18));
        local_1c0 = local_1b0;
        FUN_0316a4d0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                     param_7 & 0xffffffff,param_8,param_9,param_10,param_1,&local_1c8,&local_1a0,
                     &local_1c0,&local_180,param_1 + 0xa58);
        if ((int)uStack_168 != (int)local_178) {
          uStack_168 = CONCAT44(uStack_168._4_4_,(int)local_178);
        }
        if (((0 < (int)local_178) &&
            (*local_170 = (char)(int)((*local_180 - *(float *)(lVar63 + 0x1c)) *
                                     *(float *)(lVar63 + 0x24)), (int)local_178 != 1)) &&
           (local_170[1] = (char)(int)((local_180[1] - *(float *)(lVar63 + 0x1c)) *
                                      *(float *)(lVar63 + 0x24)), (int)local_178 != 2)) {
          lVar39 = (local_178 & 0xffffffff) - 2;
          pfVar45 = local_180 + 2;
          puVar49 = local_170 + 2;
          do {
            lVar39 = lVar39 + -1;
            *puVar49 = (char)(int)((*pfVar45 - *(float *)(lVar63 + 0x1c)) *
                                  *(float *)(lVar63 + 0x24));
            pfVar45 = pfVar45 + 1;
            puVar49 = puVar49 + 1;
          } while (lVar39 != 0);
        }
        if (0 < (int)local_1b8) {
          fVar64 = local_1c0[1];
          fVar65 = *(float *)(lVar63 + 0x1c);
          iVar34 = (int)((fVar64 - fVar65) * *(float *)(lVar63 + 0x24));
          fVar66 = *local_1c0 * 253.0 + 0.5;
          if (fVar66 < 0.0) {
            uVar53 = 0;
            if (!(fVar64 <= fVar65 || iVar34 != 0)) goto LAB_031652ac;
LAB_0316442c:
            uVar46 = (ushort)(iVar34 << 8);
          }
          else {
            uVar53 = (ushort)(int)fVar66;
            if (!(fVar65 < fVar64 && iVar34 == 0)) goto LAB_0316442c;
LAB_031652ac:
            uVar46 = 0x100;
          }
          *__src = uVar46 | uVar53;
          if ((int)local_1b8 != 1) {
            fVar66 = *(float *)(lVar63 + 0x1c);
            fVar64 = local_1c0[3];
            iVar34 = (int)((fVar64 - fVar66) * *(float *)(lVar63 + 0x24));
            fVar65 = local_1c0[2] * 253.0 + 0.5;
            if (fVar65 < 0.0) {
              uVar53 = 0;
              if (!(fVar64 <= fVar66 || iVar34 != 0)) goto LAB_031652c0;
LAB_03164490:
              uVar46 = (ushort)(iVar34 << 8);
            }
            else {
              uVar53 = (ushort)(int)fVar65;
              if (!(fVar66 < fVar64 && iVar34 == 0)) goto LAB_03164490;
LAB_031652c0:
              uVar46 = 0x100;
            }
            __src[1] = uVar46 | uVar53;
            if ((int)local_1b8 != 2) {
              fVar66 = *(float *)(lVar63 + 0x1c);
              fVar64 = local_1c0[5];
              iVar34 = (int)((fVar64 - fVar66) * *(float *)(lVar63 + 0x24));
              fVar65 = local_1c0[4] * 253.0 + 0.5;
              if (fVar65 < 0.0) {
                uVar53 = 0;
                if (!(fVar64 <= fVar66 || iVar34 != 0)) goto LAB_031652d4;
LAB_031644f4:
                uVar46 = (ushort)(iVar34 << 8);
              }
              else {
                uVar53 = (ushort)(int)fVar65;
                if (!(fVar66 < fVar64 && iVar34 == 0)) goto LAB_031644f4;
LAB_031652d4:
                uVar46 = 0x100;
              }
              __src[2] = uVar46 | uVar53;
              if ((int)local_1b8 != 3) {
                fVar66 = *(float *)(lVar63 + 0x1c);
                fVar64 = local_1c0[7];
                iVar34 = (int)((fVar64 - fVar66) * *(float *)(lVar63 + 0x24));
                fVar65 = local_1c0[6] * 253.0 + 0.5;
                if (fVar65 < 0.0) {
                  uVar53 = 0;
                  if (!(fVar64 <= fVar66 || iVar34 != 0)) goto LAB_031652e8;
LAB_031647f8:
                  uVar46 = (ushort)(iVar34 << 8);
                }
                else {
                  uVar53 = (ushort)(int)fVar65;
                  if (!(fVar66 < fVar64 && iVar34 == 0)) goto LAB_031647f8;
LAB_031652e8:
                  uVar46 = 0x100;
                }
                __src[3] = uVar46 | uVar53;
                if ((int)local_1b8 != 4) {
                  lVar39 = (local_1b8 & 0xffffffff) - 4;
                  pfVar45 = local_1c0 + 9;
                  puVar50 = __src + 4;
                  do {
                    pfVar1 = pfVar45 + -1;
                    fVar66 = *pfVar45;
                    pfVar45 = pfVar45 + 2;
                    fVar65 = *pfVar1 * 253.0 + 0.5;
                    iVar34 = (int)((fVar66 - *(float *)(lVar63 + 0x1c)) * *(float *)(lVar63 + 0x24))
                    ;
                    fVar64 = 0.0;
                    if (0.0 <= fVar65) {
                      fVar64 = fVar65;
                    }
                    uVar53 = 0x100;
                    if (fVar66 <= *(float *)(lVar63 + 0x1c) || iVar34 != 0) {
                      uVar53 = (ushort)(iVar34 << 8);
                    }
                    lVar39 = lVar39 + -1;
                    *puVar50 = uVar53 | (ushort)(int)fVar64;
                    puVar50 = puVar50 + 1;
                  } while (lVar39 != 0);
                }
              }
            }
          }
        }
        iVar34 = param_8[1];
        memcpy((void *)(*(long *)(lVar63 + 0x50) + (long)*param_8 * 2),__src,
               -(uVar38 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar38 & 0xffffffff) << 1);
        if (0 < iVar56) {
          memcpy((void *)(*(long *)(lVar63 + 0x50) + (long)iVar34 * 2),__src + (int)uVar36,
                 (long)iVar56 << 1);
        }
        uVar60 = local_1a8;
        pfVar45 = local_1b0;
        if (local_1b0 == local_1c0) {
          local_1b8 = local_1b8 & 0xffffffff00000000;
        }
        lVar39 = *(long *)(lVar61 + 0x38d490);
        if (lVar39 == 0) {
          lVar39 = FUN_0333d16c(0,1);
          *(long *)(lVar61 + 0x38d490) = lVar39;
        }
        lVar39 = *(long *)(lVar39 + 8);
        uVar62 = (ulong)(int)(uVar60 * 8 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar39 + 0x10) < uVar62) ||
            (*(long *)(lVar39 + 0x18) != uVar62 + (long)pfVar45)) ||
           (*(float **)(lVar39 + 0x28) == pfVar45)) {
          if (pfVar45 != (float *)0x0) {
            if (*(ulong *)(lVar39 + 0x10) < uVar62) {
              *(int *)(*(long *)(lVar39 + 8) + 0x20) = *(int *)(*(long *)(lVar39 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar39 + 0x40) + 0x18))(*(long **)(lVar39 + 0x40),pfVar45);
            }
            else if (*(long *)(lVar39 + 0x18) == uVar62 + (long)pfVar45) {
              *(float **)(lVar39 + 0x18) = pfVar45;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar39,pfVar45);
            }
          }
        }
        else {
          *(float **)(lVar39 + 0x18) = pfVar45;
        }
        uVar62 = local_1b8;
        puVar27 = PTR_PTR_0434a080;
        uVar52 = (ulong)local_1b8._4_4_;
        local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
        if ((-1 < (long)uVar62) && (local_1c0 != (float *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,local_1c0,(uVar52 & 0x3fffffff) << 3);
        }
        if ((((0 < (int)local_198) &&
             (*(char *)(*(long *)(lVar63 + 0x60) + (long)*local_1a0) =
                   (char)(int)(((float)local_1a0[1] - *(float *)(lVar63 + 0x1c)) *
                              *(float *)(lVar63 + 0x24)), (int)local_198 != 1)) &&
            (*(char *)(*(long *)(lVar63 + 0x60) + (long)local_1a0[2]) =
                  (char)(int)(((float)local_1a0[3] - *(float *)(lVar63 + 0x1c)) *
                             *(float *)(lVar63 + 0x24)), (int)local_198 != 2)) &&
           ((*(char *)(*(long *)(lVar63 + 0x60) + (long)local_1a0[4]) =
                  (char)(int)(((float)local_1a0[5] - *(float *)(lVar63 + 0x1c)) *
                             *(float *)(lVar63 + 0x24)), (int)local_198 != 3 &&
            (*(char *)(*(long *)(lVar63 + 0x60) + (long)local_1a0[6]) =
                  (char)(int)(((float)local_1a0[7] - *(float *)(lVar63 + 0x1c)) *
                             *(float *)(lVar63 + 0x24)), (int)local_198 != 4)))) {
          lVar39 = 0;
          lVar41 = (local_198 & 0xffffffff) - 4;
          do {
            lVar10 = lVar39 + 0x24;
            lVar11 = lVar39 + 0x20;
            lVar41 = lVar41 + -1;
            lVar39 = lVar39 + 8;
            *(char *)(*(long *)(lVar63 + 0x60) + (long)*(int *)((long)local_1a0 + lVar11)) =
                 (char)(int)((*(float *)((long)local_1a0 + lVar10) - *(float *)(lVar63 + 0x1c)) *
                            *(float *)(lVar63 + 0x24));
          } while (lVar41 != 0);
        }
        local_1d0[0] = local_218;
        FUN_0315d2e4(lVar63,local_1d0,&local_170);
        plVar33 = *(long **)(param_1 + 0x48);
        if (plVar33 != (long *)0x0) {
          puVar59 = (uint *)((long)plVar33 + 0xc);
          uVar37 = *puVar59;
          iVar34 = (int)plVar33[1];
          uVar60 = iVar34 + 1;
          if (iVar34 < (int)(uVar37 & 0x3fffffff)) {
            lVar39 = *plVar33;
          }
          else {
            lVar39 = *plVar33;
            if (0x3ffffffe < iVar34) {
              FUN_032bd0a8(uVar60);
              uVar37 = *puVar59;
            }
            uVar37 = (uVar37 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar37) {
              uVar37 = 0x3fffffff;
            }
            uVar54 = uVar60;
            if ((int)uVar60 <= (int)uVar37) {
              uVar54 = uVar37;
            }
            lVar39 = FUN_032bd1d4(puVar27,uVar54,4,lVar39,iVar34,puVar59);
            iVar34 = (int)plVar33[1];
            *plVar33 = lVar39;
          }
          *(uint *)(lVar39 + (long)iVar34 * 4) = uVar47;
          *(uint *)(plVar33 + 1) = uVar60;
        }
        uVar60 = local_188;
        piVar24 = local_190;
        if (local_190 == local_1a0) {
          local_198 = local_198 & 0xffffffff00000000;
        }
        lVar39 = *(long *)(lVar61 + 0x38d490);
        if (lVar39 == 0) {
          lVar39 = FUN_0333d16c(0,1);
          *(long *)(lVar61 + 0x38d490) = lVar39;
        }
        lVar39 = *(long *)(lVar39 + 8);
        uVar62 = (ulong)(int)(uVar60 * 8 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar39 + 0x10) < uVar62) ||
            (*(long *)(lVar39 + 0x18) != uVar62 + (long)piVar24)) ||
           (*(int **)(lVar39 + 0x28) == piVar24)) {
          if (piVar24 != (int *)0x0) {
            if (*(ulong *)(lVar39 + 0x10) < uVar62) {
              *(int *)(*(long *)(lVar39 + 8) + 0x20) = *(int *)(*(long *)(lVar39 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar39 + 0x40) + 0x18))(*(long **)(lVar39 + 0x40),piVar24);
            }
            else if (*(long *)(lVar39 + 0x18) == uVar62 + (long)piVar24) {
              *(int **)(lVar39 + 0x18) = piVar24;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar39,piVar24);
            }
          }
        }
        else {
          *(int **)(lVar39 + 0x18) = piVar24;
        }
        uVar62 = local_198;
        uVar52 = (ulong)local_198._4_4_;
        local_198 = (ulong)local_198._4_4_ << 0x20;
        if ((-1 < (long)uVar62) && (local_1a0 != (int *)0x0)) {
          (**(code **)(*(long *)puVar27 + 0x18))(puVar27,local_1a0,(uVar52 & 0x3fffffff) << 3);
        }
        uVar62 = local_178;
        uVar60 = local_178._4_4_;
        local_178 = (ulong)local_178._4_4_ << 0x20;
        if ((-1 < (long)uVar62) && (local_180 != (float *)0x0)) {
          (**(code **)(*(long *)puVar28 + 0x18))(puVar28,local_180,uVar60 << 2);
        }
      }
      else {
        lVar39 = *(long *)(lVar63 + 0x38);
        if (*(char *)(lVar39 + (int)uVar60) == -1) {
          uVar54 = 0;
        }
        else if (*(char *)(lVar39 + (int)(uVar60 + 1)) == -1) {
          uVar54 = 1;
        }
        else {
          uVar54 = 1;
          do {
            iVar34 = uVar60 + uVar54;
            uVar54 = uVar54 + 1;
          } while (*(char *)(lVar39 + (iVar34 + 1)) != -1);
        }
        local_250 = (long *)PTR_PTR_0434a090;
        lVar41 = local_118;
        pfVar45 = pfStack_110;
        puVar12 = local_108;
        uVar13 = local_100;
        fVar64 = local_f8;
        uVar14 = local_f4;
        uVar15 = auStack_f0[0];
        lVar10 = local_e8;
        uVar16 = uStack_e0;
        uVar17 = local_d8;
        uVar18 = local_d0;
        uVar19 = uStack_c8;
        uVar42 = local_c0;
        lVar11 = local_b8;
        lVar20 = lStack_b0;
        lVar21 = local_a8;
        puVar22 = local_a0;
        lVar23 = lStack_98;
        uVar5 = local_90;
        piVar24 = local_88;
        uVar25 = uStack_80;
        uVar26 = local_78;
        if ((int)(uVar37 & 0x3fffffff) < (int)uVar54) {
          if (0x3fffffff < (int)uVar54) {
            FUN_032bd0a8(uVar54);
            uVar37 = uStack_168._4_4_;
          }
          uVar37 = (uVar37 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar37) {
            uVar37 = 0x3fffffff;
          }
          uVar42 = uVar54;
          if ((int)uVar54 <= (int)uVar37) {
            uVar42 = uVar37;
          }
          local_170 = (undefined1 *)FUN_032bd1d4(puVar28,uVar42,1,puVar49,0,(long)&uStack_168 + 4);
          lVar41 = local_118;
          pfVar45 = pfStack_110;
          puVar12 = local_108;
          uVar13 = local_100;
          fVar64 = local_f8;
          uVar14 = local_f4;
          uVar15 = auStack_f0[0];
          lVar10 = local_e8;
          uVar16 = uStack_e0;
          uVar17 = local_d8;
          uVar18 = local_d0;
          uVar19 = uStack_c8;
          uVar42 = local_c0;
          lVar11 = local_b8;
          lVar20 = lStack_b0;
          lVar21 = local_a8;
          puVar22 = local_a0;
          lVar23 = lStack_98;
          uVar5 = local_90;
          piVar24 = local_88;
          uVar25 = uStack_80;
          uVar26 = local_78;
        }
        if (uVar54 != 0) {
          puVar49 = (undefined1 *)(lVar39 + (ulong)uVar60);
          uVar60 = uVar54 & 3;
          puVar2 = local_170;
          if (2 < uVar54 - 1) {
            iVar34 = uVar60 - uVar54;
            puVar44 = puVar49;
            puVar57 = local_170;
            do {
              *puVar57 = *puVar44;
              puVar57[1] = puVar44[1];
              puVar57[2] = puVar44[2];
              puVar49 = puVar44 + 4;
              puVar2 = puVar57 + 4;
              iVar34 = iVar34 + 4;
              puVar57[3] = puVar44[3];
              puVar44 = puVar49;
              puVar57 = puVar2;
            } while (iVar34 != 0);
          }
          for (; uVar60 != 0; uVar60 = uVar60 - 1) {
            *puVar2 = *puVar49;
            puVar49 = puVar49 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        uStack_168._4_4_ = (uint)(uStack_168 >> 0x20);
        uStack_168 = CONCAT44(uStack_168._4_4_,uVar54);
        local_118 = lVar41;
        pfStack_110 = pfVar45;
        local_108 = puVar12;
        local_100 = uVar13;
        local_f8 = fVar64;
        local_f4 = uVar14;
        auStack_f0[0] = uVar15;
        local_e8 = lVar10;
        uStack_e0 = uVar16;
        local_d8 = uVar17;
        local_d0 = uVar18;
        uStack_c8 = uVar19;
        local_c0 = uVar42;
        local_b8 = lVar11;
        lStack_b0 = lVar20;
        local_a8 = lVar21;
        local_a0 = puVar22;
        lStack_98 = lVar23;
        local_90 = uVar5;
        local_88 = piVar24;
        uStack_80 = uVar25;
        local_78 = uVar26;
        nn::os::UnlockMutex((MutexType *)&DAT_04434b70);
        iVar34 = param_8[1];
        memcpy(__src,(void *)(*(long *)(lVar63 + 0x50) + (long)*param_8 * 2),lVar32 << 1);
        if (0 < iVar56) {
          memcpy(__src + lVar32,(void *)(*(long *)(lVar63 + 0x50) + (long)iVar34 * 2),
                 (long)iVar56 << 1);
        }
      }
      pvVar55 = (void *)*param_11;
      uVar62 = (ulong)(int)param_11[1];
      pvVar58 = pvVar55;
      if (((ulong)pvVar55 & 0xf) == 0) {
        uVar52 = uVar62;
      }
      else {
        uVar52 = 4 - (((ulong)pvVar55 & 0xf) >> 2);
        uVar40 = uVar62;
        if (uVar52 <= uVar62) {
          uVar40 = uVar52;
        }
        uVar52 = uVar62 - uVar40;
        if (pvVar55 < (void *)((long)pvVar55 + uVar40 * 4)) {
          memset(pvVar55,0,uVar40 * 4);
          pvVar58 = (void *)((long)pvVar55 + uVar40 * 4);
        }
      }
      if ((3 < uVar52) && (0 < (long)(uVar52 & 0xfffffffffffffffc))) {
        pvVar4 = (void *)((long)pvVar58 + (uVar52 & 0xfffffffffffffffc) * 4);
        if (pvVar4 <= (void *)((long)pvVar58 + 0x10U)) {
          pvVar4 = (void *)((long)pvVar58 + 0x10U);
        }
        memset(pvVar58,0,(long)pvVar4 + ~(ulong)pvVar58 + 0x10 & 0xfffffffffffffff0);
        pvVar58 = (void *)((long)pvVar58 +
                          ((long)pvVar4 + ~(ulong)pvVar58 & 0xfffffffffffffff0) + 0x10);
      }
      if (pvVar58 < (void *)((long)pvVar55 + uVar62 * 4)) {
        memset(pvVar58,0,(long)pvVar55 + ~(ulong)pvVar58 + uVar62 * 4 + 4 & 0xfffffffffffffffc);
        uVar62 = uStack_168;
      }
      else {
        uVar62 = uStack_168;
      }
      uStack_168._4_4_ = (uint)(uVar62 >> 0x20);
      uVar60 = uStack_168._4_4_;
      if ((int)uStack_168 == 0) {
        uStack_168 = (ulong)uStack_168._4_4_ << 0x20;
        if ((-1 < (long)uVar62) && (local_170 != (undefined1 *)0x0)) {
          (**(code **)(*local_250 + 0x18))(local_250,local_170,uVar60 & 0x3fffffff);
        }
        lVar32 = *(long *)(lVar61 + 0x38d490);
        if (lVar32 == 0) {
          lVar32 = FUN_0333d16c(0,1);
          *(long *)(lVar61 + 0x38d490) = lVar32;
        }
        lVar32 = *(long *)(lVar32 + 8);
        uVar38 = (ulong)(int)(iVar8 + 0x7fU & 0xffffff80);
        if (((*(ulong *)(lVar32 + 0x10) < uVar38) ||
            (*(long *)(lVar32 + 0x18) != (long)__src + uVar38)) ||
           (*(ushort **)(lVar32 + 0x28) == __src)) {
          if (__src != (ushort *)0x0) {
            if (*(ulong *)(lVar32 + 0x10) < uVar38) {
              *(int *)(*(long *)(lVar32 + 8) + 0x20) = *(int *)(*(long *)(lVar32 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar32 + 0x40) + 0x18))(*(long **)(lVar32 + 0x40),__src);
            }
            else if (*(long *)(lVar32 + 0x18) == (long)__src + uVar38) {
              *(ushort **)(lVar32 + 0x18) = __src;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar32,__src);
            }
          }
        }
        else {
          *(ushort **)(lVar32 + 0x18) = __src;
        }
        goto LAB_03164ddc;
      }
      if ((*(byte *)(param_3 + 0x10) >> 4 & 1) == 0) {
        uVar51 = uVar51 - *param_8;
      }
      else {
        uVar51 = (uVar51 + uVar36) - param_8[1];
      }
      if ((int)uVar51 < 1) {
        uVar37 = 0;
      }
      else {
        uVar37 = (uint)(*(char *)((long)__src + 1) != '\0');
        if (uVar51 != 1) {
          lVar39 = (ulong)uVar51 - 1;
          pcVar48 = (char *)((long)__src + 3);
          do {
            if (*pcVar48 != '\0') {
              uVar37 = uVar37 + 1;
            }
            lVar39 = lVar39 + -1;
            pcVar48 = pcVar48 + 2;
          } while (lVar39 != 0);
        }
      }
      fVar64 = (*(float *)(param_1 + 0x3c) - *(float *)(lVar63 + 0x1c)) * *(float *)(lVar63 + 0x24);
      if (fVar64 < 0.0) {
        fVar64 = 0.0;
      }
      else if (254.0 < fVar64) {
        fVar64 = 254.0;
      }
      if (0 < (int)uVar3) {
        uVar52 = 0;
        uVar54 = 0;
        pcVar48 = (char *)((long)__src + 1);
        do {
          if (*pcVar48 != '\0') {
            uVar42 = (uint)uVar52;
            if (uVar51 == uVar52) {
              bVar29 = true;
              if (lVar32 <= (long)uVar52) goto LAB_03164140;
LAB_03164144:
              if (bVar29) {
LAB_03164148:
                lVar63 = (uVar52 >> 5 & 0x7ffffff) * 4;
                *(uint *)(*param_11 + lVar63) =
                     *(uint *)(*param_11 + lVar63) | 1 << (ulong)(uVar42 & 0x1f);
              }
            }
            else {
              uVar5 = uVar54;
              if ((int)uVar54 <= (int)uVar37) {
                uVar5 = uVar37;
              }
              uVar6 = uVar37;
              if ((int)uVar54 <= (int)uVar37) {
                uVar6 = uVar54;
              }
              bVar29 = (uint)(int)fVar64 <=
                       (uint)(byte)local_170[(int)(uVar6 + ((int)((uVar5 - 1) * uVar5) >> 1))];
              if ((long)uVar52 < lVar32) goto LAB_03164144;
LAB_03164140:
              if (!bVar29) goto LAB_03164144;
              iVar34 = -uVar36 + uVar42 + param_8[1];
              lVar63 = *(long *)(lVar43 + 0x20);
              if (iVar34 < *(int *)(lVar63 + 0x30)) {
                lVar39 = *(long *)(lVar63 + 0x28);
                iVar9 = iVar34;
                if (*(int *)(lVar63 + 0x78) != 0) {
                  iVar9 = *(int *)(*(long *)(lVar63 + 0x70) + (long)iVar34 * 4);
                }
                if (iVar9 != -1) {
                  plVar33 = (long *)(lVar63 + 0xc0);
                  iVar34 = iVar9;
                  goto LAB_0316548c;
                }
              }
              else {
                iVar34 = (-uVar36 + uVar42 + param_8[1]) - *(int *)(lVar63 + 0x30);
                plVar33 = (long *)(lVar63 + 0xe0);
LAB_0316548c:
                lVar39 = *plVar33;
              }
              if ((*(int *)(lVar39 + (long)iVar34 * 0x14 + 8) != -1) &&
                 ((*(byte *)(lVar39 + (long)iVar34 * 0x14 + 0x10) >> 5 & 1) == 0))
              goto LAB_03164148;
            }
            uVar54 = uVar54 + 1;
          }
          uVar52 = uVar52 + 1;
          pcVar48 = pcVar48 + 2;
        } while (uVar3 != uVar52);
      }
      uStack_168 = (ulong)uStack_168._4_4_ << 0x20;
      if ((-1 < (long)uVar62) && (local_170 != (undefined1 *)0x0)) {
        (**(code **)(*local_250 + 0x18))(local_250,local_170,uVar60 & 0x3fffffff);
      }
      lVar32 = *(long *)(lVar61 + 0x38d490);
      if (lVar32 == 0) {
        lVar32 = FUN_0333d16c(0,1);
        *(long *)(lVar61 + 0x38d490) = lVar32;
      }
      lVar32 = *(long *)(lVar32 + 8);
      uVar62 = (ulong)(int)(iVar8 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar32 + 0x10) < uVar62) ||
          (*(long *)(lVar32 + 0x18) != (long)__src + uVar62)) ||
         (*(ushort **)(lVar32 + 0x28) == __src)) {
        if (__src != (ushort *)0x0) {
          if (*(ulong *)(lVar32 + 0x10) < uVar62) {
            *(int *)(*(long *)(lVar32 + 8) + 0x20) = *(int *)(*(long *)(lVar32 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar32 + 0x40) + 0x18))(*(long **)(lVar32 + 0x40),__src);
            lVar32 = *(long *)(param_1 + 0x28);
          }
          else if (*(long *)(lVar32 + 0x18) == (long)__src + uVar62) {
            *(ushort **)(lVar32 + 0x18) = __src;
            FUN_032ce944();
            lVar32 = *(long *)(param_1 + 0x28);
          }
          else {
            FUN_032ceaf0(lVar32,__src);
            lVar32 = *(long *)(param_1 + 0x28);
          }
          goto joined_r0x03164ec8;
        }
      }
      else {
        *(ushort **)(lVar32 + 0x18) = __src;
      }
      goto LAB_03164dd4;
    }
    lVar32 = *(long *)(lVar43 + 0x20);
    if ((int)uVar51 < *(int *)(lVar32 + 0x30)) {
      if (*(int *)(lVar32 + 0x78) != 0) {
        uVar60 = *(uint *)(*(long *)(lVar32 + 0x70) + uVar52 * 4);
        if (uVar60 == 0xffffffff) {
          lVar32 = *(long *)(lVar32 + 0x28) + uVar52 * 0x14;
          goto LAB_03164c08;
        }
        uVar52 = (ulong)uVar60;
      }
      lVar32 = *(long *)(lVar32 + 0xc0) + (long)(int)uVar52 * 0x14;
    }
    else {
      lVar32 = *(long *)(lVar32 + 0xe0) + (long)(int)(uVar51 - *(int *)(lVar32 + 0x30)) * 0x14;
    }
LAB_03164c08:
    local_170 = (undefined1 *)CONCAT44(fVar64,fVar64);
    FUN_0316ef90(local_118,*(undefined8 *)(param_1 + 0x20),uVar51 | uVar47 & 0xffc00000,lVar32,
                 param_7 & 0xffffffff,param_8,param_9,param_10,param_1,&local_170,param_11,
                 param_1 + 0xb40);
    lVar32 = *(long *)(param_1 + 0x28);
  }
joined_r0x03164ec8:
  if (lVar32 != 0) {
    if (0 < iVar35) {
      uVar51 = 0;
      local_200 = uVar47 & 0xffc00000;
      do {
        uVar60 = 1 << (ulong)(uVar51 & 0x1f);
        if ((*(uint *)(*param_11 + (ulong)(uVar51 >> 5) * 4) & uVar60) != 0) {
          local_1d8[0] = *param_8 + uVar51;
          uVar54 = local_1d8[0] | local_200;
          lVar32 = *(long *)(lVar43 + 0x20);
          iVar35 = *(int *)(lVar32 + 0x30);
          iVar8 = *(int *)(lVar32 + 0x60);
          uVar37 = local_1d8[0] - iVar35;
          if ((int)local_1d8[0] < iVar35) {
            lVar63 = *(long *)(lVar32 + 0x28);
            uVar37 = local_1d8[0];
            if (*(int *)(lVar32 + 0x78) != 0) {
              uVar37 = *(uint *)(*(long *)(lVar32 + 0x70) + (long)(int)local_1d8[0] * 4);
            }
            if (uVar37 == 0xffffffff) {
              lVar61 = *(long *)(lVar32 + 0x58) + (long)(int)(iVar8 * local_1d8[0]) * 4;
              uVar37 = local_1d8[0];
            }
            else {
              lVar61 = *(long *)(lVar32 + 0x130) + (long)(int)(uVar37 * iVar8) * 4;
              lVar63 = *(long *)(lVar32 + 0xc0);
            }
          }
          else {
            lVar61 = *(long *)(lVar32 + 0x150) +
                     (long)(int)(iVar8 * ((uVar51 + *param_8) - iVar35)) * 4;
            lVar63 = *(long *)(lVar32 + 0xe0);
          }
          FUN_03195eb0(lVar43,local_1d8,&local_170);
          lStack_98 = uStack_168;
          local_a0 = local_170;
          local_c0 = uVar54;
          local_b8 = lVar63 + (long)(int)uVar37 * 0x14;
          lStack_b0 = lVar61;
          local_a8 = lVar61 + (long)iVar8 * 4;
          uVar62 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_118);
          if ((uVar62 & 1) == 0) {
            lVar32 = (ulong)(uVar51 >> 5) * 4;
            *(uint *)(*param_11 + lVar32) = *(uint *)(*param_11 + lVar32) & (uVar60 ^ 0xffffffff);
          }
        }
        uVar51 = uVar51 + 1;
      } while (uVar36 != uVar51);
    }
    if (0 < iVar56) {
      local_200 = uVar47 & 0xffc00000;
      iVar56 = 0;
      uVar38 = uVar38 & 0xffffffff;
      do {
        uVar51 = uVar36 + iVar56;
        uVar60 = 1 << (ulong)(uVar51 & 0x1f);
        if ((*(uint *)(*param_11 + (long)((int)uVar51 >> 5) * 4) & uVar60) != 0) {
          local_1e0[0] = iVar56 + param_8[1];
          uVar47 = local_1e0[0] | local_200;
          lVar32 = *(long *)(lVar43 + 0x20);
          iVar35 = *(int *)(lVar32 + 0x30);
          iVar8 = *(int *)(lVar32 + 0x60);
          if ((int)local_1e0[0] < iVar35) {
            lVar63 = *(long *)(lVar32 + 0x28);
            uVar37 = local_1e0[0];
            if (*(int *)(lVar32 + 0x78) != 0) {
              uVar37 = *(uint *)(*(long *)(lVar32 + 0x70) + (long)(int)local_1e0[0] * 4);
            }
            if (uVar37 == 0xffffffff) {
              lVar61 = *(long *)(lVar32 + 0x58) + (long)(int)(iVar8 * local_1e0[0]) * 4;
              uVar37 = local_1e0[0];
            }
            else {
              lVar61 = *(long *)(lVar32 + 0x130) + (long)(int)(uVar37 * iVar8) * 4;
              lVar63 = *(long *)(lVar32 + 0xc0);
            }
          }
          else {
            uVar37 = (param_8[1] + ((int)uVar38 - uVar36)) - iVar35;
            lVar61 = *(long *)(lVar32 + 0x150) + (long)(int)(iVar8 * (local_1e0[0] - iVar35)) * 4;
            lVar63 = *(long *)(lVar32 + 0xe0);
          }
          FUN_03195eb0(lVar43,local_1e0,&local_170);
          lStack_98 = uStack_168;
          local_a0 = local_170;
          local_c0 = uVar47;
          local_b8 = lVar63 + (long)(int)uVar37 * 0x14;
          lStack_b0 = lVar61;
          local_a8 = lVar61 + (long)iVar8 * 4;
          uVar62 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_118);
          if ((uVar62 & 1) == 0) {
            lVar32 = ((long)((ulong)uVar51 << 0x20) >> 0x25) * 4;
            *(uint *)(*param_11 + lVar32) = *(uint *)(*param_11 + lVar32) & (uVar60 ^ 0xffffffff);
          }
        }
        iVar56 = iVar56 + 1;
        uVar38 = (ulong)((int)uVar38 + 1);
      } while ((int)(uVar36 + iVar56) < (int)uVar3);
    }
  }
LAB_03164ddc:
  lVar32 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0xa48) = (lVar32 - lVar31) + *(long *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa50) = *(int *)(param_1 + 0xa50) + 1;
  lVar31 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x58) = (lVar31 - lVar30) + *(long *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


