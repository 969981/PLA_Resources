/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01681d18; name: FUN_01681d18
 */


undefined8 FUN_01681d18(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_6e0;
  code *local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined1 auStack_6c0 [104];
  long *local_658 [2];
  undefined1 *local_648;
  char *local_640;
  undefined8 uStack_638;
  long local_630 [3];
  long *local_618;
  long *local_610;
  int local_604;
  long *local_600;
  undefined1 *puStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined6 local_5e0;
  undefined2 uStack_5da;
  undefined6 uStack_5d8;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8;
  undefined8 local_5b4;
  undefined2 local_5ac;
  undefined4 local_5a8;
  undefined2 local_5a4;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined1 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined2 local_584;
  undefined4 local_580;
  undefined2 local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568;
  undefined8 local_564;
  undefined2 local_55c;
  undefined4 local_558;
  undefined2 local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined8 local_53c;
  undefined2 local_534;
  undefined4 local_530;
  undefined2 local_52c;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined2 local_50c;
  undefined4 local_508;
  undefined2 local_504;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined1 local_4f0;
  undefined8 local_4ec;
  undefined2 local_4e4;
  undefined4 local_4e0;
  undefined2 local_4dc;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined1 local_4c8;
  undefined8 local_4c4;
  undefined2 local_4bc;
  undefined4 local_4b8;
  undefined2 local_4b4;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined2 local_494;
  undefined4 local_490;
  undefined2 local_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined2 local_46c;
  undefined4 local_468;
  undefined2 local_464;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined2 local_444;
  undefined4 local_440;
  undefined2 local_43c;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined2 local_41c;
  undefined4 local_418;
  undefined2 local_414;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined1 auStack_3fc [484];
  undefined4 local_218;
  undefined1 local_214 [4];
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_208;
  undefined1 local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  
  FUN_0165a7a0(&local_600);
  plVar1 = local_600;
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_600 != (long *)0x0) {
    if (*(int *)((long)local_600 + 0xc) != 0) {
      piVar2 = (int *)((long)local_600 + 0xc);
      iVar11 = *(int *)((long)local_600 + 0xc);
      do {
        plVar16 = (long *)plVar1[2];
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar14;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_0168244c;
          if (plVar16 == (long *)puVar9) break;
          plVar16 = (long *)*plVar16;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar15 = plVar1[3];
            plVar1 = (long *)0x0;
            plVar16 = local_600;
            if (lVar15 != 0) {
              plVar1 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x0168238c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_0168244c:
    plVar1 = (long *)0x0;
    plVar16 = local_600;
joined_r0x0168238c:
    local_600 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 1;
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_630[0] = *plVar16;
        FUN_02a44274(lVar15 + 0xd8,local_630);
      }
    }
    if (plVar1 != (long *)0x0) {
      FUN_0199c220(&local_600,plVar1);
      plVar16 = local_600;
      puVar9 = PTR_DAT_0437a0f0;
      puVar8 = PTR_DAT_0437a0e8;
      if (local_600 != (long *)0x0) {
        if (*(int *)((long)local_600 + 0xc) != 0) {
          piVar2 = (int *)((long)local_600 + 0xc);
          iVar11 = *(int *)((long)local_600 + 0xc);
          do {
            plVar17 = (long *)plVar16[2];
            if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar14;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar17 == (long *)0x0) goto LAB_0168262c;
              if (plVar17 == (long *)puVar9) break;
              plVar17 = (long *)*plVar17;
            }
            iVar12 = *piVar2;
            if (iVar12 == iVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar15 = plVar16[3];
                plVar16 = (long *)0x0;
                plVar17 = local_600;
                if (lVar15 != 0) {
                  plVar16 = (long *)(lVar15 + -0x50);
                }
                goto joined_r0x01682534;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar12;
          } while (iVar12 != 0);
        }
LAB_0168262c:
        plVar16 = (long *)0x0;
        plVar17 = local_600;
joined_r0x01682534:
        local_600 = plVar17;
        if (plVar17 != (long *)0x0) {
          plVar3 = plVar17 + 1;
          do {
            iVar11 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_630[0] = *plVar17;
            FUN_02a44274(lVar15 + 0xd8,local_630);
          }
        }
        if (plVar16 != (long *)0x0) {
          FUN_01847290(&local_600,plVar16);
          if (((local_600 != (long *)0x0) && (FUN_0168268c(), local_600 != (long *)0x0)) &&
             (uVar13 = FUN_02a43a5c(local_600[0xb]), (uVar13 & 1) != 0)) {
            (**(code **)(*local_600 + 0x20))(local_600);
          }
          uVar13 = FUN_02a43a5c(plVar16[0xb]);
          if ((uVar13 & 1) != 0) {
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
      }
      uVar13 = FUN_02a43a5c(plVar1[0xb]);
      if ((uVar13 & 1) != 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
    }
  }
  local_5d0 = 0;
  local_5cc = 0;
  local_5e0 = 0;
  local_600 = (long *)&DAT_cbf29ce484222645;
  puStack_5f8 = &DAT_03996322;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_5c8 = 0xffffffff00000000;
  uStack_5c0 = 0;
  uStack_5da = 0;
  uStack_5d8 = 0;
  local_5b4 = 0;
  local_5b8 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_588 = 0;
  local_58c = 0;
  local_590 = 0;
  local_584 = 0;
  local_580 = 0;
  local_57c = 0;
  local_5a0 = 0xffffffff00000000;
  uStack_598 = 0;
  local_578 = 0xffffffff00000000;
  uStack_570 = 0;
  local_564 = 0;
  local_568 = 0;
  local_55c = 0;
  local_558 = 0;
  local_554 = 0;
  local_550 = 0xffffffff00000000;
  uStack_548 = 0;
  local_53c = 0;
  local_540 = 0;
  local_534 = 0;
  local_530 = 0;
  local_52c = 0;
  local_510 = 0;
  local_514 = 0;
  local_518 = 0;
  local_50c = 0;
  local_508 = 0;
  local_504 = 0;
  local_528 = 0xffffffff00000000;
  uStack_520 = 0;
  local_500 = 0xffffffff00000000;
  uStack_4f8 = 0;
  local_4ec = 0;
  local_4f0 = 0;
  local_4e4 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  local_4d8 = 0xffffffff00000000;
  local_4c4 = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  local_4bc = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_4a8 = 0;
  local_4b0 = 0xffffffff00000000;
  local_49c = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_494 = 0;
  local_490 = 0;
  local_48c = 0;
  local_480 = 0;
  local_488 = 0xffffffff00000000;
  local_474 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_464 = 0;
  local_458 = 0;
  local_460 = 0xffffffff00000000;
  local_44c = 0;
  local_450 = 0;
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_430 = 0;
  local_438 = 0xffffffff00000000;
  local_424 = 0;
  local_428 = 0;
  local_420 = 0;
  local_41c = 0;
  local_418 = 0;
  local_414 = 0;
  local_408 = 0;
  local_410 = 0xffffffff00000000;
  local_400 = 0;
  memset(auStack_3fc,0,0x1e4);
  local_218 = 0xffffffff;
  local_210 = 0xffffffff;
  local_208 = 0xffffffff;
  local_200 = 0xffffffff;
  local_1f8 = 0xffffffff;
  local_1f0 = 0xffffffff;
  local_1e8 = 0xffffffff;
  local_1e0 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_1d0 = 0xffffffff;
  local_1c8 = 0xffffffff;
  local_1c0 = 0xffffffff;
  local_1b8 = 0xffffffff;
  local_1b0 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_1a0 = 0xffffffff;
  local_198 = 0xffffffff;
  local_190 = 0xffffffff;
  local_188 = 0xffffffff;
  local_180 = 0xffffffff;
  local_178 = 0xffffffff;
  local_170 = 0xffffffff;
  local_168 = 0xffffffff;
  local_160 = 0xffffffff;
  local_158 = 0xffffffff;
  local_150 = 0xffffffff;
  local_148 = 0xffffffff;
  local_140 = 0xffffffff;
  local_138 = 0xffffffff;
  local_130 = 0xffffffff;
  local_128 = 0xffffffff;
  local_120 = 0xffffffff;
  local_118 = 0xffffffff;
  local_110 = 0xffffffff;
  local_108 = 0xffffffff;
  local_100 = 0xffffffff;
  local_f8 = 0xffffffff;
  local_f0 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_e0 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_d0 = 0xffffffff;
  local_c8 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_214[0] = 0;
  local_20c = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ae = 1;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_604 = 0;
  uVar13 = FUN_01681724(&local_600,&local_604,param_2);
  if ((uVar13 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148a98(&local_610);
    plVar1 = local_610;
    local_648 = &DAT_4cfbf76dd11c1f59;
    local_640 = "WSYS_D220_CAPTURE_BALL_SIZE";
    uStack_638 = 0x1b;
    FUN_02a4754c(local_630,&local_648);
    iVar11 = FUN_010f5878(plVar1,local_630);
    if (local_618 != (long *)0x0) {
      (**(code **)(*local_618 + 0x20))();
    }
    if ((local_610 != (long *)0x0) && (uVar13 = FUN_02a43a5c(local_610[0xb]), (uVar13 & 1) != 0)) {
      (**(code **)(*local_610 + 0x20))(local_610);
    }
    lVar15 = (long)local_604;
    local_604 = local_604 + 1;
    *(undefined4 *)(auStack_3fc + lVar15 * 8 + 0x1e4) = 0x3ec;
    local_214[lVar15 * 8] = iVar11 != 0;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    local_6e0 = 0;
    local_6d8 = (code *)0x0;
    uVar14 = *(undefined8 *)PTR_DAT_04379680;
    local_6d0 = 0;
    uStack_6c8 = 0;
    *(undefined8 *)PTR_DAT_04379688 = uVar14;
    FUN_015980cc(local_658,uVar14,&local_600,&local_6e0);
    if (local_658[0] != (long *)0x0) {
      plVar1 = local_658[0] + 1;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_658[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_630[0] = *local_658[0];
        FUN_02a44274(lVar15 + 0xd8,local_630);
      }
    }
    pcVar10 = local_6d8;
    if (local_6d8 != (code *)0x0) {
      local_6d0 = 0;
      uStack_6c8 = 0;
      local_6e0 = 0;
      local_6d8 = (code *)0x0;
      (*pcVar10)(auStack_6c0);
    }
    uVar14 = 2;
  }
  FUN_0125ba14(&local_600);
  return uVar14;
}


