/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112f528; name: FUN_0112f528
 */


/* WARNING: Removing unreachable block (ram,0x01130634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0112f528(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  ushort uVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  uint *puVar33;
  uint *puVar34;
  byte bVar35;
  ulong *puVar36;
  byte bVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  int *piVar41;
  long lVar42;
  ulong uVar43;
  long *plVar44;
  ulong uVar45;
  ushort *puVar46;
  byte *pbVar47;
  long *plVar48;
  int local_4d0;
  undefined8 local_4c8;
  uint local_4a4;
  int local_49c;
  uint local_44c;
  long *local_438;
  ulong local_430;
  char *local_428;
  undefined8 local_420;
  long *local_418;
  undefined8 local_410;
  undefined1 *local_408;
  undefined1 *local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  int local_3e0 [2];
  undefined1 local_3d8;
  undefined8 local_3d4;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined1 *puStack_3a8;
  undefined1 *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined8 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_35c;
  undefined4 local_358;
  undefined8 local_350;
  undefined1 *puStack_348;
  undefined1 *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined8 local_314;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_298;
  undefined8 local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined4 local_238;
  undefined8 local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined8 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_74;
  
  pbVar47 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379678), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  plVar24 = (long *)PTR_DAT_04379688;
  plVar48 = (long *)PTR_DAT_04379680;
  lVar28 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar28;
  plVar44 = _DAT_000001c8;
  plVar22 = *(long **)(lVar28 + 0xd0);
  if (plVar22 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar48 = _DAT_000001c8 + 10;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar48,0x10);
        if (bVar13) {
          *(int *)plVar48 = (int)*plVar48 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    pbVar47 = PTR_DAT_04379678;
    plVar48 = (long *)PTR_DAT_04379680;
    plVar24 = (long *)PTR_DAT_04379688;
  }
  else {
    plVar25 = plVar22 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar13) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    plVar44 = (long *)plVar22[0x39];
    if (plVar44 != (long *)0x0) {
      plVar1 = plVar44 + 10;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    do {
      iVar16 = (int)*plVar25 + -1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar13) {
        *(int *)plVar25 = iVar16;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  uVar29 = *(undefined8 *)(plVar44[0xb] + 8);
  uVar23 = FUN_013e245c(plVar44);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379558), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar28 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar28;
  if ((lVar28 == 0) || (FUN_01148a98(&local_438), local_438 == (long *)0x0)) {
    iVar16 = 0;
  }
  else {
    local_430 = 0x52daf76250fe632a;
    local_428 = "WSYS_U_RANK";
    local_420 = 0xb;
    local_418 = (long *)0x0;
    iVar16 = FUN_010f5878(local_438,&local_430);
    if (local_418 != (long *)0x0) {
      (**(code **)(*local_418 + 0x20))();
    }
    if (local_438 != (long *)0x0) {
      lVar28 = local_438[0xb];
      piVar41 = (int *)(lVar28 + 0xc);
      do {
        iVar6 = *piVar41;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar13) {
          *piVar41 = iVar6 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar28 + 0x18) = 0;
        (**(code **)(*local_438 + 0x20))();
      }
    }
  }
  lVar28 = param_1 + 0x6c;
  uVar17 = FUN_013f6c68(uVar23,iVar16);
  uVar18 = FUN_013f6c68(uVar23,iVar16 + 1);
  uVar19 = FUN_011308d0(param_1);
  local_4d0 = 0;
  bVar13 = false;
  local_4c8 = 0;
  uVar45 = 1;
  if (uVar19 <= *(uint *)(param_1 + 0x78)) {
    uVar19 = *(uint *)(param_1 + 0x78);
  }
  iVar6 = 0;
  if (uVar19 <= uVar18) {
    iVar6 = uVar18 - uVar19;
  }
  local_49c = 0;
  do {
    uVar27 = (uint)uVar45;
    local_408 = (undefined1 *)0x0;
    local_400 = (undefined1 *)0x0;
    local_430 = 0;
    local_418 = (long *)0x0;
    local_410 = 0;
    local_428 = (char *)0x0;
    local_420 = 0;
    if ((int)uVar27 < 0x38a) {
      plVar22 = (long *)*(&DAT_043f23a0)[uVar45 * 4];
      lVar30 = (&DAT_043f23a0)[uVar45 * 4][1] - (long)plVar22;
      if (lVar30 != 0) {
        bVar35 = 0;
        bVar37 = 0;
        uVar32 = 0;
        lVar42 = *plVar22;
        while( true ) {
          if (lVar42 != 0) {
            bVar35 = bVar35 + 1;
            *(short *)((long)local_3e0 + (ulong)bVar37 * 2 + -0x50) = (short)uVar32;
            bVar37 = bVar35;
          }
          uVar32 = uVar32 + 1;
          if ((ulong)(lVar30 >> 3) <= uVar32) break;
          lVar42 = plVar22[uVar32];
        }
        if (bVar35 != 0) {
          uVar32 = (ulong)bVar35;
          puVar36 = &local_430;
LAB_0112f8ec:
          uVar38 = 0;
          if ((uVar27 | 1) != 0x38b) {
            uVar38 = (uint)(ushort)*puVar36;
          }
          uVar40 = (ulong)uVar38;
          if (uVar38 < 0x1c) {
            uVar43 = 0;
            if ((uVar27 | 1) != 0x38b) {
              uVar43 = uVar45;
            }
            lVar30 = *(&DAT_043f23a0)[uVar43 * 4];
            uVar43 = (&DAT_043f23a0)[uVar43 * 4][1] - lVar30 >> 3;
            if ((uVar43 <= uVar40) || (*(long *)(lVar30 + uVar40 * 8) == 0)) goto LAB_0112f934;
          }
          else {
LAB_0112f934:
            lVar30 = *DAT_043f23a0;
            uVar40 = 0;
            uVar43 = DAT_043f23a0[1] - lVar30 >> 3;
          }
          if (uVar43 <= uVar40) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          piVar41 = *(int **)(lVar30 + uVar40 * 8);
          if (((*(ushort *)((long)piVar41 - (long)*piVar41) < 0x67) ||
              (uVar40 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[0x33], uVar40 == 0)) ||
             (*(short *)((long)piVar41 + uVar40) == 0)) break;
          if (*(short *)(lVar28 + uVar45 * 0x58 + 0x7a) != 0) {
            puVar33 = (uint *)(lVar28 + uVar45 * 0x58 + 0x70);
            local_44c = (uint)((*puVar33 & 2) == 0);
            *puVar33 = *puVar33 | 2;
            if ((int)uVar27 < 0x3d5) {
              if (((*pbVar47 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar47), iVar21 != 0)) {
                FUN_00100250(PTR_LAB_04379a10,plVar48,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar47);
              }
              lVar30 = *plVar48;
              *plVar24 = lVar30;
              plVar48 = _DAT_000001c8;
              plVar24 = *(long **)(lVar30 + 0xd0);
              if (plVar24 == (long *)0x0) {
                if (_DAT_000001c8 != (long *)0x0) {
                  plVar24 = _DAT_000001c8 + 10;
                  do {
                    cVar12 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar14) {
                      *(int *)plVar24 = (int)*plVar24 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
              }
              else {
                plVar22 = plVar24 + 10;
                do {
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar14) {
                    *(int *)plVar22 = (int)*plVar22 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                plVar48 = (long *)plVar24[0x39];
                if (plVar48 != (long *)0x0) {
                  plVar25 = plVar48 + 10;
                  do {
                    cVar12 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar14) {
                      *(int *)plVar25 = (int)*plVar25 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                do {
                  iVar21 = (int)*plVar22 + -1;
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar14) {
                    *(int *)plVar22 = iVar21;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar21 == 0) {
                  (**(code **)(*plVar24 + 0x10))();
                }
              }
              local_430 = local_430 & 0xffffffff00000000;
              local_428 = (char *)0x0;
              local_420 = CONCAT35((int3)((ulong)local_420 >> 0x28),0x1200000000);
              local_418 = (long *)CONCAT44(local_418._4_4_,5);
              local_400 = &DAT_cbf29ce484222645;
              local_410 = 0xc0ea47549ab5f3d9;
              local_408 = &DAT_cbf29ce484222645;
              local_3d4 = 0;
              local_3d8 = 0;
              local_3f8 = 0;
              uStack_3f0 = 0;
              local_3e8 = 0;
              local_3e0[0] = 0;
              local_3e0[1] = 0;
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 0x12;
              local_3b8 = 5;
              local_3a0 = &DAT_cbf29ce484222645;
              local_3b0 = 0xc0ea47549ab5f3d9;
              puStack_3a8 = &DAT_cbf29ce484222645;
              local_374 = 0;
              local_378 = 0;
              local_398 = 0;
              uStack_390 = 0;
              local_388 = 0;
              uStack_380 = 0;
              local_368 = 0;
              local_360 = 0;
              local_35c = 0x12;
              local_358 = 5;
              local_340 = &DAT_cbf29ce484222645;
              local_350 = 0xc0ea47549ab5f3d9;
              puStack_348 = &DAT_cbf29ce484222645;
              local_314 = 0;
              local_318 = 0;
              local_338 = 0;
              uStack_330 = 0;
              local_328 = 0;
              uStack_320 = 0;
              local_308 = 0;
              local_300 = 0;
              local_2fc = 0x12;
              local_2f8 = 5;
              local_2f0 = 0xc0ea47549ab5f3d9;
              local_2e0 = &DAT_cbf29ce484222645;
              local_2e8 = &DAT_cbf29ce484222645;
              local_2b4 = 0;
              local_2b8 = 0;
              local_2d8 = 0;
              uStack_2d0 = 0;
              local_2c8 = 0;
              uStack_2c0 = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              local_29c = 0x12;
              local_298 = 5;
              local_290 = 0xc0ea47549ab5f3d9;
              local_280 = &DAT_cbf29ce484222645;
              local_288 = &DAT_cbf29ce484222645;
              local_254 = 0;
              local_258 = 0;
              local_278 = 0;
              uStack_270 = 0;
              local_268 = 0;
              uStack_260 = 0;
              local_248 = 0;
              local_240 = 0;
              local_23c = 0x12;
              local_238 = 5;
              local_230 = 0xc0ea47549ab5f3d9;
              local_228 = &DAT_cbf29ce484222645;
              local_220 = &DAT_cbf29ce484222645;
              local_1f4 = 0;
              local_1f8 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1e8 = 0;
              local_1e0 = 0;
              local_1dc = 0x12;
              local_1d8 = 5;
              local_1d0 = 0xc0ea47549ab5f3d9;
              local_1c8 = &DAT_cbf29ce484222645;
              local_1c0 = &DAT_cbf29ce484222645;
              local_194 = 0;
              local_198 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_188 = 0;
              local_180 = 0;
              local_17c = 0x12;
              local_178 = 5;
              local_170 = 0xc0ea47549ab5f3d9;
              local_168 = &DAT_cbf29ce484222645;
              local_160 = &DAT_cbf29ce484222645;
              local_134 = 0;
              local_138 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_148 = 0;
              uStack_140 = 0;
              local_128 = 0;
              local_120 = 0;
              local_11c = 0x12;
              local_118 = 5;
              local_110 = 0xc0ea47549ab5f3d9;
              local_108 = &DAT_cbf29ce484222645;
              local_100 = &DAT_cbf29ce484222645;
              local_d4 = 0;
              local_d8 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_bc = 0x12;
              local_b8 = 5;
              local_b0 = 0xc0ea47549ab5f3d9;
              local_a8 = &DAT_cbf29ce484222645;
              local_a0 = &DAT_cbf29ce484222645;
              local_74 = 0;
              local_78 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              uStack_80 = 0;
              FUN_013f7198(*(undefined8 *)(plVar48[0xb] + 8),uVar45 & 0xffffffff,&local_430);
              if ((uint)local_430 != 0) {
                puVar34 = (uint *)(lVar28 + uVar45 * 0x58 + 0x74);
                if ((*puVar34 & 7) == 0) {
                  *puVar34 = *puVar34 & 0xfffffff8 | 1;
                }
                if ((uint)local_430 != 1) {
                  if ((*puVar34 & 0x38) == 0) {
                    *puVar34 = *puVar34 & 0xffffffc7 | 8;
                  }
                  if ((uint)local_430 != 2) {
                    if ((*puVar34 & 0x1c0) == 0) {
                      *puVar34 = *puVar34 & 0xfffffe3f | 0x40;
                    }
                    if ((uint)local_430 != 3) {
                      if ((*puVar34 & 0xe00) == 0) {
                        *puVar34 = *puVar34 & 0xfffff1ff | 0x200;
                      }
                      if ((uint)local_430 != 4) {
                        if ((*puVar34 & 0x7000) == 0) {
                          *puVar34 = *puVar34 & 0xffff8fff | 0x1000;
                        }
                        if ((uint)local_430 != 5) {
                          if ((*puVar34 & 0x38000) == 0) {
                            *puVar34 = *puVar34 & 0xfffc7fff | 0x8000;
                          }
                          if ((uint)local_430 != 6) {
                            if ((*puVar34 & 0x1c0000) == 0) {
                              *puVar34 = *puVar34 & 0xffe3ffff | 0x40000;
                            }
                            if ((uint)local_430 != 7) {
                              uVar38 = 7;
                              uVar20 = 0x15;
                              do {
                                uVar4 = 7 << (ulong)(uVar20 & 0x1f);
                                if (((*puVar34 & uVar4) >> (ulong)(uVar20 & 0x1f) & 0xff) == 0) {
                                  *puVar34 = *puVar34 & (uVar4 ^ 0xffffffff) |
                                             1 << (ulong)(uVar20 & 0x1f);
                                }
                                do {
                                  uVar38 = uVar38 + 1;
                                  uVar20 = uVar20 + 3;
                                  if ((uint)local_430 == uVar38) goto LAB_0112fcf4;
                                } while (9 < uVar38);
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0112fcf4:
              if (plVar48 != (long *)0x0) {
                plVar24 = plVar48 + 10;
                do {
                  iVar21 = (int)*plVar24 + -1;
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar14) {
                    *(int *)plVar24 = iVar21;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar21 == 0) {
                  (**(code **)(*plVar48 + 0x10))(plVar48);
                }
              }
            }
            puVar46 = (ushort *)(lVar28 + uVar45 * 0x58 + 0x78);
            uVar26 = *puVar46;
            if (99 < uVar26) {
              uVar32 = FUN_011357f8(param_1,uVar45 & 0xffffffff);
              uVar26 = 100;
              if ((uVar32 & 1) == 0) {
                uVar26 = 99;
              }
            }
            local_430 = local_430 & 0xffffffff00000000;
            local_428 = (char *)0x0;
            local_420 = CONCAT35((int3)((ulong)local_420 >> 0x28),0x1200000000);
            local_418 = (long *)CONCAT44(local_418._4_4_,5);
            local_400 = &DAT_cbf29ce484222645;
            local_410 = 0xc0ea47549ab5f3d9;
            local_408 = &DAT_cbf29ce484222645;
            local_3d4 = 0;
            local_3d8 = 0;
            local_3f8 = 0;
            uStack_3f0 = 0;
            local_3e8 = 0;
            local_3e0[0] = 0;
            local_3e0[1] = 0;
            local_3c8 = 0;
            local_3c0 = 0;
            local_3bc = 0x12;
            local_3b8 = 5;
            local_3a0 = &DAT_cbf29ce484222645;
            local_3b0 = 0xc0ea47549ab5f3d9;
            puStack_3a8 = &DAT_cbf29ce484222645;
            local_374 = 0;
            local_378 = 0;
            local_398 = 0;
            uStack_390 = 0;
            local_388 = 0;
            uStack_380 = 0;
            local_368 = 0;
            local_360 = 0;
            local_35c = 0x12;
            local_358 = 5;
            local_340 = &DAT_cbf29ce484222645;
            local_350 = 0xc0ea47549ab5f3d9;
            puStack_348 = &DAT_cbf29ce484222645;
            local_314 = 0;
            local_318 = 0;
            local_338 = 0;
            uStack_330 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_308 = 0;
            local_300 = 0;
            local_2fc = 0x12;
            local_2f8 = 5;
            local_2f0 = 0xc0ea47549ab5f3d9;
            local_2e0 = &DAT_cbf29ce484222645;
            local_2e8 = &DAT_cbf29ce484222645;
            local_2b4 = 0;
            local_2b8 = 0;
            local_2d8 = 0;
            uStack_2d0 = 0;
            local_2c8 = 0;
            uStack_2c0 = 0;
            local_2a8 = 0;
            local_2a0 = 0;
            local_29c = 0x12;
            local_298 = 5;
            local_290 = 0xc0ea47549ab5f3d9;
            local_280 = &DAT_cbf29ce484222645;
            local_288 = &DAT_cbf29ce484222645;
            local_254 = 0;
            local_258 = 0;
            local_278 = 0;
            uStack_270 = 0;
            local_268 = 0;
            uStack_260 = 0;
            local_248 = 0;
            local_240 = 0;
            local_23c = 0x12;
            local_238 = 5;
            local_230 = 0xc0ea47549ab5f3d9;
            local_228 = &DAT_cbf29ce484222645;
            local_220 = &DAT_cbf29ce484222645;
            local_1f4 = 0;
            local_1f8 = 0;
            local_218 = 0;
            uStack_210 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 0x12;
            local_1d8 = 5;
            local_1d0 = 0xc0ea47549ab5f3d9;
            local_1c8 = &DAT_cbf29ce484222645;
            local_1c0 = &DAT_cbf29ce484222645;
            local_194 = 0;
            local_198 = 0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_188 = 0;
            local_180 = 0;
            local_17c = 0x12;
            local_178 = 5;
            local_170 = 0xc0ea47549ab5f3d9;
            local_168 = &DAT_cbf29ce484222645;
            local_160 = &DAT_cbf29ce484222645;
            local_134 = 0;
            local_138 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_128 = 0;
            local_120 = 0;
            local_11c = 0x12;
            local_118 = 5;
            local_110 = 0xc0ea47549ab5f3d9;
            local_108 = &DAT_cbf29ce484222645;
            local_100 = &DAT_cbf29ce484222645;
            local_d4 = 0;
            local_d8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_bc = 0x12;
            local_b8 = 5;
            local_b0 = 0xc0ea47549ab5f3d9;
            local_a8 = &DAT_cbf29ce484222645;
            local_a0 = &DAT_cbf29ce484222645;
            local_74 = 0;
            local_78 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            FUN_013f7198(uVar29,uVar45 & 0xffffffff,&local_430);
            if ((uint)local_430 == 0) {
              uVar38 = 0;
              local_4a4 = 0;
            }
            else {
              uVar32 = 0;
              uVar38 = 0;
              local_4a4 = 0;
              puVar34 = (uint *)(param_1 + uVar45 * 4 + 0x1e4cc);
              do {
                uVar20 = FUN_01130984(param_1,uVar45 & 0xffffffff,uVar32 & 0xffffffff,0,0,0);
                if ((uVar32 < 10) && ((uVar20 & 0xff) < 7)) {
                  uVar4 = (int)uVar32 * 3;
                  *puVar34 = *puVar34 & (7 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU) |
                             (uVar20 & 0xff) << (ulong)(uVar4 & 0x1f);
                }
                if (uVar20 != 0) {
                  if (9 < uVar32) goto LAB_011308cc;
                  uVar15 = (int)uVar32 * 3;
                  uVar9 = 7 << (ulong)(uVar15 & 0x1f);
                  puVar31 = (uint *)(lVar28 + uVar45 * 0x58 + 0x74);
                  uVar39 = *puVar31;
                  iVar21 = local_3e0[uVar32 * 0x18];
                  iVar7 = local_3e0[uVar32 * 0x18 + 1];
                  uVar10 = (uVar39 & uVar9) >> (ulong)(uVar15 & 0x1f);
                  uVar4 = uVar10 + 1 & 0xff;
                  if ((uVar10 & 0xfe) < 6 && uVar4 < 7) {
                    uVar39 = uVar4 << (ulong)(uVar15 & 0x1f) | uVar39 & ~uVar9;
                    *puVar31 = uVar39;
                  }
                  uVar4 = uVar20;
                  while (uVar4 = uVar4 - 1, uVar4 != 0) {
                    uVar11 = (uVar39 & uVar9) >> (ulong)(uVar15 & 0x1f);
                    uVar10 = uVar11 + 1 & 0xff;
                    if ((uVar11 & 0xfe) < 6 && uVar10 < 7) {
                      uVar39 = uVar10 << (ulong)(uVar15 & 0x1f) | uVar39 & ~uVar9;
                      *puVar31 = uVar39;
                    }
                  }
                  uVar38 = uVar38 + (iVar7 + iVar21) * uVar20;
                  local_4a4 = local_4a4 + uVar20;
                  local_44c = 1;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 < (local_430 & 0xffffffff));
            }
            uVar38 = uVar38 & 0xffff;
            uVar20 = *puVar46 + uVar38;
            if (0x752 < uVar20 >> 5) {
              uVar20 = 60000;
            }
            *puVar46 = (ushort)uVar20;
            plVar24 = (long *)PTR_DAT_04379688;
            if ((uVar26 < 100) && (99 < (uVar20 & 0xffff))) {
              uVar20 = FUN_011357f8(param_1,uVar45 & 0xffffffff);
              local_4d0 = local_4d0 + (uVar20 & 1);
            }
            plVar48 = (long *)PTR_DAT_04379680;
            pbVar47 = PTR_DAT_04379678;
            if (uVar38 != 0) {
              local_4c8 = CONCAT44(local_4c8._4_4_ + uVar38,(int)local_4c8 + (local_4a4 & 0xffff));
            }
            local_49c = local_49c + local_44c;
            if (local_44c != 0) {
              uVar26 = *(ushort *)(param_1 + 0x74);
              if (!bVar13) {
                if (0x752 < uVar26 >> 5) {
                  lVar30 = 0x388;
                  sVar8 = *(short *)(param_1 + 0x142);
                  psVar3 = (short *)(param_1 + 0x142);
                  while( true ) {
                    if (sVar8 != 0) {
                      *psVar3 = 1;
                    }
                    if (lVar30 == 0) break;
                    if (psVar3[0x2c] != 0) {
                      psVar3[0x2c] = 1;
                    }
                    if (psVar3[0x58] != 0) {
                      psVar3[0x58] = 1;
                    }
                    if (psVar3[0x84] != 0) {
                      psVar3[0x84] = 1;
                    }
                    psVar3 = psVar3 + 0xb0;
                    lVar30 = lVar30 + -4;
                    sVar8 = *psVar3;
                  }
                  uVar26 = 1;
                  *(undefined2 *)(param_1 + 0x74) = 1;
                }
                uVar26 = uVar26 + 1;
                *(ushort *)(param_1 + 0x74) = uVar26;
              }
              *(ushort *)(lVar28 + uVar45 * 0x58 + 0x7e) = uVar26;
              bVar13 = true;
            }
            if ((int)uVar27 < 0x3d5) {
              if (((*pbVar47 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar47), iVar21 != 0)) {
                FUN_00100250(PTR_LAB_04379a10,plVar48,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar47);
              }
              lVar30 = *plVar48;
              *plVar24 = lVar30;
              plVar22 = _DAT_000001c8;
              plVar25 = *(long **)(lVar30 + 0xd0);
              if (plVar25 == (long *)0x0) {
                if (_DAT_000001c8 != (long *)0x0) {
                  plVar48 = _DAT_000001c8 + 10;
                  do {
                    cVar12 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar48,0x10);
                    if (bVar14) {
                      *(int *)plVar48 = (int)*plVar48 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                pbVar47 = PTR_DAT_04379678;
                plVar48 = (long *)PTR_DAT_04379680;
                plVar24 = (long *)PTR_DAT_04379688;
              }
              else {
                plVar1 = plVar25 + 10;
                do {
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar14) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                plVar22 = (long *)plVar25[0x39];
                if (plVar22 != (long *)0x0) {
                  plVar2 = plVar22 + 10;
                  do {
                    cVar12 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar14) {
                      *(int *)plVar2 = (int)*plVar2 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                do {
                  iVar21 = (int)*plVar1 + -1;
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar14) {
                    *(int *)plVar1 = iVar21;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar21 == 0) {
                  (**(code **)(*plVar25 + 0x10))();
                }
              }
              local_430 = local_430 & 0xffffffff00000000;
              local_428 = (char *)0x0;
              local_420 = CONCAT35((int3)((ulong)local_420 >> 0x28),0x1200000000);
              local_418 = (long *)CONCAT44(local_418._4_4_,5);
              local_400 = &DAT_cbf29ce484222645;
              local_410 = 0xc0ea47549ab5f3d9;
              local_408 = &DAT_cbf29ce484222645;
              local_3d4 = 0;
              local_3d8 = 0;
              local_3f8 = 0;
              uStack_3f0 = 0;
              local_3e8 = 0;
              local_3e0[0] = 0;
              local_3e0[1] = 0;
              local_3c8 = 0;
              local_3c0 = 0;
              local_3bc = 0x12;
              local_3b8 = 5;
              local_3a0 = &DAT_cbf29ce484222645;
              local_3b0 = 0xc0ea47549ab5f3d9;
              puStack_3a8 = &DAT_cbf29ce484222645;
              local_374 = 0;
              local_378 = 0;
              local_398 = 0;
              uStack_390 = 0;
              local_388 = 0;
              uStack_380 = 0;
              local_368 = 0;
              local_360 = 0;
              local_35c = 0x12;
              local_358 = 5;
              local_340 = &DAT_cbf29ce484222645;
              local_350 = 0xc0ea47549ab5f3d9;
              puStack_348 = &DAT_cbf29ce484222645;
              local_314 = 0;
              local_318 = 0;
              local_338 = 0;
              uStack_330 = 0;
              local_328 = 0;
              uStack_320 = 0;
              local_308 = 0;
              local_300 = 0;
              local_2fc = 0x12;
              local_2f8 = 5;
              local_2f0 = 0xc0ea47549ab5f3d9;
              local_2e0 = &DAT_cbf29ce484222645;
              local_2e8 = &DAT_cbf29ce484222645;
              local_2b4 = 0;
              local_2b8 = 0;
              local_2d8 = 0;
              uStack_2d0 = 0;
              local_2c8 = 0;
              uStack_2c0 = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              local_29c = 0x12;
              local_298 = 5;
              local_290 = 0xc0ea47549ab5f3d9;
              local_280 = &DAT_cbf29ce484222645;
              local_288 = &DAT_cbf29ce484222645;
              local_254 = 0;
              local_258 = 0;
              local_278 = 0;
              uStack_270 = 0;
              local_268 = 0;
              uStack_260 = 0;
              local_248 = 0;
              local_240 = 0;
              local_23c = 0x12;
              local_238 = 5;
              local_230 = 0xc0ea47549ab5f3d9;
              local_228 = &DAT_cbf29ce484222645;
              local_220 = &DAT_cbf29ce484222645;
              local_1f4 = 0;
              local_1f8 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1e8 = 0;
              local_1e0 = 0;
              local_1dc = 0x12;
              local_1d8 = 5;
              local_1d0 = 0xc0ea47549ab5f3d9;
              local_1c8 = &DAT_cbf29ce484222645;
              local_1c0 = &DAT_cbf29ce484222645;
              local_194 = 0;
              local_198 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_188 = 0;
              local_180 = 0;
              local_17c = 0x12;
              local_178 = 5;
              local_170 = 0xc0ea47549ab5f3d9;
              local_168 = &DAT_cbf29ce484222645;
              local_160 = &DAT_cbf29ce484222645;
              local_134 = 0;
              local_138 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_148 = 0;
              uStack_140 = 0;
              local_128 = 0;
              local_120 = 0;
              local_11c = 0x12;
              local_118 = 5;
              local_110 = 0xc0ea47549ab5f3d9;
              local_108 = &DAT_cbf29ce484222645;
              local_100 = &DAT_cbf29ce484222645;
              local_d4 = 0;
              local_d8 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_bc = 0x12;
              local_b8 = 5;
              local_b0 = 0xc0ea47549ab5f3d9;
              local_a8 = &DAT_cbf29ce484222645;
              local_a0 = &DAT_cbf29ce484222645;
              local_74 = 0;
              local_78 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              uStack_80 = 0;
              FUN_013f7198(*(undefined8 *)(plVar22[0xb] + 8),uVar45 & 0xffffffff,&local_430);
              if ((uint)local_430 != 0) {
                lVar30 = 0;
                piVar41 = (int *)((long)&local_3e8 + 4);
                bVar14 = true;
                do {
                  if (lVar30 == 0x1e) {
LAB_011308cc:
                    /* WARNING: Subroutine does not return */
                    FUN_01137490();
                  }
                  uVar27 = (uint)lVar30;
                  lVar30 = lVar30 + 3;
                  bVar5 = false;
                  if (*piVar41 + 1U <=
                      ((7 << (ulong)(uVar27 & 0x1f) & *(uint *)(lVar28 + uVar45 * 0x58 + 0x74)) >>
                       (ulong)(uVar27 & 0x1f) & 0xff)) {
                    bVar5 = bVar14;
                  }
                  piVar41 = piVar41 + 0x18;
                  bVar14 = bVar5;
                } while ((local_430 & 0xffffffff) * 3 != lVar30);
                if (bVar5) {
                  *puVar33 = *puVar33 | 4;
                }
              }
              if (plVar22 != (long *)0x0) {
                plVar25 = plVar22 + 10;
                do {
                  iVar21 = (int)*plVar25 + -1;
                  cVar12 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar14) {
                    *(int *)plVar25 = iVar21;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar21 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
          }
        }
      }
    }
LAB_0112f858:
    uVar45 = uVar45 + 1;
    if (uVar45 == 0x38a) {
      FUN_01131ad8(param_1);
      FUN_011308d0(param_1);
      uVar38 = 100;
      uVar27 = local_4c8._4_4_ + uVar19 + local_4d0 * 100;
      iVar21 = 0;
      if (uVar27 <= uVar18) {
        iVar21 = uVar18 - uVar27;
      }
      if (uVar18 == 0) {
        uVar18 = 100;
      }
      else {
        uVar20 = uVar18 - uVar17;
        if (uVar19 < uVar18) {
          uVar38 = 0;
          if ((uVar20 != 0) && (uVar17 <= uVar19 && uVar19 - uVar17 != 0)) {
            uVar38 = 0;
            if (uVar20 != 0) {
              uVar38 = ((uVar19 - uVar17) * 100) / uVar20;
            }
          }
        }
        else {
          uVar38 = 100;
        }
        if (uVar27 < uVar18) {
          uVar18 = 0;
          if ((uVar20 != 0) && (uVar17 <= uVar27 && uVar27 - uVar17 != 0)) {
            uVar18 = 0;
            if (uVar20 != 0) {
              uVar18 = ((uVar27 - uVar17) * 100) / uVar20;
            }
          }
        }
        else {
          uVar18 = 100;
        }
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_49c;
        param_2[1] = (int)local_4c8;
        param_2[2] = local_4c8._4_4_;
        param_2[3] = local_4d0;
        param_2[4] = local_4d0 * 100;
        param_2[5] = uVar19;
        param_2[6] = uVar27;
        param_2[7] = iVar16;
        param_2[8] = iVar6;
        param_2[9] = iVar21;
        param_2[10] = uVar38;
        param_2[0xb] = uVar18;
        param_2[0xc] = uVar27;
        if (0x1869e < uVar27) {
          uVar27 = 99999;
        }
        *(uint *)(param_1 + 0x78) = uVar27;
      }
      if (plVar44 != (long *)0x0) {
        plVar48 = plVar44 + 10;
        do {
          iVar16 = (int)*plVar48 + -1;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar48,0x10);
          if (bVar13) {
            *(int *)plVar48 = iVar16;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar44 + 0x10))();
        }
      }
      return local_4d0;
    }
  } while( true );
  uVar32 = uVar32 - 1;
  puVar36 = (ulong *)((long)puVar36 + 2);
  if (uVar32 == 0) goto LAB_0112f858;
  goto LAB_0112f8ec;
}


