/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cafcb0; name: FUN_01cafcb0
 */


void FUN_01cafcb0(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                 long param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *local_158;
  undefined8 local_150;
  undefined8 *local_148;
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
  lVar15 = *param_2;
  plVar16 = *(long **)(lVar15 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x2c0,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_01812d68(plVar9,&local_130);
  plVar9[1] = (long)plVar16;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x2c0;
  plVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01cb0914;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar16 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 9;
  }
  (**(code **)(*plVar16 + 0xb8))(plVar16,lVar15);
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  FUN_009ad580(&local_148,lVar15 + 0x318);
  (**(code **)(*plVar16 + 0xc0))(plVar16,&local_148);
  puVar14 = local_148;
  puVar5 = PTR_DAT_043794a8;
  puVar4 = PTR_DAT_04379498;
  if (local_148 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_148 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_148[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)puVar5 = lVar8;
      local_158 = (long *)*puVar14;
      FUN_02a44274(lVar8 + 0xd8,&local_158);
    }
  }
  (**(code **)(*plVar16 + 200))(plVar16,*(undefined1 *)(lVar15 + 0x33b));
  (**(code **)(*plVar16 + 0x90))(plVar16);
  local_158 = plVar9;
  FUN_02a4dad4(lVar15 + 0xf0,&local_158);
  plVar16 = (long *)PTR_DAT_043794a0;
  if (local_158 == (long *)0x0) {
LAB_01caffb8:
    lVar15 = *param_4;
  }
  else {
    lVar15 = local_158[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01caffb8;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*local_158 + 0x20))();
    lVar15 = *param_4;
  }
  if (lVar15 != 0) {
    FUN_01435a5c(lVar15 + 0x440,param_3);
  }
  FUN_01cb09a8(local_70,param_5);
  plVar13 = local_70[0];
  if (local_70[0] == (long *)0x0) {
LAB_01cb00b8:
    if (param_6 != 0) goto LAB_01cb00bc;
LAB_01cb047c:
    *param_1 = (long)plVar9;
    if (plVar9 == (long *)0x0) goto LAB_01cb0400;
  }
  else {
    FUN_01813d6c(&local_148,plVar9);
    if ((local_148 != (undefined8 *)0x0) && ((undefined8 *)local_148[3] != (undefined8 *)0x0)) {
      plVar11 = (long *)(*(code *)**(undefined8 **)local_148[3])();
      puVar6 = PTR_DAT_043794d8;
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)puVar6) goto LAB_01cb0044;
      }
    }
    local_138 = 0;
LAB_01cb0044:
    FUN_0193a9f4(plVar13,local_138);
    puVar14 = local_148;
    if (local_148 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_148 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_148[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_158 = (long *)*puVar14;
        FUN_02a44274(lVar15 + 0xd8,&local_158);
      }
    }
    if (local_70[0] == (long *)0x0) goto LAB_01cb00b8;
    lVar15 = local_70[0][0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01cb00b8;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*local_70[0] + 0x20))();
    if (param_6 == 0) goto LAB_01cb047c;
LAB_01cb00bc:
    (**(code **)(*plVar9 + 0x10))(&local_148,plVar9);
    local_158 = (long *)0x0;
    local_150 = 0;
    do {
      uVar10 = local_140;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_140,0x10);
      if (bVar3) {
        local_140 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar12 = *plVar16;
    *(undefined8 *)puVar5 = uVar12;
    FUN_02a44e0c(&local_78,uVar12,uVar10);
    puVar14 = local_148;
    local_148 = (undefined8 *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar14 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar14[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_70[0] = (long *)*puVar14;
        FUN_02a44274(lVar15 + 0xd8,local_70);
      }
    }
    plVar13 = local_158;
    local_158 = (long *)0x0;
    if (local_78 == (long *)0x0) {
      if (plVar13 != (long *)0x0) {
        plVar16 = plVar13 + 1;
        do {
          lVar15 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = (int)lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar15 == 1) {
          plVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          plVar16 = (long *)PTR_DAT_043794a0;
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)puVar5 = lVar15;
          local_70[0] = (long *)*plVar13;
          FUN_02a44274(lVar15 + 0xd8,local_70);
          uVar10 = 0;
          goto LAB_01cb01b0;
        }
      }
      uVar10 = 0;
      plVar16 = (long *)PTR_DAT_043794a0;
    }
    else {
      plVar11 = local_78;
      if (plVar13 != (long *)0x0) {
        plVar11 = plVar13 + 1;
        do {
          iVar7 = (int)*plVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          plVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *plVar16;
          *(long *)puVar5 = lVar15;
          local_70[0] = (long *)*plVar13;
          FUN_02a44274(lVar15 + 0xd8,local_70);
        }
        plVar11 = local_78;
      }
      local_78 = (long *)0x0;
      local_158 = plVar11;
    }
LAB_01cb01b0:
    plVar13 = local_78;
    local_150 = uVar10;
    if (local_78 != (long *)0x0) {
      plVar11 = local_78 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_78[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_70[0] = (long *)*plVar13;
        FUN_02a44274(lVar15 + 0xd8,local_70);
      }
    }
    puVar14 = local_148;
    if (local_148 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_148 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_148[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_70[0] = (long *)*puVar14;
        FUN_02a44274(lVar15 + 0xd8,local_70);
      }
    }
    do {
      uVar10 = local_150;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_150,0x10);
      if (bVar3) {
        local_150 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar15 = *plVar16;
    *(long *)puVar5 = lVar15;
    FUN_02a44e0c(local_70,lVar15,uVar10);
    plVar13 = local_158;
    local_158 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      plVar11 = plVar13 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        plVar13[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_148 = (undefined8 *)*plVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_148);
      }
    }
    puVar14 = *(undefined8 **)(param_6 + 0xa0);
    *(undefined8 *)(param_6 + 0xa0) = 0;
    if (local_70[0] == (long *)0x0) {
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 1) {
          puVar14[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          plVar16 = (long *)PTR_DAT_043794a0;
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)puVar5 = lVar15;
          local_148 = (undefined8 *)*puVar14;
          FUN_02a44274(lVar15 + 0xd8,&local_148);
          uVar10 = 0;
          goto LAB_01cb0328;
        }
      }
      uVar10 = 0;
      plVar16 = (long *)PTR_DAT_043794a0;
    }
    else {
      plVar13 = local_70[0];
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *plVar16;
          *(long *)puVar5 = lVar15;
          local_148 = (undefined8 *)*puVar14;
          FUN_02a44274(lVar15 + 0xd8,&local_148);
        }
        plVar13 = local_70[0];
      }
      local_70[0] = (long *)0x0;
      *(long **)(param_6 + 0xa0) = plVar13;
    }
LAB_01cb0328:
    plVar13 = local_70[0];
    *(undefined8 *)(param_6 + 0xa8) = uVar10;
    if (local_70[0] != (long *)0x0) {
      plVar11 = local_70[0] + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_70[0][2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_148 = (undefined8 *)*plVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_148);
      }
    }
    plVar13 = local_158;
    if (local_158 != (long *)0x0) {
      plVar11 = local_158 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_158[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *plVar16;
        *(long *)puVar5 = lVar15;
        local_148 = (undefined8 *)*plVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_148);
      }
    }
    *param_1 = (long)plVar9;
  }
  lVar15 = plVar9[0xb];
  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01cb0914:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar15 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
    *(undefined8 *)(lVar15 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01cb0400:
  puVar14 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_130 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_130[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *plVar16;
      *(long *)puVar5 = lVar15;
      local_148 = (undefined8 *)*puVar14;
      FUN_02a44274(lVar15 + 0xd8,&local_148);
    }
  }
  return;
}


