/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb0b10; name: FUN_01cb0b10
 */


void FUN_01cb0b10(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                 long param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *local_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  uStack_120 = 0x84727ae1e75f7865;
  local_118 = "PL_Speed";
  uStack_110 = 8;
  local_108 = 0x556483e7a1ceb2;
  pcStack_100 = "Normal";
  local_f8 = 6;
  uStack_f0 = 0x55f2a039552f7f8;
  local_e8 = &DAT_0391f66a;
  uStack_e0 = 4;
  local_d8 = 0x80bea84c218dc72a;
  pcStack_d0 = "WaterFlagSwitch";
  local_c8 = 0xf;
  uStack_c0 = 0x52df90c5b69bfbbe;
  local_b8 = "Ground";
  uStack_b0 = 6;
  local_88 = "WATER_FLAG_RTPC";
  uStack_80 = 0xf;
  local_a8 = 0x51b8652aab57eb0;
  pcStack_a0 = "Water";
  local_98 = 5;
  uStack_90 = 0x1e320ee39299513;
  FUN_01435a5c(&local_130);
  lVar16 = *param_2;
  plVar17 = *(long **)(lVar16 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar10 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar17;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x300,0x10);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_025b4ee0(plVar12,&local_130);
  plVar12[1] = (long)plVar17;
  plVar12[2] = (long)plVar12;
  plVar12[3] = 0x300;
  plVar12[4] = 0x10;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01cb173c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 9;
  }
  (**(code **)(*plVar17 + 0xb8))(plVar17,lVar16);
  local_148 = (long *)0x0;
  local_140 = 0;
  FUN_009ad580(&local_148,lVar16 + 0x318);
  (**(code **)(*plVar17 + 0xc0))(plVar17,&local_148);
  plVar14 = local_148;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (local_148 != (long *)0x0) {
    plVar2 = local_148 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_148[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar6;
      *(long *)puVar7 = lVar11;
      local_158 = (long *)*plVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_158);
    }
  }
  (**(code **)(*plVar17 + 200))(plVar17,*(undefined1 *)(lVar16 + 0x33b));
  (**(code **)(*plVar17 + 0x90))(plVar17);
  local_158 = plVar12;
  FUN_02a4dad4(lVar16 + 0xf0,&local_158);
  if (local_158 == (long *)0x0) {
LAB_01cb0e1c:
    lVar16 = *param_4;
  }
  else {
    lVar16 = local_158[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) goto LAB_01cb0e1c;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_158 + 0x20))();
    lVar16 = *param_4;
  }
  if (lVar16 != 0) {
    FUN_01435a5c(lVar16 + 0x440,param_3);
  }
  FUN_01cb09a8(local_70,param_5);
  plVar17 = local_70[0];
  if (local_70[0] != (long *)0x0) {
    FUN_01813d6c(&local_148,plVar12);
    if ((local_148 != (long *)0x0) && ((undefined8 *)local_148[3] != (undefined8 *)0x0)) {
      plVar14 = (long *)(*(code *)**(undefined8 **)local_148[3])();
      puVar8 = PTR_DAT_043794d8;
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        if (plVar14 == (long *)puVar8) goto LAB_01cb0ea8;
      }
    }
    local_138 = 0;
LAB_01cb0ea8:
    FUN_0193a9f4(plVar17,local_138);
    plVar17 = local_148;
    if (local_148 != (long *)0x0) {
      plVar14 = local_148 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_148[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_158 = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_158);
      }
    }
    if (local_70[0] != (long *)0x0) {
      lVar16 = local_70[0][0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_70[0] + 0x20))();
      }
    }
  }
  if (param_6 != 0) {
    local_148 = (long *)0x0;
    local_140 = 0;
    FUN_008802f0(&local_148,plVar12 + 0xb);
    local_158 = (long *)0x0;
    local_150 = 0;
    do {
      uVar13 = local_140;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(&local_140,0x10);
      if (bVar4) {
        local_140 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar15 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar15;
    FUN_02a44e0c(&local_78,uVar15,uVar13);
    plVar17 = local_148;
    local_148 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar14 = plVar17 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        plVar17[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_70[0] = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,local_70);
      }
    }
    plVar17 = local_158;
    local_158 = (long *)0x0;
    if (local_78 == (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        plVar14 = plVar17 + 1;
        do {
          lVar16 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = (int)lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar16 == 1) {
          plVar17[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_70[0] = (long *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,local_70);
        }
      }
      uVar13 = 0;
    }
    else {
      plVar14 = local_78;
      if (plVar17 != (long *)0x0) {
        plVar14 = plVar17 + 1;
        do {
          iVar10 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          plVar17[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_70[0] = (long *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,local_70);
        }
        plVar14 = local_78;
      }
      local_78 = (long *)0x0;
      local_158 = plVar14;
    }
    plVar17 = local_78;
    local_150 = uVar13;
    if (local_78 != (long *)0x0) {
      plVar14 = local_78 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_78[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_70[0] = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,local_70);
      }
    }
    plVar17 = local_148;
    if (local_148 != (long *)0x0) {
      plVar14 = local_148 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_148[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_70[0] = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,local_70);
      }
    }
    do {
      uVar13 = local_150;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(&local_150,0x10);
      if (bVar4) {
        local_150 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar15 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar15;
    FUN_02a44e0c(local_70,uVar15,uVar13);
    plVar17 = local_158;
    local_158 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar14 = plVar17 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        plVar17[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_148 = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_148);
      }
    }
    plVar17 = *(long **)(param_6 + 0xa0);
    *(undefined8 *)(param_6 + 0xa0) = 0;
    if (local_70[0] == (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        plVar14 = plVar17 + 1;
        do {
          lVar16 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = (int)lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar16 == 1) {
          plVar17[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_148 = (long *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_148);
        }
      }
      uVar13 = 0;
    }
    else {
      plVar14 = local_70[0];
      if (plVar17 != (long *)0x0) {
        plVar14 = plVar17 + 1;
        do {
          iVar10 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          plVar17[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_148 = (long *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_148);
        }
        plVar14 = local_70[0];
      }
      local_70[0] = (long *)0x0;
      *(long **)(param_6 + 0xa0) = plVar14;
    }
    plVar17 = local_70[0];
    *(undefined8 *)(param_6 + 0xa8) = uVar13;
    if (local_70[0] != (long *)0x0) {
      plVar14 = local_70[0] + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_70[0][2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_148 = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_148);
      }
    }
    plVar17 = local_158;
    if (local_158 != (long *)0x0) {
      plVar14 = local_158 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_158[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar6;
        *(long *)puVar7 = lVar16;
        local_148 = (long *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_148);
      }
    }
  }
  *param_1 = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    lVar16 = plVar12[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_01cb173c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar9 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_130 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_130[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)puVar6;
      *(long *)puVar7 = lVar16;
      local_148 = (long *)*puVar9;
      FUN_02a44274(lVar16 + 0xd8,&local_148);
    }
  }
  return;
}


