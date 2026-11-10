/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00996f94; name: FUN_00996f94
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00996f94(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined1 param_4,
                 undefined8 param_5,ulong param_6,byte param_7)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *local_460;
  code *local_458;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 local_440 [8];
  long local_438;
  long *local_3d8;
  undefined1 *local_3d0;
  code *local_3c8;
  undefined1 *local_3c0;
  undefined1 *puStack_3b8;
  undefined1 local_3b0 [8];
  long local_3a8;
  long *local_348;
  long *local_340;
  undefined8 local_338;
  long *local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  long *local_318;
  long *local_310 [7];
  long *local_2d8;
  char local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long *plStack_280;
  long *local_260;
  long *local_240;
  undefined8 local_238;
  undefined8 local_230;
  long *local_228;
  long *local_1e8;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined1 *local_150;
  long local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  long local_130;
  long local_128;
  long local_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined2 local_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined4 uStack_fe;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 local_f2;
  undefined6 uStack_f0;
  undefined2 local_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined4 local_e0;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  byte bStack_d4;
  byte bStack_d3;
  undefined1 local_d0 [8];
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_80;
  byte local_7c;
  undefined1 local_7b;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1._8_8_;
  local_50 = param_1._0_8_;
  local_58 = param_5;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar11 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar11;
  FUN_0098f80c(&local_60,lVar11 + 0xd8);
  if (local_60 == (long *)0x0) {
    return;
  }
  FUN_0199c304(local_310);
  if (local_310[0] == (long *)0x0) {
    local_68 = (long *)0x0;
    lVar11 = local_a0;
    uVar7 = uStack_98;
    lVar12 = local_50;
    uVar8 = uStack_48;
  }
  else {
    FUN_009acf14(&local_68);
    plVar2 = local_310[0];
    lVar11 = local_a0;
    uVar7 = uStack_98;
    lVar12 = local_50;
    uVar8 = uStack_48;
    if (local_310[0] != (long *)0x0) {
      plVar3 = local_310[0] + 1;
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = local_50;
      uVar8 = uStack_48;
      if (iVar9 == 0) {
        local_310[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_140 = *plVar2;
        FUN_02a44274(lVar11 + 0xd8,&local_140);
        lVar11 = local_a0;
        uVar7 = uStack_98;
        lVar12 = local_50;
        uVar8 = uStack_48;
      }
    }
  }
  uStack_98 = uVar8;
  local_a0 = lVar12;
  local_50 = local_a0;
  if (local_68 == (long *)0x0) goto joined_r0x009974ec;
  local_1a0._4_4_ = (uint)((ulong)local_1a0 >> 0x20);
  local_80 = 0;
  local_7b = 1;
  local_7c = param_7 & 1;
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  local_c8 = (long *)0x0;
  uStack_c0 = 0;
  local_d0[0] = param_4;
  local_90 = param_2;
  uStack_48 = uStack_98;
  if (*(ulong *)(param_3 + 0x140) < *(ulong *)(param_3 + 0x148)) {
    FUN_009b8a48(param_3 + 0x150,*(ulong *)(param_3 + 0x140),local_d0);
    *(long *)(param_3 + 0x140) = *(long *)(param_3 + 0x140) + 0x60;
  }
  else {
    FUN_009b89a4(param_3 + 0x138,local_d0);
  }
  uVar7 = local_58;
  local_128 = 0x3ffffffff;
  local_118 = 0x38a;
  local_130 = -1;
  local_140 = 0;
  local_138 = 0;
  local_120 = -1;
  uStack_114 = 0;
  uStack_112 = 0;
  uStack_110 = 1;
  uStack_10e = 0xff;
  uStack_10c = 0xffffffff;
  local_108 = 0x1ff;
  local_e0 = 0xffff;
  uStack_dc = 0;
  uStack_da = 0x100;
  uStack_d8 = 0xffff0100;
  bStack_d4 = 0;
  bStack_d3 = 0;
  uStack_106 = 0xffffffffffff;
  uStack_100 = 0xffff;
  uStack_fe = 0xffffffff;
  uStack_fa = 0;
  uStack_f8 = 0;
  local_f2 = 0;
  uStack_f0 = 0;
  local_ea = 0;
  uStack_e8 = 0;
  local_118 = FUN_02c5be48(local_58);
  uStack_114 = FUN_02c5be50(uVar7);
  bStack_d3 = FUN_02c628e4(uVar7);
  bStack_d3 = bStack_d3 & 1;
  bStack_d4 = FUN_02c628dc(uVar7);
  bStack_d4 = bStack_d4 & 1;
  uStack_10e = FUN_02c624c8(uVar7);
  uVar10 = FUN_02c628e4(uVar7);
  if ((uVar10 & 1) == 0) {
    local_1a0 = local_50;
    local_198 = uStack_48;
    local_188 = 0;
    local_190 = 0;
    local_180 = *(undefined8 *)PTR_DAT_0437a120;
    local_178 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
    local_168 = 0;
    if ((param_6 & 1) == 0) {
      local_168 = 8;
    }
    local_170 = &DAT_cbf29ce484222645;
    local_164 = 0;
    local_158 = 0;
    local_160 = 0;
    local_150 = &DAT_cbf29ce484222645;
    local_15c = *(undefined1 *)(param_3 + 0x568);
    FUN_0099cba0(local_310);
    local_338 = 0;
    FUN_0185b304(&local_330,&local_140,1,&local_338);
    plVar2 = local_228;
    local_238 = uStack_328;
    local_240 = local_330;
    local_230 = local_320;
    local_228 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    local_228 = local_318;
    local_1c8 = 1;
    local_330 = (long *)0x0;
    FUN_0099cd14(&local_340,*(undefined8 *)(param_3 + 8),&local_1a0,local_310,&local_58);
    plVar2 = local_330;
    local_330 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar11 = plVar2[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar2 + 0x20))();
      }
    }
    local_330 = local_340;
    local_340[0x17] = local_140;
    local_340[0x18] = CONCAT71(uStack_137,local_138);
    local_340[0x1b] = local_120;
    local_340[0x1c] = CONCAT26(uStack_112,CONCAT24(uStack_114,local_118));
    local_340[0x19] = local_130;
    local_340[0x1a] = local_128;
    local_340[0x1f] = CONCAT26(uStack_fa,CONCAT42(uStack_fe,uStack_100));
    local_340[0x20] = CONCAT26(local_f2,uStack_f8);
    local_340[0x1d] = CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
    local_340[0x1e] = CONCAT62(uStack_106,local_108);
    *(ulong *)((long)local_340 + 0x11e) =
         CONCAT17(bStack_d3,CONCAT16(bStack_d4,CONCAT42(uStack_d8,uStack_da)));
    local_340[0x22] = CONCAT26(uStack_e2,uStack_e8);
    local_340[0x23] = CONCAT26(uStack_da,CONCAT15(uStack_db,CONCAT14(uStack_dc,local_e0)));
    local_340[0x21] = CONCAT26(local_ea,uStack_f0);
    iVar9 = FUN_02c5be48(local_58);
    if ((iVar9 == 0x1e7) && (*(char *)(param_3 + 0x565) != '\0')) {
      *(undefined1 *)(local_330 + 0x62) = 1;
    }
    local_3d0 = &LAB_009b9a64;
    local_3c8 = FUN_009b9e10;
    local_3c0 = &LAB_009b9e14;
    puStack_3b8 = &LAB_009b9e20;
    local_3b0[0] = param_4;
    local_3a8 = param_3;
    FUN_0099cd8c(&local_348,local_68,4,&local_330,&local_3d0,0);
    pcVar6 = local_3c8;
    if (local_348 != (long *)0x0) {
      lVar11 = local_348[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_348 + 0x20))();
        pcVar6 = local_3c8;
        local_3c8 = (code *)0x0;
      }
    }
    if (pcVar6 != (code *)0x0) {
      local_3c0 = (undefined1 *)0x0;
      puStack_3b8 = (undefined1 *)0x0;
      local_3d0 = (undefined1 *)0x0;
      local_3c8 = (code *)0x0;
      (*pcVar6)(local_3b0);
    }
    if (local_330 != (long *)0x0) {
      lVar11 = local_330[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_330 + 0x20))();
      }
    }
    if (local_1e8 != (long *)0x0) {
      (**(code **)(*local_1e8 + 0x20))();
    }
    if (local_228 != (long *)0x0) {
      (**(code **)(*local_228 + 0x20))();
    }
    if (local_260 != (long *)0x0) {
      plVar2 = local_260 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_260[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_330 = (long *)*local_260;
        FUN_02a44274(lVar11 + 0xd8,&local_330);
      }
    }
    lVar11 = local_298;
    if (local_2a0 != '\0') {
      if (local_298 != 0) {
        lVar12 = local_298;
        if (local_290 != local_298) {
          if (*(long **)(local_290 + -0x48) != (long *)0x0) {
            (**(code **)(**(long **)(local_290 + -0x48) + 0x20))();
          }
          if (local_290 + -0x80 != lVar11) {
            lVar12 = local_290;
            do {
              if (*(long **)(lVar12 + -200) != (long *)0x0) {
                (**(code **)(**(long **)(lVar12 + -200) + 0x20))();
              }
              lVar12 = lVar12 + -0x80;
            } while (lVar11 + 0x80 != lVar12);
          }
          lVar12 = local_298;
        }
        local_290 = lVar11;
        uVar10 = (**(code **)(*plStack_280 + 0xc0))(plStack_280);
        if ((uVar10 & 1) != 0) {
          lVar11 = tpidr_el0;
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar11 + 0x38d480)) {
            FUN_02bcc824(plStack_280,lVar12,local_288 - lVar12,0x10);
            goto LAB_009973ec;
          }
        }
        (**(code **)(*plStack_280 + 0x18))(plStack_280,lVar12,local_288 - lVar12,0x10);
      }
LAB_009973ec:
      local_2a0 = '\0';
    }
    if (local_2d8 != (long *)0x0) {
LAB_009973f8:
      (**(code **)(*local_2d8 + 0x20))();
    }
  }
  else {
    local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
    FUN_0099ce40(local_310,*(undefined8 *)(param_3 + 8),&local_50,&local_140,&local_1a0,&local_58);
    local_460 = &LAB_009ba89c;
    local_458 = FUN_009bac3c;
    local_450 = &LAB_009bb180;
    puStack_448 = &LAB_009bb18c;
    local_440[0] = param_4;
    local_438 = param_3;
    FUN_0099ceb8(&local_3d8,local_68,5,local_310,&local_460,0);
    pcVar6 = local_458;
    if (local_3d8 != (long *)0x0) {
      lVar11 = local_3d8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_3d8 + 0x20))();
        pcVar6 = local_458;
        local_458 = (code *)0x0;
      }
    }
    local_2d8 = local_310[0];
    if (pcVar6 != (code *)0x0) {
      local_450 = (undefined1 *)0x0;
      puStack_448 = (undefined1 *)0x0;
      local_460 = (undefined1 *)0x0;
      local_458 = (code *)0x0;
      (*pcVar6)(local_440);
      local_2d8 = local_310[0];
    }
    local_310[0] = local_2d8;
    if (local_2d8 != (long *)0x0) {
      lVar11 = local_2d8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        goto LAB_009973f8;
      }
    }
  }
  plVar2 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar3 = local_b8 + 1;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_310[0] = (long *)*plVar2;
      FUN_02a44274(lVar11 + 0xd8,local_310);
    }
  }
  plVar2 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar3 = local_c8 + 1;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_310[0] = (long *)*plVar2;
      FUN_02a44274(lVar11 + 0xd8,local_310);
    }
  }
  lVar11 = local_a0;
  uVar7 = uStack_98;
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      lVar11 = local_a0;
      uVar7 = uStack_98;
    }
  }
joined_r0x009974ec:
  uStack_98 = uVar7;
  local_a0 = lVar11;
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


