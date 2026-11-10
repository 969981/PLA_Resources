/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190c338; name: FUN_0190c338
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190c338(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long *param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  undefined2 uVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong *puVar38;
  code *pcVar39;
  char *pcVar40;
  undefined8 uVar41;
  long *plVar42;
  long lVar43;
  long *plVar44;
  long *plVar45;
  ulong uVar46;
  long *plVar47;
  int *piVar48;
  uint uVar49;
  float extraout_s0;
  float fVar50;
  float fVar51;
  long extraout_d0;
  long extraout_d0_00;
  float extraout_var_00;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float extraout_var;
  float extraout_var_03;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long extraout_var_01;
  long lVar59;
  long extraout_var_02;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  undefined8 uVar85;
  int iVar91;
  float fVar90;
  int iVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar86;
  undefined1 auVar89 [16];
  undefined8 uVar93;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar94;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 uVar120;
  undefined8 uVar121;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined1 local_2c0;
  undefined1 uStack_2bf;
  undefined1 uStack_2be;
  undefined1 uStack_2bd;
  undefined1 uStack_2bc;
  undefined1 uStack_2bb;
  undefined1 uStack_2ba;
  undefined1 uStack_2b9;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 *local_2b0;
  undefined8 uStack_2a8;
  undefined8 *local_2a0;
  undefined8 uStack_298;
  undefined8 *local_290;
  undefined8 uStack_288;
  long *local_280;
  long *local_278;
  undefined8 *local_270;
  undefined8 uStack_268;
  undefined8 *local_260;
  undefined8 uStack_258;
  undefined8 *local_250;
  undefined8 uStack_248;
  undefined8 *local_240;
  undefined8 uStack_238;
  undefined8 *local_230;
  undefined8 uStack_228;
  undefined8 *local_220;
  undefined8 uStack_218;
  long *local_210;
  long *local_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *pcStack_188;
  char *local_180;
  long *local_178;
  long *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  
  bVar83 = param_2[0xf];
  bVar81 = param_2[0xe];
  bVar79 = param_2[0xd];
  bVar78 = param_2[0xc];
  bVar76 = param_2[0xb];
  bVar74 = param_2[10];
  bVar73 = param_2[9];
  bVar72 = param_2[8];
  bVar71 = param_2[7];
  bVar70 = param_2[6];
  bVar69 = param_2[5];
  bVar68 = param_2[4];
  bVar66 = param_2[3];
  bVar64 = param_2[2];
  bVar62 = param_2[1];
  bVar60 = param_2[0];
  lVar43 = *param_6;
  plVar45 = (long *)(lVar43 + 0x70);
  bVar26 = FUN_0190b86c(plVar45);
  bVar24 = false;
  if (*(long *)(lVar43 + 0xf8) != 0) {
    bVar24 = *(int *)(*(long *)(lVar43 + 0xf8) + 0xc) != 0;
  }
  bVar25 = false;
  if (*(long *)(lVar43 + 0x108) != 0) {
    bVar25 = *(int *)(*(long *)(lVar43 + 0x108) + 0xc) != 0;
  }
  if (((*(long *)(lVar43 + 0x118) == 0) || ((bVar26 & bVar24 & bVar25) != 1)) ||
     (*(int *)(*(long *)(lVar43 + 0x118) + 0xc) == 0)) {
    *(undefined4 *)(lVar43 + 0xf0) = 0x13;
    return;
  }
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  if (*(long *)(lVar43 + 0x80) == 0) {
    plVar42 = (long *)0x0;
    goto LAB_0190ca5c;
  }
  if (*(int *)(*(long *)(lVar43 + 0x80) + 0xc) == 0) {
    plVar42 = (long *)0x0;
    plVar47 = local_190;
    goto switchD_0190c63c_default;
  }
  if (*(long *)(lVar43 + 0x80) == 0) {
    local_a8 = (long *)0x0;
  }
  else {
    FUN_009b3e90(&local_a8);
  }
  local_190 = (long *)0x0;
  pcStack_188 = (char *)0x0;
  FUN_009ab200(&local_190,local_a8 + 0x68);
  if (local_190 == (long *)0x0) {
    plVar42 = (long *)0x0;
LAB_0190c410:
    local_98 = (long *)0x0;
    if (local_a8 == (long *)0x0) goto LAB_0190c434;
LAB_0190c418:
    lVar37 = local_a8[0xb];
    piVar48 = (int *)(lVar37 + 0xc);
    do {
      iVar29 = *piVar48;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
      if (bVar24) {
        *piVar48 = iVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 + -1 != 0) goto LAB_0190c434;
    *(undefined8 *)(lVar37 + 0x18) = 0;
    (**(code **)(*local_a8 + 0x20))();
    if (plVar42 != (long *)0x0) goto LAB_0190c438;
LAB_0190c558:
    cVar3 = *(char *)(lVar43 + 0x210);
    plVar47 = local_190;
  }
  else {
    FUN_00b911c4(&local_98);
    plVar42 = local_98;
    plVar47 = local_190;
    local_98 = (long *)0x0;
    if (local_190 == (long *)0x0) goto LAB_0190c410;
    plVar33 = local_190 + 1;
    do {
      iVar29 = (int)*plVar33 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar24) {
        *(int *)plVar33 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 != 0) goto LAB_0190c410;
    local_190[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar37 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar37;
    local_d0 = (long *)*plVar47;
    FUN_02a44274(lVar37 + 0xd8,&local_d0);
    if (local_a8 != (long *)0x0) goto LAB_0190c418;
LAB_0190c434:
    if (plVar42 == (long *)0x0) goto LAB_0190c558;
LAB_0190c438:
    FUN_009c69bc(&local_a8,plVar42);
    (**(code **)(*local_a8 + 0x18))(&local_190);
    local_d0 = (long *)0x0;
    uStack_c8 = (char *)0x0;
    FUN_0087f944(&local_d0,&local_190);
    plVar47 = local_190;
    if (local_190 != (long *)0x0) {
      plVar33 = local_190 + 1;
      do {
        iVar29 = (int)*plVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar24) {
          *(int *)plVar33 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_98 = (long *)*plVar47;
        FUN_02a44274(lVar37 + 0xd8,&local_98);
      }
    }
    FUN_0087fcf0(&local_e0,&local_d0);
    plVar47 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar33 = local_d0 + 1;
      do {
        iVar29 = (int)*plVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar24) {
          *(int *)plVar33 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*plVar47;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    if (local_a8 == (long *)0x0) goto LAB_0190c558;
    lVar37 = local_a8[0xb];
    piVar48 = (int *)(lVar37 + 0xc);
    do {
      iVar29 = *piVar48;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
      if (bVar24) {
        *piVar48 = iVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 + -1 != 0) goto LAB_0190c558;
    *(undefined8 *)(lVar37 + 0x18) = 0;
    (**(code **)(*local_a8 + 0x20))();
    cVar3 = *(char *)(lVar43 + 0x210);
    plVar47 = local_190;
  }
  if (((((cVar3 != '\0') &&
        ((((*(long *)(lVar43 + 0x1e0) == 0 || (*(int *)(*(long *)(lVar43 + 0x1e0) + 0xc) == 0)) ||
          (*(long *)(lVar43 + 0x1f0) == 0)) || (*(int *)(*(long *)(lVar43 + 0x1f0) + 0xc) == 0))))
       || ((*(char *)(lVar43 + 0x248) != '\0' &&
           (((*(long *)(lVar43 + 0x218) == 0 || (*(int *)(*(long *)(lVar43 + 0x218) + 0xc) == 0)) ||
            ((*(long *)(lVar43 + 0x228) == 0 || (*(int *)(*(long *)(lVar43 + 0x228) + 0xc) == 0)))))
           ))) ||
      ((*(char *)(lVar43 + 0x280) != '\0' &&
       (((*(long *)(lVar43 + 0x250) == 0 || (*(int *)(*(long *)(lVar43 + 0x250) + 0xc) == 0)) ||
        ((*(long *)(lVar43 + 0x260) == 0 || (*(int *)(*(long *)(lVar43 + 0x260) + 0xc) == 0))))))))
     || ((*(char *)(lVar43 + 0x2b8) != '\0' &&
         ((((*(long *)(lVar43 + 0x288) == 0 || (*(int *)(*(long *)(lVar43 + 0x288) + 0xc) == 0)) ||
           (*(long *)(lVar43 + 0x298) == 0)) || (*(int *)(*(long *)(lVar43 + 0x298) + 0xc) == 0)))))
     ) goto switchD_0190c63c_default;
  piVar48 = (int *)(lVar43 + 0xf0);
  local_190._4_4_ = (undefined4)((ulong)plVar47 >> 0x20);
  local_190 = plVar47;
  switch(*piVar48) {
  case 0:
    *piVar48 = 1;
  case 1:
    (**(code **)(*plVar42 + 0x10))(&local_190,plVar42);
    local_f0 = (undefined8 *)0x0;
    uStack_e8 = 0;
    FUN_00946790(&local_f0,&local_190);
    plVar47 = local_190;
    if (local_190 != (long *)0x0) {
      plVar33 = local_190 + 1;
      do {
        iVar29 = (int)*plVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar24) {
          *(int *)plVar33 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*plVar47;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    FUN_01915c94(&local_f0,0);
    puVar31 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_f0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    FUN_008c4b3c(&local_100,&local_e0);
    FUN_01915e78(&local_100,0);
    puVar31 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_100 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    lVar37 = *plVar45;
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar47 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01913b5c();
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0190c7bc;
          if (plVar47 == (long *)lVar36) break;
          plVar47 = (long *)*plVar47;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            plVar47 = (long *)(lVar37 + -0x50);
            if (lVar37 != 0) {
              FUN_009c69bc(&local_d0,plVar47);
              if (local_d0 != (long *)0x0) {
                FUN_009c69bc(&local_190,plVar47);
                if (local_190 == (long *)0x0) {
                  fStack_2b8 = 0.0;
                  fStack_2b4 = 0.0;
                  local_2c0 = 0;
                  uStack_2bf = 0;
                  uStack_2be = 0;
                  uStack_2bd = 0;
                  uStack_2bc = 0;
                  uStack_2bb = 0;
                  uStack_2ba = 0;
                  uStack_2b9 = 0;
                }
                else {
                  (**(code **)(*local_190 + 0x40))();
                  fStack_2b8 = param_4._8_4_;
                  fStack_2b4 = param_4._12_4_;
                  local_2c0 = param_4[0];
                  uStack_2bf = param_4[1];
                  uStack_2be = param_4[2];
                  uStack_2bd = param_4[3];
                  uStack_2bc = param_4[4];
                  uStack_2bb = param_4[5];
                  uStack_2ba = param_4[6];
                  uStack_2b9 = param_4[7];
                  if (local_190 != (long *)0x0) {
                    lVar36 = local_190[0xb];
                    piVar1 = (int *)(lVar36 + 0xc);
                    do {
                      iVar29 = *piVar1;
                      cVar3 = '\x01';
                      bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar24) {
                        *piVar1 = iVar29 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar29 + -1 == 0) {
                      *(undefined8 *)(lVar36 + 0x18) = 0;
                      (**(code **)(*local_190 + 0x20))();
                    }
                  }
                }
                local_110 = (undefined8 *)0x0;
                uStack_108 = 0;
                FUN_00ac3fa4(&local_110,plVar42 + 0x49);
                auVar55 = FUN_0191591c(&local_110);
                puVar31 = local_110;
                fStack_2c8 = auVar55._8_4_;
                fStack_2c4 = auVar55._12_4_;
                local_2d0 = auVar55._0_4_;
                fStack_2cc = auVar55._4_4_;
                if (local_110 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_110 + 1);
                  do {
                    iVar29 = *piVar1;
                    cVar3 = '\x01';
                    bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar24) {
                      *piVar1 = iVar29 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar29 + -1 == 0) {
                    local_110[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar36 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar36;
                    local_190 = (long *)*puVar31;
                    FUN_02a44274(lVar36 + 0xd8,&local_190);
                  }
                }
                uVar94 = DAT_0388a590;
                local_2d0 = local_2d0 -
                            (float)CONCAT13(uStack_2bd,
                                            CONCAT12(uStack_2be,CONCAT11(uStack_2bf,local_2c0)));
                fStack_2cc = fStack_2cc -
                             (float)CONCAT13(uStack_2b9,
                                             CONCAT12(uStack_2ba,CONCAT11(uStack_2bb,uStack_2bc)));
                fStack_2c8 = fStack_2c8 - fStack_2b8;
                fStack_2c4 = fStack_2c4 - fStack_2b4;
                fVar115 = local_2d0 * local_2d0;
                fVar50 = fStack_2cc * fStack_2cc;
                uVar61 = (undefined1)((uint)fVar50 >> 8);
                uVar63 = (undefined1)((uint)fVar50 >> 0x10);
                uVar65 = (undefined1)((uint)fVar50 >> 0x18);
                fVar51 = fStack_2c8 * fStack_2c8;
                uVar67 = (undefined1)((uint)fVar51 >> 8);
                uVar75 = (undefined1)((uint)fVar51 >> 0x10);
                uVar77 = (undefined1)((uint)fVar51 >> 0x18);
                fVar117 = fStack_2c4 * fStack_2c4;
                uVar80 = (undefined1)((uint)fVar117 >> 8);
                uVar82 = (undefined1)((uint)fVar117 >> 0x10);
                uVar84 = (undefined1)((uint)fVar117 >> 0x18);
                auVar4[4] = SUB41(fVar50,0);
                auVar4._0_4_ = fVar115;
                auVar4[5] = uVar61;
                auVar4[6] = uVar63;
                auVar4[7] = uVar65;
                auVar4[8] = SUB41(fVar51,0);
                auVar4[9] = uVar67;
                auVar4[10] = uVar75;
                auVar4[0xb] = uVar77;
                auVar4[0xc] = SUB41(fVar117,0);
                auVar4[0xd] = uVar80;
                auVar4[0xe] = uVar82;
                auVar4[0xf] = uVar84;
                auVar5[4] = SUB41(fVar50,0);
                auVar5._0_4_ = fVar115;
                auVar5[5] = uVar61;
                auVar5[6] = uVar63;
                auVar5[7] = uVar65;
                auVar5[8] = SUB41(fVar51,0);
                auVar5[9] = uVar67;
                auVar5[10] = uVar75;
                auVar5[0xb] = uVar77;
                auVar5[0xc] = SUB41(fVar117,0);
                auVar5[0xd] = uVar80;
                auVar5[0xe] = uVar82;
                auVar5[0xf] = uVar84;
                auVar55 = NEON_ext(auVar4,auVar5,8,1);
                fVar115 = auVar55._0_4_ + fVar115;
                fVar50 = auVar55._4_4_ + fVar50;
                fVar51 = fVar115 + fVar50;
                fVar115 = fVar115 + fVar50;
                uVar61 = SUB41(fVar115,0);
                uVar63 = (undefined1)((uint)fVar115 >> 8);
                uVar65 = (undefined1)((uint)fVar115 >> 0x10);
                uVar67 = (undefined1)((uint)fVar115 >> 0x18);
                auVar6[4] = uVar61;
                auVar6._0_4_ = fVar51;
                auVar6[5] = uVar63;
                auVar6[6] = uVar65;
                auVar6[7] = uVar67;
                auVar6[8] = SUB41(fVar51,0);
                auVar6[9] = (char)((uint)fVar51 >> 8);
                auVar6[10] = (char)((uint)fVar51 >> 0x10);
                auVar6[0xb] = (char)((uint)fVar51 >> 0x18);
                auVar6[0xc] = uVar61;
                auVar6[0xd] = uVar63;
                auVar6[0xe] = uVar65;
                auVar6[0xf] = uVar67;
                auVar55 = NEON_frsqrte(auVar6,4);
                auVar98._0_4_ = auVar55._0_4_ * fVar51;
                auVar98._4_4_ = auVar55._4_4_ * fVar115;
                auVar98._8_4_ = auVar55._8_4_ * fVar51;
                uVar27 = (undefined2)(CONCAT15(uVar63,CONCAT14(uVar61,fVar51)) >> 0x20);
                auVar98._12_4_ = auVar55._12_4_ * (float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27));
                auVar53 = NEON_frsqrts(auVar55,auVar98,4);
                auVar87._0_4_ = auVar55._0_4_ * auVar53._0_4_;
                auVar87._4_4_ = auVar55._4_4_ * auVar53._4_4_;
                auVar87._8_4_ = auVar55._8_4_ * auVar53._8_4_;
                auVar87._12_4_ = auVar55._12_4_ * auVar53._12_4_;
                auVar99._0_4_ = fVar51 * auVar87._0_4_;
                auVar99._4_4_ = fVar115 * auVar87._4_4_;
                auVar99._8_4_ = fVar51 * auVar87._8_4_;
                auVar99._12_4_ = (float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27)) * auVar87._12_4_;
                iVar29 = -(uint)(fVar51 == 0.0);
                iVar30 = -(uint)(fVar115 == 0.0);
                iVar91 = -(uint)(fVar51 == 0.0);
                iVar92 = -(uint)((float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27)) == 0.0);
                auVar55 = NEON_frsqrts(auVar87,auVar99,4);
                local_2d0 = local_2d0 * auVar87._0_4_ * auVar55._0_4_;
                fStack_2cc = fStack_2cc * auVar87._4_4_ * auVar55._4_4_;
                fStack_2c8 = fStack_2c8 * auVar87._8_4_ * auVar55._8_4_;
                fStack_2c4 = fStack_2c4 * auVar87._12_4_ * auVar55._12_4_;
                bVar60 = SUB41(local_2d0,0) & ~(byte)iVar29;
                bVar62 = (byte)((uint)local_2d0 >> 8) & ~(byte)((uint)iVar29 >> 8);
                bVar64 = (byte)((uint)local_2d0 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
                bVar66 = (byte)((uint)local_2d0 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
                bVar68 = SUB41(fStack_2cc,0) & ~(byte)iVar30;
                bVar69 = (byte)((uint)fStack_2cc >> 8) & ~(byte)((uint)iVar30 >> 8);
                bVar70 = (byte)((uint)fStack_2cc >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
                bVar71 = (byte)((uint)fStack_2cc >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
                bVar72 = SUB41(fStack_2c8,0) & ~(byte)iVar91;
                bVar73 = (byte)((uint)fStack_2c8 >> 8) & ~(byte)((uint)iVar91 >> 8);
                bVar74 = (byte)((uint)fStack_2c8 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
                bVar76 = (byte)((uint)fStack_2c8 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
                bVar78 = SUB41(fStack_2c4,0) & ~(byte)iVar92;
                bVar79 = (byte)((uint)fStack_2c4 >> 8) & ~(byte)((uint)iVar92 >> 8);
                bVar81 = (byte)((uint)fStack_2c4 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
                bVar83 = (byte)((uint)fStack_2c4 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
                auVar88._8_8_ = DAT_0388a148;
                auVar88._0_8_ = DAT_0388a140;
                uVar93 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a880);
                uVar32 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a6f0);
                auVar7[1] = bVar62;
                auVar7[0] = bVar60;
                auVar7[2] = bVar64;
                auVar7[3] = bVar66;
                auVar7[4] = bVar68;
                auVar7[5] = bVar69;
                auVar7[6] = bVar70;
                auVar7[7] = bVar71;
                auVar7[8] = bVar72;
                auVar7[9] = bVar73;
                auVar7[10] = bVar74;
                auVar7[0xb] = bVar76;
                auVar7[0xc] = bVar78;
                auVar7[0xd] = bVar79;
                auVar7[0xe] = bVar81;
                auVar7[0xf] = bVar83;
                uVar112 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
                fVar115 = (float)((ulong)uVar112 >> 0x20);
                auVar8[1] = bVar62;
                auVar8[0] = bVar60;
                auVar8[2] = bVar64;
                auVar8[3] = bVar66;
                auVar8[4] = bVar68;
                auVar8[5] = bVar69;
                auVar8[6] = bVar70;
                auVar8[7] = bVar71;
                auVar8[8] = bVar72;
                auVar8[9] = bVar73;
                auVar8[10] = bVar74;
                auVar8[0xb] = bVar76;
                auVar8[0xc] = bVar78;
                auVar8[0xd] = bVar79;
                auVar8[0xe] = bVar81;
                auVar8[0xf] = bVar83;
                uVar120 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a6d8);
                uVar41 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a680);
                uVar85 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a6d8);
                auVar9[1] = bVar62;
                auVar9[0] = bVar60;
                auVar9[2] = bVar64;
                auVar9[3] = bVar66;
                auVar9[4] = bVar68;
                auVar9[5] = bVar69;
                auVar9[6] = bVar70;
                auVar9[7] = bVar71;
                auVar9[8] = bVar72;
                auVar9[9] = bVar73;
                auVar9[10] = bVar74;
                auVar9[0xb] = bVar76;
                auVar9[0xc] = bVar78;
                auVar9[0xd] = bVar79;
                auVar9[0xe] = bVar81;
                auVar9[0xf] = bVar83;
                uVar121 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6f0);
                auVar10[1] = bVar62;
                auVar10[0] = bVar60;
                auVar10[2] = bVar64;
                auVar10[3] = bVar66;
                auVar10[4] = bVar68;
                auVar10[5] = bVar69;
                auVar10[6] = bVar70;
                auVar10[7] = bVar71;
                auVar10[8] = bVar72;
                auVar10[9] = bVar73;
                auVar10[10] = bVar74;
                auVar10[0xb] = bVar76;
                auVar10[0xc] = bVar78;
                auVar10[0xd] = bVar79;
                auVar10[0xe] = bVar81;
                auVar10[0xf] = bVar83;
                uVar86 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
                fVar50 = (float)((ulong)uVar86 >> 0x20);
                fVar116 = (float)uVar93 * (float)uVar112 - (float)uVar41 * (float)uVar86;
                auVar100._0_8_ =
                     CONCAT44((float)((ulong)uVar93 >> 0x20) * fVar115 -
                              (float)((ulong)uVar41 >> 0x20) * fVar50,fVar116);
                auVar100._8_4_ = (float)uVar32 * (float)uVar120 - (float)uVar85 * (float)uVar121;
                auVar100._12_4_ =
                     (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar120 >> 0x20) -
                     (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
                uVar32 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a680);
                uVar41 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a6d8);
                uVar93 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a6f0);
                uVar85 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a880);
                fVar90 = (float)uVar86 * (float)uVar32 - (float)uVar112 * (float)uVar85;
                fVar110 = fVar50 * (float)((ulong)uVar32 >> 0x20) -
                          fVar115 * (float)((ulong)uVar85 >> 0x20);
                fVar111 = (float)uVar121 * (float)uVar41 - (float)uVar120 * (float)uVar93;
                fVar115 = (float)CONCAT13(bVar76,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
                auVar55 = NEON_fmov(0x3f800000,4);
                uVar32 = NEON_ext(auVar100._0_8_,
                                  CONCAT17(bVar71,CONCAT16(bVar70,CONCAT15(bVar69,CONCAT14(bVar68,
                                                  CONCAT13(bVar66,CONCAT12(bVar64,CONCAT11(bVar62,
                                                  bVar60))))))),4,1);
                fVar50 = (float)_DAT_03889820 * fVar116 + (float)_DAT_0388a450 * fVar110 +
                         (float)_DAT_03889eb0 * fVar115 + auVar55._0_4_;
                fVar51 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar116 +
                         (float)((ulong)_DAT_0388a450 >> 0x20) * fVar110 +
                         (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar115 + auVar55._4_4_;
                fVar117 = (float)_UNK_03889828 * fVar116 + (float)_UNK_0388a458 * fVar110 +
                          (float)_UNK_03889eb8 * fVar115 + auVar55._8_4_;
                fVar115 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar116 +
                          (float)((ulong)_UNK_0388a458 >> 0x20) * fVar110 +
                          (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar115 + auVar55._12_4_;
                auVar55 = NEON_ext(auVar100,auVar100,8,1);
                auVar101._0_4_ = fVar90 + (float)uVar32;
                fVar116 = (float)((ulong)uVar32 >> 0x20);
                auVar101._4_4_ = auVar55._0_4_ + fVar116;
                auVar101._8_4_ =
                     (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68))) + fVar111;
                auVar101._12_4_ = 0;
                auVar107._0_4_ = (float)uVar32 - fVar90;
                auVar107._4_4_ = fVar116 - auVar55._0_4_;
                auVar107._8_4_ =
                     fVar111 - (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68)));
                auVar107._12_4_ = 0;
                uVar32 = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a888);
                uVar28 = (undefined4)((ulong)uVar32 >> 0x20);
                uVar41 = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a710);
                auVar56._0_8_ = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a880);
                uVar85 = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a758);
                uVar86 = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a640);
                uVar93 = a64_TBL(ZEXT816(0),auVar101,auVar107,DAT_0388a700);
                *(undefined1 *)(local_d0 + 0x1c) = 1;
                uVar94 = a64_TBL(ZEXT816(0),auVar101,auVar107,uVar94);
                auVar108._4_4_ = fVar51;
                auVar108._0_4_ = fVar51;
                auVar108._8_4_ = fVar51;
                auVar108._12_4_ = fVar51;
                auVar56._12_4_ = (undefined4)((ulong)uVar86 >> 0x20);
                auVar56._8_4_ = fVar117;
                auVar119._4_4_ = fVar50;
                auVar119._0_4_ = fVar50;
                auVar119._8_4_ = fVar50;
                auVar119._12_4_ = fVar50;
                auVar113._0_8_ = CONCAT44(-(uint)(fVar50 <= fVar51),-(uint)(fVar50 <= fVar51));
                auVar113._8_4_ = -(uint)(fVar50 <= fVar51);
                auVar113._12_4_ = -(uint)(fVar50 <= fVar51);
                auVar118._8_8_ = auVar113._8_8_;
                auVar118._0_8_ = auVar113._0_8_;
                auVar11[4] = SUB41(fVar51,0);
                auVar11._0_4_ = (int)uVar32;
                auVar11[5] = (char)((uint)fVar51 >> 8);
                auVar11[6] = (char)((uint)fVar51 >> 0x10);
                auVar11[7] = (char)((uint)fVar51 >> 0x18);
                auVar11[8] = (char)uVar85;
                auVar11[9] = (char)((ulong)uVar85 >> 8);
                auVar11[10] = (char)((ulong)uVar85 >> 0x10);
                auVar11[0xb] = (char)((ulong)uVar85 >> 0x18);
                auVar11[0xc] = (char)((ulong)uVar85 >> 0x20);
                auVar11[0xd] = (char)((ulong)uVar85 >> 0x28);
                auVar11[0xe] = (char)((ulong)uVar85 >> 0x30);
                auVar11[0xf] = (char)((ulong)uVar85 >> 0x38);
                auVar17._4_4_ = uVar28;
                auVar17._0_4_ = fVar50;
                auVar17._8_8_ = uVar41;
                auVar114._4_4_ = uVar28;
                auVar114._0_4_ = fVar50;
                auVar114._8_8_ = uVar41;
                auVar114 = auVar114 ^ (auVar17 ^ auVar11) & auVar113;
                uVar61 = SUB41(fVar117,0);
                uVar63 = (undefined1)((uint)fVar117 >> 8);
                uVar65 = (undefined1)((uint)fVar117 >> 0x10);
                uVar67 = (undefined1)((uint)fVar117 >> 0x18);
                auVar119 = auVar119 ^ (auVar119 ^ auVar108) & auVar118;
                auVar102._0_8_ =
                     CONCAT44(-(uint)(auVar119._4_4_ <= fVar117),-(uint)(auVar119._0_4_ <= fVar117))
                ;
                auVar102._8_4_ = -(uint)(auVar119._8_4_ <= fVar117);
                auVar102._12_4_ = -(uint)(auVar119._12_4_ <= fVar117);
                auVar109._8_8_ = auVar102._8_8_;
                auVar109._0_8_ = auVar102._0_8_;
                auVar114 = auVar114 ^ (auVar114 ^ auVar56) & auVar102;
                auVar12[4] = uVar61;
                auVar12._0_4_ = fVar117;
                auVar12[5] = uVar63;
                auVar12[6] = uVar65;
                auVar12[7] = uVar67;
                auVar12[8] = uVar61;
                auVar12[9] = uVar63;
                auVar12[10] = uVar65;
                auVar12[0xb] = uVar67;
                auVar12[0xc] = uVar61;
                auVar12[0xd] = uVar63;
                auVar12[0xe] = uVar65;
                auVar12[0xf] = uVar67;
                auVar119 = auVar119 ^ (auVar119 ^ auVar12) & auVar109;
                auVar57._0_4_ = -(uint)(auVar119._0_4_ <= fVar115);
                auVar57._4_4_ = -(uint)(auVar119._4_4_ <= fVar115);
                auVar57._8_4_ = -(uint)(auVar119._8_4_ <= fVar115);
                auVar57._12_4_ = -(uint)(auVar119._12_4_ <= fVar115);
                auVar16._8_4_ = (int)uVar94;
                auVar16._0_8_ = uVar93;
                auVar16._12_4_ = fVar115;
                auVar114 = auVar114 ^ (auVar114 ^ auVar16) & auVar57;
                fVar116 = auVar114._0_4_;
                fVar115 = fVar116 * fVar116;
                fVar90 = auVar114._4_4_;
                fVar50 = fVar90 * fVar90;
                uVar61 = (undefined1)((uint)fVar50 >> 8);
                uVar63 = (undefined1)((uint)fVar50 >> 0x10);
                uVar65 = (undefined1)((uint)fVar50 >> 0x18);
                fVar110 = auVar114._8_4_;
                fVar51 = fVar110 * fVar110;
                uVar67 = (undefined1)((uint)fVar51 >> 8);
                uVar75 = (undefined1)((uint)fVar51 >> 0x10);
                uVar77 = (undefined1)((uint)fVar51 >> 0x18);
                fVar111 = auVar114._12_4_;
                fVar117 = fVar111 * fVar111;
                uVar80 = (undefined1)((uint)fVar117 >> 8);
                uVar82 = (undefined1)((uint)fVar117 >> 0x10);
                uVar84 = (undefined1)((uint)fVar117 >> 0x18);
                auVar13[4] = SUB41(fVar50,0);
                auVar13._0_4_ = fVar115;
                auVar13[5] = uVar61;
                auVar13[6] = uVar63;
                auVar13[7] = uVar65;
                auVar13[8] = SUB41(fVar51,0);
                auVar13[9] = uVar67;
                auVar13[10] = uVar75;
                auVar13[0xb] = uVar77;
                auVar13[0xc] = SUB41(fVar117,0);
                auVar13[0xd] = uVar80;
                auVar13[0xe] = uVar82;
                auVar13[0xf] = uVar84;
                auVar14[4] = SUB41(fVar50,0);
                auVar14._0_4_ = fVar115;
                auVar14[5] = uVar61;
                auVar14[6] = uVar63;
                auVar14[7] = uVar65;
                auVar14[8] = SUB41(fVar51,0);
                auVar14[9] = uVar67;
                auVar14[10] = uVar75;
                auVar14[0xb] = uVar77;
                auVar14[0xc] = SUB41(fVar117,0);
                auVar14[0xd] = uVar80;
                auVar14[0xe] = uVar82;
                auVar14[0xf] = uVar84;
                auVar55 = NEON_ext(auVar13,auVar14,8,1);
                fVar115 = auVar55._0_4_ + fVar115;
                fVar50 = auVar55._4_4_ + fVar50;
                fVar51 = fVar115 + fVar50;
                fVar115 = fVar115 + fVar50;
                uVar61 = SUB41(fVar115,0);
                uVar63 = (undefined1)((uint)fVar115 >> 8);
                uVar65 = (undefined1)((uint)fVar115 >> 0x10);
                uVar67 = (undefined1)((uint)fVar115 >> 0x18);
                auVar15[4] = uVar61;
                auVar15._0_4_ = fVar51;
                auVar15[5] = uVar63;
                auVar15[6] = uVar65;
                auVar15[7] = uVar67;
                auVar15[8] = SUB41(fVar51,0);
                auVar15[9] = (char)((uint)fVar51 >> 8);
                auVar15[10] = (char)((uint)fVar51 >> 0x10);
                auVar15[0xb] = (char)((uint)fVar51 >> 0x18);
                auVar15[0xc] = uVar61;
                auVar15[0xd] = uVar63;
                auVar15[0xe] = uVar65;
                auVar15[0xf] = uVar67;
                auVar55 = NEON_frsqrte(auVar15,4);
                auVar103._0_4_ = auVar55._0_4_ * fVar51;
                auVar103._4_4_ = auVar55._4_4_ * fVar115;
                auVar103._8_4_ = auVar55._8_4_ * fVar51;
                uVar27 = (undefined2)(CONCAT15(uVar63,CONCAT14(uVar61,fVar51)) >> 0x20);
                auVar103._12_4_ = auVar55._12_4_ * (float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27));
                auVar53 = NEON_frsqrts(auVar55,auVar103,4);
                auVar89._0_4_ = auVar55._0_4_ * auVar53._0_4_;
                auVar89._4_4_ = auVar55._4_4_ * auVar53._4_4_;
                auVar89._8_4_ = auVar55._8_4_ * auVar53._8_4_;
                auVar89._12_4_ = auVar55._12_4_ * auVar53._12_4_;
                auVar104._0_4_ = fVar51 * auVar89._0_4_;
                auVar104._4_4_ = fVar115 * auVar89._4_4_;
                auVar104._8_4_ = fVar51 * auVar89._8_4_;
                auVar104._12_4_ = (float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27)) * auVar89._12_4_;
                iVar29 = -(uint)(fVar51 == 0.0);
                iVar30 = -(uint)(fVar115 == 0.0);
                iVar91 = -(uint)(fVar51 == 0.0);
                iVar92 = -(uint)((float)CONCAT13(uVar67,CONCAT12(uVar65,uVar27)) == 0.0);
                bVar60 = ~(byte)iVar29;
                bVar62 = ~(byte)((uint)iVar29 >> 8);
                bVar64 = ~(byte)((uint)iVar29 >> 0x10);
                bVar66 = ~(byte)((uint)iVar29 >> 0x18);
                bVar68 = ~(byte)iVar30;
                bVar69 = ~(byte)((uint)iVar30 >> 8);
                bVar70 = ~(byte)((uint)iVar30 >> 0x10);
                bVar71 = ~(byte)((uint)iVar30 >> 0x18);
                bVar72 = ~(byte)iVar91;
                bVar73 = ~(byte)((uint)iVar91 >> 8);
                bVar74 = ~(byte)((uint)iVar91 >> 0x10);
                bVar76 = ~(byte)((uint)iVar91 >> 0x18);
                bVar78 = ~(byte)iVar92;
                bVar79 = ~(byte)((uint)iVar92 >> 8);
                bVar81 = ~(byte)((uint)iVar92 >> 0x10);
                bVar83 = ~(byte)((uint)iVar92 >> 0x18);
                param_4 = NEON_frsqrts(auVar89,auVar104,4);
                param_3._0_4_ = auVar89._0_4_ * param_4._0_4_;
                param_3._4_4_ = auVar89._4_4_ * param_4._4_4_;
                param_3._8_4_ = auVar89._8_4_ * param_4._8_4_;
                param_3._12_4_ = auVar89._12_4_ * param_4._12_4_;
                fVar116 = param_3._0_4_ * fVar116;
                fVar90 = param_3._4_4_ * fVar90;
                fVar110 = param_3._8_4_ * fVar110;
                fVar111 = param_3._12_4_ * fVar111;
                auVar58._0_8_ =
                     CONCAT17((byte)((uint)fVar90 >> 0x18) & bVar71,
                              CONCAT16((byte)((uint)fVar90 >> 0x10) & bVar70,
                                       CONCAT15((byte)((uint)fVar90 >> 8) & bVar69,
                                                CONCAT14(SUB41(fVar90,0) & bVar68,
                                                         CONCAT13((byte)((uint)fVar116 >> 0x18) &
                                                                  bVar66,CONCAT12((byte)((uint)
                                                  fVar116 >> 0x10) & bVar64,
                                                  CONCAT11((byte)((uint)fVar116 >> 8) & bVar62,
                                                           SUB41(fVar116,0) & bVar60)))))));
                auVar58[8] = SUB41(fVar110,0) & bVar72;
                auVar58[9] = (byte)((uint)fVar110 >> 8) & bVar73;
                auVar58[10] = (byte)((uint)fVar110 >> 0x10) & bVar74;
                auVar58[0xb] = (byte)((uint)fVar110 >> 0x18) & bVar76;
                auVar58[0xc] = SUB41(fVar111,0) & bVar78;
                auVar58[0xd] = (byte)((uint)fVar111 >> 8) & bVar79;
                auVar58[0xe] = (byte)((uint)fVar111 >> 0x10) & bVar81;
                auVar58[0xf] = (byte)((uint)fVar111 >> 0x18) & bVar83;
                local_d0[0x19] = auVar58._8_8_;
                local_d0[0x18] = auVar58._0_8_;
                if (local_d0 != (long *)0x0) {
                  lVar36 = local_d0[0xb];
                  piVar1 = (int *)(lVar36 + 0xc);
                  do {
                    iVar29 = *piVar1;
                    cVar3 = '\x01';
                    bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar24) {
                      *piVar1 = iVar29 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar29 + -1 == 0) {
                    *(undefined8 *)(lVar36 + 0x18) = 0;
                    (**(code **)(*local_d0 + 0x20))();
                  }
                }
              }
              lVar37 = *(long *)(lVar37 + 8);
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar24) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar47 + 0x20))(plVar47);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190c7bc:
    *piVar48 = *piVar48 + 1;
    plVar47 = local_190;
switchD_0190c63c_caseD_2:
    local_190 = plVar47;
    lVar37 = *plVar45;
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar47 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01913b5c();
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0190c7d0;
          if (plVar47 == (long *)lVar36) break;
          plVar47 = (long *)*plVar47;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0190e8ec;
          lVar37 = *(long *)(lVar37 + 0x18);
          plVar47 = (long *)(lVar37 + -0x50);
          if (lVar37 != 0) {
            FUN_009c69bc(&local_190,plVar47);
            if (local_190 == (long *)0x0) {
              fStack_2b8 = 0.0;
              fStack_2b4 = 0.0;
              local_2c0 = 0;
              uStack_2bf = 0;
              uStack_2be = 0;
              uStack_2bd = 0;
              uStack_2bc = 0;
              uStack_2bb = 0;
              uStack_2ba = 0;
              uStack_2b9 = 0;
            }
            else {
              (**(code **)(*local_190 + 0x40))();
              fStack_2b8 = param_4._8_4_;
              fStack_2b4 = param_4._12_4_;
              local_2c0 = param_4[0];
              uStack_2bf = param_4[1];
              uStack_2be = param_4[2];
              uStack_2bd = param_4[3];
              uStack_2bc = param_4[4];
              uStack_2bb = param_4[5];
              uStack_2ba = param_4[6];
              uStack_2b9 = param_4[7];
              if (local_190 != (long *)0x0) {
                lVar36 = local_190[0xb];
                piVar1 = (int *)(lVar36 + 0xc);
                do {
                  iVar29 = *piVar1;
                  cVar3 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar24) {
                    *piVar1 = iVar29 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar29 + -1 == 0) {
                  *(undefined8 *)(lVar36 + 0x18) = 0;
                  (**(code **)(*local_190 + 0x20))();
                }
              }
            }
            uStack_158 = 0;
            local_150 = (long *)0x0;
            local_130 = 0;
            local_140 = CONCAT17(uStack_2b9,
                                 CONCAT16(uStack_2ba,
                                          CONCAT15(uStack_2bb,
                                                   CONCAT14(uStack_2bc,
                                                            CONCAT13(uStack_2bd,
                                                                     CONCAT12(uStack_2be,
                                                                              CONCAT11(uStack_2bf,
                                                                                       local_2c0))))
                                                  )));
            auVar18._8_4_ = fStack_2b8;
            auVar18._0_8_ = local_140;
            auVar18._12_4_ = fStack_2b4;
            local_168 = &DAT_cbf29ce484222645;
            local_160 = &DAT_03996322;
            local_120 = *(undefined8 *)PTR_DAT_0437a120;
            uStack_118 = *(ulong *)(PTR_DAT_0437a120 + 8);
            pcStack_188 = (char *)0x9bb2bcb4bc00d463;
            local_180 = "bin/effect/field/particle/capture/get/ef_get_line.ptcl";
            local_190 = (long *)((ulong)local_190 & 0xffffffff00000000);
            local_128 = 0;
            local_178 = (long *)0x36;
            local_170 = (long *)0x0;
            uStack_138 = auVar18._8_8_;
            FUN_019105b4(lVar43,&local_190);
            if (local_150 != (long *)0x0) {
              (**(code **)(*local_150 + 0x20))();
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
            lVar37 = *(long *)(lVar37 + 8);
            piVar1 = (int *)(lVar37 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 != 0) break;
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar47 + 0x20))(plVar47);
            lVar37 = *(long *)(lVar43 + 0x108);
            goto joined_r0x0190ea58;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0190e8ec:
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190c7d0:
    lVar37 = *(long *)(lVar43 + 0x108);
joined_r0x0190ea58:
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar47 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01914274();
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0190c7d8;
          if (plVar47 == (long *)lVar36) break;
          plVar47 = (long *)*plVar47;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0190ea70;
          lVar37 = *(long *)(lVar37 + 0x18);
          if (lVar37 != 0) {
            plVar47 = (long *)(lVar37 + -0x50);
            FUN_01b6b7a8(plVar47,0);
            lVar37 = *(long *)(lVar37 + 8);
            piVar1 = (int *)(lVar37 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 != 0) break;
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar47 + 0x20))(plVar47);
            lVar37 = *(long *)(lVar43 + 0x70);
            goto joined_r0x0190eafc;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0190ea70:
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190c7d8:
    lVar37 = *(long *)(lVar43 + 0x70);
joined_r0x0190eafc:
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar47 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01913b5c();
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0190c7e0;
          if (plVar47 == (long *)lVar36) break;
          plVar47 = (long *)*plVar47;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            plVar47 = (long *)(lVar37 + -0x50);
            if (lVar37 != 0) {
              FUN_01b76ec0(&local_190,plVar47,lVar37 + 0x6f0);
              local_d0 = (long *)0xb4b2bc636c111d23;
              uStack_c8 = "waist";
              local_c0 = 5;
              local_b8 = (long *)0x0;
              FUN_01b767cc(plVar47,&local_d0);
              fVar115 = param_4._4_4_ +
                        extraout_var * 0.0 +
                        (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68))) * 0.0 +
                        param_3._4_4_ * 0.0;
              uStack_2bc = SUB41(fVar115,0);
              uStack_2bb = (undefined1)((uint)fVar115 >> 8);
              uStack_2ba = (undefined1)((uint)fVar115 >> 0x10);
              uStack_2b9 = (undefined1)((uint)fVar115 >> 0x18);
              if (local_b8 != (long *)0x0) {
                (**(code **)(*local_b8 + 0x20))();
              }
              local_160 = (undefined1 *)
                          CONCAT17(uStack_2b9,
                                   CONCAT16(uStack_2ba,
                                            CONCAT15(uStack_2bb,
                                                     CONCAT14(uStack_2bc,
                                                              param_4._0_4_ +
                                                              extraout_s0 * 0.0 +
                                                              (float)CONCAT13(bVar66,CONCAT12(bVar64
                                                  ,CONCAT11(bVar62,bVar60))) * 0.0 +
                                                  param_3._0_4_ * 0.0))));
              auVar19._8_4_ =
                   param_4._8_4_ +
                   extraout_var_00 * 0.0 +
                   (float)CONCAT13(bVar76,CONCAT12(bVar74,CONCAT11(bVar73,bVar72))) * 0.0 +
                   param_3._8_4_ * 0.0;
              auVar19._0_8_ = local_160;
              auVar19._12_4_ =
                   param_4._12_4_ +
                   extraout_var_03 * 0.0 +
                   (float)CONCAT13(bVar83,CONCAT12(bVar81,CONCAT11(bVar79,bVar78))) * 0.0 +
                   param_3._12_4_ * 0.0;
              uStack_158 = auVar19._8_8_;
              FUN_01b770a4(plVar47,&local_190);
              if (local_178 != (long *)0x0) {
                (**(code **)(*local_178 + 0x20))();
              }
              lVar37 = *(long *)(lVar37 + 8);
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar24) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar47 + 0x20))(plVar47);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190c7e0:
    local_190 = (long *)0x502e0018dffdd7b3;
    pcStack_188 = "kBallOpenEffectFrame";
    local_180 = (char *)0x14;
    local_178 = (long *)0x0;
    uVar28 = FUN_01910e50(&local_190);
    *(undefined4 *)(lVar43 + 0x1d8) = uVar28;
    *(undefined4 *)(lVar43 + 0x1dc) = uVar28;
    *(int *)(lVar43 + 0xf0) = *(int *)(lVar43 + 0xf0) + 1;
    plVar47 = local_190;
switchD_0190c63c_caseD_3:
    local_190 = plVar47;
    local_1a0 = (undefined8 *)0x0;
    uStack_198 = 0;
    FUN_0191306c(&local_1a0,plVar45);
    auVar55 = FUN_01915830(&local_1a0);
    puVar31 = local_1a0;
    fStack_2b8 = auVar55._8_4_;
    fStack_2b4 = auVar55._12_4_;
    if (local_1a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1a0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_1a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    local_1b0 = (undefined8 *)0x0;
    uStack_1a8 = 0;
    FUN_00ac3fa4(&local_1b0,plVar42 + 0x49);
    auVar53 = FUN_0191591c(&local_1b0);
    puVar31 = local_1b0;
    fStack_2c8 = auVar53._8_4_;
    fStack_2c4 = auVar53._12_4_;
    local_2d0 = auVar53._0_4_;
    fStack_2cc = auVar53._4_4_;
    if (local_1b0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1b0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_1b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    uVar49 = *(uint *)(lVar43 + 0x1d8);
    if (uVar49 == 0) {
      fVar115 = 1.0;
    }
    else {
      fVar115 = (float)(uVar49 - *(int *)(lVar43 + 0x1dc)) / (float)uVar49;
    }
    local_2d0 = local_2d0 - auVar55._0_4_;
    auVar52._0_4_ = auVar55._0_4_ + local_2d0 * fVar115;
    auVar52._4_4_ = auVar55._4_4_ + (fStack_2cc - auVar55._4_4_) * fVar115;
    auVar52._8_4_ = fStack_2b8 + (fStack_2c8 - fStack_2b8) * fVar115;
    auVar52._12_4_ = fStack_2b4 + (fStack_2c4 - fStack_2b4) * fVar115;
    FUN_0190a7b0(auVar52,SUB41(local_2d0,0),lVar43 + 0x1e0);
    if ((*(int *)(lVar43 + 0x1dc) != 0) &&
       (iVar29 = *(int *)(lVar43 + 0x1dc) + -1, *(int *)(lVar43 + 0x1dc) = iVar29,
       plVar47 = local_190, iVar29 != 0)) goto switchD_0190c63c_default;
    local_190 = (long *)0x0;
    pcStack_188 = (char *)0x0;
    FUN_01912b7c(&local_190,lVar43 + 0x200);
    lVar43 = FUN_019171d4(&local_190);
    plVar45 = local_190;
    if (local_190 != (long *)0x0) {
      plVar47 = local_190 + 1;
      do {
        iVar29 = (int)*plVar47 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar24) {
          *(int *)plVar47 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*plVar45;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    if (lVar43 != 0) {
      FUN_002667b4(lVar43);
    }
LAB_0190e26c:
    iVar29 = *piVar48 + 1;
    break;
  case 2:
    goto switchD_0190c63c_caseD_2;
  case 3:
    goto switchD_0190c63c_caseD_3;
  case 4:
    local_1c0 = (undefined8 *)0x0;
    uStack_1b8 = 0;
    FUN_00ac3fa4(&local_1c0,plVar42 + 0x49);
    auVar55 = FUN_0191591c(&local_1c0);
    puVar31 = local_1c0;
    if (local_1c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1c0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_1c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    uVar49 = *(uint *)(lVar43 + 0xdc);
    local_190 = (long *)CONCAT44(local_190._4_4_,1);
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_130 = 0;
    local_128 = 0;
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    pcStack_188 = (char *)0xc4b7845aa559df71;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_pokecenter.ptcl";
    local_178 = (long *)0x3c;
    local_170 = (long *)0x0;
    uStack_118 = (ulong)uVar49;
    local_120 = CONCAT17((char)(uVar49 >> 0x18),
                         CONCAT16((char)(uVar49 >> 0x10),
                                  CONCAT15((char)(uVar49 >> 8),CONCAT14((char)uVar49,uVar49))));
    local_140 = auVar55._0_8_;
    uStack_138 = auVar55._8_8_;
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_130 = 0;
    local_190 = (long *)CONCAT44(local_190._4_4_,2);
    local_120 = *(undefined8 *)PTR_DAT_0437a120;
    uStack_118 = *(ulong *)(PTR_DAT_0437a120 + 8);
    local_128 = 0;
    pcStack_188 = (char *)0xfdf4f0a221b60b36;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_absorb.ptcl";
    local_178 = (long *)&DAT_00000038;
    local_170 = (long *)0x0;
    local_140 = auVar55._0_8_;
    uStack_138 = auVar55._8_8_;
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_190 = (long *)0x0;
    pcStack_188 = (char *)0x0;
    FUN_00ac3fa4(&local_190,plVar42 + 0x49);
    FUN_0099c748(&local_98,&local_190);
    plVar47 = local_190;
    if (local_190 != (long *)0x0) {
      plVar33 = local_190 + 1;
      do {
        iVar29 = (int)*plVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar24) {
          *(int *)plVar33 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*plVar47;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    if (local_98 == (long *)0x0) {
LAB_0190d654:
      lVar37 = *(long *)(lVar43 + 0x70);
    }
    else {
      local_190 = (long *)0x0;
      pcStack_188 = (char *)0x0;
      FUN_01a6a07c(&local_190,local_98 + 0xbf);
      plVar47 = local_190;
      if (local_190 != (long *)0x0) {
        if (*(int *)((long)local_190 + 0xc) != 0) {
          piVar1 = (int *)((long)local_190 + 0xc);
          iVar29 = *(int *)((long)local_190 + 0xc);
          do {
            plVar33 = (long *)plVar47[2];
            lVar37 = FUN_018e43a0();
            while( true ) {
              if (plVar33 == (long *)0x0) goto LAB_0190f988;
              if (plVar33 == (long *)lVar37) break;
              plVar33 = (long *)*plVar33;
            }
            iVar30 = *piVar1;
            if (iVar30 == iVar29) {
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar37 = plVar47[3];
                plVar47 = (long *)0x0;
                plVar33 = local_190;
                if (lVar37 != 0) {
                  plVar47 = (long *)(lVar37 + -0x50);
                }
                goto joined_r0x0190f2c0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar29 = iVar30;
          } while (iVar30 != 0);
        }
LAB_0190f988:
        plVar47 = (long *)0x0;
        plVar33 = local_190;
joined_r0x0190f2c0:
        local_190 = plVar33;
        if (plVar33 != (long *)0x0) {
          plVar44 = plVar33 + 1;
          do {
            iVar29 = (int)*plVar44 + -1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar24) {
              *(int *)plVar44 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            plVar33[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_d0 = (long *)*plVar33;
            FUN_02a44274(lVar37 + 0xd8,&local_d0);
          }
        }
        if (plVar47 != (long *)0x0) {
          if (plVar47[0x73] == 0) {
            local_190 = (long *)0x0;
          }
          else {
            FUN_01aa8974(&local_190);
            if (local_190 != (long *)0x0) {
              plVar47[0x75] = 3;
              lVar37 = local_190[0xb];
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar24) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*local_190 + 0x20))();
              }
            }
          }
          lVar37 = plVar47[0xb];
          piVar1 = (int *)(lVar37 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar47 + 0x20))(plVar47);
          }
        }
      }
      if (local_98 == (long *)0x0) goto LAB_0190d654;
      lVar37 = local_98[0xb];
      piVar1 = (int *)(lVar37 + 0xc);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 != 0) goto LAB_0190d654;
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      lVar37 = *(long *)(lVar43 + 0x70);
    }
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar47 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01913b5c();
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0190d65c;
          if (plVar47 == (long *)lVar36) break;
          plVar47 = (long *)*plVar47;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            plVar47 = (long *)(lVar37 + -0x50);
            if (lVar37 != 0) {
              if (*(long *)(lVar43 + 0x118) == 0) {
                local_d0 = (long *)0x0;
              }
              else {
                FUN_00bd9360(&local_d0);
                if (local_d0 != (long *)0x0) {
                  uVar27 = FUN_01b75890(plVar47);
                  local_190 = (long *)0x2324fd0cd22465f9;
                  pcStack_188 = "PLAY_PL_CP_INTO_MONSTERBALL";
                  local_180 = (char *)0x1b;
                  switch(uVar27) {
                  case 0x6ae:
                    break;
                  case 0x6af:
                    local_190 = (long *)0xdd4afd5bb8f7ab90;
                    local_180 = (char *)0x19;
                    pcStack_188 = "PLAY_PL_CP_INTO_SUPERBALL";
                    break;
                  case 0x6b0:
                    local_190 = (long *)0x4b90cef864a6a679;
                    local_180 = (char *)0x19;
                    pcStack_188 = "PLAY_PL_CP_INTO_HYPERBALL";
                    break;
                  case 0x6b1:
                    local_190 = (long *)0x3654aafe56f2c8c;
                    local_180 = (char *)0x1c;
                    pcStack_188 = "PLAY_PL_CP_INTO_WINGARCHBALL";
                    break;
                  default:
                    local_190 = (long *)0x18b8cb8f74055be3;
                    local_180 = (char *)0x18;
                    pcStack_188 = "PLAY_PL_CP_INTO_TESTBALL";
                  }
                  local_178 = (long *)0x0;
                  if ((*pcStack_188 != '\0') &&
                     (FUN_0290b66c(local_d0,&local_190,0), local_178 != (long *)0x0)) {
                    (**(code **)(*local_178 + 0x20))();
                  }
                  if (local_d0 != (long *)0x0) {
                    lVar36 = local_d0[0xb];
                    piVar1 = (int *)(lVar36 + 0xc);
                    do {
                      iVar29 = *piVar1;
                      cVar3 = '\x01';
                      bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar24) {
                        *piVar1 = iVar29 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar29 + -1 == 0) {
                      *(undefined8 *)(lVar36 + 0x18) = 0;
                      (**(code **)(*local_d0 + 0x20))();
                    }
                  }
                }
              }
              lVar37 = *(long *)(lVar37 + 8);
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar24) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar47 + 0x20))(plVar47);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190d65c:
    FUN_00c1e8d8(&local_190,&local_e0);
    if (local_190 != (long *)0x0) {
      auVar55 = *(undefined1 (*) [16])(local_190 + 0x16);
      *(long *)(lVar43 + 0x138) = auVar55._8_8_;
      *(long *)(lVar43 + 0x130) = auVar55._0_8_;
      lVar37 = local_190[0xb];
      piVar1 = (int *)(lVar37 + 0xc);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        *(undefined8 *)(lVar37 + 0x18) = 0;
        (**(code **)(*local_190 + 0x20))();
      }
    }
    local_190 = (long *)0xa6a8253ed7a82ba4;
    pcStack_188 = "kPokeCaptureFrame";
    local_180 = (char *)0x11;
    local_178 = (long *)0x0;
    uVar28 = FUN_01910e50(&local_190);
    *(undefined4 *)(lVar43 + 0x1d8) = uVar28;
    *(undefined4 *)(lVar43 + 0x1dc) = uVar28;
    *(int *)(lVar43 + 0xf0) = *(int *)(lVar43 + 0xf0) + 1;
    plVar47 = local_190;
  case 5:
    local_190 = plVar47;
    local_1d0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    FUN_0191306c(&local_1d0,plVar45);
    auVar55 = FUN_01915830(&local_1d0);
    puVar31 = local_1d0;
    fStack_2c8 = auVar55._8_4_;
    fStack_2c4 = auVar55._12_4_;
    local_2d0 = auVar55._0_4_;
    fStack_2cc = auVar55._4_4_;
    if (local_1d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_1d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    local_1e0 = (undefined8 *)0x0;
    uStack_1d8 = 0;
    FUN_00ac3fa4(&local_1e0,plVar42 + 0x49);
    auVar55 = FUN_0191591c(&local_1e0);
    puVar31 = local_1e0;
    if (local_1e0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1e0 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_1e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    if (*(int *)(lVar43 + 0x1dc) == 0) {
      bVar24 = true;
    }
    else {
      iVar29 = *(int *)(lVar43 + 0x1dc) + -1;
      bVar24 = iVar29 == 0;
      *(int *)(lVar43 + 0x1dc) = iVar29;
    }
    local_d0 = (long *)&DAT_a7b67df7865a5493;
    uStack_c8 = "kPokeCaptureDurationEaseFunc";
    local_c0 = 0x1c;
    local_b8 = (long *)0x0;
    local_190 = (long *)0x38a0599f0b969d3a;
    pcStack_188 = "capture_director";
    local_180 = (char *)0x10;
    local_178 = (long *)0x0;
    uVar35 = FUN_00ea3f80(&local_190,&local_d0);
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    fVar115 = (float)(**(code **)(PTR_PTR_0437a4c8 + (uVar35 & 0xffffffff) * 8))();
    fVar115 = fVar115 + 0.0;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    fVar50 = auVar55._4_4_ + (fStack_2cc - auVar55._4_4_) * fVar115;
    fVar51 = auVar55._12_4_ + (fStack_2c4 - auVar55._12_4_) * fVar115;
    auVar54[0xc] = SUB41(fVar51,0);
    auVar54._8_4_ = auVar55._8_4_ + (fStack_2c8 - auVar55._8_4_) * fVar115;
    auVar54[0xd] = (char)((uint)fVar51 >> 8);
    auVar54[0xe] = (char)((uint)fVar51 >> 0x10);
    auVar54[0xf] = (char)((uint)fVar51 >> 0x18);
    auVar54[4] = SUB41(fVar50,0);
    auVar54._0_4_ = auVar55._0_4_ + (local_2d0 - auVar55._0_4_) * fVar115;
    auVar54[5] = (char)((uint)fVar50 >> 8);
    auVar54[6] = (char)((uint)fVar50 >> 0x10);
    auVar54[7] = (char)((uint)fVar50 >> 0x18);
    FUN_0190a7b0(auVar54,lVar43 + 0x250);
    FUN_00c1e8d8(&local_d0,&local_e0);
    if (local_d0 != (long *)0x0) {
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      fVar115 = 1.0 - fVar115;
      FUN_008c4b3c(&local_1f0,&local_e0);
      FUN_01916028(&local_1f0,1.1920929e-07 < fVar115);
      puVar31 = local_1f0;
      if (local_1f0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_1f0 + 1);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar25) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          local_1f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_190 = (long *)*puVar31;
          FUN_02a44274(lVar37 + 0xd8,&local_190);
        }
      }
      if (1.1920929e-07 < fVar115) {
        *(undefined1 *)(local_d0 + 0x1c) = 1;
        local_d0[0x17] = (ulong)(uint)fVar115;
        local_d0[0x16] = CONCAT44(fVar115,fVar115);
      }
      if (local_d0 != (long *)0x0) {
        lVar37 = local_d0[0xb];
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar25) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
        }
      }
    }
    plVar47 = local_190;
    if (!bVar24) goto switchD_0190c63c_default;
    local_190 = (long *)0x0;
    pcStack_188 = (char *)0x0;
    FUN_01912b7c(&local_190,lVar43 + 0x270);
    lVar43 = FUN_019171d4(&local_190);
    plVar45 = local_190;
    if (local_190 != (long *)0x0) {
      plVar47 = local_190 + 1;
      do {
        iVar29 = (int)*plVar47 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar24) {
          *(int *)plVar47 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*plVar45;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    if (lVar43 != 0) {
      FUN_002667b4(lVar43);
    }
    *piVar48 = *piVar48 + 1;
    FUN_01ba3cc8(plVar42,1);
    goto joined_r0x0190ca00;
  case 6:
    local_190 = (long *)0x11e1c1ddd3081bea;
    pcStack_188 = "Play_Ba_sys_ball_light";
    local_180 = (char *)0x16;
    local_178 = (long *)0x0;
    if (*(long *)(lVar43 + 0x118) == 0) {
      local_d0 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_d0);
      if ((local_d0 != (long *)0x0) &&
         ((*pcStack_188 == '\0' || (FUN_0290b66c(local_d0,&local_190,0), local_d0 != (long *)0x0))))
      {
        lVar37 = local_d0[0xb];
        piVar48 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar48;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
          if (bVar24) {
            *piVar48 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
        }
      }
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    local_130 = 0;
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_120 = *(undefined8 *)PTR_DAT_0437a120;
    uStack_118 = *(ulong *)(PTR_DAT_0437a120 + 8);
    local_190 = (long *)CONCAT44(local_190._4_4_,3);
    pcStack_188 = (char *)0x57c31a4d900abdc4;
    local_128 = 0;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_close_ring.ptcl";
    local_178 = (long *)&DAT_0000003c;
    local_170 = (long *)0x0;
    local_200 = (long *)0x0;
    uStack_1f8 = 0;
    FUN_0191306c(&local_200,plVar45);
    auVar55 = FUN_01915830(&local_200);
    plVar45 = local_200;
    uStack_138 = auVar55._8_8_;
    local_140 = auVar55._0_8_;
    if (local_200 != (long *)0x0) {
      plVar47 = local_200 + 1;
      do {
        iVar29 = (int)*plVar47 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar24) {
          *(int *)plVar47 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        local_200[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*plVar45;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    lVar37 = *(long *)(lVar43 + 0x108);
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar48 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar45 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01914274();
        while( true ) {
          if (plVar45 == (long *)0x0) goto LAB_0190dccc;
          if (plVar45 == (long *)lVar36) break;
          plVar45 = (long *)*plVar45;
        }
        iVar30 = *piVar48;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
          if (bVar24) {
            *piVar48 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            if (lVar37 != 0) {
              plVar45 = (long *)(lVar37 + -0x50);
              FUN_01b6b7a8(plVar45,1);
              lVar37 = *(long *)(lVar37 + 8);
              piVar48 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar48;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                if (bVar24) {
                  *piVar48 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar45 + 0x20))(plVar45);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190dccc:
    *(undefined8 *)(lVar43 + 0x1d8) = 0x200000003;
LAB_0190de54:
    *(int *)(lVar43 + 0xf0) = *(int *)(lVar43 + 0xf0) + 1;
    if (local_e0 == (undefined8 *)0x0) goto LAB_0190ca5c;
    goto LAB_0190ca04;
  case 7:
    if ((*(int *)(lVar43 + 0x1dc) == 0) ||
       (iVar29 = *(int *)(lVar43 + 0x1dc) + -1, *(int *)(lVar43 + 0x1dc) = iVar29, iVar29 == 0)) {
      local_98 = (long *)0x0;
      uStack_90 = 0;
      FUN_0191306c(&local_98,lVar43 + 0x70);
      auVar55 = FUN_01915830(&local_98);
      plVar45 = local_98;
      fStack_2b8 = auVar55._8_4_;
      fStack_2b4 = auVar55._12_4_;
      local_2c0 = auVar55[0];
      uStack_2bf = auVar55[1];
      uStack_2be = auVar55[2];
      uStack_2bd = auVar55[3];
      uStack_2bc = auVar55[4];
      uStack_2bb = auVar55[5];
      uStack_2ba = auVar55[6];
      uStack_2b9 = auVar55[7];
      if (local_98 != (long *)0x0) {
        plVar47 = local_98 + 1;
        do {
          iVar29 = (int)*plVar47 + -1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar24) {
            *(int *)plVar47 = iVar29;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 0) {
          local_98[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_190 = (long *)*plVar45;
          FUN_02a44274(lVar37 + 0xd8,&local_190);
        }
      }
      local_a8 = (long *)0x0;
      uStack_a0 = 0;
      FUN_00ac3fa4(&local_a8,plVar42 + 0x49);
      auVar53 = FUN_0191591c(&local_a8);
      plVar45 = local_a8;
      fStack_2c8 = auVar53._8_4_;
      fStack_2c4 = auVar53._12_4_;
      local_2d0 = auVar53._0_4_;
      fStack_2cc = auVar53._4_4_;
      if (local_a8 != (long *)0x0) {
        plVar47 = local_a8 + 1;
        do {
          iVar29 = (int)*plVar47 + -1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar24) {
            *(int *)plVar47 = iVar29;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 0) {
          local_a8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_190 = (long *)*plVar45;
          FUN_02a44274(lVar37 + 0xd8,&local_190);
        }
      }
      bVar60 = *(byte *)(lVar43 + 0xa1);
      *(uint *)(param_5 + 0x110) = (uint)bVar60;
      if (bVar60 == 0) {
        local_190 = (long *)0x4644005f09cdaea0;
        pcStack_188 = "kLandOffset";
        local_180 = (char *)0xb;
        local_178 = (long *)0x0;
        fVar116 = (float)FUN_01908df0(&local_190);
        local_190 = (long *)0x36aebe022b07d8c6;
        pcStack_188 = "kLandPosFindRadius";
        local_180 = (char *)0x12;
        local_178 = (long *)0x0;
        auVar53 = FUN_01908df0(&local_190);
        uVar32 = auVar53._8_8_;
        local_190 = (long *)0xfad3cb299573945e;
        pcStack_188 = "kTumbleOffsetInner";
        local_180 = (char *)0x12;
        local_178 = (long *)0x0;
        fVar117 = (float)FUN_01908df0(&local_190);
        local_190 = (long *)0x43c02d6317d76b85;
        pcStack_188 = "kTumbleOffsetOuter";
        local_180 = (char *)0x12;
        local_178 = (long *)0x0;
        fVar51 = (float)FUN_01908df0(&local_190);
        local_2d0 = auVar55._0_4_ - local_2d0;
        fStack_2cc = auVar55._4_4_ - fStack_2cc;
        fStack_2c8 = fStack_2b8 - fStack_2c8;
        fStack_2c4 = fStack_2b4 - fStack_2c4;
        auVar96._0_4_ = local_2d0 * local_2d0;
        auVar96._4_4_ = fStack_2cc * fStack_2cc;
        auVar96._8_4_ = fStack_2c8 * fStack_2c8;
        auVar96._12_4_ = fStack_2c4 * fStack_2c4;
        auVar95 = NEON_ext(auVar96,auVar96,8,1);
        fVar50 = auVar95._0_4_ + auVar96._0_4_;
        fVar90 = auVar95._4_4_ + auVar96._4_4_;
        fVar115 = fVar50 + fVar90;
        fVar50 = fVar50 + fVar90;
        if (1.1920929e-07 < fVar115) {
          auVar95._8_8_ = CONCAT44(fVar50,fVar115);
          auVar95._0_8_ = CONCAT44(fVar50,fVar115);
          auVar96 = NEON_frsqrte(auVar95,4);
          auVar105._0_4_ = fVar115 * auVar96._0_4_;
          auVar105._4_4_ = fVar50 * auVar96._4_4_;
          auVar105._8_4_ = fVar115 * auVar96._8_4_;
          auVar105._12_4_ = fVar50 * auVar96._12_4_;
          auVar95 = NEON_frsqrts(auVar96,auVar105,4);
          auVar97._0_4_ = auVar96._0_4_ * auVar95._0_4_;
          auVar97._4_4_ = auVar96._4_4_ * auVar95._4_4_;
          auVar97._8_4_ = auVar96._8_4_ * auVar95._8_4_;
          auVar97._12_4_ = auVar96._12_4_ * auVar95._12_4_;
          auVar106._0_4_ = fVar115 * auVar97._0_4_;
          auVar106._4_4_ = fVar50 * auVar97._4_4_;
          auVar106._8_4_ = fVar115 * auVar97._8_4_;
          auVar106._12_4_ = fVar50 * auVar97._12_4_;
          iVar29 = -(uint)(fVar115 == 0.0);
          iVar30 = -(uint)(fVar50 == 0.0);
          iVar91 = -(uint)(fVar115 == 0.0);
          iVar92 = -(uint)(fVar50 == 0.0);
          auVar96 = NEON_frsqrts(auVar97,auVar106,4);
          local_2d0 = local_2d0 * auVar97._0_4_ * auVar96._0_4_;
          fStack_2cc = fStack_2cc * auVar97._4_4_ * auVar96._4_4_;
          fStack_2c8 = fStack_2c8 * auVar97._8_4_ * auVar96._8_4_;
          fStack_2c4 = fStack_2c4 * auVar97._12_4_ * auVar96._12_4_;
          bVar60 = SUB41(local_2d0,0) & ~(byte)iVar29;
          bVar62 = (byte)((uint)local_2d0 >> 8) & ~(byte)((uint)iVar29 >> 8);
          bVar64 = (byte)((uint)local_2d0 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
          bVar66 = (byte)((uint)local_2d0 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
          bVar68 = SUB41(fStack_2cc,0) & ~(byte)iVar30;
          bVar69 = (byte)((uint)fStack_2cc >> 8) & ~(byte)((uint)iVar30 >> 8);
          bVar70 = (byte)((uint)fStack_2cc >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
          bVar71 = (byte)((uint)fStack_2cc >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
          bVar72 = SUB41(fStack_2c8,0) & ~(byte)iVar91;
          bVar73 = (byte)((uint)fStack_2c8 >> 8) & ~(byte)((uint)iVar91 >> 8);
          bVar74 = (byte)((uint)fStack_2c8 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
          bVar76 = (byte)((uint)fStack_2c8 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
          bVar78 = SUB41(fStack_2c4,0) & ~(byte)iVar92;
          bVar79 = (byte)((uint)fStack_2c4 >> 8) & ~(byte)((uint)iVar92 >> 8);
          bVar81 = (byte)((uint)fStack_2c4 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
          bVar83 = (byte)((uint)fStack_2c4 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        }
        else {
          bVar72 = (byte)_UNK_03888d18;
          bVar73 = (byte)((ulong)_UNK_03888d18 >> 8);
          bVar74 = (byte)((ulong)_UNK_03888d18 >> 0x10);
          bVar76 = (byte)((ulong)_UNK_03888d18 >> 0x18);
          bVar78 = (byte)((ulong)_UNK_03888d18 >> 0x20);
          bVar79 = (byte)((ulong)_UNK_03888d18 >> 0x28);
          bVar81 = (byte)((ulong)_UNK_03888d18 >> 0x30);
          bVar83 = (byte)((ulong)_UNK_03888d18 >> 0x38);
          bVar60 = (byte)_DAT_03888d10;
          bVar62 = (byte)((ulong)_DAT_03888d10 >> 8);
          bVar64 = (byte)((ulong)_DAT_03888d10 >> 0x10);
          bVar66 = (byte)((ulong)_DAT_03888d10 >> 0x18);
          bVar68 = (byte)((ulong)_DAT_03888d10 >> 0x20);
          bVar69 = (byte)((ulong)_DAT_03888d10 >> 0x28);
          bVar70 = (byte)((ulong)_DAT_03888d10 >> 0x30);
          bVar71 = (byte)((ulong)_DAT_03888d10 >> 0x38);
        }
        fVar50 = (float)CONCAT13(bVar76,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
        fStack_2c4 = (float)(CONCAT17(bVar83,CONCAT16(bVar81,CONCAT15(bVar79,CONCAT14(bVar78,fVar50)
                                                                     ))) >> 0x20);
        fVar115 = (float)CONCAT13(bVar66,CONCAT12(bVar64,CONCAT11(bVar62,bVar60)));
        fStack_2cc = (float)(CONCAT17(bVar71,CONCAT16(bVar70,CONCAT15(bVar69,CONCAT14(bVar68,fVar115
                                                                                     )))) >> 0x20);
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379678), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar37 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar37;
        puVar38 = *(ulong **)(lVar37 + 0xd8);
        uVar35 = *puVar38;
        uVar46 = puVar38[1];
        uVar34 = uVar46 ^ uVar35;
        *puVar38 = uVar34 ^ (uVar35 >> 0x28 | uVar35 << 0x18) ^ uVar34 << 0x10;
        puVar38[1] = uVar34 >> 0x1b | uVar34 << 0x25;
        local_190 = (long *)0x0;
        pcStack_188 = (char *)0x0;
        fVar117 = fVar117 + (fVar51 - fVar117) * (float)(uVar46 + uVar35) * 5.421011e-20 + 0.0;
        FUN_00ac3fa4(&local_190,plVar42 + 0x49);
        FUN_0099c748(&local_b0,&local_190);
        uStack_c8 = (char *)CONCAT44(fStack_2b4 + fStack_2c4 * fVar117,fStack_2b8 + fVar50 * fVar117
                                    );
        local_d0 = (long *)CONCAT44(auVar55._4_4_ + fStack_2cc * fVar117,
                                    auVar55._0_4_ + fVar115 * fVar117);
        auVar53._8_8_ = uVar32;
        auVar53 = FUN_01a8afd4(auVar53,local_b0,&local_d0);
        fStack_2cc = auVar53._4_4_;
        plVar45 = local_190;
        if (local_b0 != (long *)0x0) {
          lVar37 = local_b0[0xb];
          piVar48 = (int *)(lVar37 + 0xc);
          do {
            iVar29 = *piVar48;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
            if (bVar24) {
              *piVar48 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*local_b0 + 0x20))();
            plVar45 = local_190;
          }
        }
        local_190 = plVar45;
        if (plVar45 != (long *)0x0) {
          plVar47 = plVar45 + 1;
          do {
            iVar29 = (int)*plVar47 + -1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar24) {
              *(int *)plVar47 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            plVar45[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_d0 = (long *)*plVar45;
            FUN_02a44274(lVar37 + 0xd8,&local_d0);
          }
        }
        uVar61 = auVar53[8];
        uVar63 = auVar53[9];
        uVar65 = auVar53[10];
        uVar67 = auVar53[0xb];
        uVar75 = auVar53[0xc];
        uVar77 = auVar53[0xd];
        uVar80 = auVar53[0xe];
        uVar82 = auVar53[0xf];
        local_2c0 = auVar53[0];
        uStack_2bf = auVar53[1];
        uStack_2be = auVar53[2];
        uStack_2bd = auVar53[3];
        fVar116 = fVar116 + fStack_2cc;
        uStack_2bc = SUB41(fVar116,0);
        uStack_2bb = (undefined1)((uint)fVar116 >> 8);
        uStack_2ba = (undefined1)((uint)fVar116 >> 0x10);
        uStack_2b9 = (undefined1)((uint)fVar116 >> 0x18);
        pcVar40 = "kMoveToGroundFrame";
        uVar32 = 0x108efc242a8fea2e;
        puVar31 = &local_190;
        uVar41 = 0x12;
      }
      else {
        uVar61 = auVar55[8];
        uVar63 = auVar55[9];
        uVar65 = auVar55[10];
        uVar67 = auVar55[0xb];
        uVar75 = auVar55[0xc];
        uVar77 = auVar55[0xd];
        uVar80 = auVar55[0xe];
        uVar82 = auVar55[0xf];
        uVar32 = 0x4316dfd6a47d1c03;
        puVar31 = &local_d0;
        uVar41 = 10;
        pcVar40 = "kSpinFrame";
      }
      *(long *)(param_5 + 0x128) = auVar55._8_8_;
      *(long *)(param_5 + 0x120) = auVar55._0_8_;
      *(ulong *)(param_5 + 0x138) =
           CONCAT17(uVar82,CONCAT16(uVar80,CONCAT15(uVar77,CONCAT14(uVar75,CONCAT13(uVar67,CONCAT12(
                                                  uVar65,CONCAT11(uVar63,uVar61)))))));
      *(ulong *)(param_5 + 0x130) =
           CONCAT17(uStack_2b9,
                    CONCAT16(uStack_2ba,
                             CONCAT15(uStack_2bb,
                                      CONCAT14(uStack_2bc,
                                               CONCAT13(uStack_2bd,
                                                        CONCAT12(uStack_2be,
                                                                 CONCAT11(uStack_2bf,local_2c0))))))
                   );
      *puVar31 = uVar32;
      puVar31[1] = pcVar40;
      puVar31[2] = uVar41;
      puVar31[3] = 0;
      uVar49 = FUN_01910e50();
      if (uVar49 < 2) {
        uVar49 = 1;
      }
      *(uint *)(lVar43 + 0x1d8) = uVar49;
      *(uint *)(lVar43 + 0x1dc) = uVar49;
      goto LAB_0190de54;
    }
  default:
switchD_0190c63c_default:
    local_190 = plVar47;
    goto joined_r0x0190ca00;
  case 8:
    if (*(int *)(lVar43 + 0x1dc) == 0) {
      bVar24 = true;
      lVar37 = *plVar45;
    }
    else {
      iVar29 = *(int *)(lVar43 + 0x1dc) + -1;
      bVar24 = iVar29 == 0;
      *(int *)(lVar43 + 0x1dc) = iVar29;
      lVar37 = *plVar45;
    }
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar48 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar45 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01913b5c();
        while( true ) {
          if (plVar45 == (long *)0x0) goto joined_r0x0190f758;
          if (plVar45 == (long *)lVar36) break;
          plVar45 = (long *)*plVar45;
        }
        iVar30 = *piVar48;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar48,0x10);
          if (bVar25) {
            *piVar48 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            plVar45 = (long *)(lVar37 + -0x50);
            if (lVar37 != 0) {
              FUN_009c69bc(&local_d0,plVar45);
              puVar21 = PTR_PTR_0437a4c8;
              if (local_d0 != (long *)0x0) {
                uVar49 = *(uint *)(lVar43 + 0x1d8);
                if (uVar49 == 0) {
                  fVar115 = 1.0;
                }
                else {
                  fVar115 = (float)(uVar49 - *(int *)(lVar43 + 0x1dc)) / (float)uVar49;
                }
                uVar32 = *(undefined8 *)*(undefined1 (*) [12])(param_5 + 0x120);
                auVar20 = *(undefined1 (*) [12])(param_5 + 0x120);
                fStack_2b8 = (float)*(undefined8 *)(param_5 + 0x128);
                fStack_2b4 = (float)((ulong)*(undefined8 *)(param_5 + 0x128) >> 0x20);
                local_2c0 = (undefined1)uVar32;
                uStack_2bf = (undefined1)((ulong)uVar32 >> 8);
                uStack_2be = (undefined1)((ulong)uVar32 >> 0x10);
                uStack_2bd = (undefined1)((ulong)uVar32 >> 0x18);
                uStack_2bc = (undefined1)((ulong)uVar32 >> 0x20);
                uStack_2bb = (undefined1)((ulong)uVar32 >> 0x28);
                uStack_2ba = (undefined1)((ulong)uVar32 >> 0x30);
                uStack_2b9 = (undefined1)((ulong)uVar32 >> 0x38);
                if (*(int *)(param_5 + 0x110) == 0) {
                  fVar116 = *(float *)(param_5 + 0x130);
                  fVar50 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0xa0))(fVar115);
                  fVar51 = auVar20._0_4_;
                  fVar117 = *(float *)(param_5 + 0x124);
                  fVar51 = fVar51 + (fVar116 - fVar51) * fVar50;
                  fVar116 = *(float *)(param_5 + 0x134);
                  local_2c0 = SUB41(fVar51,0);
                  uStack_2bf = (undefined1)((uint)fVar51 >> 8);
                  uStack_2be = (undefined1)((uint)fVar51 >> 0x10);
                  uStack_2bd = (undefined1)((uint)fVar51 >> 0x18);
                  fVar50 = (float)(**(code **)(puVar21 + 0xe8))(fVar115);
                  fVar51 = *(float *)(param_5 + 0x138);
                  fVar117 = fVar117 + (fVar116 - fVar117) * fVar50;
                  fStack_2b8 = *(float *)(param_5 + 0x128);
                  fVar50 = (float)(**(code **)(puVar21 + 0xa0))(fVar115);
                  fStack_2b8 = fStack_2b8 + (fVar51 - fStack_2b8) * fVar50;
                  uStack_2bc = SUB41(fVar117,0);
                  uStack_2bb = (undefined1)((uint)fVar117 >> 8);
                  uStack_2ba = (undefined1)((uint)fVar117 >> 0x10);
                  uStack_2b9 = (undefined1)((uint)fVar117 >> 0x18);
                  local_190 = (long *)0x5b346c99ab047b6a;
                  pcStack_188 = "kTumbleRotDegree";
                  local_180 = (char *)0x10;
                  local_178 = (long *)0x0;
                  fStack_2b4 = 0.0;
                  fVar50 = (float)FUN_01908df0(&local_190);
                  fVar115 = (float)(**(code **)(puVar21 + 0xa0))(fVar115);
                  FUN_009a7ff4(ZEXT816(0),SUB41(((fVar50 * 3.1415927) / 180.0) * fVar115 + 0.0,0),
                               ZEXT816(0));
                  lVar36 = extraout_d0;
                  lVar59 = extraout_var_01;
                }
                else {
                  FUN_019090d0(fVar115);
                  lVar36 = extraout_d0_00;
                  lVar59 = extraout_var_02;
                }
                *(undefined1 *)(local_d0 + 0x1c) = 1;
                local_d0[0x19] = lVar59;
                local_d0[0x18] = lVar36;
                lVar36 = CONCAT17(uStack_2b9,
                                  CONCAT16(uStack_2ba,
                                           CONCAT15(uStack_2bb,
                                                    CONCAT14(uStack_2bc,
                                                             CONCAT13(uStack_2bd,
                                                                      CONCAT12(uStack_2be,
                                                                               CONCAT11(uStack_2bf,
                                                                                        local_2c0)))
                                                            ))));
                auVar55._8_4_ = fStack_2b8;
                auVar55._0_8_ = lVar36;
                auVar55._12_4_ = fStack_2b4;
                local_d0[0x1b] = auVar55._8_8_;
                local_d0[0x1a] = lVar36;
                if (local_d0 != (long *)0x0) {
                  lVar36 = local_d0[0xb];
                  piVar48 = (int *)(lVar36 + 0xc);
                  do {
                    iVar29 = *piVar48;
                    cVar3 = '\x01';
                    bVar25 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                    if (bVar25) {
                      *piVar48 = iVar29 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar29 + -1 == 0) {
                    *(undefined8 *)(lVar36 + 0x18) = 0;
                    (**(code **)(*local_d0 + 0x20))();
                  }
                }
              }
              lVar37 = *(long *)(lVar37 + 8);
              piVar48 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar48;
                cVar3 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                if (bVar25) {
                  *piVar48 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar45 + 0x20))(plVar45);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
joined_r0x0190f758:
    plVar47 = local_190;
    if (bVar24) {
      local_190 = (long *)0xb348a202fbe69864;
      pcStack_188 = "kWaitBeforeJudgeFrame";
      local_180 = (char *)0x15;
      local_178 = (long *)0x0;
      uVar28 = FUN_01910e50(&local_190);
      *(undefined4 *)(lVar43 + 0x1d8) = uVar28;
      *(undefined4 *)(lVar43 + 0x1dc) = uVar28;
      goto LAB_0190de54;
    }
    goto switchD_0190c63c_default;
  case 9:
    if ((*(int *)(lVar43 + 0x1dc) == 0) ||
       (iVar29 = *(int *)(lVar43 + 0x1dc) + -1, *(int *)(lVar43 + 0x1dc) = iVar29, iVar29 == 0)) {
      *piVar48 = 10;
      goto switchD_0190c63c_caseD_a;
    }
    goto switchD_0190c63c_default;
  case 10:
switchD_0190c63c_caseD_a:
    iVar29 = FUN_019065e8(lVar43 + 0x140);
    if (iVar29 != 2) {
      *piVar48 = *piVar48 + 1;
      plVar47 = local_190;
      goto switchD_0190c63c_caseD_b;
    }
    FUN_01b3a960(plVar42,0);
    iVar29 = 0xf;
    break;
  case 0xb:
switchD_0190c63c_caseD_b:
    local_190 = plVar47;
    uVar49 = *(uint *)(lVar43 + 0x1d0);
    lVar37 = *(long *)(lVar43 + 0x108);
    if (2 < uVar49) {
      uVar49 = 3;
    }
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      uVar28 = *(undefined4 *)(&UNK_03888f90 + (ulong)uVar49 * 4);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar45 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01914274();
        while( true ) {
          if (plVar45 == (long *)0x0) goto LAB_0190de90;
          if (plVar45 == (long *)lVar36) break;
          plVar45 = (long *)*plVar45;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0190f030;
          lVar37 = *(long *)(lVar37 + 0x18);
          if (lVar37 != 0) {
            plVar45 = (long *)(lVar37 + -0x50);
            FUN_01b6b7a8(plVar45,uVar28);
            lVar37 = *(long *)(lVar37 + 8);
            piVar1 = (int *)(lVar37 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 != 0) break;
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar45 + 0x20))(plVar45);
            lVar43 = *(long *)(lVar43 + 0x118);
            goto joined_r0x0190f0bc;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0190f030:
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190de90:
    lVar43 = *(long *)(lVar43 + 0x118);
joined_r0x0190f0bc:
    if (lVar43 == 0) {
      local_d0 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_d0);
      if (local_d0 != (long *)0x0) {
        local_190 = (long *)0xd80b7aa71d1f3086;
        pcStack_188 = "PLAY_BA_SYS_BALL_SPIN";
        local_180 = (char *)0x15;
        local_178 = (long *)0x0;
        FUN_0290b66c(local_d0,&local_190,0);
        if (local_178 != (long *)0x0) {
          (**(code **)(*local_178 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          lVar43 = local_d0[0xb];
          piVar1 = (int *)(lVar43 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar43 + 0x18) = 0;
            (**(code **)(*local_d0 + 0x20))();
          }
        }
      }
    }
    goto LAB_0190e26c;
  case 0xc:
    lVar37 = *(long *)(lVar43 + 0x108);
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar45 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01914274();
        while( true ) {
          if (plVar45 == (long *)0x0) goto LAB_0190cbec;
          if (plVar45 == (long *)lVar36) break;
          plVar45 = (long *)*plVar45;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0190f384;
          lVar37 = *(long *)(lVar37 + 0x18);
          if (lVar37 != 0) {
            plVar45 = (long *)(lVar37 + -0x50);
            uVar35 = FUN_01b6b9c0(plVar45);
            lVar37 = *(long *)(lVar37 + 8);
            piVar1 = (int *)(lVar37 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 == 0) {
              *(undefined8 *)(lVar37 + 0x18) = 0;
              (**(code **)(*plVar45 + 0x20))(plVar45);
              plVar47 = local_190;
              if ((uVar35 & 1) == 0) goto switchD_0190c63c_default;
              break;
            }
            plVar47 = local_190;
            if ((uVar35 & 1) != 0) break;
            goto switchD_0190c63c_default;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0190f384:
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190cbec:
    if (*(int *)(lVar43 + 0x1d4) == 2) {
      if (*(int *)(lVar43 + 0x1c0) != 1) goto LAB_0190cbfc;
LAB_0190e550:
      *(undefined1 *)((long)plVar42 + 0x81e) = 1;
      local_208 = plVar42;
      if (plVar42 == (long *)0x0) {
        FUN_0191115c(param_5,lVar43,&local_208);
        lVar43 = lRam0000000000000ab0;
        if (cRam0000000000000822 == '\0') {
          lVar37 = nn::os::GetCurrentThread();
          plVar45 = (long *)(lVar43 + 0x20);
          do {
            if (*plVar45 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar43 + 0x14));
                while (*plVar45 == 0) {
                  cVar3 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(plVar45,0x10);
                  if (bVar24) {
                    *plVar45 = lVar37;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_0191030c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar24) {
              *plVar45 = lVar37;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_0191030c:
          if (*(long *)(lVar43 + 8) != 0) {
            *(undefined8 *)(lVar43 + 8) = 0;
          }
          *(undefined8 *)(lVar43 + 0x20) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar43 + 0x14));
          FUN_01b9cc88(0);
          cRam0000000000000822 = '\x01';
        }
        local_210 = plVar42;
        FUN_019118b0(&local_210);
        iVar29 = 0xd;
      }
      else {
        lVar37 = plVar42[0xb];
        if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) {
LAB_01910210:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar37 + 0x10) == 0) {
          uVar32 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
          *(undefined8 *)(lVar37 + 0x10) = uVar32;
        }
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_0191115c(param_5,lVar43,&local_208);
        lVar43 = plVar42[0xb];
        piVar1 = (int *)(lVar43 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar43 + 0x18) = 0;
          (**(code **)(*plVar42 + 0x20))(plVar42);
          cVar3 = *(char *)((long)plVar42 + 0x822);
        }
        else {
          cVar3 = *(char *)((long)plVar42 + 0x822);
        }
        if (cVar3 == '\0') {
          lVar37 = plVar42[0x156];
          lVar43 = nn::os::GetCurrentThread();
          plVar45 = (long *)(lVar37 + 0x20);
          do {
            if (*plVar45 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar37 + 0x14));
                while (*plVar45 == 0) {
                  cVar3 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(plVar45,0x10);
                  if (bVar24) {
                    *plVar45 = lVar43;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_0190e694;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar24) {
              *plVar45 = lVar43;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_0190e694:
          if (*(long *)(lVar37 + 8) != 0) {
            *(undefined8 *)(lVar37 + 8) = 0;
          }
          *(undefined8 *)(lVar37 + 0x20) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar37 + 0x14));
          FUN_01b9cc88(plVar42);
          *(undefined1 *)((long)plVar42 + 0x822) = 1;
        }
        lVar43 = plVar42[0xb];
        local_210 = plVar42;
        if (*(undefined8 **)(lVar43 + 0x18) == (undefined8 *)0x0) goto LAB_01910210;
        if (*(long *)(lVar43 + 0x10) == 0) {
          uVar32 = (**(code **)**(undefined8 **)(lVar43 + 0x18))();
          *(undefined8 *)(lVar43 + 0x10) = uVar32;
        }
        piVar1 = (int *)(lVar43 + 0xc);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_019118b0(&local_210);
        lVar43 = plVar42[0xb];
        piVar1 = (int *)(lVar43 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 1) {
          *(undefined8 *)(lVar43 + 0x18) = 0;
          (**(code **)(*plVar42 + 0x20))(plVar42);
        }
        iVar29 = 0xd;
      }
    }
    else {
      if ((*(int *)(lVar43 + 0x1d4) == 0) && (*(int *)(lVar43 + 0x1c0) != 2)) goto LAB_0190e550;
LAB_0190cbfc:
      iVar29 = 10;
    }
    break;
  case 0xd:
    *(undefined1 *)(lVar43 + 0x128) = 1;
    local_190 = (long *)CONCAT44(local_190._4_4_,4);
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    local_120 = *(undefined8 *)PTR_DAT_0437a120;
    uStack_118 = *(ulong *)(PTR_DAT_0437a120 + 8);
    local_130 = 0;
    local_128 = 0;
    local_220 = (undefined8 *)0x0;
    uStack_218 = 0;
    pcStack_188 = (char *)0x485939c3ad9126bf;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_correct.ptcl";
    local_178 = (long *)0x39;
    local_170 = (long *)0x0;
    FUN_0191306c(&local_220,plVar45);
    auVar55 = FUN_01915830(&local_220);
    puVar31 = local_220;
    uStack_138 = auVar55._8_8_;
    local_140 = auVar55._0_8_;
    if (local_220 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_220 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_220[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    lVar37 = *(long *)(lVar43 + 0x108);
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar29 = *(int *)(lVar37 + 0xc);
      do {
        plVar45 = *(long **)(lVar37 + 0x10);
        lVar36 = FUN_01914274();
        while( true ) {
          if (plVar45 == (long *)0x0) goto LAB_0190dacc;
          if (plVar45 == (long *)lVar36) break;
          plVar45 = (long *)*plVar45;
        }
        iVar30 = *piVar1;
        if (iVar30 == iVar29) {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            if (lVar37 != 0) {
              plVar45 = (long *)(lVar37 + -0x50);
              FUN_01b6b7a8(plVar45,5);
              lVar37 = *(long *)(lVar37 + 8);
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar24) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar45 + 0x20))(plVar45);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar30;
      } while (iVar30 != 0);
    }
LAB_0190dacc:
    local_190 = (long *)0x46dcee222facda2;
    pcStack_188 = "Play_Ba_sys_ball_close";
    local_180 = (char *)0x16;
    local_178 = (long *)0x0;
    if (*(long *)(lVar43 + 0x118) == 0) {
      local_d0 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_d0);
      if ((local_d0 != (long *)0x0) &&
         (FUN_0290b66c(local_d0,&local_190,0), local_d0 != (long *)0x0)) {
        lVar37 = local_d0[0xb];
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
        }
      }
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    local_190 = (long *)0xda6875712f1db368;
    pcStack_188 = "kSuccessWait";
    local_180 = (char *)0xc;
    local_178 = (long *)0x0;
    iVar29 = FUN_01910e50(&local_190);
    *(int *)(lVar43 + 0x1d8) = iVar29;
    *(int *)(lVar43 + 0x1dc) = iVar29;
    *(int *)(lVar43 + 0xf0) = *(int *)(lVar43 + 0xf0) + 1;
    goto joined_r0x0190cb9c;
  case 0xe:
    iVar29 = *(int *)(lVar43 + 0x1dc);
joined_r0x0190cb9c:
    if ((iVar29 != 0) &&
       (*(int *)(lVar43 + 0x1dc) = iVar29 + -1, plVar47 = local_190, iVar29 + -1 != 0))
    goto switchD_0190c63c_default;
LAB_0190db60:
    iVar29 = 0x11;
    break;
  case 0xf:
    *(undefined1 *)((long)plVar42 + 0x81f) = 1;
    *(undefined1 *)(lVar43 + 0x128) = 0;
    local_190 = (long *)CONCAT44(local_190._4_4_,4);
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    local_140 = 0;
    uStack_138 = 0;
    uVar32 = *(undefined8 *)PTR_DAT_0437a120;
    uVar41 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
    pcStack_188 = (char *)0xe781d1c0f5330340;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_false.ptcl";
    local_130 = 0;
    local_128 = 0;
    local_178 = (long *)0x37;
    local_170 = (long *)0x0;
    local_230 = (undefined8 *)0x0;
    uStack_228 = 0;
    local_120 = uVar32;
    uStack_118 = uVar41;
    FUN_0191306c(&local_230,plVar45);
    auVar55 = FUN_01915830(&local_230);
    puVar31 = local_230;
    uStack_138 = auVar55._8_8_;
    local_140 = auVar55._0_8_;
    if (local_230 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_230 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_230[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    uVar49 = *(uint *)(lVar43 + 0xdc);
    local_190 = (long *)CONCAT44(local_190._4_4_,4);
    local_168 = &DAT_cbf29ce484222645;
    local_160 = &DAT_03996322;
    pcStack_188 = (char *)0xc4b7845aa559df71;
    local_180 = "bin/effect/field/particle/capture/get/ef_get_pokecenter.ptcl";
    uStack_158 = 0;
    local_150 = (long *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_178 = (long *)0x3c;
    local_170 = (long *)0x0;
    local_240 = (undefined8 *)0x0;
    uStack_238 = 0;
    local_120 = uVar32;
    uStack_118 = uVar41;
    FUN_00ac3fa4(&local_240,plVar42 + 0x49);
    auVar55 = FUN_0191591c(&local_240);
    puVar31 = local_240;
    uStack_138 = auVar55._8_8_;
    local_140 = auVar55._0_8_;
    if (local_240 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_240 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_240[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    local_120 = CONCAT44(uVar49,uVar49);
    uStack_118 = (ulong)uVar49;
    FUN_019105b4(lVar43,&local_190);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    FUN_01911aa0(lVar43);
    local_250 = (undefined8 *)0x0;
    uStack_248 = 0;
    FUN_008c4b3c(&local_250,&local_e0);
    FUN_01916028(&local_250,1);
    puVar31 = local_250;
    if (local_250 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_250 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_250[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    local_260 = (undefined8 *)0x0;
    uStack_258 = 0;
    FUN_0191306c(&local_260,plVar45);
    FUN_0191691c(&local_260,0);
    puVar31 = local_260;
    if (local_260 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_260 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_260[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_190 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_190);
      }
    }
    local_190 = (undefined8 *)0x0;
    pcStack_188 = (char *)0x0;
    FUN_00ac3fa4(&local_190,plVar42 + 0x49);
    FUN_0099c748(&local_98,&local_190);
    puVar31 = local_190;
    if (local_190 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_190 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    if (local_98 != (long *)0x0) {
      local_190 = (undefined8 *)0x0;
      pcStack_188 = (char *)0x0;
      FUN_01a6a07c(&local_190,local_98 + 0xbf);
      puVar31 = local_190;
      if (local_190 != (undefined8 *)0x0) {
        if (*(int *)((long)local_190 + 0xc) != 0) {
          piVar1 = (int *)((long)local_190 + 0xc);
          iVar29 = *(int *)((long)local_190 + 0xc);
          do {
            plVar45 = (long *)puVar31[2];
            lVar37 = FUN_018e43a0();
            while( true ) {
              if (plVar45 == (long *)0x0) goto LAB_0190f978;
              if (plVar45 == (long *)lVar37) break;
              plVar45 = (long *)*plVar45;
            }
            iVar30 = *piVar1;
            if (iVar30 == iVar29) {
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar37 = puVar31[3];
                plVar45 = (long *)0x0;
                puVar31 = local_190;
                if (lVar37 != 0) {
                  plVar45 = (long *)(lVar37 + -0x50);
                }
                goto joined_r0x0190f1b4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar29 = iVar30;
          } while (iVar30 != 0);
        }
LAB_0190f978:
        plVar45 = (long *)0x0;
        puVar31 = local_190;
joined_r0x0190f1b4:
        local_190 = puVar31;
        if (puVar31 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar31 + 1);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            puVar31[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_d0 = (long *)*puVar31;
            FUN_02a44274(lVar37 + 0xd8,&local_d0);
          }
        }
        if (plVar45 != (long *)0x0) {
          FUN_02610800(plVar45);
          lVar37 = plVar45[0xb];
          piVar1 = (int *)(lVar37 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar45 + 0x20))(plVar45);
          }
        }
      }
      if (local_98 != (long *)0x0) {
        lVar37 = local_98[0xb];
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
    }
    local_190 = (long *)0x7fe68eed520f9489;
    pcStack_188 = "kFailureWait";
    local_180 = (char *)0xc;
    local_178 = (long *)0x0;
    iVar29 = FUN_01910e50(&local_190);
    *(int *)(lVar43 + 0x1d8) = iVar29;
    *(int *)(lVar43 + 0x1dc) = iVar29;
    *(int *)(lVar43 + 0xf0) = *(int *)(lVar43 + 0xf0) + 1;
    if (iVar29 != 0) goto LAB_0190cb08;
LAB_0190d03c:
    iVar29 = 0;
    bVar24 = true;
    uVar49 = *(uint *)(lVar43 + 0x1d8);
    if (uVar49 != 0) goto LAB_0190cb1c;
LAB_0190d04c:
    fVar115 = 1.0;
    goto LAB_0190cb2c;
  case 0x10:
    iVar29 = *(int *)(lVar43 + 0x1dc);
    if (iVar29 == 0) goto LAB_0190d03c;
LAB_0190cb08:
    iVar29 = iVar29 + -1;
    bVar24 = iVar29 == 0;
    *(int *)(lVar43 + 0x1dc) = iVar29;
    uVar49 = *(uint *)(lVar43 + 0x1d8);
    if (uVar49 == 0) goto LAB_0190d04c;
LAB_0190cb1c:
    fVar115 = (float)(uVar49 - iVar29) / (float)uVar49;
LAB_0190cb2c:
    FUN_00c1e8d8(&local_190,&local_e0);
    if (local_190 != (long *)0x0) {
      fVar115 = fVar115 * *(float *)(lVar43 + 0x130);
      if (1.1920929e-07 < fVar115) {
        *(undefined1 *)(local_190 + 0x1c) = 1;
        local_190[0x17] = (ulong)(uint)fVar115;
        local_190[0x16] =
             CONCAT17((char)((uint)fVar115 >> 0x18),
                      CONCAT16((char)((uint)fVar115 >> 0x10),
                               CONCAT15((char)((uint)fVar115 >> 8),
                                        CONCAT14(SUB41(fVar115,0),fVar115))));
      }
      lVar43 = local_190[0xb];
      piVar1 = (int *)(lVar43 + 0xc);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        *(undefined8 *)(lVar43 + 0x18) = 0;
        (**(code **)(*local_190 + 0x20))();
      }
    }
    plVar47 = local_190;
    if (!bVar24) goto switchD_0190c63c_default;
    goto LAB_0190db60;
  case 0x11:
    local_270 = (undefined8 *)0x0;
    uStack_268 = 0;
    FUN_0191306c(&local_270,plVar45);
    auVar55 = FUN_01915830(&local_270);
    puVar31 = local_270;
    pcStack_188 = auVar55._8_8_;
    local_190 = auVar55._0_8_;
    if (local_270 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_270 + 1);
      do {
        iVar29 = *piVar1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        local_270[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_d0 = (long *)*puVar31;
        FUN_02a44274(lVar37 + 0xd8,&local_d0);
      }
    }
    if (*(char *)(lVar43 + 0x128) == '\0') {
      local_280 = plVar42;
      if (plVar42 == (long *)0x0) {
        FUN_01911d44(&local_280);
      }
      else {
        lVar37 = plVar42[0xb];
        if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) goto LAB_01910210;
        if (*(long *)(lVar37 + 0x10) == 0) {
          uVar32 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
          *(undefined8 *)(lVar37 + 0x10) = uVar32;
        }
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_01911d44(&local_280);
        lVar37 = plVar42[0xb];
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          pcVar39 = *(code **)(*plVar42 + 0x20);
          plVar45 = plVar42;
LAB_0190e8d0:
          (*pcVar39)(plVar45);
        }
      }
    }
    else {
      local_278 = plVar42;
      if (plVar42 == (long *)0x0) {
        FUN_01911c1c(param_5,lVar43,&local_278);
      }
      else {
        lVar37 = plVar42[0xb];
        if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) goto LAB_01910210;
        if (*(long *)(lVar37 + 0x10) == 0) {
          uVar32 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
          *(undefined8 *)(lVar37 + 0x10) = uVar32;
        }
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_01911c1c(param_5,lVar43,&local_278);
        lVar37 = plVar42[0xb];
        piVar1 = (int *)(lVar37 + 0xc);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar37 + 0x18) = 0;
          (**(code **)(*plVar42 + 0x20))(plVar42);
        }
      }
      local_d0 = (long *)0x0;
      uStack_c8 = (char *)0x0;
      FUN_00b63974(&local_d0,plVar42 + 0xc0);
      plVar45 = local_d0;
      puVar23 = PTR_DAT_0437a258;
      puVar22 = PTR_DAT_0437a250;
      puVar21 = PTR_DAT_043795e0;
      if (local_d0 != (long *)0x0) {
        if (*(int *)((long)local_d0 + 0xc) != 0) {
          piVar1 = (int *)((long)local_d0 + 0xc);
          iVar29 = *(int *)((long)local_d0 + 0xc);
          do {
            plVar47 = (long *)plVar45[2];
            if (((*puVar22 & 1) == 0) && (iVar30 = __cxa_guard_acquire(puVar22), iVar30 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar30 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar30 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar30 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar30 != 0)) {
                  uVar32 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar32;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar21 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar23 = puVar21;
              __cxa_guard_release(puVar22);
            }
            while( true ) {
              if (plVar47 == (long *)0x0) goto LAB_019101bc;
              if (plVar47 == (long *)puVar23) break;
              plVar47 = (long *)*plVar47;
            }
            iVar30 = *piVar1;
            if (iVar30 == iVar29) {
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar37 = plVar45[3];
                plVar45 = (long *)0x0;
                plVar47 = local_d0;
                if (lVar37 != 0) {
                  plVar45 = (long *)(lVar37 + -0x50);
                }
                goto joined_r0x0191023c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar29 = iVar30;
          } while (iVar30 != 0);
        }
LAB_019101bc:
        plVar45 = (long *)0x0;
        plVar47 = local_d0;
joined_r0x0191023c:
        local_d0 = plVar47;
        if (plVar47 != (long *)0x0) {
          plVar33 = plVar47 + 1;
          do {
            iVar29 = (int)*plVar33 + -1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar24) {
              *(int *)plVar33 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            plVar47[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_98 = (long *)*plVar47;
            FUN_02a44274(lVar37 + 0xd8,&local_98);
          }
        }
        if (plVar45 != (long *)0x0) {
          if ((int)plVar45[0x6b] != 0 || *(int *)((long)plVar45 + 0x354) != 0) {
            FUN_01b9ee74(plVar42);
            lVar37 = plVar45[0xb];
            piVar1 = (int *)(lVar37 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar24) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 == 0) {
              *(undefined8 *)(lVar37 + 0x18) = 0;
              pcVar39 = *(code **)(*plVar45 + 0x20);
              goto LAB_0190e8d0;
            }
            goto LAB_0190dfd8;
          }
          lVar37 = plVar45[0xb];
          piVar1 = (int *)(lVar37 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar37 + 0x18) = 0;
            (**(code **)(*plVar45 + 0x20))(plVar45);
          }
        }
      }
      FUN_01b3ac14(plVar42,&local_190);
      FUN_01ba339c(plVar42,0);
    }
LAB_0190dfd8:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar29 = __cxa_guard_acquire(PTR_DAT_04379678), iVar29 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar37 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar37;
    plVar45 = *(long **)(lVar37 + 0x100);
    if (plVar45 != (long *)0x0) {
      plVar47 = plVar45 + 10;
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar24) {
          *(int *)plVar47 = (int)*plVar47 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar47 = (long *)plVar45[0x20];
    if (plVar47 != (long *)0x0) {
      plVar33 = plVar47 + 10;
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar24) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar33 = (long *)plVar47[0xe];
    if (plVar33 != (long *)0x0) {
      plVar44 = plVar33 + 10;
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar24) {
          *(int *)plVar44 = (int)*plVar44 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar44 = (long *)plVar33[0xb];
    if (plVar44 != (long *)0x0) {
      plVar2 = plVar44 + 10;
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar24) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar2 = plVar33 + 10;
    do {
      iVar29 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar24) {
        *(int *)plVar2 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar33 + 0x10))();
    }
    plVar33 = plVar47 + 10;
    do {
      iVar29 = (int)*plVar33 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar24) {
        *(int *)plVar33 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar47 + 0x10))(plVar47);
    }
    plVar47 = plVar45 + 10;
    do {
      iVar29 = (int)*plVar47 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar24) {
        *(int *)plVar47 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar45 + 0x10))(plVar45);
      uVar35 = plVar44[0x1e];
      iVar29 = (int)uVar35;
    }
    else {
      uVar35 = plVar44[0x1e];
      iVar29 = (int)uVar35;
    }
    if (iVar29 != 0) {
      uVar46 = 0;
      do {
        local_d0 = (long *)&DAT_cbf29ce484222645;
        if (uVar46 < (ulong)(plVar44[0x21] - plVar44[0x20] >> 3)) {
          local_d0 = *(long **)(plVar44[0x20] + uVar46 * 8);
        }
        uVar34 = FUN_016a864c(plVar44,&local_d0,1);
        if ((uVar34 & 1) != 0) {
          FUN_016a9288(plVar44,&local_d0);
        }
        uVar46 = uVar46 + 1;
      } while ((uVar35 & 0xffffffff) != uVar46);
    }
    FUN_016a9724(plVar44);
    *piVar48 = *piVar48 + 1;
    plVar45 = plVar44 + 10;
    do {
      iVar29 = (int)*plVar45 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar45,0x10);
      if (bVar24) {
        *(int *)plVar45 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar47 = local_190;
    if (iVar29 != 0) goto switchD_0190c63c_caseD_12;
    (**(code **)(*plVar44 + 0x10))(plVar44);
    cVar3 = *(char *)(lVar43 + 0x128);
    goto joined_r0x0190e268;
  case 0x12:
switchD_0190c63c_caseD_12:
    local_190 = plVar47;
    cVar3 = *(char *)(lVar43 + 0x128);
joined_r0x0190e268:
    if (cVar3 == '\0') {
      (**(code **)(*plVar42 + 0x10))(&local_190,plVar42);
      local_290 = (undefined8 *)0x0;
      uStack_288 = 0;
      FUN_00946790(&local_290,&local_190);
      plVar45 = local_190;
      if (local_190 != (long *)0x0) {
        plVar47 = local_190 + 1;
        do {
          iVar29 = (int)*plVar47 + -1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar24) {
            *(int *)plVar47 = iVar29;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 0) {
          local_190[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar43 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar43;
          local_d0 = (long *)*plVar45;
          FUN_02a44274(lVar43 + 0xd8,&local_d0);
        }
      }
      uVar35 = FUN_01915af4(&local_290);
      puVar31 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_290 + 1);
        do {
          iVar29 = *piVar1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          local_290[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar43 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar43;
          local_190 = (long *)*puVar31;
          FUN_02a44274(lVar43 + 0xd8,&local_190);
        }
      }
      plVar47 = local_190;
      if ((uVar35 & 1) != 0) goto switchD_0190c63c_default;
      uVar35 = FUN_01ba2f1c(plVar42);
      if ((uVar35 & 1) != 0) {
        (**(code **)(*plVar42 + 0x10))(&local_190,plVar42);
        local_2a0 = (undefined8 *)0x0;
        uStack_298 = 0;
        FUN_00946790(&local_2a0,&local_190);
        plVar45 = local_190;
        if (local_190 != (long *)0x0) {
          plVar47 = local_190 + 1;
          do {
            iVar29 = (int)*plVar47 + -1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar24) {
              *(int *)plVar47 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            local_190[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar43 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar43;
            local_d0 = (long *)*plVar45;
            FUN_02a44274(lVar43 + 0xd8,&local_d0);
          }
        }
        FUN_01915c94(&local_2a0,1);
        puVar31 = local_2a0;
        if (local_2a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_2a0 + 1);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            local_2a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar43 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar43;
            local_190 = (long *)*puVar31;
            FUN_02a44274(lVar43 + 0xd8,&local_190);
          }
        }
        local_2b0 = (undefined8 *)0x0;
        uStack_2a8 = 0;
        FUN_008c4b3c(&local_2b0,&local_e0);
        FUN_01915e78(&local_2b0,1);
        puVar31 = local_2b0;
        if (local_2b0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_2b0 + 1);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            local_2b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar43 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar43;
            local_190 = (long *)*puVar31;
            FUN_02a44274(lVar43 + 0xd8,&local_190);
          }
        }
        *(undefined2 *)((long)plVar42 + 0x81d) = 0;
        plVar42[0x153] = plVar42[0x153] & 0xfffffffffffffffe;
        *(undefined1 *)((long)plVar42 + 0x81f) = 0;
        *(undefined1 *)(plVar42 + 0x15a) = 1;
        if ((char)plVar42[0x166] != '\0') {
          FUN_01ba08ec(plVar42);
          FUN_01ba0a50(plVar42);
        }
      }
    }
    goto LAB_0190e26c;
  }
  *piVar48 = iVar29;
joined_r0x0190ca00:
  if (local_e0 != (undefined8 *)0x0) {
LAB_0190ca04:
    puVar31 = local_e0;
    piVar48 = (int *)(local_e0 + 1);
    do {
      iVar29 = *piVar48;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
      if (bVar24) {
        *piVar48 = iVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 + -1 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar43 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar43;
      local_190 = (long *)*puVar31;
      FUN_02a44274(lVar43 + 0xd8,&local_190);
    }
  }
LAB_0190ca5c:
  if (plVar42 != (long *)0x0) {
    lVar43 = plVar42[0xb];
    piVar48 = (int *)(lVar43 + 0xc);
    do {
      iVar29 = *piVar48;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(piVar48,0x10);
      if (bVar24) {
        *piVar48 = iVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 + -1 == 0) {
      *(undefined8 *)(lVar43 + 0x18) = 0;
      (**(code **)(*plVar42 + 0x20))(plVar42);
    }
  }
  return;
}


