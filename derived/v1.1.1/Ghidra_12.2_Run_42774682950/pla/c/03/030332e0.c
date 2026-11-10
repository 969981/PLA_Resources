/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030332e0; name: FUN_030332e0
 */


/* WARNING: Removing unreachable block (ram,0x03033da8) */
/* WARNING: Removing unreachable block (ram,0x03033cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_030332e0(long *param_1,double *param_2,undefined8 param_3)

{
  int *piVar1;
  char *__s;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  size_t sVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  double *pdVar22;
  long lVar23;
  undefined8 uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [12];
  long *plVar28;
  ulong *puVar29;
  ulong uVar30;
  long *plVar31;
  ulong *puVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  double dVar53;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  int iVar64;
  int iVar65;
  undefined1 auVar66 [16];
  undefined8 local_230;
  long lStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  ulong uStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined4 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170;
  undefined1 auStack_160 [4];
  float local_15c;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar23 = tpidr_el0;
  if (*(long *)(lVar23 + 0x38d490) == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar20;
    local_70 = *(long *)(lVar20 + 0x10);
  }
  else {
    local_70 = *(long *)(*(long *)(lVar23 + 0x38d490) + 0x10);
  }
  if (local_70 != 0) {
    puVar16 = *(undefined8 **)(local_70 + 8);
    uVar18 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= *(ulong *)(local_70 + 0x10)) &&
       (*(ulong *)(local_70 + 8) = uVar18, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = "TtAllocateBody";
      uVar24 = nn::os::GetSystemTick();
      puVar16[1] = uVar24;
    }
  }
  pdVar22 = param_2;
  if (param_1[0x100] != 0) {
    pdVar22 = &local_120;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0.0;
    uStack_118 = 0;
    FUN_03033dc0(&local_120,param_2);
    (**(code **)(*(long *)param_1[0x100] + 0x10))((long *)param_1[0x100],&local_120);
  }
  uVar12 = *(uint *)((long)pdVar22 + 0x8c);
  uVar18 = (ulong)uVar12 & 0xffffff;
  plVar14 = param_1 + 5;
  if (uVar18 == 0xffffff) {
    puVar25 = (uint *)((long)param_1 + 0x54);
    if ((~*(uint *)((long)param_1 + 0x54) & 0xffffff) == 0) {
      FUN_03000d04(param_1 + 0xd6,param_1,plVar14);
    }
    uVar17 = *puVar25 & 0xffffff;
    if (uVar17 != 0xffffff) {
      lVar23 = -1;
      uVar12 = *puVar25;
      do {
        uVar21 = *puVar25;
        if (uVar21 == uVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar4) {
            *puVar25 = uVar12 + 0x1000000 & 0xff000000 |
                       *(uint *)(param_1[7] + (ulong)uVar17 * 0xc0) & 0xffffff;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_030333a8;
          plVar28 = param_1 + 0xb;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar4) {
              *(int *)plVar28 = (int)*plVar28 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          iVar13 = *(int *)((long)param_1 + 0x5c);
          uVar12 = iVar13 + 1;
          if (uVar12 <= uVar17) {
            uVar21 = uVar17 + 1;
            if (uVar12 <= uVar21) {
              uVar12 = uVar21;
            }
            piVar1 = (int *)((long)param_1 + 0x5c);
            do {
              if (*piVar1 != iVar13) {
                do {
                  ClearExclusiveLocal();
                  iVar13 = *piVar1;
                  uVar12 = uVar21;
                  if (uVar21 < iVar13 + 1U) {
                    uVar12 = iVar13 + 1;
                  }
                  while (*piVar1 == iVar13) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = uVar12 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_0303340c;
                  }
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_0303340c:
          *(undefined8 *)(param_1[7] + (ulong)uVar17 * 0xc0 + 0x78) = 0;
          lVar23 = param_1[7] + (ulong)uVar17 * 0xc0;
          uVar17 = *(int *)(lVar23 + 0x50) + 0x1000000U & 0xff000000 | uVar17;
          *(uint *)(lVar23 + 0x50) = uVar17;
          goto LAB_03033440;
        }
        ClearExclusiveLocal();
LAB_030333a8:
        uVar17 = uVar21 & 0xffffff;
        uVar12 = uVar21;
      } while (uVar17 != 0xffffff);
      goto joined_r0x03033b04;
    }
  }
  else if ((*(byte *)(param_1[7] + uVar18 * 0xc0 + 0x54) & 3) == 0) {
    iVar13 = FUN_03000dc0(plVar14,(ulong)uVar12);
    uVar17 = 0xffffff;
    if (-1 < iVar13) {
      uVar17 = uVar12;
    }
LAB_03033440:
    uVar18 = (ulong)uVar17;
    uVar30 = uVar18 & 0xffffff;
    if (uVar30 != 0xffffff) {
      uVar12 = *(uint *)(pdVar22 + 0x12);
      if (uVar12 != 0x7fffffff) {
LAB_03033470:
        lVar23 = param_1[7];
        pauVar27 = (undefined1 (*) [12])(lVar23 + uVar30 * 0xc0);
        uVar26 = (ulong)uVar12;
        if (*(int *)(param_1[0x2a] + uVar26 * 0x80 + 0x4c) == 0) {
          FUN_03000f14(plVar14,pauVar27,pdVar22,param_3,0);
          lVar20 = lVar23 + uVar30 * 0xc0;
          auVar38 = *(undefined1 (*) [16])(lVar20 + 0x10);
          auVar46 = *(undefined1 (*) [16])(lVar20 + 0x20);
          *(undefined4 *)(lVar20 + 0x84) = *(undefined4 *)(lVar20 + 0x50);
          uVar36 = (undefined4)((ulong)*(undefined8 *)(*pauVar27 + 8) >> 0x20);
          fVar35 = (float)*(undefined8 *)*pauVar27;
          fVar33 = (float)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
          auVar44 = NEON_ext(auVar38,auVar38,8,1);
          auVar5._12_4_ = uVar36;
          auVar5._0_12_ = *pauVar27;
          auVar6._12_4_ = uVar36;
          auVar6._0_12_ = *pauVar27;
          auVar54 = NEON_ext(auVar5,auVar6,8,1);
          auVar48 = NEON_ext(auVar46,auVar46,8,1);
          local_210 = (double)CONCAT44(auVar44._0_4_,auVar54._0_4_);
          local_230 = CONCAT44(auVar38._0_4_,fVar35);
          fVar42 = auVar46._4_4_;
          lStack_228 = auVar46._0_8_;
          fVar41 = auVar48._4_4_;
          uStack_208 = auVar48._0_7_;
          uStack_201 = auVar48[7];
          uStack_218 = CONCAT44(fVar41,fVar42);
          local_220 = CONCAT44(auVar38._4_4_,fVar33);
          fVar37 = -*(float *)(lVar20 + 0x30);
          fVar39 = -*(float *)(lVar20 + 0x34);
          fVar40 = -*(float *)(lVar20 + 0x38);
          fVar34 = auVar44._0_4_ * fVar40 + auVar38._0_4_ * fVar37 + auVar38._4_4_ * fVar39;
          uStack_1f8 = CONCAT44(fVar41 * fVar40 + fVar42 * fVar37 + fVar41 * fVar39,
                                auVar48._0_4_ * fVar40 + auVar46._0_4_ * fVar37 + fVar42 * fVar39);
          uStack_200 = (undefined7)
                       CONCAT44(fVar34,auVar54._0_4_ * fVar40 + fVar35 * fVar37 + fVar33 * fVar39);
          uStack_1f9 = (undefined1)((uint)fVar34 >> 0x18);
          FUN_032cb060(lVar20 + 0xa0,&local_230);
          *(int *)(lVar20 + 0xc) = (int)uStack_200;
          *(int *)(pauVar27[2] + 4) = (int)(CONCAT17(uStack_1f9,uStack_200) >> 0x20);
          *(int *)(pauVar27[3] + 8) = (int)uStack_1f8;
        }
        else {
          FUN_03000f14(plVar14,pauVar27,pdVar22,param_3,2);
          FUN_0302e768(param_1,uVar18,uVar26,pdVar22 + 8);
        }
        uVar24 = *(undefined8 *)(lVar23 + uVar30 * 0xc0 + 0xb0);
        plVar28 = (long *)(param_1[0xd9] & 0xfffffffffffffffc);
        param_1[0xd9] = (ulong)plVar28 | 1;
        if (plVar28 == (long *)0x0) {
          uVar19 = 0;
        }
        else {
          puVar29 = (ulong *)(param_1 + 0xd9);
          do {
            while( true ) {
              puVar32 = (ulong *)(plVar28 + 1);
              uVar19 = *puVar32;
              plVar31 = (long *)(uVar19 & 0xfffffffffffffffc);
              if ((uVar19 & 3) == 0) break;
              (**(code **)(*plVar28 + 8))();
              *puVar29 = *puVar29 & 3 | (ulong)plVar31;
              plVar28 = plVar31;
              if (plVar31 == (long *)0x0) goto LAB_03033bb0;
            }
            (**(code **)(*plVar28 + 0x20))(plVar28,param_1,pdVar22,uVar24);
            plVar28 = plVar31;
            puVar29 = puVar32;
          } while (plVar31 != (long *)0x0);
LAB_03033bb0:
          uVar19 = param_1[0xd9] & 0xfffffffffffffffc;
        }
        param_1[0xd9] = uVar19;
        if (param_1[0x100] != 0) {
          FUN_02fff010(&local_120);
        }
        plVar28 = (long *)(param_1[7] + uVar30 * 0xc0 + 0xb0);
        lVar23 = *plVar28;
        if (-1 < lVar23) {
          puVar25 = (uint *)(param_1[7] + uVar30 * 0xc0 + 0x50);
          iVar13 = FUN_032c11b0(param_1 + 0x129,lVar23,*puVar25);
          if (iVar13 != 0) {
            uVar17 = *puVar25;
            lVar23 = param_1[7];
            if (uVar12 != 0x7fffffff) {
              *(undefined4 *)(param_1[0x2a] + uVar26 * 0x80 + 0x48) = 0xffffff;
              uVar43 = _UNK_0388a138;
              uVar24 = _DAT_0388a130;
              if ((int)uVar12 < (int)param_1[0x2b]) {
                puVar16 = (undefined8 *)(param_1[0x2a] + (long)(int)uVar12 * 0x80);
                if (*(char *)((long)puVar16 + 0x5f) != '\0') {
                  puVar16[10] = 0;
                  puVar16[0xb] = 0;
                  puVar16[0xe] = 0;
                  puVar16[0xf] = 0;
                  *(undefined1 *)((long)puVar16 + 0x5e) = 0xff;
                  puVar25 = (uint *)((long)param_1 + 0x16c);
                  *(undefined2 *)(puVar16 + 0xb) = 0;
                  puVar16[0xc] = 0;
                  puVar16[0xd] = 0;
                  puVar16[8] = 0;
                  puVar16[9] = 0;
                  puVar16[6] = 0;
                  puVar16[7] = 0;
                  puVar16[1] = uVar43;
                  *puVar16 = uVar24;
                  puVar16[4] = 0;
                  puVar16[5] = 0;
                  puVar16[2] = 0;
                  puVar16[3] = 0;
                  *(char *)((long)puVar16 + 0x5f) = '\0';
                  *(undefined4 *)((long)puVar16 + 0x4c) = 0x7fffffff;
                  uVar2 = *(uint *)((long)param_1 + 0x16c);
                  uVar21 = uVar2 & 0xffffff;
                  if (uVar21 == 0xffffff) {
                    uVar21 = 0xffffffff;
                  }
                  lVar20 = (long)(int)uVar12 * 0x80;
                  *(uint *)(param_1[0x2a] + lVar20) = uVar21;
                  uVar21 = *puVar25;
                  if (uVar21 == uVar2) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                    if (bVar4) {
                      *puVar25 = uVar2 & 0xff000000 | uVar12 & 0xffffff;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 != '\0') goto LAB_03033ce8;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_03033ce8:
                    do {
                      while( true ) {
                        uVar2 = 0xffffffff;
                        if ((uVar21 & 0xffffff) != 0xffffff) {
                          uVar2 = uVar21 & 0xffffff;
                        }
                        *(uint *)(param_1[0x2a] + lVar20) = uVar2;
                        uVar2 = *puVar25;
                        if (uVar2 == uVar21) break;
                        ClearExclusiveLocal();
                        uVar21 = uVar2;
                      }
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                      if (bVar4) {
                        *puVar25 = uVar21 & 0xff000000 | uVar12 & 0xffffff;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      uVar21 = uVar2;
                    } while (cVar3 != '\0');
                  }
                  param_1 = param_1 + 0x2e;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
                    if (bVar4) {
                      *(int *)param_1 = (int)*param_1 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
              }
            }
            *(undefined4 *)(lVar23 + ((ulong)uVar17 & 0xffffff) * 0xc0 + 0x80) = 0x7fffffff;
            goto LAB_0303399c;
          }
          *(undefined1 *)(param_1 + 300) = 1;
          lVar23 = *plVar28;
        }
        local_230 = CONCAT26(local_230._6_2_,0x20000d0);
        local_210 = *pdVar22;
        if ((local_210 != 0.0) && (*(long *)((long)local_210 + 8) != 0)) {
          plVar14 = (long *)((long)local_210 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar11 = PTR_PTR_0434a080;
        uStack_200 = (undefined7)((ulong)*(undefined8 *)((long)pdVar22 + 0xf) >> 8);
        uStack_208 = SUB87(pdVar22[1],0);
        uStack_201 = (undefined1)((ulong)pdVar22[1] >> 0x38);
        uStack_1f8 = 0;
        __s = (char *)((ulong)pdVar22[3] & 0xfffffffffffffffe);
        lStack_228 = lVar23;
        if (__s != (char *)0x0) {
          sVar15 = strlen(__s);
          uVar12 = (int)sVar15 + 1;
          puVar16 = (undefined8 *)
                    (**(code **)(*(long *)puVar11 + 0x10))
                              (puVar11,(long)((sVar15 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar16 = puVar11;
          *(uint *)(puVar16 + 1) = uVar12;
          memcpy(puVar16 + 2,__s,(ulong)uVar12);
          uStack_1f8 = (ulong)(puVar16 + 2) | 1;
        }
        local_1a8 = pdVar22[0xd];
        local_1b8 = pdVar22[0xb];
        local_1a0 = *(undefined4 *)(pdVar22 + 0xe);
        dStack_1c8 = pdVar22[9];
        dStack_1d8 = pdVar22[7];
        dStack_1e8 = pdVar22[5];
        local_1e0 = pdVar22[6];
        local_1f0 = pdVar22[4];
        local_1d0 = pdVar22[8];
        local_1c0 = pdVar22[10];
        local_1b0 = pdVar22[0xc];
        local_198 = pdVar22[0xf];
        if ((local_198 != 0.0) && (*(long *)((long)local_198 + 8) != 0)) {
          plVar14 = (long *)((long)local_198 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_190 = pdVar22[0x10];
        if ((local_190 != 0.0) && (*(long *)((long)local_190 + 8) != 0)) {
          plVar14 = (long *)((long)local_190 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_188 = pdVar22[0x11];
        dStack_180 = pdVar22[0x12];
        local_178 = pdVar22[0x13];
        if ((local_178 != 0.0) && (*(long *)((long)local_178 + 8) != 0)) {
          plVar14 = (long *)((long)local_178 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_170 = *(undefined1 *)(pdVar22 + 0x14);
        plVar14 = (long *)param_1[0xfe];
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_230);
        }
        FUN_02fff010(&local_210);
        lVar23 = *plVar28;
        goto joined_r0x03033b04;
      }
      if (*(char *)(pdVar22 + 5) == '\0') {
        uVar12 = 0;
        goto LAB_03033470;
      }
      local_1e0 = 0.0;
      dStack_1d8 = 0.0;
      local_230 = CONCAT53(local_230._3_5_,0x1ffff);
      local_1d0 = 0.0;
      dStack_1c8 = 0.0;
      lVar23 = 0;
      if (pdVar22[0xf] != 0.0) {
        lVar23 = (long)pdVar22[0xf] + 0x20;
      }
      FUN_03001ff0(*(undefined4 *)(pdVar22 + 0xe),*pdVar22,lVar23,auStack_160);
      uVar26 = local_230;
      auVar45._8_8_ = _UNK_038890f8;
      auVar45._0_8_ = _DAT_038890f0;
      auVar49._8_8_ = _UNK_03888e28;
      auVar49._0_8_ = _DAT_03888e20;
      auVar55._8_8_ = _UNK_03888d78;
      auVar55._0_8_ = _DAT_03888d70;
      pauVar27 = (undefined1 (*) [12])(pdVar22 + 8);
      fVar41 = SUB84(pdVar22[9],0);
      fVar37 = (float)((ulong)pdVar22[9] >> 0x20);
      uVar24 = *(undefined8 *)*pauVar27;
      fVar35 = (float)uVar24;
      fVar34 = (float)((ulong)uVar24 >> 0x20);
      auVar38._12_4_ = fVar37;
      auVar38._0_12_ = *pauVar27;
      auVar45 = a64_TBL(ZEXT816(0),auVar38,auVar45);
      auVar60._8_8_ = _UNK_03889108;
      auVar60._0_8_ = _DAT_03889100;
      auVar46._12_4_ = fVar37;
      auVar46._0_12_ = *pauVar27;
      auVar49 = a64_TBL(ZEXT816(0),auVar46,auVar49);
      auVar55 = a64_TBL(ZEXT816(0),local_130,auVar55);
      auVar38 = a64_TBL(ZEXT816(0),local_130,auVar60);
      auVar50._8_8_ = _UNK_038895d8;
      auVar50._0_8_ = _DAT_038895d0;
      auVar56._0_4_ = auVar49._0_4_ * auVar38._0_4_ - auVar45._0_4_ * auVar55._0_4_;
      auVar56._4_4_ = auVar49._4_4_ * auVar38._4_4_ - auVar45._4_4_ * auVar55._4_4_;
      auVar56._8_4_ = auVar49._8_4_ * auVar38._8_4_ - auVar45._8_4_ * auVar55._8_4_;
      auVar56._12_4_ = auVar49._12_4_ * auVar38._12_4_ - auVar45._12_4_ * auVar55._12_4_;
      auVar44._12_4_ = fVar37;
      auVar44._0_12_ = *pauVar27;
      auVar48._12_4_ = fVar37;
      auVar48._0_12_ = *pauVar27;
      auVar44 = NEON_ext(auVar44,auVar48,8,1);
      auVar46 = NEON_ext(local_150,local_150,8,1);
      fVar40 = local_150._0_4_;
      fVar42 = local_150._4_4_;
      fVar51 = local_150._8_4_;
      uVar43 = NEON_ext(local_150._0_8_,auVar46._0_8_,4,1);
      auVar46 = a64_TBL(ZEXT816(0),auVar56,auVar50);
      uVar24 = NEON_ext(uVar24,auVar44._0_8_,4,1);
      fVar62 = auVar44._4_4_ * auVar44._4_4_;
      fVar39 = auVar46._12_4_ - (auVar49._12_4_ * auVar55._12_4_ + auVar45._12_4_ * auVar38._12_4_);
      auVar57._0_4_ = (float)uVar43 * fVar35 - fVar40 * (float)uVar24;
      auVar57._4_4_ =
           (float)((ulong)uVar43 >> 0x20) * fVar34 - fVar42 * (float)((ulong)uVar24 >> 0x20);
      auVar57._8_4_ = fVar40 * fVar41 - fVar51 * fVar35;
      auVar57._12_4_ = fVar42 * fVar37 - local_150._12_4_ * fVar34;
      fVar63 = fVar40 * fVar35 + fVar42 * fVar34 + fVar51 * fVar41;
      fVar59 = fVar62 + -0.5;
      auVar44 = NEON_ext(auVar57,auVar57,4,1);
      fVar33 = fVar40 * fVar59 + fVar63 * fVar35 + auVar44._0_4_ * fVar37;
      fVar35 = fVar42 * (fVar62 + -0.5) +
               (fVar40 * fVar35 + fVar42 * fVar34 + fVar51 * fVar41) * fVar34 +
               auVar44._4_4_ * fVar37;
      fVar34 = fVar51 * fVar59 + fVar63 * fVar41 + auVar57._0_4_ * fVar37;
      fVar41 = -(auVar46._0_4_ - (auVar49._0_4_ * auVar55._0_4_ + auVar45._0_4_ * auVar38._0_4_));
      fVar37 = -(auVar46._4_4_ - (auVar49._4_4_ * auVar55._4_4_ + auVar45._4_4_ * auVar38._4_4_));
      auVar54._0_8_ = (double)CONCAT44(fVar37,fVar41);
      auVar54._8_4_ =
           -(auVar46._8_4_ - (auVar49._8_4_ * auVar55._8_4_ + auVar45._8_4_ * auVar38._8_4_));
      auVar54._12_4_ = -fVar39;
      dVar53 = (double)(*(float *)(pdVar22 + 7) + fVar34 + fVar34);
      local_210 = (double)(*(float *)(pdVar22 + 6) + fVar33 + fVar33);
      dVar47 = (double)(*(float *)((long)pdVar22 + 0x34) + fVar35 + fVar35);
      uStack_208 = SUB87(dVar47,0);
      uStack_201 = (undefined1)((ulong)dVar47 >> 0x38);
      uStack_200 = SUB87(dVar53,0);
      uStack_1f9 = (undefined1)((ulong)dVar53 >> 0x38);
      dStack_1e8 = (double)CONCAT44(fVar39,auVar54._8_4_);
      if (local_15c == 0.0) {
        local_15c = 0.0;
      }
      else {
        local_15c = 1.0 / local_15c;
      }
      auVar38 = NEON_frecpe(local_140,4);
      auVar46 = NEON_frecps(local_140,auVar38,4);
      local_230 = CONCAT44(local_15c,(undefined4)local_230);
      iVar13 = -(uint)(local_140._0_4_ == 0.0);
      iVar64 = -(uint)(local_140._4_4_ == 0.0);
      iVar65 = -(uint)(local_140._8_4_ == 0.0);
      auVar66._0_4_ = auVar38._0_4_ * auVar46._0_4_;
      auVar66._4_4_ = auVar38._4_4_ * auVar46._4_4_;
      auVar66._8_4_ = auVar38._8_4_ * auVar46._8_4_;
      auVar66._12_4_ = auVar38._12_4_ * auVar46._12_4_;
      auVar38 = NEON_frecps(local_140,auVar66,4);
      fVar35 = auVar66._0_4_ * auVar38._0_4_;
      fVar33 = auVar66._4_4_ * auVar38._4_4_;
      fVar34 = auVar66._8_4_ * auVar38._8_4_;
      auVar61._0_8_ =
           CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                    CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                             CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                      CONCAT14(SUB41(fVar33,0) & ~(byte)iVar64,
                                               CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                        ~(byte)((uint)iVar13 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                                 ~(byte)((uint)iVar13 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar35 >> 8)
                                                                          & ~(byte)((uint)iVar13 >>
                                                                                   8),
                                                                          SUB41(fVar35,0) &
                                                                          ~(byte)iVar13)))))));
      auVar61[8] = SUB41(fVar34,0) & ~(byte)iVar65;
      auVar61[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar65 >> 8);
      auVar61[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
      auVar61[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
      auVar61._12_4_ = 0x3f800000;
      uStack_218 = auVar61._8_8_;
      local_220 = auVar61._0_8_;
      if (*(char *)(pdVar22 + 5) == '\x01') {
        local_230 = uVar26 & 0xffffffff;
        local_220 = 0;
        uStack_218 = 0;
      }
      local_230 = CONCAT62(local_230._2_6_,*(undefined2 *)(pdVar22 + 0x11));
      local_1e0 = pdVar22[10];
      dStack_1d8 = pdVar22[0xb];
      auVar7._8_4_ = auVar54._8_4_;
      auVar7._0_8_ = auVar54._0_8_;
      auVar7._12_4_ = fVar39;
      auVar8._8_4_ = auVar54._8_4_;
      auVar8._0_8_ = auVar54._0_8_;
      auVar8._12_4_ = fVar39;
      auVar38 = NEON_ext(auVar7,auVar8,8,1);
      fVar51 = auVar38._4_4_ * auVar38._4_4_;
      fVar42 = fVar51 + -0.5;
      fVar51 = fVar51 + -0.5;
      auVar38 = *(undefined1 (*) [16])(pdVar22 + 0xc);
      fVar59 = auVar38._0_4_;
      fVar62 = auVar38._4_4_;
      fVar63 = auVar38._8_4_;
      fVar52 = fVar41 * fVar59 + fVar37 * fVar62 + auVar54._8_4_ * fVar63;
      fVar58 = fVar41 * fVar59 + fVar37 * fVar62 + auVar54._8_4_ * fVar63;
      auVar44 = NEON_ext(auVar54,auVar54,4,1);
      auVar46 = NEON_ext(auVar38,auVar38,8,1);
      uVar24 = NEON_ext(auVar38._0_8_,auVar46._0_8_,4,1);
      fVar35 = auVar44._0_4_ * fVar59 - fVar41 * (float)uVar24;
      fVar34 = auVar44._4_4_ * fVar62 - fVar37 * (float)((ulong)uVar24 >> 0x20);
      fVar33 = fVar41 * fVar63 - auVar54._8_4_ * fVar59;
      fVar40 = fVar37 * auVar38._12_4_ - fVar39 * fVar62;
      auVar9._4_4_ = fVar34;
      auVar9._0_4_ = fVar35;
      auVar9._8_4_ = fVar33;
      auVar9._12_4_ = fVar40;
      auVar10._4_4_ = fVar34;
      auVar10._0_4_ = fVar35;
      auVar10._8_4_ = fVar33;
      auVar10._12_4_ = fVar40;
      auVar46 = NEON_ext(auVar9,auVar10,4,1);
      fVar33 = fVar42 * fVar59 + fVar41 * fVar52 + auVar46._0_4_ * fVar39;
      fVar41 = fVar51 * fVar62 + fVar37 * fVar58 + auVar46._4_4_ * fVar39;
      fVar35 = fVar42 * fVar63 + auVar54._8_4_ * fVar52 + fVar35 * fVar39;
      fVar34 = fVar51 * auVar38._12_4_ + fVar39 * fVar58 + fVar34 * fVar39;
      dStack_1c8 = (double)CONCAT44(fVar34 + fVar34,fVar35 + fVar35);
      local_1d0 = (double)CONCAT44(fVar41 + fVar41,fVar33 + fVar33);
      local_1f0 = auVar54._0_8_;
      uVar12 = (**(code **)(*param_1 + 0x260))(param_1,&local_230);
      if (uVar12 != 0x7fffffff) goto LAB_03033470;
      FUN_03000f14(plVar14,param_1[7] + uVar30 * 0xc0,param_2,param_3,0);
LAB_0303399c:
      FUN_02fffa78(plVar14,uVar18);
    }
  }
  lVar23 = -1;
joined_r0x03033b04:
  if (local_70 != 0) {
    puVar16 = *(undefined8 **)(local_70 + 8);
    uVar18 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= *(ulong *)(local_70 + 0x10)) &&
       (*(ulong *)(local_70 + 8) = uVar18, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = &DAT_0390f40e;
      uVar24 = nn::os::GetSystemTick();
      puVar16[1] = uVar24;
    }
  }
  return lVar23;
}


