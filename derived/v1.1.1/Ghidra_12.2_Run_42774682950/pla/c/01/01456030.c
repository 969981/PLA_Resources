/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01456030; name: FUN_01456030
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01456030(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  undefined1 *puVar43;
  long *plVar44;
  time_t local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined1 local_1b8 [12];
  int local_1ac;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  plVar42 = *(long **)(param_1 + 0x2c8);
  if (plVar42 != (long *)0x0) {
    plVar34 = plVar42 + 10;
    do {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar16) {
        *(int *)plVar34 = (int)*plVar34 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar34 = (long *)plVar42[0x37];
  if (plVar34 != (long *)0x0) {
    lVar33 = plVar34[0xb];
    if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) goto LAB_01457a94;
    if (*(long *)(lVar33 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
      *(undefined8 *)(lVar33 + 0x10) = uVar20;
    }
    piVar3 = (int *)(lVar33 + 0xc);
    do {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar16) {
        *piVar3 = *piVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  puVar13 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_04379558), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar15 = PTR_DAT_04379568;
  puVar14 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_78);
  if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379558), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar33 = *(long *)puVar14;
  *(long *)puVar15 = lVar33;
  plVar37 = *(long **)(lVar33 + 0x220);
  if (plVar37 != (long *)0x0) {
    lVar33 = plVar37[0xb];
    if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) goto LAB_01457a94;
    if (*(long *)(lVar33 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
      *(undefined8 *)(lVar33 + 0x10) = uVar20;
    }
    piVar3 = (int *)(lVar33 + 0xc);
    do {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar16) {
        *piVar3 = *piVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379558), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar15 = *(undefined8 *)puVar14;
  FUN_01148f20(&local_80);
  if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379558), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar33 = *(long *)puVar14;
  *(long *)puVar15 = lVar33;
  plVar35 = *(long **)(lVar33 + 0x228);
  if (plVar35 != (long *)0x0) {
    lVar33 = plVar35[0xb];
    if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) goto LAB_01457a94;
    if (*(long *)(lVar33 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
      *(undefined8 *)(lVar33 + 0x10) = uVar20;
    }
    piVar3 = (int *)(lVar33 + 0xc);
    do {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar16) {
        *piVar3 = *piVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
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
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  lVar21 = *(long *)(param_1 + 0x2c8);
  plVar39 = *(long **)(lVar21 + 0x148);
  lVar33 = *(long *)(lVar21 + 0x150);
  plVar36 = plVar39;
  if ((lVar33 != 0) && (*plVar39 != -0x3fc4d3df594a3136)) {
    lVar27 = 0;
    do {
      if (lVar33 * 0x30 + -0x30 == lVar27) goto LAB_01456264;
      lVar4 = lVar27 + 0x30;
      lVar11 = lVar27 + 0x30;
      lVar27 = lVar4;
    } while (*(long *)((long)plVar39 + lVar11) != -0x3fc4d3df594a3136);
    plVar36 = (long *)((long)plVar39 + lVar4);
  }
  if ((plVar36 != plVar39 + lVar33 * 6) && (lVar27 = plVar36[4], lVar27 != 0)) {
    *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 1;
    lVar21 = *(long *)(param_1 + 0x2c8);
    plVar39 = *(long **)(lVar21 + 0x148);
    lVar33 = *(long *)(lVar21 + 0x150);
  }
LAB_01456264:
  plVar36 = plVar39;
  if ((lVar33 != 0) && (*plVar39 != -0x3fc4d4df594a32e9)) {
    lVar27 = 0;
    do {
      if (lVar33 * 0x30 + -0x30 == lVar27) goto LAB_014562e8;
      lVar4 = lVar27 + 0x30;
      lVar11 = lVar27 + 0x30;
      lVar27 = lVar4;
    } while (*(long *)((long)plVar39 + lVar11) != -0x3fc4d4df594a32e9);
    plVar36 = (long *)((long)plVar39 + lVar4);
  }
  if ((plVar36 != plVar39 + lVar33 * 6) && (lVar27 = plVar36[4], lVar27 != 0)) {
    *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 1;
    lVar21 = *(long *)(param_1 + 0x2c8);
    plVar39 = *(long **)(lVar21 + 0x148);
    lVar33 = *(long *)(lVar21 + 0x150);
  }
LAB_014562e8:
  plVar36 = plVar39;
  if ((lVar33 != 0) && (*plVar39 != -0x3fc4d5df594a349c)) {
    lVar27 = lVar33 * 0x30;
    plVar38 = plVar39;
    do {
      lVar27 = lVar27 + -0x30;
      if (lVar27 == 0) goto LAB_0145636c;
      plVar36 = plVar38 + 6;
      plVar44 = plVar38 + 6;
      plVar38 = plVar36;
    } while (*plVar44 != -0x3fc4d5df594a349c);
  }
  if ((plVar36 != plVar39 + lVar33 * 6) && (lVar33 = plVar36[4], lVar33 != 0)) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 1;
    lVar21 = *(long *)(param_1 + 0x2c8);
  }
LAB_0145636c:
  local_1b8._0_8_ = &DAT_aa9747b0d2909569;
  stack0xfffffffffffffe50 = "pane_A_alignment_01";
  local_1a8._0_4_ = 0x13;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  lVar33 = FUN_00d648b4(lVar21,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 1;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_04379678), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar33 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar33;
  plVar36 = *(long **)(lVar33 + 0xc0);
  if (plVar36 != (long *)0x0) {
    lVar33 = plVar36[0xb];
    if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) goto LAB_01457a94;
    if (*(long *)(lVar33 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
      *(undefined8 *)(lVar33 + 0x10) = uVar20;
    }
    piVar3 = (int *)(lVar33 + 0xc);
    do {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar16) {
        *piVar3 = *piVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_1d8 = plVar36[0x18];
  local_70[0] = local_1d8 + plVar36[0x19] * 8;
  FUN_0145ae30(local_1b8,&local_1d8,local_70);
  if ((long *)local_1b8._0_8_ != (long *)(plVar36[0x18] + plVar36[0x19] * 8)) {
    plVar39 = *(long **)local_1b8._0_8_;
    puVar22 = (undefined8 *)(**(code **)plVar39[10])(plVar39 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar18 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar18 != 0)) {
      uVar20 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar20;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar22 != (undefined8 *)0x0) {
LAB_01456498:
      if (puVar22 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01456c5c;
      lVar33 = plVar39[0xb];
      if (*(undefined8 **)(lVar33 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar33 + 0x10) == 0) {
          uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
          *(undefined8 *)(lVar33 + 0x10) = uVar20;
        }
        piVar3 = (int *)(lVar33 + 0xc);
        do {
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          plVar38 = plVar39;
        } while (cVar8 != '\0');
        goto LAB_014564dc;
      }
      goto LAB_01457a94;
    }
  }
  plVar38 = (long *)0x0;
LAB_014564dc:
  puVar43 = &DAT_cbf29ce484222645;
  if (plVar38 != (long *)0x0) {
    FUN_01e564f8(local_1b8,plVar38);
    uVar20 = local_1b8._0_8_;
    puVar14 = PTR_DAT_0437c670;
    puVar13 = PTR_DAT_0437c668;
    if ((long *)local_1b8._0_8_ == (long *)0x0) {
      puVar43 = &DAT_cbf29ce484222645;
    }
    else {
      if (*(int *)(local_1b8._0_8_ + 0xc) != 0) {
        piVar3 = (int *)(local_1b8._0_8_ + 0xc);
        iVar18 = *(int *)(local_1b8._0_8_ + 0xc);
        do {
          plVar39 = *(long **)(uVar20 + 0x10);
          if (((*puVar13 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar13), iVar19 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)) {
              uVar24 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar24;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar14 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar13);
          }
          while( true ) {
            if (plVar39 == (long *)0x0) goto LAB_01457b3c;
            if (plVar39 == (long *)puVar14) break;
            plVar39 = (long *)*plVar39;
          }
          iVar19 = *piVar3;
          if (iVar19 == iVar18) {
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar16) {
              *piVar3 = iVar18 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') {
              lVar33 = *(long *)(uVar20 + 0x18);
              plVar39 = (long *)0x0;
              plVar44 = (long *)local_1b8._0_8_;
              if (lVar33 != 0) {
                plVar39 = (long *)(lVar33 + -0x50);
              }
              goto joined_r0x014578e4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = iVar19;
        } while (iVar19 != 0);
      }
LAB_01457b3c:
      plVar39 = (long *)0x0;
      plVar44 = (long *)local_1b8._0_8_;
joined_r0x014578e4:
      local_1b8._0_8_ = plVar44;
      if (plVar44 != (long *)0x0) {
        plVar41 = plVar44 + 1;
        do {
          iVar18 = (int)*plVar41 + -1;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar41,0x10);
          if (bVar16) {
            *(int *)plVar41 = iVar18;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar18 == 0) {
          plVar44[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_1d8 = *plVar44;
          FUN_02a44274(lVar33 + 0xd8,&local_1d8);
        }
      }
      puVar43 = &DAT_cbf29ce484222645;
      if (plVar39 != (long *)0x0) {
        plVar44 = (long *)plVar39[0xe];
        if (plVar44 == (long *)0x0) {
          puVar43 = &DAT_cbf29ce484222645;
          if (_DAT_00000210 == 2) {
            plVar44 = (long *)0x0;
            bVar16 = true;
LAB_014579f8:
            FUN_0199edc8(local_1b8,plVar44);
            uVar20 = local_1b8._0_8_;
            if ((long *)local_1b8._0_8_ == (long *)0x0) {
              plVar40 = (long *)0x0;
            }
            else {
              if (*(int *)(local_1b8._0_8_ + 0xc) != 0) {
                piVar3 = (int *)(local_1b8._0_8_ + 0xc);
                iVar18 = *(int *)(local_1b8._0_8_ + 0xc);
                do {
                  plVar41 = *(long **)(uVar20 + 0x10);
                  if (((*PTR_DAT_043796f0 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar19 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)) {
                      uVar24 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)PTR_DAT_043796f8 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_043796f0);
                  }
                  plVar40 = (long *)0x0;
                  plVar12 = (long *)local_1b8._0_8_;
                  if (plVar41 == (long *)0x0) goto joined_r0x01457ca8;
                  while (plVar41 != (long *)PTR_DAT_043796f8) {
                    plVar41 = (long *)*plVar41;
                    if (plVar41 == (long *)0x0) {
                      plVar40 = (long *)0x0;
                      goto joined_r0x01457ca8;
                    }
                  }
                  iVar19 = *piVar3;
                  if (iVar19 == iVar18) {
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar9) {
                      *piVar3 = iVar18 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                    if (cVar8 == '\0') {
                      lVar33 = *(long *)(uVar20 + 0x18);
                      plVar40 = (long *)0x0;
                      if (lVar33 != 0) {
                        plVar40 = (long *)(lVar33 + -0x50);
                      }
                      goto joined_r0x01457ca8;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar18 = iVar19;
                } while (iVar19 != 0);
              }
              plVar40 = (long *)0x0;
              plVar12 = (long *)local_1b8._0_8_;
joined_r0x01457ca8:
              local_1b8._0_8_ = plVar12;
              if (plVar12 != (long *)0x0) {
                plVar41 = plVar12 + 1;
                do {
                  iVar18 = (int)*plVar41 + -1;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                  if (bVar9) {
                    *(int *)plVar41 = iVar18;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (iVar18 == 0) {
                  plVar12[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar33 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar33;
                  local_1d8 = *plVar12;
                  FUN_02a44274(lVar33 + 0xd8,&local_1d8);
                }
              }
            }
            if (!bVar16) {
              lVar33 = plVar44[0xb];
              piVar3 = (int *)(lVar33 + 0xc);
              do {
                iVar18 = *piVar3;
                cVar8 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar16) {
                  *piVar3 = iVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 + -1 == 0) {
                *(undefined8 *)(lVar33 + 0x18) = 0;
                (**(code **)(*plVar44 + 0x20))(plVar44);
              }
            }
            puVar43 = &DAT_cbf29ce484222645;
            if (plVar40 != (long *)0x0) {
              puVar43 = (undefined1 *)FUN_01f26800(plVar40);
              lVar33 = plVar40[0xb];
              piVar3 = (int *)(lVar33 + 0xc);
              do {
                iVar18 = *piVar3;
                cVar8 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar16) {
                  *piVar3 = iVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 + -1 == 0) {
                *(undefined8 *)(lVar33 + 0x18) = 0;
                (**(code **)(*plVar40 + 0x20))(plVar40);
              }
            }
          }
        }
        else {
          lVar33 = plVar44[0xb];
          if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) {
LAB_01457a94:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar33 + 0x10) == 0) {
            uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
            *(undefined8 *)(lVar33 + 0x10) = uVar20;
          }
          piVar3 = (int *)(lVar33 + 0xc);
          do {
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar16) {
              *piVar3 = *piVar3 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          lVar21 = plVar44[0xb];
          piVar3 = (int *)(lVar21 + 0xc);
          lVar33 = plVar44[0x42];
          do {
            iVar18 = *piVar3;
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar16) {
              *piVar3 = iVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*plVar44 + 0x20))(plVar44);
          }
          puVar43 = &DAT_cbf29ce484222645;
          if ((int)lVar33 == 2) {
            plVar44 = (long *)plVar39[0xe];
            if (plVar44 == (long *)0x0) {
              bVar16 = true;
            }
            else {
              lVar33 = plVar44[0xb];
              if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) goto LAB_01457a94;
              if (*(long *)(lVar33 + 0x10) == 0) {
                uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
                *(undefined8 *)(lVar33 + 0x10) = uVar20;
              }
              piVar3 = (int *)(lVar33 + 0xc);
              do {
                cVar8 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar16) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              bVar16 = false;
            }
            goto LAB_014579f8;
          }
        }
        lVar33 = plVar39[0xb];
        piVar3 = (int *)(lVar33 + 0xc);
        do {
          iVar18 = *piVar3;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
            *piVar3 = iVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar33 + 0x18) = 0;
          (**(code **)(*plVar39 + 0x20))(plVar39);
        }
      }
    }
    lVar33 = plVar38[0xb];
    piVar3 = (int *)(lVar33 + 0xc);
    do {
      iVar18 = *piVar3;
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar16) {
        *piVar3 = iVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x18) = 0;
      (**(code **)(*plVar38 + 0x20))(plVar38);
    }
  }
  uVar23 = FUN_01459510();
  if ((uVar23 & 1) == 0) {
    FUN_00d2e2f0(0x3f800000,param_1 + 0x180,"anime_switch");
    FUN_010c6160(plVar34,0,local_78);
    local_1b8._0_4_ = 0x1d735cf1;
    local_1b8._4_4_ = -0x79e4d879;
    stack0xfffffffffffffe50 = "pane_T_p_player_01";
    local_1a8._0_4_ = 0x12;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x59ab5c3decec4c11,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = 0x67278353;
    local_1b8._4_4_ = -0x2ec4118a;
    stack0xfffffffffffffe50 = "pane_T_h_current_time_01";
    local_1a8._0_4_ = 0x18;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c9801feb80f86b6,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = -0x6d9588a3;
    local_1b8._4_4_ = -0x3542dd37;
    stack0xfffffffffffffe50 = "pane_T_h_current_zone_00";
    local_1a8._0_4_ = 0x18;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c9802feb80f8869,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (puVar43 == &DAT_cbf29ce484222645) {
      FUN_02c393b4(plVar34,0,0);
    }
    else {
      FUN_010c7198(plVar34,0,puVar43);
    }
    local_1b8._0_4_ = 0x3649e952;
    local_1b8._4_4_ = 0x6cdbb822;
    stack0xfffffffffffffe50 = "pane_T_p_current_zone_01";
    local_1a8._0_4_ = 0x18;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0xb51603e29e8da41b,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = -0x594a2f83;
    local_1b8._4_4_ = -0x3fc4d2e0;
    stack0xfffffffffffffe50 = "pane_T_last_report_00";
    local_1a8._0_4_ = 0x15;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c9805feb80f8d82,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = 0x206fed7f;
    local_1b8._4_4_ = -0x13cbaab8;
    stack0xfffffffffffffe50 = "pane_T_h_playtime_01";
    local_1a8._0_4_ = 0x14;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c97fffeb80f8350,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
LAB_0145721c:
    plVar39 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar33 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar33 != 0) && (*plVar39 != -0x7f30580506f4dfed)) {
      plVar38 = plVar39 + lVar33 * 6;
      lVar33 = lVar33 * 0x30;
      do {
        lVar33 = lVar33 + -0x30;
        if (lVar33 == 0) {
          plVar39 = plVar38;
          break;
        }
        plVar41 = plVar39 + 6;
        plVar44 = plVar39 + 6;
        plVar39 = plVar41;
      } while (*plVar44 != -0x7f30580506f4dfed);
    }
    *(byte *)(plVar39[4] + 0x58) = *(byte *)(plVar39[4] + 0x58) | 1;
    local_1b8._0_4_ = 0x61dd7259;
    local_1b8._4_4_ = 0x70e3a80;
    stack0xfffffffffffffe50 = "pane_T_option_00";
    local_1a8._0_4_ = 0x10;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0xc997530ce812a97f,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = -0x2d6f6c4a;
    local_1b8._4_4_ = -0x5568b950;
    stack0xfffffffffffffe50 = "pane_A_alignment_00";
    local_1a8._0_4_ = 0x13;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    lVar33 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (lVar33 != 0) {
      *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 1;
      FUN_00256608(lVar33);
    }
    local_1b8._0_4_ = -0xc5fdab6;
    local_1b8._4_4_ = -0x2950f2d;
    stack0xfffffffffffffe50 = "pane_T_id_player_01";
    local_1a8._0_4_ = 0x13;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x775ebad9c87c2be9,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = -0x12184364;
    local_1b8._4_4_ = -0x36b04c1a;
    stack0xfffffffffffffe50 = "pane_T_h_current_date_01";
    local_1a8._0_4_ = 0x18;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c9801feb80f86b6,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = 0x3649e79f;
    local_1b8._4_4_ = 0x6cdbb722;
    stack0xfffffffffffffe50 = "pane_T_p_current_zone_02";
    local_1a8._0_4_ = 0x18;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c9802feb80f8869,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    local_1b8._0_4_ = 0x206febcc;
    local_1b8._4_4_ = -0x13cbabb8;
    stack0xfffffffffffffe50 = "pane_T_h_playtime_00";
    local_1a8._0_4_ = 0x14;
    local_1a8._4_4_ = 0;
    local_1a0 = (long *)0x0;
    FUN_0145923c(param_1,0x5c97fffeb80f8350,local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (plVar36 != (long *)0x0) {
      lVar33 = plVar36[0xb];
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*plVar36 + 0x20))(plVar36);
      }
    }
    if (plVar35 != (long *)0x0) {
      lVar33 = plVar35[0xb];
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*plVar35 + 0x20))(plVar35);
      }
    }
    if (local_80 != (long *)0x0) {
      lVar33 = *(long *)((long)local_80 + 0x58);
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (plVar37 != (long *)0x0) {
      lVar33 = plVar37[0xb];
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*plVar37 + 0x20))(plVar37);
      }
    }
    if (local_78 != (long *)0x0) {
      lVar33 = local_78[0xb];
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (plVar34 != (long *)0x0) {
      lVar33 = plVar34[0xb];
      piVar3 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = iVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
    }
    if (plVar42 != (long *)0x0) {
      plVar34 = plVar42 + 10;
      do {
        iVar18 = (int)*plVar34 + -1;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar16) {
          *(int *)plVar34 = iVar18;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*plVar42 + 0x10))(plVar42);
      }
    }
    return;
  }
  FUN_00d2e2f0(0,param_1 + 0x180,"anime_switch");
  FUN_01459744(param_1);
  FUN_010c6160(plVar34,0,local_78);
  local_1b8._0_4_ = 0x1d735b3e;
  local_1b8._4_4_ = -0x79e4d979;
  stack0xfffffffffffffe50 = "pane_T_p_player_00";
  local_1a8._0_4_ = 0x12;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x59ab5c3decec4c11,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  uVar17 = FUN_01123f70(local_78);
  FUN_02c395d0(plVar34,0,uVar17,6,2,1);
  local_1b8._0_4_ = -0xc5fd903;
  local_1b8._4_4_ = -0x2950e2d;
  stack0xfffffffffffffe50 = "pane_T_id_player_00";
  local_1a8._0_4_ = 0x13;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x775b52d9c879455a,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  local_1d8 = FUN_0112bcb4(plVar37);
  localtime_r(&local_1d8,(tm *)local_1b8);
  if ((int)plVar34[0x12] != 0) {
    lVar33 = 0;
    uVar23 = 0;
    do {
      *(undefined8 *)(plVar34[0x13] + lVar33 + 8) = 0;
      lVar21 = plVar34[0x13];
      lVar27 = *(long *)(lVar21 + lVar33);
      if (*(char *)(lVar27 + 0x7c) != '\0') {
        **(undefined2 **)(lVar27 + 0x58) = 0;
        *(undefined2 *)(lVar27 + 0x7a) = 0;
        lVar21 = plVar34[0x13];
      }
      lVar21 = lVar21 + lVar33;
      lVar33 = lVar33 + 0x18;
      *(ushort *)(lVar21 + 0x12) = *(ushort *)(lVar21 + 0x12) & 0xfffe;
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(uint *)(plVar34 + 0x12));
  }
  FUN_02c395d0(plVar34,0,local_1a8._4_4_ + 0x76c,4,2,1);
  FUN_02c395d0(plVar34,1,(int)local_1a8 + 1,2,2,1);
  FUN_02c395d0(plVar34,2,local_1ac,2,2,1);
  local_1d8 = 0x770d07a6ab8c62a;
  pcStack_1d0 = "pane_T_p_registration_00";
  local_1c8 = 0x18;
  local_1c0 = (long *)0x0;
  FUN_0145923c(param_1,0x775b4cd9c8793b28,&local_1d8);
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  local_1d8 = 0x2f55bf4cbaae4e32;
  pcStack_1d0 = "pane_T_h_registration_00";
  local_1c8 = 0x18;
  local_1c0 = (long *)0x0;
  FUN_0145923c(param_1,0x775b4fd9c8794041,&local_1d8);
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  local_1b8._0_4_ = 0x67278353;
  local_1b8._4_4_ = -0x2ec4118a;
  stack0xfffffffffffffe50 = "pane_T_h_current_time_01";
  local_1a8._0_4_ = 0x18;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x5c9801feb80f86b6,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (puVar43 == &DAT_cbf29ce484222645) {
    FUN_02c393b4(plVar34,0,0);
  }
  else {
    FUN_010c7198(plVar34,0,puVar43);
  }
  local_1b8._0_4_ = 0x3649eb05;
  local_1b8._4_4_ = 0x6cdbb922;
  stack0xfffffffffffffe50 = "pane_T_p_current_zone_00";
  local_1a8._0_4_ = 0x18;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0xb51603e29e8da41b,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  local_1b8._0_4_ = -0x594a2f83;
  local_1b8._4_4_ = -0x3fc4d2e0;
  stack0xfffffffffffffe50 = "pane_T_last_report_00";
  local_1a8._0_4_ = 0x15;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x5c9805feb80f8d82,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  plVar39 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar33 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar33 == 0) || (*plVar39 == -0x5bd4259de6b1a9c5)) {
    plVar38 = plVar39;
  }
  else {
    lVar21 = lVar33 * 0x30;
    plVar44 = plVar39;
    do {
      lVar21 = lVar21 + -0x30;
      if (lVar21 == 0) goto LAB_01456a18;
      plVar41 = plVar44 + 6;
      plVar38 = plVar44 + 6;
      plVar44 = plVar44 + 6;
    } while (*plVar41 != -0x5bd4259de6b1a9c5);
  }
  if (plVar38 == plVar39 + lVar33 * 6) {
LAB_01456a18:
    lVar33 = 0;
  }
  else {
    lVar33 = plVar38[4];
  }
  *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  uVar23 = ((long *)plVar35[0x37])[1];
  if (uVar23 != 0) {
    uVar28 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar29 = uVar23 - 1 & 0xc63b8b496c6c79f0;
    }
    else if (uVar23 < 0xc63b8b496c6c79f1) {
      uVar29 = 0;
      if (uVar23 != 0) {
        uVar29 = 0xc63b8b496c6c79f0 / uVar23;
      }
      uVar29 = 0xc63b8b496c6c79f0 - uVar29 * uVar23;
    }
    else {
      uVar29 = 0xc63b8b496c6c79f0;
    }
    plVar39 = *(long **)(*(long *)plVar35[0x37] + uVar29 * 8);
    if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar39[1] == 0xc63b8b496c6c79f0) {
            if (plVar39[2] == -0x39c474b693938610) goto LAB_01456cb8;
          }
          else if ((plVar39[1] & uVar23 - 1) != uVar29) break;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar39[1];
          if (uVar28 == 0xc63b8b496c6c79f0) {
            if (plVar39[2] == -0x39c474b693938610) goto LAB_01456cb8;
          }
          else {
            if (uVar23 <= uVar28) {
              uVar10 = 0;
              if (uVar23 != 0) {
                uVar10 = uVar28 / uVar23;
              }
              uVar28 = uVar28 - uVar10 * uVar23;
            }
            if (uVar28 != uVar29) break;
          }
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
    }
  }
LAB_01456cc0:
  uVar17 = FUN_0112e868(local_80,0);
  *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 1;
  local_1b8._0_4_ = -0x532f3c1d;
  local_1b8._4_4_ = -0x4efc43f5;
  stack0xfffffffffffffe50 = "pane_T_h_pokedex_00";
  local_1a8._0_4_ = 0x13;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x5c9800feb80f8503,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  FUN_02c395d0(plVar34,0,uVar17,3,0,1);
  local_1b8._0_4_ = -0x2cffddc5;
  local_1b8._4_4_ = -0x7a28aefb;
  stack0xfffffffffffffe50 = "pane_T_p_pokedex_00";
  local_1a8._0_4_ = 0x13;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,0x387225c24203a27e,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  local_1b8._0_4_ = -0x2d6f6fb0;
  local_1b8._4_4_ = -0x5568bb50;
  stack0xfffffffffffffe50 = "pane_A_alignment_02";
  local_1a8._0_4_ = 0x13;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  lVar33 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 1;
    FUN_00256608(lVar33);
  }
LAB_01456e00:
  local_1b8._0_4_ = 0x50fe632a;
  local_1b8._4_4_ = 0x52daf762;
  stack0xfffffffffffffe50 = "WSYS_U_RANK";
  local_1a8._0_4_ = 0xb;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  iVar18 = FUN_010f5878(plVar35,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  snprintf((char *)&local_180,0x100,"msg_ui_report_star%02d",iVar18 + 1);
  puVar43 = &DAT_cbf29ce484222645;
  if ((byte)local_180 != 0) {
    puVar43 = &DAT_cbf29ce484222645;
    pbVar25 = (byte *)((ulong)&local_180 | 1);
    bVar6 = (byte)local_180;
    do {
      puVar43 = (undefined1 *)(((ulong)puVar43 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (bVar6 != 0);
  }
  local_1b8._0_4_ = 0x29c41a0d;
  local_1b8._4_4_ = 0x474c2d38;
  stack0xfffffffffffffe50 = "pane_T_h_star_00";
  local_1a8._0_4_ = 0x10;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,puVar43,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  iVar18 = FUN_01091730();
  if (iVar18 < 100) {
    FUN_02c395d0(plVar34,0,iVar18,3,0,1);
    uVar23 = 0x4dd9c8793cdb;
  }
  else {
    uVar23 = 0x4ad9c87937c2;
  }
  stack0xfffffffffffffe50 = "pane_T_p_star_00";
  local_1b8._0_4_ = -0x57a17c7b;
  local_1b8._4_4_ = -0x6a968c75;
  local_1a8._0_4_ = 0x10;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  FUN_0145923c(param_1,uVar23 | 0x775b000000000000,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  local_1b8._0_4_ = 0x50fe632a;
  local_1b8._4_4_ = 0x52daf762;
  stack0xfffffffffffffe50 = "WSYS_U_RANK";
  local_1a8._0_4_ = 0xb;
  local_1a8._4_4_ = 0;
  local_1a0 = (long *)0x0;
  iVar18 = FUN_010f5878(plVar35,local_1b8);
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  iVar19 = 0;
  do {
    snprintf((char *)&local_180,0x100,"pane_P_icon_star_%02d",iVar19);
    puVar43 = &DAT_cbf29ce484222645;
    if ((byte)local_180 != 0) {
      puVar43 = &DAT_cbf29ce484222645;
      pbVar25 = (byte *)((ulong)&local_180 | 1);
      bVar6 = (byte)local_180;
      do {
        puVar43 = (undefined1 *)(((ulong)puVar43 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar6 != 0);
    }
    puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar33 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar33 != 0) && ((undefined1 *)*puVar22 != puVar43)) {
      puVar30 = puVar22 + lVar33 * 6;
      lVar33 = lVar33 * 0x30;
      do {
        lVar33 = lVar33 + -0x30;
        if (lVar33 == 0) {
          puVar22 = puVar30;
          break;
        }
        puVar5 = puVar22 + 6;
        puVar1 = puVar22 + 6;
        puVar22 = puVar5;
      } while ((undefined1 *)*puVar1 != puVar43);
    }
    iVar2 = iVar19 + 1;
    bVar7 = *(byte *)(puVar22[4] + 0x58);
    bVar6 = bVar7 | 1;
    if (iVar18 <= iVar19) {
      bVar6 = bVar7 & 0xfe;
    }
    *(byte *)(puVar22[4] + 0x58) = bVar6;
    iVar19 = iVar2;
  } while (iVar2 != 10);
  iVar18 = 0;
LAB_01457064:
  iVar19 = iVar18 + 1;
  snprintf((char *)&local_180,0x100,"FSYS_NS_%02d_CLEARED",iVar19);
  puVar43 = &DAT_cbf29ce484222645;
  if ((byte)local_180 != 0) {
    puVar43 = &DAT_cbf29ce484222645;
    pbVar25 = (byte *)((ulong)&local_180 | 1);
    bVar6 = (byte)local_180;
    do {
      puVar43 = (undefined1 *)(((ulong)puVar43 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (bVar6 != 0);
  }
  puVar31 = (undefined1 *)((long *)plVar35[0x37])[1];
  if (puVar31 == (undefined1 *)0x0) {
LAB_014576ec:
    bVar16 = false;
  }
  else {
    uVar23 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      puVar26 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar43);
    }
    else {
      puVar26 = puVar43;
      if (puVar31 <= puVar43) {
        uVar28 = 0;
        if (puVar31 != (undefined1 *)0x0) {
          uVar28 = (ulong)puVar43 / (ulong)puVar31;
        }
        puVar26 = puVar43 + -(uVar28 * (long)puVar31);
      }
    }
    plVar39 = *(long **)(*(long *)plVar35[0x37] + (long)puVar26 * 8);
    if ((plVar39 == (long *)0x0) || (plVar39 = (long *)*plVar39, plVar39 == (long *)0x0))
    goto LAB_014576ec;
    if (1 < uVar23) {
      do {
        puVar32 = (undefined1 *)plVar39[1];
        if (puVar32 == puVar43) {
          if ((undefined1 *)plVar39[2] == puVar43) goto LAB_01457160;
        }
        else {
          if (puVar31 <= puVar32) {
            uVar23 = 0;
            if (puVar31 != (undefined1 *)0x0) {
              uVar23 = (ulong)puVar32 / (ulong)puVar31;
            }
            puVar32 = puVar32 + -(uVar23 * (long)puVar31);
          }
          if (puVar32 != puVar26) break;
        }
        plVar39 = (long *)*plVar39;
      } while (plVar39 != (long *)0x0);
      goto LAB_014576ec;
    }
    do {
      if ((undefined1 *)plVar39[1] == puVar43) {
        if ((undefined1 *)plVar39[2] == puVar43) goto LAB_01457160;
      }
      else if ((undefined1 *)((ulong)plVar39[1] & (ulong)(puVar31 + -1)) != puVar26)
      goto LAB_014576ec;
      plVar39 = (long *)*plVar39;
      bVar16 = false;
    } while (plVar39 != (long *)0x0);
  }
  goto LAB_0145716c;
LAB_01456c5c:
  puVar22 = (undefined8 *)*puVar22;
  plVar38 = (long *)0x0;
  if (puVar22 == (undefined8 *)0x0) goto LAB_014564dc;
  goto LAB_01456498;
LAB_01456cb8:
  if ((char)plVar39[3] != '\0') goto LAB_01456e00;
  goto LAB_01456cc0;
LAB_01457160:
  bVar16 = (char)plVar39[3] != '\0';
LAB_0145716c:
  snprintf((char *)&local_180,0x100,"pane_P_stamp_npoke_%02d",iVar18);
  puVar43 = &DAT_cbf29ce484222645;
  if ((byte)local_180 != 0) {
    puVar43 = &DAT_cbf29ce484222645;
    pbVar25 = (byte *)((ulong)&local_180 | 1);
    bVar6 = (byte)local_180;
    do {
      puVar43 = (undefined1 *)(((ulong)puVar43 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (bVar6 != 0);
  }
  puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar33 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar33 != 0) && ((undefined1 *)*puVar22 != puVar43)) {
    puVar30 = puVar22 + lVar33 * 6;
    lVar33 = lVar33 * 0x30;
    do {
      lVar33 = lVar33 + -0x30;
      if (lVar33 == 0) {
        puVar22 = puVar30;
        break;
      }
      puVar5 = puVar22 + 6;
      puVar1 = puVar22 + 6;
      puVar22 = puVar5;
    } while ((undefined1 *)*puVar1 != puVar43);
  }
  bVar7 = *(byte *)(puVar22[4] + 0x58);
  bVar6 = bVar7 | 1;
  if (!bVar16) {
    bVar6 = bVar7 & 0xfe;
  }
  *(byte *)(puVar22[4] + 0x58) = bVar6;
  iVar18 = iVar19;
  if (iVar19 == 5) goto LAB_0145721c;
  goto LAB_01457064;
}


