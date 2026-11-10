/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a334a4; name: FUN_01a334a4
 */


void FUN_01a334a4(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ushort uVar23;
  char cVar24;
  bool bVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined *puVar30;
  code *pcVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  int iVar34;
  long lVar35;
  uint *puVar36;
  long lVar37;
  uint *puVar38;
  ushort *puVar39;
  uint *puVar40;
  undefined1 *puVar41;
  ulong uVar42;
  undefined1 *puVar43;
  ulong uVar44;
  ushort *puVar45;
  long *plVar46;
  undefined1 *puVar47;
  ulong uVar48;
  long *plVar49;
  ulong uVar50;
  int iVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined1 auVar59 [16];
  uint uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  uint uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 local_304;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  long *aplStack_2d0 [12];
  undefined8 local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [104];
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long local_1c0;
  ulong uStack_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  
  FUN_00956dac(&local_1d0,param_1 + 0x35);
  lVar35 = FUN_013646a0(local_1d0 + 0x1e,&local_1e8);
  if (local_1d0 != (long *)0x0) {
    lVar37 = local_1d0[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar34 = *piVar1;
      cVar24 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar25) {
        *piVar1 = iVar34 + -1;
        cVar24 = ExclusiveMonitorsStatus();
      }
    } while (cVar24 != '\0');
    if (iVar34 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_1d0 + 0x20))();
    }
  }
  if (lVar35 == 0) {
    FUN_00956dac(&local_1d0,param_1 + 0x35);
    lVar35 = FUN_0134ee74(local_1d0,local_1d0[1],&DAT_0393acb9);
    if (local_1d0 != (long *)0x0) {
      lVar37 = local_1d0[0xb];
      piVar1 = (int *)(lVar37 + 0xc);
      do {
        iVar34 = *piVar1;
        cVar24 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar34 + -1;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
      if (iVar34 + -1 == 0) {
        *(undefined8 *)(lVar37 + 0x18) = 0;
        (**(code **)(*local_1d0 + 0x20))();
      }
    }
    local_1d0 = (undefined8 *)0x0;
    lStack_1c8 = 0;
    FUN_008802f0(&local_1d0,lVar35 + 0x58);
    local_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    FUN_01520884(&local_1e8,&local_1d0);
    puVar32 = local_1d0;
    if (local_1d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d0 + 1);
      do {
        iVar34 = *piVar1;
        cVar24 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar34 + -1;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
      if (iVar34 + -1 == 0) {
        local_1d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar34 = __cxa_guard_acquire(PTR_DAT_04379498), iVar34 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_1d8 = *puVar32;
        FUN_02a44274(lVar37 + 0xd8,&local_1d8);
      }
    }
    FUN_019002f0(param_1 + 0x5e,&local_1e8);
    plVar46 = local_1e8;
    if (local_1e8 != (long *)0x0) {
      plVar2 = local_1e8 + 1;
      do {
        iVar34 = (int)*plVar2 + -1;
        cVar24 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar25) {
          *(int *)plVar2 = iVar34;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
      if (iVar34 == 0) {
        local_1e8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar34 = __cxa_guard_acquire(PTR_DAT_04379498), iVar34 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_1d0 = (long *)*plVar46;
        FUN_02a44274(lVar37 + 0xd8,&local_1d0);
      }
    }
    fVar52 = *(float *)(lVar35 + 0x330) - (float)*(undefined8 *)(lVar35 + 800);
    fVar55 = *(float *)(lVar35 + 0x334) - (float)((ulong)*(undefined8 *)(lVar35 + 800) >> 0x20);
    fVar56 = *(float *)(lVar35 + 0x338) - (float)*(undefined8 *)(lVar35 + 0x328);
    fVar57 = *(float *)(lVar35 + 0x33c) - (float)((ulong)*(undefined8 *)(lVar35 + 0x328) >> 0x20);
    fVar52 = fVar52 * fVar52;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar59._4_4_ = fVar55;
    auVar59._0_4_ = fVar52;
    auVar59._8_4_ = fVar56;
    auVar59._12_4_ = fVar57;
    auVar27._4_4_ = fVar55;
    auVar27._0_4_ = fVar52;
    auVar27._8_4_ = fVar56;
    auVar27._12_4_ = fVar57;
    auVar59 = NEON_ext(auVar59,auVar27,8,1);
    *(ulong *)(lVar35 + 0x380) = *(ulong *)(lVar35 + 0x380) & 0xffffffffffffffef | 3;
    *(float *)(lVar35 + 0x388) = SQRT(auVar59._0_4_ + fVar52 + auVar59._4_4_ + fVar55);
    (**(code **)(*(long *)(lVar35 + 0x200) + 0x10))(lVar35 + 0x200);
    (**(code **)(*(long *)(lVar35 + 0x200) + 0x18))(lVar35 + 0x200);
    *(undefined4 *)(lVar35 + 0x230) = 0;
    *(undefined4 *)(lVar35 + 0x240) = 0x3fe38e39;
    *(undefined4 *)(lVar35 + 0x23c) = DAT_043d2580;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar34 = __cxa_guard_acquire(PTR_DAT_04379660), iVar34 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar37 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar37;
    puVar41 = *(undefined1 **)(lVar37 + 0x60);
    if (puVar41 != (undefined1 *)0x0) {
      uVar42 = (long)puVar41 - ((ulong)puVar41 >> 1 & 0x5555555555555555);
      uVar42 = (uVar42 & 0x3333333333333333) + (uVar42 >> 2 & 0x3333333333333333);
      uVar42 = (uVar42 + (uVar42 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar42 < 2) {
        puVar43 = (undefined1 *)((ulong)(puVar41 + -1) & 0xf976cfc5b993016e);
      }
      else if (&DAT_f976cfc5b993016e < puVar41) {
        puVar43 = &DAT_f976cfc5b993016e;
      }
      else {
        uVar44 = 0;
        if (puVar41 != (undefined1 *)0x0) {
          uVar44 = 0xf976cfc5b993016e / (ulong)puVar41;
        }
        puVar43 = &DAT_f976cfc5b993016e + -(uVar44 * (long)puVar41);
      }
      plVar46 = *(long **)(*(long *)(lVar37 + 0x58) + (long)puVar43 * 8);
      if ((plVar46 != (long *)0x0) && (plVar46 = (long *)*plVar46, plVar46 != (long *)0x0)) {
        if (uVar42 < 2) {
          do {
            if ((undefined1 *)plVar46[1] == &DAT_f976cfc5b993016e) {
              if ((undefined1 *)plVar46[2] == &DAT_f976cfc5b993016e) goto LAB_01a33794;
            }
            else if ((undefined1 *)((ulong)plVar46[1] & (ulong)(puVar41 + -1)) != puVar43) break;
            plVar46 = (long *)*plVar46;
          } while (plVar46 != (long *)0x0);
        }
        else {
          do {
            puVar47 = (undefined1 *)plVar46[1];
            if (puVar47 == &DAT_f976cfc5b993016e) {
              if ((undefined1 *)plVar46[2] == &DAT_f976cfc5b993016e) goto LAB_01a33794;
            }
            else {
              if (puVar41 <= puVar47) {
                uVar42 = 0;
                if (puVar41 != (undefined1 *)0x0) {
                  uVar42 = (ulong)puVar47 / (ulong)puVar41;
                }
                puVar47 = puVar47 + -(uVar42 * (long)puVar41);
              }
              if (puVar47 != puVar43) break;
            }
            plVar46 = (long *)*plVar46;
          } while (plVar46 != (long *)0x0);
        }
      }
    }
  }
  else {
    local_1d0 = (undefined8 *)0x0;
    lStack_1c8 = 0;
    FUN_008802f0(&local_1d0,lVar35 + 0x58);
    local_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    FUN_01520884(&local_1e8,&local_1d0);
    puVar32 = local_1d0;
    if (local_1d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d0 + 1);
      do {
        iVar34 = *piVar1;
        cVar24 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar34 + -1;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
      if (iVar34 + -1 == 0) {
        local_1d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar34 = __cxa_guard_acquire(PTR_DAT_04379498), iVar34 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar35 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar35;
        local_1d8 = *puVar32;
        FUN_02a44274(lVar35 + 0xd8,&local_1d8);
      }
    }
    FUN_019002f0(param_1 + 0x5e,&local_1e8);
    plVar46 = local_1e8;
    if (local_1e8 != (long *)0x0) {
      plVar2 = local_1e8 + 1;
      do {
        iVar34 = (int)*plVar2 + -1;
        cVar24 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar25) {
          *(int *)plVar2 = iVar34;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
      if (iVar34 == 0) {
        local_1e8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar34 = __cxa_guard_acquire(PTR_DAT_04379498), iVar34 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar35 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar35;
        local_1d0 = (long *)*plVar46;
        FUN_02a44274(lVar35 + 0xd8,&local_1d0);
      }
    }
  }
LAB_01a33ab4:
  puVar30 = PTR_DAT_0437a780;
  fVar55 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar52 = *(float *)PTR_FloatPi_04372cf0;
  uVar42 = 0;
  plVar46 = param_1 + 0x1e2;
  lVar35 = 4;
  do {
    if (((*puVar30 & 1) == 0) && (iVar34 = __cxa_guard_acquire(puVar30), iVar34 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar30);
    }
    lVar37 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar37;
    puVar38 = *(uint **)(*(long *)(*(long *)(lVar37 + 0x78) + 0x100) + 0x250);
    piVar1 = (int *)((long)puVar38 + (ulong)*puVar38);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
      puVar38 = (uint *)0x0;
    }
    else {
      uVar44 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
      puVar38 = (uint *)0x0;
      if (uVar44 != 0) {
        puVar38 = (uint *)((long)piVar1 + uVar44);
        puVar38 = (uint *)((long)puVar38 + (ulong)*puVar38);
      }
    }
    puVar40 = puVar38 + 1;
    if (uVar42 < *puVar38) {
      puVar40 = (uint *)((long)puVar38 + lVar35);
    }
    local_17c = 0;
    piVar1 = (int *)((long)puVar40 + (ulong)*puVar40);
    local_180 = 0;
    uVar58 = 0;
    uVar53 = 0;
    uVar60 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_11c = 0;
    local_120 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
    local_1d0 = (long *)CONCAT44(*(undefined4 *)
                                  ((long)((long)piVar1 + (ulong)puVar39[4]) +
                                  (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[4]) + 4),
                                 *(undefined4 *)
                                  ((long)((long)piVar1 + (ulong)puVar39[3]) +
                                  (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[3]) + 4));
    puVar38 = (uint *)((long)((long)piVar1 + (ulong)puVar39[5]) +
                      (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[5]) + 4);
    piVar3 = (int *)((long)puVar38 + (ulong)*puVar38);
    puVar45 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar23 = *puVar45;
    if (4 < uVar23) {
      uVar53 = 0;
      if ((ulong)puVar45[2] != 0) {
        uVar53 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[2]);
      }
      if (uVar23 < 7) {
        uVar58 = 0;
      }
      else {
        uVar58 = 0;
        if ((ulong)puVar45[3] != 0) {
          uVar58 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[3]);
        }
        if ((8 < uVar23) && ((ulong)puVar45[4] != 0)) {
          uVar60 = *(uint *)((long)piVar3 + (ulong)puVar45[4]);
          goto LAB_01a33c80;
        }
      }
      uVar60 = 0;
    }
LAB_01a33c80:
    uVar54 = 0;
    local_1c0 = CONCAT44(uVar58,uVar53);
    uVar53 = 0;
    uStack_1b8 = (ulong)uVar60;
    uVar60 = 0;
    _local_170 = CONCAT44(*(undefined4 *)
                           ((long)((long)piVar1 + (ulong)puVar39[4]) +
                           (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[4]) + 8),
                          *(undefined4 *)
                           ((long)((long)piVar1 + (ulong)puVar39[3]) +
                           (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[3]) + 8));
    puVar38 = (uint *)((long)((long)piVar1 + (ulong)puVar39[5]) +
                      (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[5]) + 8);
    piVar3 = (int *)((long)puVar38 + (ulong)*puVar38);
    puVar45 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar23 = *puVar45;
    if (4 < uVar23) {
      uVar54 = 0;
      if ((ulong)puVar45[2] != 0) {
        uVar54 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[2]);
      }
      if (uVar23 < 7) {
        uVar53 = 0;
      }
      else {
        uVar53 = 0;
        if ((ulong)puVar45[3] != 0) {
          uVar53 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[3]);
        }
        if ((8 < uVar23) && ((ulong)puVar45[4] != 0)) {
          uVar60 = *(uint *)((long)piVar3 + (ulong)puVar45[4]);
          goto LAB_01a33d38;
        }
      }
      uVar60 = 0;
    }
LAB_01a33d38:
    uVar58 = 0;
    local_160 = CONCAT44(uVar53,uVar54);
    uVar53 = 0;
    uStack_158 = (ulong)uVar60;
    uStack_f8 = 0;
    _local_110 = CONCAT44(*(undefined4 *)
                           ((long)((long)piVar1 + (ulong)puVar39[4]) +
                           (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[4]) + 0xc),
                          *(undefined4 *)
                           ((long)((long)piVar1 + (ulong)puVar39[3]) +
                           (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[3]) + 0xc));
    puVar38 = (uint *)((long)((long)piVar1 + (ulong)puVar39[5]) +
                      (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[5]) + 0xc);
    piVar3 = (int *)((long)puVar38 + (ulong)*puVar38);
    puVar45 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar23 = *puVar45;
    if (4 < uVar23) {
      uVar58 = 0;
      if ((ulong)puVar45[2] != 0) {
        uVar58 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[2]);
      }
      if (uVar23 < 7) {
        uVar53 = 0;
      }
      else {
        uVar53 = 0;
        if ((ulong)puVar45[3] != 0) {
          uVar53 = *(undefined4 *)((long)piVar3 + (ulong)puVar45[3]);
        }
        if ((8 < uVar23) && ((ulong)puVar45[4] != 0)) {
          uStack_f8 = (ulong)*(uint *)((long)piVar3 + (ulong)puVar45[4]);
          goto LAB_01a33df0;
        }
      }
      uStack_f8 = 0;
    }
LAB_01a33df0:
    local_100 = CONCAT44(uVar53,uVar58);
    if (*puVar39 < 0xf) {
      uVar53 = 0;
      uVar58 = 0;
      if (0xc < *puVar39) goto LAB_01a33e20;
    }
    else {
      uVar53 = 0;
      if ((ulong)puVar39[7] != 0) {
        uVar53 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[7]);
      }
LAB_01a33e20:
      if ((ulong)puVar39[6] == 0) {
        uVar58 = 0;
      }
      else {
        uVar58 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[6]);
      }
    }
    FUN_01902ffc(uVar53,uVar58,uStack_f8,local_100,0,plVar46,&local_1d0,&local_170,&local_110,1);
    if (lVar35 == 4) {
      fVar56 = 0.0;
      if (0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar44 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
        fVar56 = 0.0;
        if (uVar44 != 0) {
          fVar56 = *(float *)((long)piVar1 + uVar44);
        }
      }
      *(float *)((long)param_1 + 0x474) = (fVar52 / fVar55) * fVar56;
    }
    lVar35 = lVar35 + 4;
    uVar42 = uVar42 + 1;
    plVar46 = plVar46 + 300;
  } while (lVar35 != 0x5c);
  FUN_019039e0(param_1 + 0xb6,param_1 + 0x1e2);
  uVar53 = 0;
  fVar52 = (fVar52 / fVar55) * 0.0;
  FUN_01903f90(&local_1d0,(int)param_1[0xe0],param_1 + 0xb6);
  param_1[0x1baf] = uStack_1b8;
  param_1[0x1bb1] = local_1a8;
  param_1[0x1bac] = (long)local_1d0;
  param_1[0x1bad] = lStack_1c8;
  param_1[0x1bae] = local_1c0;
  param_1[0x1bb2] = local_1a0;
  param_1[0x1bb0] = local_1b0;
  *(undefined4 *)((long)param_1 + 0xdd94) = 1;
  *(float *)(param_1 + 0x1bb0) = fVar52;
  if ((char)param_1[0x6e] == '\0') {
    *(undefined4 *)((long)param_1 + 0x364) = *(undefined4 *)((long)param_1 + 0xdd84);
    *(float *)(param_1 + 0x6c) = fVar52;
    fVar52 = *(float *)(param_1 + 0x1baf);
    param_1[0x6b] = (ulong)(uint)fVar52;
    param_1[0x6a] = 0;
    param_1[0x68] = param_1[0x1bac];
    param_1[0x69] = param_1[0x1bad];
  }
  else {
    fVar52 = *(float *)(param_1 + 0x1baf);
  }
  fVar55 = *(float *)(param_1 + 0x8d);
  *(float *)(param_1 + 0x8d) = fVar52;
  fVar52 = fVar52 - fVar55;
  *(bool *)(param_1 + 0x8e) = 1.1920929e-07 < fVar52;
  if (fVar55 <= *(float *)((long)param_1 + 0x46c)) {
    *(float *)((long)param_1 + 0x46c) = fVar52 + *(float *)((long)param_1 + 0x46c);
  }
  fVar52 = (float)param_1[0x6b];
  *(undefined4 *)((long)param_1 + 0x36c) = *(undefined4 *)((long)param_1 + 0x474);
  if ((char)param_1[0x6e] != '\0') {
    fVar55 = (float)param_1[0x6a] - *(float *)(param_1 + 0x68);
    fVar56 = (float)((ulong)param_1[0x6a] >> 0x20) - *(float *)((long)param_1 + 0x344);
    fVar57 = (float)((ulong)param_1[0x6b] >> 0x20) - *(float *)((long)param_1 + 0x34c);
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar52 = (fVar52 - *(float *)(param_1 + 0x69)) * (fVar52 - *(float *)(param_1 + 0x69));
    fVar57 = fVar57 * fVar57;
    auVar28._4_4_ = fVar56;
    auVar28._0_4_ = fVar55;
    auVar28._8_4_ = fVar52;
    auVar28._12_4_ = fVar57;
    auVar29._4_4_ = fVar56;
    auVar29._0_4_ = fVar55;
    auVar29._8_4_ = fVar52;
    auVar29._12_4_ = fVar57;
    auVar59 = NEON_ext(auVar28,auVar29,8,1);
    fVar52 = SQRT(auVar59._0_4_ + fVar55 + auVar59._4_4_ + fVar56);
  }
  *(float *)((long)param_1 + 0x46c) = fVar52;
  *(float *)(param_1 + 0x8d) = fVar52;
  if (((*puVar30 & 1) == 0) && (iVar34 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar34 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar58 = 0;
  uVar54 = 0;
  lVar35 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar35;
  puVar38 = *(uint **)(*(long *)(*(long *)(lVar35 + 0x78) + 0x100) + 0x250);
  piVar1 = (int *)((long)puVar38 + (ulong)*puVar38);
  puVar38 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar38 = (uint *)((long)puVar38 + (ulong)*puVar38 + 4);
  piVar1 = (int *)((long)puVar38 + (ulong)*puVar38);
  iVar34 = *piVar1;
  puVar38 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x1c - (long)iVar34)));
  uVar60 = *puVar38;
  puVar40 = (uint *)((long)puVar38 + (ulong)uVar60 + 4);
  piVar3 = (int *)((long)puVar40 + (ulong)*puVar40);
  puVar39 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar23 = *puVar39;
  uVar42 = 0;
  if (4 < uVar23) {
    uVar58 = 0;
    uVar54 = 0;
    if ((ulong)puVar39[2] != 0) {
      uVar54 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[2]);
    }
    if (uVar23 < 7) {
      uVar42 = 0;
    }
    else {
      uVar58 = 0;
      uVar42 = 0;
      if ((ulong)puVar39[3] != 0) {
        uVar58 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[3]);
      }
      if ((8 < uVar23) && ((ulong)puVar39[4] != 0)) {
        uVar42 = (ulong)*(uint *)((long)piVar3 + (ulong)puVar39[4]);
      }
    }
  }
  puVar40 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar34)));
  uVar8 = *puVar40;
  puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x14 - (long)iVar34)));
  uVar9 = *puVar4;
  uVar66 = *(undefined4 *)((long)puVar4 + (ulong)uVar9 + 4);
  puVar5 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x16 - (long)iVar34)));
  uVar10 = *puVar5;
  uVar33 = *(undefined4 *)((long)puVar5 + (ulong)uVar10 + 4);
  puVar6 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x18 - (long)iVar34)));
  uVar11 = *puVar6;
  uVar68 = *(undefined4 *)((long)puVar6 + (ulong)uVar11 + 4);
  puVar7 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x1a - (long)iVar34)));
  uVar12 = *puVar7;
  uVar62 = 0;
  uVar61 = 0;
  uVar64 = 0;
  uVar69 = *(undefined4 *)((long)puVar7 + (ulong)uVar12 + 4);
  puVar36 = (uint *)((long)puVar38 + (ulong)uVar60 + 8);
  piVar3 = (int *)((long)puVar36 + (ulong)*puVar36);
  puVar39 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar23 = *puVar39;
  if (4 < uVar23) {
    uVar62 = 0;
    uVar61 = 0;
    if ((ulong)puVar39[2] != 0) {
      uVar61 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[2]);
    }
    if (uVar23 < 7) {
      uVar64 = 0;
    }
    else {
      uVar64 = 0;
      uVar62 = 0;
      if ((ulong)puVar39[3] != 0) {
        uVar62 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[3]);
      }
      if ((8 < uVar23) && ((ulong)puVar39[4] != 0)) {
        uVar64 = *(uint *)((long)piVar3 + (ulong)puVar39[4]);
      }
    }
  }
  uVar13 = *(undefined4 *)((long)puVar40 + (ulong)uVar8 + 8);
  uVar14 = *(undefined4 *)((long)puVar4 + (ulong)uVar9 + 8);
  uVar15 = *(undefined4 *)((long)puVar5 + (ulong)uVar10 + 8);
  uVar16 = *(undefined4 *)((long)puVar6 + (ulong)uVar11 + 8);
  uVar17 = *(undefined4 *)((long)puVar7 + (ulong)uVar12 + 8);
  puVar38 = (uint *)((long)puVar38 + (ulong)uVar60 + 0xc);
  piVar3 = (int *)((long)puVar38 + (ulong)*puVar38);
  puVar39 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar23 = *puVar39;
  uVar65 = 0;
  uVar63 = 0;
  uVar44 = 0;
  if (4 < uVar23) {
    uVar65 = 0;
    uVar63 = 0;
    if ((ulong)puVar39[2] != 0) {
      uVar63 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[2]);
    }
    if (uVar23 < 7) {
      uVar44 = 0;
    }
    else {
      uVar44 = 0;
      uVar65 = 0;
      if ((ulong)puVar39[3] != 0) {
        uVar65 = *(undefined4 *)((long)piVar3 + (ulong)puVar39[3]);
      }
      if ((8 < uVar23) && ((ulong)puVar39[4] != 0)) {
        uVar44 = (ulong)*(uint *)((long)piVar3 + (ulong)puVar39[4]);
      }
    }
  }
  uVar67 = 0;
  uVar18 = *(undefined4 *)((long)puVar40 + (ulong)uVar8 + 0xc);
  uVar19 = *(undefined4 *)((long)puVar4 + (ulong)uVar9 + 0xc);
  uVar20 = *(undefined4 *)((long)puVar5 + (ulong)uVar10 + 0xc);
  uVar21 = *(undefined4 *)((long)puVar6 + (ulong)uVar11 + 0xc);
  uVar22 = *(undefined4 *)((long)puVar7 + (ulong)uVar12 + 0xc);
  lVar35 = param_1[0x1c56];
  *(undefined4 *)(lVar35 + 0x30) = *(undefined4 *)((long)puVar40 + (ulong)uVar8 + 4);
  *(undefined4 *)(lVar35 + 0x34) = uVar66;
  *(undefined4 *)(lVar35 + 0x38) = uVar33;
  *(undefined4 *)(lVar35 + 0x3c) = uVar68;
  *(ulong *)(lVar35 + 0x28) = uVar42;
  *(ulong *)(lVar35 + 0x20) = CONCAT44(uVar58,uVar54);
  *(undefined4 *)(lVar35 + 0x40) = uVar69;
  *(undefined4 *)(lVar35 + 0x80) = uVar13;
  *(undefined4 *)(lVar35 + 0x84) = uVar14;
  *(undefined4 *)(lVar35 + 0x88) = uVar15;
  *(undefined4 *)(lVar35 + 0x8c) = uVar16;
  *(ulong *)(lVar35 + 0x78) = (ulong)uVar64;
  *(ulong *)(lVar35 + 0x70) = CONCAT44(uVar62,uVar61);
  *(ulong *)(lVar35 + 200) = uVar44;
  *(ulong *)(lVar35 + 0xc0) = CONCAT44(uVar65,uVar63);
  *(undefined4 *)(lVar35 + 0x90) = uVar17;
  *(undefined4 *)(lVar35 + 0xd0) = uVar18;
  *(undefined4 *)(lVar35 + 0xd4) = uVar19;
  *(undefined4 *)(lVar35 + 0xd8) = uVar20;
  *(undefined4 *)(lVar35 + 0xdc) = uVar21;
  *(undefined4 *)(lVar35 + 0xe0) = uVar22;
  puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar23 = *puVar39;
  local_304 = 0;
  uVar66 = 0;
  uVar58 = 0;
  uVar54 = 0;
  if (uVar23 < 0x1f) goto LAB_01a34890;
  uVar66 = 0;
  if ((ulong)puVar39[0xf] != 0) {
    uVar66 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0xf]);
  }
  if (uVar23 < 0x21) {
    local_304 = 0;
LAB_01a34888:
    uVar67 = 0;
    uVar58 = 0;
LAB_01a3488c:
    uVar53 = 0;
    uVar54 = 0;
LAB_01a34890:
    iVar34 = 0;
    local_1d0 = (long *)0x0;
  }
  else {
    local_304 = 0;
    if ((ulong)puVar39[0x10] != 0) {
      local_304 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x10]);
    }
    if (uVar23 < 0x23) goto LAB_01a34888;
    uVar58 = 0;
    if ((ulong)puVar39[0x11] != 0) {
      uVar58 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x11]);
    }
    if (uVar23 < 0x25) {
      uVar67 = 0;
      goto LAB_01a3488c;
    }
    uVar67 = 0;
    if ((ulong)puVar39[0x12] != 0) {
      uVar67 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x12]);
    }
    if (uVar23 < 0x27) goto LAB_01a3488c;
    uVar53 = 0;
    uVar54 = 0;
    if ((ulong)puVar39[0x13] != 0) {
      uVar54 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x13]);
    }
    if (uVar23 < 0x29) goto LAB_01a34890;
    if ((ulong)puVar39[0x14] == 0) {
      uVar53 = 0;
    }
    else {
      uVar53 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x14]);
    }
    if (uVar23 < 0x2b) goto LAB_01a34890;
    if ((ulong)puVar39[0x15] == 0) {
      iVar34 = 0;
    }
    else {
      iVar34 = *(int *)((long)piVar1 + (ulong)puVar39[0x15]);
    }
    if (uVar23 < 0x2d) {
      local_1d0 = (long *)0x0;
    }
    else {
      local_1d0 = (long *)0x0;
      if ((ulong)puVar39[0x16] != 0) {
        local_1d0 = *(long **)((long)piVar1 + (ulong)puVar39[0x16]);
      }
    }
  }
  uVar33 = FUN_018fdfcc(&local_1d0);
  puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar23 = *puVar39;
  if (uVar23 < 0x2f) {
    uVar68 = 0;
LAB_01a34590:
    uVar61 = 0;
    uVar69 = uVar61;
  }
  else {
    uVar68 = 0;
    if ((ulong)puVar39[0x17] != 0) {
      uVar68 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x17]);
    }
    if (uVar23 < 0x31) goto LAB_01a34590;
    uVar61 = 0;
    if ((ulong)puVar39[0x18] != 0) {
      uVar61 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x18]);
    }
    uVar69 = 0;
    if (0x32 < uVar23) {
      if ((ulong)puVar39[0x19] == 0) {
        uVar69 = 0;
      }
      else {
        uVar69 = *(undefined4 *)((long)piVar1 + (ulong)puVar39[0x19]);
      }
      if (0x34 < uVar23) {
        if ((ulong)puVar39[0x1a] == 0) {
          iVar51 = 0;
        }
        else {
          iVar51 = *(int *)((long)piVar1 + (ulong)puVar39[0x1a]);
        }
        if (uVar23 < 0x37) {
          local_1e8 = (long *)0x0;
        }
        else {
          local_1e8 = (long *)0x0;
          if ((ulong)puVar39[0x1b] != 0) {
            local_1e8 = *(long **)((long)piVar1 + (ulong)puVar39[0x1b]);
          }
        }
        goto LAB_01a343f8;
      }
    }
  }
  iVar51 = 0;
  local_1e8 = (long *)0x0;
LAB_01a343f8:
  uVar62 = FUN_018fdfcc(&local_1e8);
  lVar35 = param_1[0x1c5a];
  *(undefined4 *)(lVar35 + 0x40) = uVar66;
  *(undefined4 *)(lVar35 + 0x44) = local_304;
  fVar52 = 0.0;
  *(undefined8 *)(lVar35 + 0x10) = 0;
  *(undefined8 *)(lVar35 + 0x18) = 0;
  fVar55 = 0.0;
  *(undefined4 *)(lVar35 + 0x48) = uVar58;
  *(undefined4 *)(lVar35 + 0x4c) = uVar67;
  *(undefined4 *)(lVar35 + 0x50) = uVar54;
  *(undefined4 *)(lVar35 + 0x54) = uVar53;
  *(int *)(lVar35 + 0x58) = iVar34;
  *(undefined4 *)(lVar35 + 0x5c) = uVar33;
  *(undefined4 *)(lVar35 + 0x60) = uVar68;
  *(undefined4 *)(lVar35 + 100) = uVar61;
  *(undefined4 *)(lVar35 + 0x68) = uVar69;
  *(int *)(lVar35 + 0x6c) = iVar51;
  *(undefined4 *)(lVar35 + 0x70) = uVar62;
  *(undefined4 *)(lVar35 + 0x38) = uVar66;
  *(undefined4 *)(lVar35 + 0x34) = uVar54;
  *(undefined4 *)(lVar35 + 0x30) = uVar66;
  *(undefined4 *)(lVar35 + 0x74) = 0;
  *(undefined8 *)(lVar35 + 0x20) = 0;
  *(undefined8 *)(lVar35 + 0x28) = 0;
  if (0 < iVar34) {
    fVar55 = ABS(1.0 / (float)iVar34);
  }
  *(float *)(lVar35 + 0x78) = fVar55;
  *(undefined4 *)(lVar35 + 0x7c) = 0;
  if (0 < iVar51) {
    fVar52 = ABS(1.0 / (float)iVar51);
  }
  *(float *)(lVar35 + 0x80) = fVar52;
  *(undefined4 *)((long)param_1 + 0x374) = 1;
  if (*(char *)((long)param_1 + 0x3e1) != '\0') {
    *(undefined1 *)((long)param_1 + 0x3e1) = 0;
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  local_2f0 = &LAB_01a49494;
  local_2e8 = FUN_01a494a4;
  local_2e0 = &LAB_01a494a8;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  local_268 = (code *)0x0;
  local_2d8 = &LAB_01a494b4;
  aplStack_2d0[0] = param_1;
  (**(code **)(*param_1 + 0xf0))(param_1,&local_270,&local_2f0);
  pcVar31 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar31)(aplStack_2d0);
  }
  pcVar31 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = 0;
    uStack_258 = 0;
    local_270 = 0;
    local_268 = (code *)0x0;
    (*pcVar31)(auStack_250);
  }
  return;
LAB_01a33794:
  plVar46 = (long *)plVar46[3];
  if (plVar46 != (long *)0x0) {
    plVar2 = plVar46 + 10;
    do {
      cVar24 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar25) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar24 = ExclusiveMonitorsStatus();
      }
    } while (cVar24 != '\0');
    uVar42 = plVar46[0x21];
    if (uVar42 != 0) {
      uVar44 = uVar42 - (uVar42 >> 1 & 0x5555555555555555);
      uVar44 = (uVar44 & 0x3333333333333333) + (uVar44 >> 2 & 0x3333333333333333);
      uVar44 = (uVar44 + (uVar44 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar44 < 2) {
        uVar48 = uVar42 - 1 & 0x3d77c1ca5391a675;
      }
      else if (uVar42 < 0x3d77c1ca5391a676) {
        uVar48 = 0;
        if (uVar42 != 0) {
          uVar48 = 0x3d77c1ca5391a675 / uVar42;
        }
        uVar48 = 0x3d77c1ca5391a675 - uVar48 * uVar42;
      }
      else {
        uVar48 = 0x3d77c1ca5391a675;
      }
      uVar53 = 0;
      plVar49 = *(long **)(plVar46[0x20] + uVar48 * 8);
      if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
        if (uVar44 < 2) {
          do {
            if (plVar49[1] == 0x3d77c1ca5391a675) {
              if (plVar49[2] == 0x3d77c1ca5391a675) goto LAB_01a339c8;
            }
            else if ((plVar49[1] & uVar42 - 1) != uVar48) break;
            plVar49 = (long *)*plVar49;
          } while (plVar49 != (long *)0x0);
        }
        else {
          do {
            uVar50 = plVar49[1];
            if (uVar50 == 0x3d77c1ca5391a675) {
              if (plVar49[2] == 0x3d77c1ca5391a675) goto LAB_01a339c8;
            }
            else {
              if (uVar42 <= uVar50) {
                uVar26 = 0;
                if (uVar42 != 0) {
                  uVar26 = uVar50 / uVar42;
                }
                uVar50 = uVar50 - uVar26 * uVar42;
              }
              if (uVar50 != uVar48) break;
            }
            plVar49 = (long *)*plVar49;
          } while (plVar49 != (long *)0x0);
        }
      }
      goto LAB_01a339cc;
    }
    uVar53 = 0;
    uVar58 = 0;
    goto LAB_01a33a98;
  }
  goto LAB_01a33ab4;
LAB_01a339c8:
  uVar53 = (undefined4)plVar49[6];
LAB_01a339cc:
  if (uVar44 < 2) {
    uVar48 = uVar42 - 1 & 0x188fac5cb5d06468;
  }
  else if (uVar42 < 0x188fac5cb5d06469) {
    uVar48 = 0;
    if (uVar42 != 0) {
      uVar48 = 0x188fac5cb5d06468 / uVar42;
    }
    uVar48 = 0x188fac5cb5d06468 - uVar48 * uVar42;
  }
  else {
    uVar48 = 0x188fac5cb5d06468;
  }
  plVar49 = *(long **)(plVar46[0x20] + uVar48 * 8);
  uVar58 = 0;
  if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
    if (uVar44 < 2) {
      do {
        if (plVar49[1] == 0x188fac5cb5d06468) {
          if (plVar49[2] == 0x188fac5cb5d06468) goto LAB_01a33a94;
        }
        else if ((plVar49[1] & uVar42 - 1) != uVar48) break;
        plVar49 = (long *)*plVar49;
      } while (plVar49 != (long *)0x0);
    }
    else {
      do {
        uVar44 = plVar49[1];
        if (uVar44 == 0x188fac5cb5d06468) {
          if (plVar49[2] == 0x188fac5cb5d06468) goto LAB_01a33a94;
        }
        else {
          if (uVar42 <= uVar44) {
            uVar50 = 0;
            if (uVar42 != 0) {
              uVar50 = uVar44 / uVar42;
            }
            uVar44 = uVar44 - uVar50 * uVar42;
          }
          if (uVar44 != uVar48) break;
        }
        plVar49 = (long *)*plVar49;
      } while (plVar49 != (long *)0x0);
    }
  }
  goto LAB_01a33a98;
LAB_01a33a94:
  uVar58 = (undefined4)plVar49[6];
LAB_01a33a98:
  *(undefined4 *)(lVar35 + 0x234) = uVar53;
  *(undefined4 *)(lVar35 + 0x238) = uVar58;
  do {
    iVar34 = (int)*plVar2 + -1;
    cVar24 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar25) {
      *(int *)plVar2 = iVar34;
      cVar24 = ExclusiveMonitorsStatus();
    }
  } while (cVar24 != '\0');
  if (iVar34 == 0) {
    (**(code **)(*plVar46 + 0x10))();
  }
  goto LAB_01a33ab4;
}


