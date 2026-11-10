/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01332a30; name: FUN_01332a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01332a30(long param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *pcVar21;
  int iVar22;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined4 uVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  uint *puVar32;
  long *plVar33;
  char *pcVar34;
  uint uVar35;
  uint *puVar36;
  undefined8 *puVar37;
  char *pcVar38;
  uint *unaff_x28;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  uint local_1e0;
  uint local_1dc;
  long *local_1d8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 *local_128;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  char local_d4;
  char local_d0;
  char local_cc;
  char local_c8;
  uint local_c4;
  uint *local_c0;
  char *local_b8;
  char *local_b0;
  long local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  
  *(undefined8 *)(param_1 + 0x340) = 0x300000001;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0x1700000004;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  memset((void *)(param_1 + 0x200),0,0x140);
  puVar17 = PTR_DAT_04379678;
  iVar23 = *(int *)(param_1 + 0x84);
  if (6 < iVar23) {
    return;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar22 = __cxa_guard_acquire(PTR_DAT_04379678), iVar22 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar19 = PTR_DAT_04379688;
  puVar18 = PTR_DAT_04379680;
  lVar29 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar29;
  plVar31 = *(long **)(lVar29 + 0x100);
  if (plVar31 != (long *)0x0) {
    plVar33 = plVar31 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar7) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar33 = (long *)plVar31[0x20];
  if (plVar33 != (long *)0x0) {
    plVar24 = plVar33 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar7) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar20 = PTR_DAT_0437ee60;
  plVar24 = (long *)plVar33[0xe];
  if (plVar24 != (long *)0x0) {
    plVar30 = plVar24 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar7) {
        *(int *)plVar30 = (int)*plVar30 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar32 = *(uint **)(puVar20 + (long)iVar23 * 0x18);
  plVar30 = (long *)plVar24[0xb];
  if (plVar30 != (long *)0x0) {
    plVar2 = plVar30 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar2 = plVar24 + 10;
  do {
    iVar23 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar23;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
  plVar24 = plVar33 + 10;
  do {
    iVar23 = (int)*plVar24 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *(int *)plVar24 = iVar23;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
  }
  plVar33 = plVar31 + 10;
  do {
    iVar23 = (int)*plVar33 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar7) {
      *(int *)plVar33 = iVar23;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar31 + 0x10))(plVar31);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar23 = __cxa_guard_acquire(PTR_DAT_04379558), iVar23 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar29 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar29;
  plVar31 = *(long **)(lVar29 + 0x290);
  if (plVar31 == (long *)0x0) {
    bVar4 = *puVar17;
    puVar37 = _DAT_000000d0;
  }
  else {
    lVar29 = plVar31[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01333bd4;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar25 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar25;
    }
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar29 = plVar31[0xb];
    piVar3 = (int *)(lVar29 + 0xc);
    puVar37 = (undefined8 *)plVar31[0x1a];
    do {
      iVar23 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
      bVar4 = *puVar17;
    }
    else {
      bVar4 = *puVar17;
    }
  }
  if (((bVar4 & 1) == 0) && (iVar23 = __cxa_guard_acquire(PTR_DAT_04379678), iVar23 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar29 = *(long *)puVar18;
  *(long *)puVar19 = lVar29;
  plVar31 = *(long **)(lVar29 + 0xc0);
  if (plVar31 != (long *)0x0) {
    lVar29 = plVar31[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
LAB_01333bd4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar25 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar25;
    }
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_80 = (undefined8 *)plVar31[0x18];
  local_70[0] = local_80 + plVar31[0x19];
  FUN_013344e0(&local_b8,&local_80,local_70);
  if (local_b8 != (char *)(plVar31[0x18] + plVar31[0x19] * 8)) {
    plVar33 = *(long **)local_b8;
    puVar26 = (undefined8 *)(**(code **)plVar33[10])(plVar33 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar23 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar23 != 0)) {
      uVar25 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar25;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar26 != (undefined8 *)0x0) {
      while (puVar26 != (undefined8 *)PTR_DAT_0437c680) {
        puVar26 = (undefined8 *)*puVar26;
        plVar24 = (long *)0x0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_01332d1c;
      }
      lVar29 = plVar33[0xb];
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01333bd4;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar25 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar25;
      }
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar24 = plVar33;
      } while (cVar6 != '\0');
LAB_01332d1c:
      if (plVar24 != (long *)0x0) {
        if (plVar24[0x1a] == 0) {
          local_b8 = (char *)0x0;
          local_b0 = (char *)0x0;
        }
        else {
          local_b8 = (char *)0x0;
          local_b0 = (char *)0x0;
          FUN_019d08dc(&local_b8,plVar24[0x1a] + 0x1c0);
          if (local_b8 != (char *)0x0) {
            uVar35 = *(uint *)(local_b8 + 0xc);
            if (uVar35 == 0) goto LAB_01333da4;
            unaff_x28 = (uint *)(local_b8 + 0xc);
            pcVar38 = local_b8;
LAB_01332f90:
            puVar36 = (uint *)(ulong)uVar35;
            pcVar34 = *(char **)(pcVar38 + 0x10);
            if (((*PTR_DAT_0437c668 & 1) == 0) &&
               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar23 != 0)) {
              if ((*PTR_DAT_043794d0 & 1) == 0) goto LAB_01333f68;
              goto LAB_01333cc0;
            }
            do {
              if (pcVar34 == (char *)0x0) goto LAB_01333da4;
LAB_01332fa8:
              if (pcVar34 == PTR_DAT_0437c670) {
                uVar35 = *unaff_x28;
                if (uVar35 == (uint)puVar36) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
                  if (bVar7) {
                    *unaff_x28 = (uint)puVar36 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') {
                    local_1d8 = (long *)0x0;
                    if (*(long *)(pcVar38 + 0x18) != 0) {
                      local_1d8 = (long *)(*(long *)(pcVar38 + 0x18) + -0x50);
                    }
                    if (local_b8 == (char *)0x0) goto LAB_01333044;
                    goto LAB_01332fec;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                if (uVar35 == 0) {
LAB_01333da4:
                  local_1d8 = (long *)0x0;
                  if (local_b8 != (char *)0x0) {
LAB_01332fec:
                    pcVar38 = local_b8;
                    piVar3 = (int *)(local_b8 + 8);
                    do {
                      iVar23 = *piVar3;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar7) {
                        *piVar3 = iVar23 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar23 + -1 == 0) {
                      local_b8[0x10] = '\0';
                      local_b8[0x11] = '\0';
                      local_b8[0x12] = '\0';
                      local_b8[0x13] = '\0';
                      local_b8[0x14] = '\0';
                      local_b8[0x15] = '\0';
                      local_b8[0x16] = '\0';
                      local_b8[0x17] = '\0';
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar29 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar29;
                      local_80 = *(undefined8 **)pcVar38;
                      FUN_02a44274(lVar29 + 0xd8,&local_80);
                    }
                  }
LAB_01333044:
                  if (local_1d8 == (long *)0x0) break;
                  plVar33 = (long *)local_1d8[0xe];
                  if (plVar33 == (long *)0x0) goto LAB_013338c0;
                  lVar29 = plVar33[0xb];
                  if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01333bd4;
                  if (*(long *)(lVar29 + 0x10) == 0) {
                    uVar25 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                    *(undefined8 *)(lVar29 + 0x10) = uVar25;
                  }
                  piVar3 = (int *)(lVar29 + 0xc);
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar7) {
                      *piVar3 = *piVar3 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  lVar29 = plVar33[0xb];
                  piVar3 = (int *)(lVar29 + 0xc);
                  do {
                    iVar23 = *piVar3;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar7) {
                      *piVar3 = iVar23 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar23 + -1 == 0) {
                    *(undefined8 *)(lVar29 + 0x18) = 0;
                    (**(code **)(*plVar33 + 0x20))(plVar33);
                  }
                  local_b8 = (char *)0x0;
                  local_b0 = (char *)0x0;
                  FUN_008802f0(&local_b8,plVar33[0x15] + 0x58);
                  local_80 = (undefined8 *)0x0;
                  uStack_78 = 0;
                  FUN_00ca524c(&local_80,&local_b8);
                  pcVar38 = local_b8;
                  if (local_b8 != (char *)0x0) {
                    piVar3 = (int *)(local_b8 + 8);
                    do {
                      iVar23 = *piVar3;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar7) {
                        *piVar3 = iVar23 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar23 + -1 == 0) {
                      local_b8[0x10] = '\0';
                      local_b8[0x11] = '\0';
                      local_b8[0x12] = '\0';
                      local_b8[0x13] = '\0';
                      local_b8[0x14] = '\0';
                      local_b8[0x15] = '\0';
                      local_b8[0x16] = '\0';
                      local_b8[0x17] = '\0';
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar29 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar29;
                      local_70[0] = *(undefined8 **)pcVar38;
                      FUN_02a44274(lVar29 + 0xd8,local_70);
                    }
                  }
                  local_1e0 = *(uint *)(param_1 + 0x340);
                  local_1dc = *(uint *)(param_1 + 0x348);
                  plStack_a0 = *(long **)(param_1 + 8);
                  local_88 = 0;
                  local_b8 = (char *)0x0;
                  local_b0 = (char *)0x0;
                  local_a8 = 0;
                  local_98 = 0xaaaaaaaaaaaaaa;
                  uStack_90 = 0;
                  FUN_019c5d84(plStack_a0,&local_b8,&local_80,puVar32,1);
                  pcVar21 = local_b0;
                  if (local_b8 != local_b0) {
                    local_c4 = 0;
                    pcVar38 = local_b8 + 0xa0;
                    do {
                      pcVar34 = pcVar38 + -0xa0;
                      if (*pcVar34 != '\0') {
                        local_e0 = *(uint **)(pcVar38 + -0x90);
                        local_128 = *(undefined1 **)(pcVar38 + -0x88);
                        local_cc = pcVar38[-0x68];
                        local_e8 = *(uint **)(pcVar38 + -0x60);
                        local_148 = *(undefined1 **)(pcVar38 + -0x58);
                        local_d4 = pcVar38[-0x38];
                        local_f0 = *(uint **)(pcVar38 + -0x30);
                        local_140 = *(undefined8 *)(pcVar38 + -0x80);
                        uStack_138 = *(undefined8 *)(pcVar38 + -0x78);
                        local_168 = *(undefined1 **)(pcVar38 + -0x28);
                        local_d0 = pcVar38[-8];
                        local_160 = *(undefined8 *)(pcVar38 + -0x50);
                        uStack_158 = *(undefined8 *)(pcVar38 + -0x48);
                        local_c8 = *pcVar38;
                        local_180 = *(undefined8 *)(pcVar38 + -0x20);
                        uStack_178 = *(undefined8 *)(pcVar38 + -0x18);
                      }
                      pauVar1 = (undefined1 (*) [16])(pcVar38 + 0x20);
                      auVar39 = *pauVar1;
                      auVar41 = *pauVar1;
                      auVar14 = *pauVar1;
                      pauVar1 = (undefined1 (*) [16])(pcVar38 + 0x40);
                      auVar40 = *pauVar1;
                      auVar42 = *pauVar1;
                      auVar12 = *pauVar1;
                      local_70[0] = *(undefined8 **)(pcVar38 + 0x10);
                      auVar43 = *(undefined1 (*) [16])(pcVar38 + 0x60);
                      if ((local_c8 == '\0') &&
                         (local_70[0] != (undefined8 *)0xc0ea47549ab5f3d9 && *pcVar34 != '\0')) {
                        if (local_c4 == 0) {
                          if ((local_cc == '\0') &&
                             (local_c0 = local_e0, local_e0 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            auVar13._8_8_ = uStack_138;
                            auVar13._0_8_ = local_140;
                            auVar9._8_8_ = -(ulong)(local_128 == &DAT_cbf29ce484222645);
                            auVar9._0_8_ = -(ulong)(local_128 == &DAT_cbf29ce484222645);
                            puVar36 = (uint *)*puVar26;
                            auVar41 = auVar41 ^ (auVar14 ^ auVar13) & auVar9;
                            uVar44 = auVar41._8_8_;
                            uVar25 = auVar41._0_8_;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if (local_70[0] == puVar37) {
                              if ((puVar36 == puVar32) || (local_c0 == puVar32)) {
                                if (*(uint *)(param_1 + 0x344) < local_1e0) {
                                  puVar36 = (uint *)0x1;
                                }
                                else {
                                  uVar28 = 1;
                                  if (iVar23 != 0) {
                                    uVar28 = 2;
                                  }
                                  *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                                  uVar35 = *(uint *)(param_1 + 0x1b8);
                                  if (2 < uVar35) goto LAB_01333f64;
                                  lVar29 = param_1 + (ulong)uVar35 * 0x10;
                                  puVar36 = (uint *)0x1;
                                  local_1e0 = local_1e0 + 1;
                                  *(undefined8 *)(lVar29 + 0x1c8) = uVar44;
                                  *(undefined8 *)(lVar29 + 0x1c0) = uVar25;
                                  *(uint *)(param_1 + 0x1b8) = uVar35 + 1;
                                }
                              }
                              else {
                                puVar36 = (uint *)0x1;
                                *(undefined1 *)(param_1 + 0x1b4) = 1;
                                uVar28 = 1;
                                if (iVar23 != 0) {
                                  uVar28 = 2;
                                }
                                *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                              }
                            }
                            else {
                              if ((((iVar23 == 0) ||
                                   (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 != 1)) ||
                                  ((puVar36 != puVar32 && (local_c0 != puVar32)))) ||
                                 (*(uint *)(param_1 + 0x34c) < local_1dc)) goto LAB_013332a0;
                              uVar35 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar35) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar35 * 0x10;
                              puVar36 = (uint *)0x0;
                              *(undefined8 *)(lVar29 + 0x208) = uVar44;
                              *(undefined8 *)(lVar29 + 0x200) = uVar25;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar35 + 1;
                            }
                          }
                          else {
LAB_013332a0:
                            puVar36 = (uint *)0x0;
                          }
                          if ((local_d4 == '\0') &&
                             (local_c0 = local_e8, local_e8 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            auVar15._8_8_ = -(ulong)(local_148 == &DAT_cbf29ce484222645);
                            auVar15._0_8_ = -(ulong)(local_148 == &DAT_cbf29ce484222645);
                            auVar11._8_8_ = uStack_158;
                            auVar11._0_8_ = local_160;
                            auVar42 = auVar42 ^ (auVar12 ^ auVar11) & auVar15;
                            unaff_x28 = (uint *)*puVar26;
                            uVar44 = auVar42._8_8_;
                            uVar25 = auVar42._0_8_;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if (local_70[0] == puVar37) {
                              if ((unaff_x28 == puVar32) || (local_c0 == puVar32)) {
                                if (local_1e0 <= *(uint *)(param_1 + 0x344)) {
                                  uVar28 = 1;
                                  if (iVar23 != 0) {
                                    uVar28 = 2;
                                  }
                                  *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                                  uVar35 = *(uint *)(param_1 + 0x1b8);
                                  if (2 < uVar35) goto LAB_01333f64;
                                  lVar29 = param_1 + (ulong)uVar35 * 0x10;
                                  local_1e0 = local_1e0 + 1;
                                  *(undefined8 *)(lVar29 + 0x1c8) = uVar44;
                                  *(undefined8 *)(lVar29 + 0x1c0) = uVar25;
                                  *(uint *)(param_1 + 0x1b8) = uVar35 + 1;
                                }
                                puVar36 = (uint *)0x1;
                              }
                              else {
                                puVar36 = (uint *)0x1;
                                *(undefined1 *)(param_1 + 0x1b4) = 1;
                                uVar28 = 1;
                                if (iVar23 != 0) {
                                  uVar28 = 2;
                                }
                                *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                              }
                            }
                            else if ((((iVar23 != 0) &&
                                      (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 == 1)) &&
                                     ((unaff_x28 == puVar32 || (local_c0 == puVar32)))) &&
                                    (local_1dc <= *(uint *)(param_1 + 0x34c))) {
                              uVar35 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar35) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar35 * 0x10;
                              *(undefined8 *)(lVar29 + 0x208) = uVar44;
                              *(undefined8 *)(lVar29 + 0x200) = uVar25;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar35 + 1;
                            }
                          }
                          uVar35 = (uint)puVar36;
                          if ((local_d0 == '\0') &&
                             (local_c0 = local_f0, local_f0 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            auVar10._8_8_ = uStack_178;
                            auVar10._0_8_ = local_180;
                            auVar16._8_8_ = -(ulong)(local_168 == &DAT_cbf29ce484222645);
                            auVar16._0_8_ = -(ulong)(local_168 == &DAT_cbf29ce484222645);
                            unaff_x28 = (uint *)*puVar26;
                            auVar43 = auVar43 ^ (auVar43 ^ auVar10) & auVar16;
                            uVar44 = auVar43._8_8_;
                            uVar25 = auVar43._0_8_;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if (local_70[0] == puVar37) {
                              if ((unaff_x28 == puVar32) || (local_c0 == puVar32)) {
                                if (local_1e0 <= *(uint *)(param_1 + 0x344)) {
                                  uVar28 = 1;
                                  if (iVar23 != 0) {
                                    uVar28 = 2;
                                  }
                                  *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                                  uVar35 = *(uint *)(param_1 + 0x1b8);
                                  if (2 < uVar35) goto LAB_01333f64;
                                  lVar29 = param_1 + (ulong)uVar35 * 0x10;
                                  local_1e0 = local_1e0 + 1;
                                  *(undefined8 *)(lVar29 + 0x1c8) = uVar44;
                                  *(undefined8 *)(lVar29 + 0x1c0) = uVar25;
                                  *(uint *)(param_1 + 0x1b8) = uVar35 + 1;
                                }
                                uVar35 = 1;
                              }
                              else {
                                uVar35 = 1;
                                *(undefined1 *)(param_1 + 0x1b4) = 1;
                                uVar28 = 1;
                                if (iVar23 != 0) {
                                  uVar28 = 2;
                                }
                                *(undefined4 *)(param_1 + 0x1b0) = uVar28;
                              }
                            }
                            else if ((((iVar23 != 0) &&
                                      (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 == 1)) &&
                                     ((unaff_x28 == puVar32 || (local_c0 == puVar32)))) &&
                                    (local_1dc <= *(uint *)(param_1 + 0x34c))) {
                              uVar5 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar5) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar5 * 0x10;
                              *(undefined8 *)(lVar29 + 0x208) = uVar44;
                              *(undefined8 *)(lVar29 + 0x200) = uVar25;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar5 + 1;
                            }
                          }
                        }
                        else {
                          if ((local_cc == '\0') &&
                             (local_c0 = local_e0, local_e0 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            puVar36 = (uint *)*puVar26;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if (((((iVar23 != 0) && (local_70[0] != puVar37)) &&
                                 (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 == 1)) &&
                                ((puVar36 == puVar32 || (local_c0 == puVar32)))) &&
                               (local_1dc <= *(uint *)(param_1 + 0x34c))) {
                              uVar35 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar35) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar35 * 0x10;
                              auVar41._0_8_ = -(ulong)(local_128 == &DAT_cbf29ce484222645);
                              auVar14._8_8_ = uStack_138;
                              auVar14._0_8_ = local_140;
                              auVar41._8_8_ = auVar41._0_8_;
                              auVar39 = auVar39 ^ (auVar39 ^ auVar14) & auVar41;
                              *(long *)(lVar29 + 0x208) = auVar39._8_8_;
                              *(long *)(lVar29 + 0x200) = auVar39._0_8_;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar35 + 1;
                            }
                          }
                          if ((local_d4 == '\0') &&
                             (local_c0 = local_e8, local_e8 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            puVar36 = (uint *)*puVar26;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if ((((iVar23 != 0) && (local_70[0] != puVar37)) &&
                                (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 == 1)) &&
                               (((puVar36 == puVar32 || (local_c0 == puVar32)) &&
                                (local_1dc <= *(uint *)(param_1 + 0x34c))))) {
                              uVar35 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar35) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar35 * 0x10;
                              auVar42._0_8_ = -(ulong)(local_148 == &DAT_cbf29ce484222645);
                              auVar12._8_8_ = uStack_158;
                              auVar12._0_8_ = local_160;
                              auVar42._8_8_ = auVar42._0_8_;
                              auVar40 = auVar40 ^ (auVar40 ^ auVar12) & auVar42;
                              *(long *)(lVar29 + 0x208) = auVar40._8_8_;
                              *(long *)(lVar29 + 0x200) = auVar40._0_8_;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar35 + 1;
                            }
                          }
                          if ((local_d0 == '\0') &&
                             (local_c0 = local_f0, local_f0 != (uint *)&DAT_cbf29ce484222645)) {
                            if (((*PTR_DAT_0437a780 & 1) == 0) &&
                               (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar23 != 0)) {
                              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_0437a780);
                            }
                            uVar25 = *(undefined8 *)PTR_DAT_0437a788;
                            *(undefined8 *)PTR_DAT_0437a790 = uVar25;
                            lVar29 = FUN_01e65c40(uVar25,&local_c0);
                            if (*(long *)(lVar29 + 8) == 0) {
                              puVar26 = (undefined8 *)PTR_DAT_04379c88;
                            }
                            else {
                              puVar26 = (undefined8 *)(*(long *)(lVar29 + 8) + 0x58);
                            }
                            puVar36 = (uint *)*puVar26;
                            iVar23 = FUN_016aca50(plVar30,local_70);
                            if ((((iVar23 != 0) && (local_70[0] != puVar37)) &&
                                (iVar23 = FUN_016acbec(plVar30,local_70), iVar23 == 1)) &&
                               (((puVar36 == puVar32 || (local_c0 == puVar32)) &&
                                (local_1dc <= *(uint *)(param_1 + 0x34c))))) {
                              uVar35 = *(uint *)(param_1 + 0x1f0);
                              if (0x13 < uVar35) goto LAB_01333f64;
                              lVar29 = param_1 + (ulong)uVar35 * 0x10;
                              auVar40._0_8_ = -(ulong)(local_168 == &DAT_cbf29ce484222645);
                              auVar39._8_8_ = uStack_178;
                              auVar39._0_8_ = local_180;
                              auVar40._8_8_ = auVar40._0_8_;
                              auVar43 = auVar43 ^ (auVar43 ^ auVar39) & auVar40;
                              *(long *)(lVar29 + 0x208) = auVar43._8_8_;
                              *(long *)(lVar29 + 0x200) = auVar43._0_8_;
                              local_1dc = local_1dc + 1;
                              *(uint *)(param_1 + 0x1f0) = uVar35 + 1;
                            }
                          }
                          uVar35 = 0;
                        }
                        local_c4 = local_c4 | uVar35;
                      }
                      pcVar34 = pcVar38 + 0xe0;
                      pcVar38 = pcVar38 + 0x180;
                      if (pcVar34 == pcVar21) break;
                    } while( true );
                  }
                  plVar33 = plStack_a0;
                  pcVar38 = local_b8;
                  puVar37 = local_80;
                  if (local_b8 == (char *)0x0) goto joined_r0x01333864;
                  while (local_b0 != local_b8) {
                    local_b0 = local_b0 + -0x180;
                    if (*local_b0 != '\0') {
                      *local_b0 = '\0';
                    }
                  }
                  lVar29 = local_a8 - (long)local_b8;
                  local_b0 = local_b8;
                  uVar27 = (**(code **)(*plStack_a0 + 0xc0))(plStack_a0);
                  if ((uVar27 & 1) == 0) {
LAB_01333844:
                    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar38,lVar29,0x10);
                    puVar37 = local_80;
                  }
                  else {
                    lVar8 = tpidr_el0;
                    if (*(char *)(lVar8 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar8 + 0x38d488) = 1;
                      *(undefined8 *)(lVar8 + 0x38d478) = 0;
                      *(undefined8 *)(lVar8 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01333844;
                    FUN_02bcc824(plVar33,pcVar38,lVar29,0x10);
                    puVar37 = local_80;
                  }
joined_r0x01333864:
                  local_80 = puVar37;
                  if (puVar37 != (undefined8 *)0x0) {
                    piVar3 = (int *)(puVar37 + 1);
                    do {
                      iVar23 = *piVar3;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar7) {
                        *piVar3 = iVar23 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar23 + -1 == 0) {
                      puVar37[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar29 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar29;
                      local_b8 = (char *)*puVar37;
                      FUN_02a44274(lVar29 + 0xd8,&local_b8);
                    }
                  }
LAB_013338c0:
                  lVar29 = local_1d8[0xb];
                  piVar3 = (int *)(lVar29 + 0xc);
                  do {
                    iVar23 = *piVar3;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar7) {
                      *piVar3 = iVar23 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar23 + -1 == 0) {
                    *(undefined8 *)(lVar29 + 0x18) = 0;
                    (**(code **)(*local_1d8 + 0x20))();
                  }
                  break;
                }
                goto LAB_01332f90;
              }
              pcVar34 = *(char **)pcVar34;
            } while( true );
          }
        }
        lVar29 = plVar24[0xb];
        piVar3 = (int *)(lVar29 + 0xc);
        do {
          iVar23 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar23 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))(plVar24);
        }
      }
    }
  }
  if (plVar31 != (long *)0x0) {
    lVar29 = plVar31[0xb];
    piVar3 = (int *)(lVar29 + 0xc);
    do {
      iVar23 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if (plVar30 != (long *)0x0) {
    plVar31 = plVar30 + 10;
    do {
      iVar23 = (int)*plVar31 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar7) {
        *(int *)plVar31 = iVar23;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  return;
LAB_01333f64:
  FUN_013345c0();
LAB_01333f68:
  iVar23 = __cxa_guard_acquire(PTR_DAT_043794d0);
  if (iVar23 != 0) {
    uVar25 = FUN_0087f8f0();
    *(undefined8 *)PTR_DAT_043794d8 = uVar25;
    __cxa_guard_release(PTR_DAT_043794d0);
  }
LAB_01333cc0:
  *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
  __cxa_guard_release(PTR_DAT_0437c668);
  if (pcVar34 != (char *)0x0) goto LAB_01332fa8;
  goto LAB_01333da4;
}


