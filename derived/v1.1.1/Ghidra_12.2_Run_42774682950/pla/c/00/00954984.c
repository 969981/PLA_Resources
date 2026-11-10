/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00954984; name: FUN_00954984
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00954984(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  code *pcVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  undefined8 *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined4 uVar45;
  ulong local_160;
  ulong uStack_158;
  long *local_150;
  long *local_148;
  long *local_140 [2];
  long *local_130;
  long *plStack_128;
  long *local_120;
  code *pcStack_118;
  long *local_110;
  long *plStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long **local_98;
  long **pplStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_68;
  
  lVar25 = *param_2;
  if (lVar25 != 0) {
    piVar2 = (int *)(lVar25 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar25;
  if (plVar21 == (long *)0x0) {
LAB_009549f0:
    plVar21 = (long *)param_2[1];
    if (plVar21 != (long *)0x0) goto LAB_009549f8;
LAB_0095551c:
    plVar21 = (long *)FUN_0095b020(&local_120,*(undefined8 *)(param_1 + 8));
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_00954a0c;
    }
    bVar6 = true;
  }
  else {
    plVar22 = plVar21 + 10;
    do {
      iVar19 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 != 0) goto LAB_009549f0;
    (**(code **)(*plVar21 + 0x10))();
    plVar21 = (long *)param_2[1];
    if (plVar21 == (long *)0x0) goto LAB_0095551c;
LAB_009549f8:
    plVar22 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00954a0c:
    plVar22 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = false;
  }
  plVar22 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar21;
  if (plVar22 != (long *)0x0) {
    plVar38 = plVar22 + 10;
    do {
      iVar19 = (int)*plVar38 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *(int *)plVar38 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  if (!bVar6) {
    plVar22 = plVar21 + 10;
    do {
      iVar19 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  lVar25 = FUN_0095be0c(*(undefined8 *)(param_1 + 8));
  if (lVar25 != 0) {
    piVar2 = (int *)(lVar25 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      iVar19 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  local_98 = *(long ***)(param_1 + 8);
  *(long *)(param_1 + 0xb0) = lVar25;
  FUN_00956d34(&local_120,local_98,&local_98);
  plVar21 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar21 != (long *)0x0) {
    lVar25 = plVar21[0xb];
    piVar2 = (int *)(lVar25 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))();
    }
  }
  *(long **)(param_1 + 200) = local_120;
  lVar25 = FUN_0095c058(*(undefined8 *)(param_1 + 8));
  if (lVar25 != 0) {
    piVar2 = (int *)(lVar25 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      iVar19 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  lVar26 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0xd0) = lVar25;
  if (*(char *)(lVar26 + 0x356) != '\0') {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_88 = 0xc;
    local_80 = (long *)0x0;
    local_98 = (long **)&DAT_a034849ed7eaabe6;
    pplStack_90 = (long **)0x39313e5;
    uVar23 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar23;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (long *)0x0;
    plStack_108 = (long *)0x0;
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_02911dcc(uVar23,&local_98,0,&local_120,0);
    pcVar28 = pcStack_118;
    if (pcStack_118 == (code *)0x0) {
      pcStack_118 = (code *)0x0;
    }
    else {
      local_110 = (long *)0x0;
      plStack_108 = (long *)0x0;
      local_120 = (long *)0x0;
      pcStack_118 = (code *)0x0;
      (*pcVar28)(&local_100);
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    lVar26 = *(long *)(param_1 + 0x98);
  }
  lVar25 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(lVar25 + 0x238) = *(undefined8 *)(lVar26 + 0x2f8);
  *(undefined8 *)(lVar25 + 0x230) = *(undefined8 *)(lVar26 + 0x2f0);
  lVar25 = *(long *)(param_1 + 0xa0);
  uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x308);
  *(undefined8 *)(lVar25 + 0x240) = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x300);
  *(undefined8 *)(lVar25 + 0x248) = uVar23;
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x212) =
       *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x348);
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x213) =
       *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x349);
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x214) =
       *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x34a);
  *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x250) =
       *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x328);
  *(undefined8 *)(*(long *)(param_1 + 0xa0) + 600) =
       *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x330);
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x210) =
       *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x354);
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x211) =
       *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x355);
  lVar25 = *(long *)(param_1 + 0x98);
  lVar26 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(lVar26 + 0x1f0) = *(undefined8 *)(lVar25 + 0x360);
  *(undefined8 *)(lVar26 + 0x1f8) = *(undefined8 *)(lVar25 + 0x368);
  *(undefined8 *)(lVar26 + 0x200) = *(undefined8 *)(lVar25 + 0x370);
  plVar21 = *(long **)(lVar25 + 0x378);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  plVar22 = *(long **)(lVar26 + 0x208);
  *(long **)(lVar26 + 0x208) = plVar21;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x260) =
       *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x380);
  lVar25 = *(long *)(param_1 + 0x98);
  lVar26 = *(long *)(param_1 + 0xa0);
  puVar27 = (undefined8 *)(lVar26 + 0x2c0);
  if (puVar27 != (undefined8 *)(lVar25 + 0x3d8)) {
    plVar21 = *(long **)(lVar26 + 0x2d8);
    if (plVar21 != *(long **)(lVar25 + 0x3f0)) {
      lVar35 = *(long *)(lVar26 + 0x2c0);
      *(long *)(lVar26 + 0x2c8) = lVar35;
      lVar36 = *(long *)(lVar26 + 0x2d0) - lVar35;
      uVar24 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar24 & 1) == 0) {
LAB_00954d34:
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar35,lVar36,4);
      }
      else {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00954d34;
        FUN_02bcc824(plVar21,lVar35,lVar36,4);
      }
      *(undefined8 *)(lVar26 + 0x2c8) = 0;
      *(undefined8 *)(lVar26 + 0x2d0) = 0;
      *puVar27 = 0;
    }
    uVar23 = *(undefined8 *)(lVar25 + 0x3f0);
    uVar4 = *(undefined8 *)(lVar25 + 0x3f8);
    uVar30 = *(undefined8 *)(lVar25 + 0x400);
    *(undefined4 *)(lVar26 + 0x2f0) = *(undefined4 *)(lVar25 + 0x408);
    *(undefined8 *)(lVar26 + 0x2e0) = uVar4;
    *(undefined8 *)(lVar26 + 0x2e8) = uVar30;
    *(undefined8 *)(lVar26 + 0x2d8) = uVar23;
    FUN_009575b8(puVar27,*(undefined8 *)(lVar25 + 0x3d8),*(undefined8 *)(lVar25 + 0x3e0));
    lVar25 = *(long *)(param_1 + 0x98);
    lVar26 = *(long *)(param_1 + 0xa0);
  }
  *(undefined4 *)(lVar26 + 0x2f8) = *(undefined4 *)(lVar25 + 0x410);
  lVar25 = *(long *)(*(long *)(param_1 + 0x98) + 0x2e0);
  if (((((((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) &&
         ((lVar25 = *(long *)(param_1 + 0x98), *(long *)(lVar25 + 0x90) == 0 ||
          ((*(long *)(lVar25 + 0x98) != 0 && (*(int *)(*(long *)(lVar25 + 0x98) + 0xc) != 0)))))) &&
        ((*(long *)(lVar25 + 0xf0) == 0 ||
         ((*(long *)(lVar25 + 0xf8) != 0 && (*(int *)(*(long *)(lVar25 + 0xf8) + 0xc) != 0)))))) &&
       ((*(long *)(lVar25 + 0x150) == 0 ||
        ((*(long *)(lVar25 + 0x158) != 0 && (*(int *)(*(long *)(lVar25 + 0x158) + 0xc) != 0)))))) &&
      ((*(long *)(lVar25 + 0x1b0) == 0 ||
       ((*(long *)(lVar25 + 0x1b8) != 0 && (*(int *)(*(long *)(lVar25 + 0x1b8) + 0xc) != 0)))))) &&
     ((((*(long *)(lVar25 + 0x210) == 0 ||
        ((*(long *)(lVar25 + 0x218) != 0 && (*(int *)(*(long *)(lVar25 + 0x218) + 0xc) != 0)))) &&
       ((*(long *)(lVar25 + 0x270) == 0 ||
        ((*(long *)(lVar25 + 0x278) != 0 && (*(int *)(*(long *)(lVar25 + 0x278) + 0xc) != 0)))))) &&
      ((lVar25 = *(long *)(param_1 + 0x98), *(long *)(lVar25 + 0x90) != 0 &&
       (*(long *)(lVar25 + 0xf0) != 0)))))) {
    if (*(long *)(lVar25 + 0x150) == 0) {
      lVar26 = 2;
    }
    else if (*(long *)(lVar25 + 0x1b0) == 0) {
      lVar26 = 3;
    }
    else if (*(long *)(lVar25 + 0x210) == 0) {
      lVar26 = 4;
    }
    else {
      lVar26 = 5;
    }
    FUN_00956dac(&local_120,lVar25 + 0x2e0);
    lVar25 = FUN_0095c190(local_120 + 0x1e,&local_98);
    if (local_120 != (long *)0x0) {
      lVar35 = local_120[0xb];
      piVar2 = (int *)(lVar35 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar35 + 0x18) = 0;
        (**(code **)(*local_120 + 0x20))();
      }
    }
    if (lVar25 != 0) {
      FUN_01b42a24(&local_120,lVar25);
      if ((char)local_120 == '\0') {
        FUN_00956dac(&local_98,*(long *)(param_1 + 0x98) + 0x2e0);
        plStack_128 = local_98[0x1b];
        local_130 = local_98[0x1a];
        if (local_98 != (long **)0x0) {
          plVar21 = local_98[0xb];
          piVar2 = (int *)((long)plVar21 + 0xc);
          do {
            iVar19 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar19 + -1 == 0) {
            plVar21[3] = 0;
            (*(code *)(*local_98)[4])();
          }
        }
      }
      else {
        local_130 = local_110;
        plStack_128 = plStack_108;
      }
      FUN_00956dac(&local_98,*(long *)(param_1 + 0x98) + 0x98);
      auVar44 = *(undefined1 (*) [16])(local_98 + 0x1a);
      if (local_98 != (long **)0x0) {
        plVar21 = local_98[0xb];
        piVar2 = (int *)((long)plVar21 + 0xc);
        do {
          iVar19 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 + -1 == 0) {
          plVar21[3] = 0;
          (*(code *)(*local_98)[4])();
        }
      }
      fVar40 = auVar44._0_4_ - SUB84(local_130,0);
      fVar41 = auVar44._4_4_ - (float)((ulong)local_130 >> 0x20);
      fVar42 = auVar44._8_4_ - SUB84(plStack_128,0);
      fVar43 = auVar44._12_4_ - (float)((ulong)plStack_128 >> 0x20);
      auVar44._4_4_ = fVar41;
      auVar44._0_4_ = fVar40;
      auVar44._8_4_ = fVar42;
      auVar44._12_4_ = fVar43;
      auVar10._4_4_ = fVar41;
      auVar10._0_4_ = fVar40;
      auVar10._8_4_ = fVar42;
      auVar10._12_4_ = fVar43;
      auVar44 = NEON_ext(auVar44,auVar10,8,1);
      local_140[0] = (long *)CONCAT44(auVar44._0_4_,fVar40);
      local_98 = &local_130;
      pplStack_90 = local_140;
      FUN_0095c5e0(*(long *)(param_1 + 0x98) + 0xf0,*(long *)(param_1 + 0x98) + lVar26 * 0x60 + 0x90
                   ,&local_98);
      if ((char)local_120 != '\0') {
        local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
      }
    }
  }
  plVar21 = *(long **)(*(long *)(param_1 + 0x98) + 0x90);
  if (plVar21 == (long *)0x0) {
LAB_0095507c:
    lVar25 = *(long *)(param_1 + 0xd8);
    pbVar12 = PTR_DAT_043794d0;
    puVar27 = (undefined8 *)PTR_DAT_043794d8;
    pbVar13 = PTR_DAT_043796e0;
    puVar29 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    plVar22 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar24 = FUN_02c6d8ec(plVar21[0x13]);
    if ((uVar24 & 1) == 0) goto LAB_0095507c;
    FUN_00956dac(&local_130,*(long *)(param_1 + 0x98) + 0x98);
    if ((local_130 == (long *)0x0) ||
       (lVar25 = FUN_0095934c(local_130 + 0x1e,&local_120), lVar25 == 0)) {
LAB_00955050:
      lVar25 = *(long *)(param_1 + 0xd8);
      pbVar12 = PTR_DAT_043794d0;
      puVar27 = (undefined8 *)PTR_DAT_043794d8;
      pbVar13 = PTR_DAT_043796e0;
      puVar29 = (undefined8 *)PTR_DAT_043796e8;
    }
    else {
      plVar22 = *(long **)(lVar25 + 0x5e8);
      if (plVar22 != (long *)0x0) {
        plVar38 = plVar22 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar38,0x10);
          if (bVar6) {
            *(int *)plVar38 = (int)*plVar38 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(long *)(plVar22[0x13] + 8) == 0) {
        uVar17 = FUN_02c5e31c(plVar22);
        uVar17 = uVar17 & 0xffff;
      }
      else {
        uVar17 = FUN_02c66e84();
      }
      uVar18 = FUN_02c66e84(plVar22[0x13]);
      if (uVar17 <= uVar18) {
        uVar18 = uVar17;
      }
      FUN_02c788b4(plVar22[0x13],uVar18);
      plVar38 = plVar22 + 10;
      do {
        iVar19 = (int)*plVar38 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar6) {
          *(int *)plVar38 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 != 0) goto LAB_00955050;
      (**(code **)(*plVar22 + 0x10))(plVar22);
      lVar25 = *(long *)(param_1 + 0xd8);
      pbVar12 = PTR_DAT_043794d0;
      puVar27 = (undefined8 *)PTR_DAT_043794d8;
      pbVar13 = PTR_DAT_043796e0;
      puVar29 = (undefined8 *)PTR_DAT_043796e8;
    }
    PTR_DAT_043794d0 = pbVar12;
    PTR_DAT_043794d8 = (undefined *)puVar27;
    PTR_DAT_043796e0 = pbVar13;
    PTR_DAT_043796e8 = (undefined *)puVar29;
    if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
      piVar2 = (int *)(lVar25 + 0xc);
      iVar19 = *(int *)(lVar25 + 0xc);
      do {
        puVar39 = *(undefined8 **)(lVar25 + 0x10);
        if (((*pbVar13 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar13), iVar20 != 0)) {
          if (((*pbVar12 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar12), iVar20 != 0)) {
            uVar23 = FUN_0087f8f0();
            *puVar27 = uVar23;
            __cxa_guard_release(pbVar12);
          }
          *puVar29 = puVar27;
          __cxa_guard_release(pbVar13);
        }
        while( true ) {
          if (puVar39 == (undefined8 *)0x0) goto LAB_00955058;
          if (puVar39 == puVar29) break;
          puVar39 = (undefined8 *)*puVar39;
        }
        iVar20 = *piVar2;
        if (iVar20 == iVar19) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00955c3c;
          lVar25 = *(long *)(lVar25 + 0x18);
          if (lVar25 != 0) {
            plVar22 = (long *)(lVar25 + -0x50);
            FUN_019a0f18(&local_120,plVar22);
            if (local_120 == (long *)0x0) {
              local_140[0] = (long *)0x0;
            }
            else {
              FUN_009597b8(local_140);
              plVar38 = local_120;
              if (local_120 != (long *)0x0) {
                plVar37 = local_120 + 1;
                do {
                  iVar19 = (int)*plVar37 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar6) {
                    *(int *)plVar37 = iVar19;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar19 == 0) {
                  local_120[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar26 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar26;
                  local_98 = (long **)*plVar38;
                  FUN_02a44274(lVar26 + 0xd8,&local_98);
                }
              }
            }
            if (local_140[0] != (long *)0x0) {
              *(undefined4 *)(local_140[0] + 0x214) = 0;
              *(undefined1 *)(local_140[0] + 0x210) = 1;
              lVar26 = local_140[0][0xb];
              piVar2 = (int *)(lVar26 + 0xc);
              do {
                iVar19 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*local_140[0] + 0x20))();
              }
            }
            lVar25 = *(long *)(lVar25 + 8);
            piVar2 = (int *)(lVar25 + 0xc);
            do {
              iVar19 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar19 + -1 != 0) break;
            *(undefined8 *)(lVar25 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
            if (local_130 != (long *)0x0) goto LAB_00955060;
            goto LAB_0095507c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_00955c3c:
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
LAB_00955058:
    if (local_130 == (long *)0x0) goto LAB_0095507c;
LAB_00955060:
    lVar25 = local_130[0xb];
    piVar2 = (int *)(lVar25 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 != 0) goto LAB_0095507c;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*local_130 + 0x20))();
    lVar25 = *(long *)(param_1 + 0xd8);
    pbVar12 = PTR_DAT_043794d0;
    puVar27 = (undefined8 *)PTR_DAT_043794d8;
    pbVar13 = PTR_DAT_043796e0;
    puVar29 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar12;
  PTR_DAT_043794d8 = (undefined *)puVar27;
  PTR_DAT_043796e0 = pbVar13;
  PTR_DAT_043796e8 = (undefined *)puVar29;
  if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
    piVar2 = (int *)(lVar25 + 0xc);
    iVar19 = *(int *)(lVar25 + 0xc);
    do {
      puVar39 = *(undefined8 **)(lVar25 + 0x10);
      if (((*pbVar13 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar13), iVar20 != 0)) {
        if (((*pbVar12 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar12), iVar20 != 0)) {
          uVar23 = FUN_0087f8f0();
          *puVar27 = uVar23;
          __cxa_guard_release(pbVar12);
        }
        *puVar29 = puVar27;
        __cxa_guard_release(pbVar13);
      }
      while( true ) {
        if (puVar39 == (undefined8 *)0x0) goto LAB_00955084;
        if (puVar39 == puVar29) break;
        puVar39 = (undefined8 *)*puVar39;
      }
      iVar20 = *piVar2;
      if (iVar20 == iVar19) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00955e24;
        lVar25 = *(long *)(lVar25 + 0x18);
        if (lVar25 != 0) {
          plVar22 = *(long **)(lVar25 + 0x48);
          if (plVar22 == (long *)0x0) goto LAB_00955ea4;
          lVar26 = plVar22[0xb];
          if (*(undefined8 **)(lVar26 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar26 + 0x10) == 0) {
              uVar23 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
              *(undefined8 *)(lVar26 + 0x10) = uVar23;
            }
            piVar2 = (int *)(lVar26 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00955ea4:
            lVar26 = *(long *)(lVar25 + 8);
            piVar2 = (int *)(lVar26 + 0xc);
            do {
              iVar19 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar19 + -1 == 0) {
              *(undefined8 *)(lVar26 + 0x18) = 0;
              (**(code **)(*(long *)(lVar25 + -0x50) + 0x20))();
            }
            goto joined_r0x00955ef4;
          }
          goto LAB_00955ecc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00955e24:
      iVar19 = iVar20;
    } while (iVar20 != 0);
  }
LAB_00955084:
  plVar22 = _DAT_00000098;
  if (_DAT_00000098 == (long *)0x0) {
joined_r0x00955ef4:
    if (plVar22 != (long *)0x0) goto LAB_009550c8;
LAB_00955234:
    lVar25 = *(long *)(param_1 + 0xd8);
    pbVar12 = PTR_DAT_043794d0;
    pbVar13 = PTR_DAT_043796e0;
    puVar27 = (undefined8 *)PTR_DAT_043796e8;
joined_r0x00955238:
    PTR_DAT_043794d0 = pbVar12;
    PTR_DAT_043796e0 = pbVar13;
    PTR_DAT_043796e8 = (undefined *)puVar27;
    if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_0095523c:
      plVar22 = (long *)0x0;
    }
    else {
      piVar2 = (int *)(lVar25 + 0xc);
      iVar19 = *(int *)(lVar25 + 0xc);
      do {
        puVar29 = *(undefined8 **)(lVar25 + 0x10);
        if (((*pbVar13 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar13), iVar20 != 0)) {
          if (((*pbVar12 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar12), iVar20 != 0)) {
            uVar23 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar23;
            __cxa_guard_release(pbVar12);
          }
          *puVar27 = PTR_DAT_043794d8;
          __cxa_guard_release(pbVar13);
        }
        if (puVar29 == (undefined8 *)0x0) goto LAB_0095523c;
        while (puVar29 != puVar27) {
          puVar29 = (undefined8 *)*puVar29;
          plVar22 = (long *)0x0;
          if (puVar29 == (undefined8 *)0x0) goto LAB_00955240;
        }
        iVar20 = *piVar2;
        if (iVar20 == iVar19) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar22 = (long *)0x0;
            if (*(long *)(lVar25 + 0x18) != 0) {
              plVar22 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar22 = (long *)0x0;
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
LAB_00955240:
    FUN_0199d14c(&local_120,plVar22);
    if (local_120 == (long *)0x0) {
      local_130 = (long *)0x0;
    }
    else {
      FUN_00959d38(&local_130);
      plVar38 = local_120;
      if (local_120 != (long *)0x0) {
        plVar37 = local_120 + 1;
        do {
          iVar19 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar6) {
            *(int *)plVar37 = iVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_98 = (long **)*plVar38;
          FUN_02a44274(lVar25 + 0xd8,&local_98);
        }
      }
    }
    plVar38 = local_130;
    if (plVar22 != (long *)0x0) {
      lVar25 = plVar22[0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
        plVar38 = local_130;
      }
    }
    local_130 = plVar38;
    if (plVar38 != (long *)0x0) {
      if ((int)plVar38[0xe] == 7) {
        *(undefined4 *)(plVar38 + 0xe) = 7;
      }
      else {
        lVar26 = plVar38[0x21];
        uVar24 = *(ulong *)(lVar26 + 0xa8);
        lVar25 = *(long *)(lVar26 + 0x70);
        if (*(long *)(lVar26 + 0x78) != lVar25) {
          uVar31 = *(long *)(lVar26 + 0xb0) + uVar24;
          puVar27 = (undefined8 *)(*(long *)(lVar25 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          puVar29 = (undefined8 *)(*(long *)(lVar25 + (uVar31 / 0x38) * 8) + (uVar31 % 0x38) * 0x48)
          ;
          if (puVar29 != puVar27) {
            plVar22 = (long *)(lVar25 + (uVar24 / 0x38) * 8);
            do {
              while( true ) {
                puVar27[7] = 0;
                puVar27[8] = 0;
                puVar27[5] = 0;
                puVar27[6] = 0;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
                puVar39 = puVar27 + 9;
                *puVar27 = 0;
                if ((long)puVar39 - *plVar22 == 0xfc0) break;
                puVar27 = puVar39;
                if (puVar29 == puVar39) goto LAB_00955330;
              }
              plVar22 = plVar22 + 1;
              puVar27 = (undefined8 *)*plVar22;
            } while (puVar29 != puVar27);
          }
        }
LAB_00955330:
        FUN_02604e3c(plVar38,1);
        *(undefined4 *)(plVar38 + 0x2f) = 0;
        plVar38[0x30] = plVar38[0x30] & 0xfffffffffffffff8;
        *(undefined4 *)(plVar38 + 0xe) = 7;
        if (local_130 == (long *)0x0) goto LAB_0095537c;
      }
      lVar25 = local_130[0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))(local_130);
      }
    }
LAB_0095537c:
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_0095e070(&local_120,*(long *)(param_1 + 0x98) + 0x2d0);
    FUN_0095e070(param_1 + 0xe8,&local_120);
    plVar22 = local_120;
    if (local_120 != (long *)0x0) {
      plVar38 = local_120 + 1;
      do {
        iVar19 = (int)*plVar38 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar6) {
          *(int *)plVar38 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_98 = (long **)*plVar22;
        FUN_02a44274(lVar25 + 0xd8,&local_98);
      }
    }
    if ((*(char *)(*(long *)(param_1 + 0x98) + 0x354) == '\0') ||
       (**(char **)(*(long *)(param_1 + 0x98) + 0x368) == '\0')) {
      uVar45 = 3;
    }
    else {
      uVar45 = 1;
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar45;
    FUN_0095f658();
    (**(code **)(**(long **)(param_1 + 0x70) + 0x48))(*(long **)(param_1 + 0x70),0);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x48))(*(long **)(param_1 + 0x68),0);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 10;
      do {
        iVar19 = (int)*plVar22 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *(int *)plVar22 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    return;
  }
  lVar25 = _DAT_00000098[0xb];
  if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
LAB_00955ecc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar25 + 0x10) == 0) {
    uVar23 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
    *(undefined8 *)(lVar25 + 0x10) = uVar23;
  }
  piVar2 = (int *)(lVar25 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_009550c8:
  local_120 = (long *)0x0;
  pcStack_118 = (code *)0x0;
  FUN_00ac3fa4(&local_120,plVar22 + 0x49);
  if (local_120 == (long *)0x0) {
    local_130 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_130);
    plVar38 = local_120;
    if (local_120 != (long *)0x0) {
      plVar37 = local_120 + 1;
      do {
        iVar19 = (int)*plVar37 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar6) {
          *(int *)plVar37 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_98 = (long **)*plVar38;
        FUN_02a44274(lVar25 + 0xd8,&local_98);
      }
    }
  }
  (**(code **)(*local_130 + 0x1c8))(local_130,0);
  local_120 = (long *)0x0;
  pcStack_118 = (code *)0x0;
  FUN_01b0043c(&local_120,plVar22 + 0xcd);
  plVar38 = local_120;
  puVar16 = PTR_DAT_04379e70;
  puVar15 = PTR_DAT_04379e68;
  puVar14 = PTR_DAT_043795e0;
  if (local_120 != (long *)0x0) {
    if (*(int *)((long)local_120 + 0xc) != 0) {
      piVar2 = (int *)((long)local_120 + 0xc);
      iVar19 = *(int *)((long)local_120 + 0xc);
      do {
        plVar37 = (long *)plVar38[2];
        if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar20 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
              uVar23 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar23;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar14 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar16 = puVar14;
          __cxa_guard_release(puVar15);
        }
        while( true ) {
          if (plVar37 == (long *)0x0) goto LAB_00955fe0;
          if (plVar37 == (long *)puVar16) break;
          plVar37 = (long *)*plVar37;
        }
        iVar20 = *piVar2;
        if (iVar20 == iVar19) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar25 = plVar38[3];
            plVar38 = (long *)0x0;
            plVar37 = local_120;
            if (lVar25 != 0) {
              plVar38 = (long *)(lVar25 + -0x50);
            }
            goto joined_r0x00955fac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
LAB_00955fe0:
    plVar38 = (long *)0x0;
    plVar37 = local_120;
joined_r0x00955fac:
    local_120 = plVar37;
    if (plVar37 != (long *)0x0) {
      plVar33 = plVar37 + 1;
      do {
        iVar19 = (int)*plVar33 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar6) {
          *(int *)plVar33 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        plVar37[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_98 = (long **)*plVar37;
        FUN_02a44274(lVar25 + 0xd8,&local_98);
      }
    }
    if (plVar38 != (long *)0x0) {
      if (((uint)plVar38[0x4c] >> 2 & 1) == 0) {
        plVar38[0x4c] = plVar38[0x4c] | 4;
      }
      lVar25 = plVar38[0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*plVar38 + 0x20))(plVar38);
      }
    }
  }
  local_120 = (long *)0x0;
  pcStack_118 = (code *)0x0;
  FUN_00cf9db0(&local_120,plVar22 + 0xf1);
  if (local_120 == (long *)0x0) {
    local_140[0] = (long *)0x0;
  }
  else {
    FUN_00959eac(local_140);
    plVar38 = local_120;
    if (local_120 != (long *)0x0) {
      plVar37 = local_120 + 1;
      do {
        iVar19 = (int)*plVar37 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar6) {
          *(int *)plVar37 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_98 = (long **)*plVar38;
        FUN_02a44274(lVar25 + 0xd8,&local_98);
      }
    }
  }
  if (local_140[0] != (long *)0x0) {
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_00ac3fa4(&local_120,local_140[0] + 0x49);
    if (local_120 == (long *)0x0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_0095a0ac(&local_68);
      plVar38 = local_120;
      if (local_120 != (long *)0x0) {
        plVar37 = local_120 + 1;
        do {
          iVar19 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar6) {
            *(int *)plVar37 = iVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_98 = (long **)*plVar38;
          FUN_02a44274(lVar25 + 0xd8,&local_98);
        }
      }
    }
    if (local_68 != (long *)0x0) {
      *(undefined1 *)((long)local_68 + 0xc61) = 1;
      lVar25 = local_68[0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (local_140[0] != (long *)0x0) {
      lVar25 = local_140[0][0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_140[0] + 0x20))();
      }
    }
  }
  local_120 = (long *)0x0;
  pcStack_118 = (code *)0x0;
  FUN_01aff51c(&local_120,plVar22 + 0xc3);
  if (local_120 == (long *)0x0) {
    local_140[0] = (long *)0x0;
LAB_009551bc:
    if (local_140[0] == (long *)0x0) goto LAB_009551ec;
LAB_009551c4:
    FUN_025fd3ac();
    if (local_140[0] == (long *)0x0) goto LAB_009551ec;
    lVar25 = local_140[0][0xb];
    piVar2 = (int *)(lVar25 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 != 0) goto LAB_009551ec;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*local_140[0] + 0x20))();
    lVar25 = *(long *)(param_1 + 0xd8);
    if (lVar25 != 0) goto LAB_009558a8;
joined_r0x009563f8:
    if (local_130 != (long *)0x0) {
      lVar25 = local_130[0xb];
      piVar2 = (int *)(lVar25 + 0xc);
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
      }
    }
    lVar25 = plVar22[0xb];
    piVar2 = (int *)(lVar25 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 != 0) goto LAB_00955234;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    lVar25 = *(long *)(param_1 + 0xd8);
    pbVar12 = PTR_DAT_043794d0;
    pbVar13 = PTR_DAT_043796e0;
    puVar27 = (undefined8 *)PTR_DAT_043796e8;
    goto joined_r0x00955238;
  }
  FUN_0095dd00(local_140);
  plVar38 = local_120;
  if (local_120 == (long *)0x0) goto LAB_009551bc;
  plVar37 = local_120 + 1;
  do {
    iVar19 = (int)*plVar37 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar6) {
      *(int *)plVar37 = iVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar19 != 0) goto LAB_009551bc;
  local_120[2] = 0;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar25 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar25;
  local_98 = (long **)*plVar38;
  FUN_02a44274(lVar25 + 0xd8,&local_98);
  if (local_140[0] != (long *)0x0) goto LAB_009551c4;
LAB_009551ec:
  lVar25 = *(long *)(param_1 + 0xd8);
  if (lVar25 == 0) goto joined_r0x009563f8;
LAB_009558a8:
  puVar16 = PTR_DAT_043796e8;
  puVar15 = PTR_DAT_043796e0;
  puVar14 = PTR_DAT_043794d0;
  if (*(int *)(lVar25 + 0xc) == 0) goto joined_r0x009563f8;
  piVar2 = (int *)(lVar25 + 0xc);
  iVar19 = *(int *)(lVar25 + 0xc);
  while( true ) {
    plVar38 = *(long **)(lVar25 + 0x10);
    if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
      if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
        uVar23 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar23;
        __cxa_guard_release(puVar14);
      }
      *(undefined **)puVar16 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar15);
    }
    while( true ) {
      if (plVar38 == (long *)0x0) goto joined_r0x009563f8;
      if (plVar38 == (long *)puVar16) break;
      plVar38 = (long *)*plVar38;
    }
    iVar20 = *piVar2;
    if (iVar20 == iVar19) break;
    ClearExclusiveLocal();
LAB_00956134:
    iVar19 = iVar20;
    if (iVar20 == 0) goto joined_r0x009563f8;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
  if (bVar6) {
    *piVar2 = iVar19 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_00956134;
  lVar25 = *(long *)(lVar25 + 0x18);
  if (lVar25 == 0) goto joined_r0x009563f8;
  plVar38 = (long *)(lVar25 + -0x50);
  FUN_0199ce80(&local_120,plVar38);
  if (local_120 == (long *)0x0) {
    local_140[0] = (long *)0x0;
    goto LAB_00956190;
  }
  FUN_0095a2ac(local_140);
  plVar37 = local_120;
  if (local_120 == (long *)0x0) goto LAB_00956190;
  plVar33 = local_120 + 1;
  do {
    iVar19 = (int)*plVar33 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar6) {
      *(int *)plVar33 = iVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar19 == 0) {
    local_120[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar26 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar26;
    local_98 = (long **)*plVar37;
    FUN_02a44274(lVar26 + 0xd8,&local_98);
    if (local_140[0] != (long *)0x0) goto LAB_00956198;
    goto LAB_009563c4;
  }
LAB_00956190:
  if (local_140[0] == (long *)0x0) goto LAB_009563c4;
LAB_00956198:
  if ((local_140[0][0x10] & 0xffU) != 0) {
    if ((ulong)local_140[0][0x10] >> 0x20 != 2) {
      local_120 = (long *)((ulong)local_120 & 0xffffffff00000000);
      FUN_026bf660(local_140[0],&local_120);
      goto joined_r0x0095657c;
    }
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_00cf9db0(&local_120,local_140[0] + 0x15);
    if (local_120 == (long *)0x0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_68);
      plVar37 = local_120;
      if (local_120 != (long *)0x0) {
        plVar33 = local_120 + 1;
        do {
          iVar19 = (int)*plVar33 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar6) {
            *(int *)plVar33 = iVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_98 = (long **)*plVar37;
          FUN_02a44274(lVar26 + 0xd8,&local_98);
        }
      }
    }
    if (local_68 == (long *)0x0) goto joined_r0x0095657c;
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_02650ad8(&local_120,local_68 + 0xc2);
    if (local_120 == (long *)0x0) {
      local_148 = (long *)0x0;
LAB_009561f0:
      if (local_148 == (long *)0x0) goto joined_r0x009565ec;
LAB_009561f8:
      plVar37 = local_148;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar26 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar26;
      uVar24 = *(ulong *)(lVar26 + 0x60);
      uVar45 = 0;
      if (uVar24 != 0) {
        uVar31 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
        uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
        uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar31 < 2) {
          uVar32 = uVar24 - 1 & 0x7ae129403ce05f36;
        }
        else if (uVar24 < 0x7ae129403ce05f37) {
          uVar32 = 0;
          if (uVar24 != 0) {
            uVar32 = 0x7ae129403ce05f36 / uVar24;
          }
          uVar32 = 0x7ae129403ce05f36 - uVar32 * uVar24;
        }
        else {
          uVar32 = 0x7ae129403ce05f36;
        }
        plVar33 = *(long **)(*(long *)(lVar26 + 0x58) + uVar32 * 8);
        if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
          if (uVar31 < 2) {
            do {
              if (plVar33[1] == 0x7ae129403ce05f36) {
                if (plVar33[2] == 0x7ae129403ce05f36) goto LAB_009562b8;
              }
              else if ((plVar33[1] & uVar24 - 1) != uVar32) break;
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
          else {
            do {
              uVar31 = plVar33[1];
              if (uVar31 != 0x7ae129403ce05f36) {
                if (uVar24 <= uVar31) {
                  uVar8 = 0;
                  if (uVar24 != 0) {
                    uVar8 = uVar31 / uVar24;
                  }
                  uVar31 = uVar31 - uVar8 * uVar24;
                }
                if (uVar31 == uVar32) goto LAB_00956418;
                break;
              }
              if (plVar33[2] == 0x7ae129403ce05f36) goto LAB_009562b8;
LAB_00956418:
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
        }
      }
      goto LAB_00956480;
    }
    FUN_0095deb8(&local_148);
    plVar37 = local_120;
    if (local_120 == (long *)0x0) goto LAB_009561f0;
    plVar33 = local_120 + 1;
    do {
      iVar19 = (int)*plVar33 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *(int *)plVar33 = iVar19;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 != 0) goto LAB_009561f0;
    local_120[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar26 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar26;
    local_98 = (long **)*plVar37;
    FUN_02a44274(lVar26 + 0xd8,&local_98);
    if (local_148 != (long *)0x0) goto LAB_009561f8;
    goto joined_r0x009565ec;
  }
  goto joined_r0x0095657c;
LAB_009562b8:
  plVar33 = (long *)plVar33[3];
  if (plVar33 == (long *)0x0) goto LAB_00956480;
  plVar3 = plVar33 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar24 = plVar33[0x21];
  uVar45 = 0;
  if (uVar24 != 0) {
    uVar31 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      uVar32 = uVar24 - 1 & 0x24ac6f29ea43f8da;
    }
    else if (uVar24 < 0x24ac6f29ea43f8db) {
      uVar32 = 0;
      if (uVar24 != 0) {
        uVar32 = 0x24ac6f29ea43f8da / uVar24;
      }
      uVar32 = 0x24ac6f29ea43f8da - uVar32 * uVar24;
    }
    else {
      uVar32 = 0x24ac6f29ea43f8da;
    }
    plVar34 = *(long **)(plVar33[0x20] + uVar32 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar31 < 2) {
        do {
          if (plVar34[1] == 0x24ac6f29ea43f8da) {
            if (plVar34[2] == 0x24ac6f29ea43f8da) goto LAB_00956468;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar32) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar31 = plVar34[1];
          if (uVar31 != 0x24ac6f29ea43f8da) {
            if (uVar24 <= uVar31) {
              uVar8 = 0;
              if (uVar24 != 0) {
                uVar8 = uVar31 / uVar24;
              }
              uVar31 = uVar31 - uVar8 * uVar24;
            }
            if (uVar31 == uVar32) goto LAB_00956388;
            break;
          }
          if (plVar34[2] == 0x24ac6f29ea43f8da) goto LAB_00956468;
LAB_00956388:
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_0095646c:
  do {
    iVar19 = (int)*plVar3 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *(int *)plVar3 = iVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))();
  }
LAB_00956480:
  uVar24 = FUN_02643ff4(uVar45,plVar37);
  if ((uVar24 & 1) == 0) {
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_00ac3fa4(&local_120,local_68 + 0x49);
    plVar37 = local_120;
    puVar15 = PTR_DAT_04379e88;
    if (local_120 == (long *)0x0) goto joined_r0x00956524;
    if (*(int *)((long)local_120 + 0xc) == 0) {
LAB_00956970:
      plVar37 = (long *)0x0;
      plVar33 = local_120;
    }
    else {
      piVar2 = (int *)((long)local_120 + 0xc);
      iVar19 = *(int *)((long)local_120 + 0xc);
      while( true ) {
        plVar33 = (long *)plVar37[2];
        if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar20 != 0)) {
            if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
              uVar23 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar23;
              __cxa_guard_release(puVar14);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
          __cxa_guard_release(puVar15);
          if (plVar33 != (long *)0x0) goto LAB_00956898;
          goto LAB_00956970;
        }
        while( true ) {
          if (plVar33 == (long *)0x0) goto LAB_00956970;
LAB_00956898:
          if (plVar33 == (long *)PTR_DAT_04379e90) break;
          plVar33 = (long *)*plVar33;
        }
        iVar20 = *piVar2;
        if (iVar20 == iVar19) break;
        ClearExclusiveLocal();
LAB_00956880:
        iVar19 = iVar20;
        if (iVar20 == 0) goto LAB_00956970;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00956880;
      lVar26 = plVar37[3];
      plVar37 = (long *)0x0;
      plVar33 = local_120;
      if (lVar26 != 0) {
        plVar37 = (long *)(lVar26 + -0x50);
      }
    }
    local_120 = plVar33;
    if (plVar33 != (long *)0x0) {
      plVar3 = plVar33 + 1;
      do {
        iVar19 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 == 0) {
        plVar33[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_98 = (long **)*plVar33;
        FUN_02a44274(lVar26 + 0xd8,&local_98);
      }
    }
    if (plVar37 == (long *)0x0) goto joined_r0x00956524;
    FUN_01839c8c(&local_98,plVar37 + 0x15a);
    uStack_158 = 0;
    local_160 = 0;
    if (local_98 != (long **)0x0) {
      FUN_01839c8c(&local_120,plVar37 + 0x15a);
      if (local_120 == (long *)0x0) {
LAB_00956bd8:
        uStack_158 = 0;
        local_160 = 0;
      }
      else {
        lVar26 = local_120[0xb];
        piVar2 = (int *)(lVar26 + 0xc);
        iVar19 = *(int *)((long)local_120 + 0x7c);
        do {
          iVar20 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*local_120 + 0x20))();
        }
        if (iVar19 != 2) goto LAB_00956bd8;
        if (local_98[0x1a] == (long *)0x0) {
          uStack_158 = 0;
          local_160 = 0;
        }
        else {
          pauVar1 = (undefined1 (*) [16])(local_98[0x1a] + 0x18);
          local_160 = *(ulong *)*pauVar1;
          auVar44 = NEON_ext(*pauVar1,*pauVar1,8,1);
          uStack_158 = (ulong)auVar44._0_4_;
        }
      }
      if (local_98 != (long **)0x0) {
        plVar33 = local_98[0xb];
        piVar2 = (int *)((long)plVar33 + 0xc);
        do {
          iVar19 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 + -1 == 0) {
          plVar33[3] = 0;
          (*(code *)(*local_98)[4])();
        }
      }
    }
    auVar11._8_8_ = uStack_158;
    auVar11._0_8_ = local_160;
    pcStack_118 = (code *)0x0;
    local_120 = (long *)(local_160 & 0xffffffff00000000);
    (**(code **)(*plVar37 + 0x100))(0,auVar11,plVar37,&local_120);
    lVar26 = plVar37[0xb];
    piVar2 = (int *)(lVar26 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      pcVar28 = *(code **)(*plVar37 + 0x20);
LAB_009564f4:
      (*pcVar28)(plVar37);
    }
  }
  else {
    local_120 = (long *)((ulong)local_120 & 0xffffffff00000000);
    FUN_026bf660(local_140[0],&local_120);
    local_120 = (long *)0x0;
    pcStack_118 = (code *)0x0;
    FUN_00ac3fa4(&local_120,local_68 + 0x49);
    if (local_120 == (long *)0x0) {
      local_150 = (long *)0x0;
      plVar37 = local_150;
    }
    else {
      FUN_0095a0ac(&local_150);
      plVar33 = local_120;
      plVar37 = local_150;
      if (local_120 != (long *)0x0) {
        plVar3 = local_120 + 1;
        do {
          iVar19 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar19 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_98 = (long **)*plVar33;
          FUN_02a44274(lVar26 + 0xd8,&local_98);
          plVar37 = local_150;
        }
      }
    }
    local_150 = plVar37;
    if (plVar37 != (long *)0x0) {
      lVar26 = plVar37[0xb];
      piVar2 = (int *)(lVar26 + 0xc);
      *(undefined1 *)((long)plVar37 + 0xc61) = 0;
      do {
        iVar19 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar26 + 0x18) = 0;
        pcVar28 = *(code **)(*plVar37 + 0x20);
        goto LAB_009564f4;
      }
    }
  }
joined_r0x00956524:
  if (local_148 != (long *)0x0) {
    lVar26 = local_148[0xb];
    piVar2 = (int *)(lVar26 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
joined_r0x009565ec:
  if (local_68 != (long *)0x0) {
    lVar26 = local_68[0xb];
    piVar2 = (int *)(lVar26 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
joined_r0x0095657c:
  if (local_140[0] != (long *)0x0) {
    lVar26 = local_140[0][0xb];
    piVar2 = (int *)(lVar26 + 0xc);
    do {
      iVar19 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_140[0] + 0x20))();
    }
  }
LAB_009563c4:
  lVar25 = *(long *)(lVar25 + 8);
  piVar2 = (int *)(lVar25 + 0xc);
  do {
    iVar19 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar19 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar38 + 0x20))(plVar38);
  }
  goto joined_r0x009563f8;
LAB_00956468:
  uVar45 = (undefined4)plVar34[6];
  goto LAB_0095646c;
}


