/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9c650; name: FUN_01e9c650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e9c650(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  long local_230;
  char *local_228;
  long *local_218;
  long *local_210;
  long *local_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  long *local_1d8;
  long *local_1d0;
  long *local_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b4 [4];
  long *local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  code *local_198;
  undefined1 *local_190;
  long *plStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined1 local_fc [4];
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_38;
  
  FUN_01e9e530(&local_1c8);
  plVar10 = local_1c8;
  if (local_1c8 == (long *)0x0) {
    return;
  }
  lVar13 = param_1[1];
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar7 != 0))
  {
    local_c0 = (long *)FUN_00938550();
    puVar5 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_c0);
    FUN_00100250(PTR_LAB_0437a8d8,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar14 = *(long **)PTR_DAT_0437a7d0;
  if (plVar14 == (long *)0x0) {
    local_1f0 = *(long *)PTR_DAT_04379c88;
LAB_01e9e020:
    lStack_1e8 = *(long *)PTR_PTR_04379d00;
    if (plVar14 != (long *)0x0) goto LAB_01e9c6b8;
LAB_01e9e030:
    local_1e0 = 0;
  }
  else {
    local_1f0 = plVar14[0xb];
    if (plVar14 == (long *)0x0) goto LAB_01e9e020;
    lStack_1e8 = plVar14[0xc];
    if (plVar14 == (long *)0x0) goto LAB_01e9e030;
LAB_01e9c6b8:
    local_1e0 = plVar14[0xd];
  }
  local_1d8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_1d8 = plVar14;
  FUN_01845684(&local_1d0,plVar10,lVar13,&local_1f0);
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  if (local_1d0 != (long *)0x0) {
    local_c0 = (long *)local_1c8[0x12];
    local_b8 = (code *)local_1c8[0x13];
    plVar14 = (long *)FUN_00bd8988(local_1d0,local_1d0[1],&local_c0);
    (**(code **)(*plVar14 + 0x10))(&local_c0);
    local_1a0 = (long *)0x0;
    local_198 = (code *)0x0;
    FUN_00bd84b0(&local_1a0,&local_c0);
    plVar10 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar1 = local_c0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_f0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_f0);
      }
    }
    FUN_01e9e820(param_1 + 0x56,&local_1a0);
    plVar10 = local_1a0;
    if (local_1a0 != (long *)0x0) {
      plVar1 = local_1a0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_1a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_c0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_c0);
      }
    }
    FUN_00956dac(&local_f0,param_1 + 0x35);
    (**(code **)(*local_f0 + 0x18))(&local_c0);
    local_200 = (undefined8 *)0x0;
    uStack_1f8 = 0;
    FUN_0087f944(&local_200,&local_c0);
    plVar10 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar1 = local_c0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_1a0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_1a0);
      }
    }
    FUN_00d804f8(plVar14,&local_200,1);
    puVar6 = local_200;
    if (local_200 != (undefined8 *)0x0) {
      piVar11 = (int *)(local_200 + 1);
      do {
        iVar7 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_200[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_c0 = (long *)*puVar6;
        FUN_02a44274(lVar13 + 0xd8,&local_c0);
      }
    }
    if (local_f0 != (long *)0x0) {
      lVar13 = local_f0[0xb];
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    (**(code **)(*local_1d0 + 0x10))(&local_c0);
    local_1a0 = (long *)0x0;
    local_198 = (code *)0x0;
    FUN_0087f944(&local_1a0,&local_c0);
    plVar10 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar14 = local_c0 + 1;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_f0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_f0);
      }
    }
    FUN_0087fcf0(param_1 + 0x52,&local_1a0);
    plVar10 = local_1a0;
    if (local_1a0 != (long *)0x0) {
      plVar14 = local_1a0 + 1;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_1a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_c0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_c0);
      }
    }
  }
  FUN_0108dfa0(&local_c0,param_1[0x41]);
  plVar10 = local_1d0;
  if (*local_b8 != (code)0x0) {
    local_208 = local_1d0;
    if (local_1d0 == (long *)0x0) {
      FUN_01e9eb5c(&local_d0,param_1,&local_c0,&local_208);
      plVar14 = local_d0;
    }
    else {
      lVar13 = local_1d0[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01e9e0a4;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01e9eb5c(&local_d0,param_1,&local_c0,&local_208);
      lVar13 = plVar10[0xb];
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar14 = local_d0;
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
        plVar14 = local_d0;
      }
    }
    local_d0 = plVar14;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(&local_1a0,plVar14);
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      FUN_00ad3450(&local_f0,&local_1a0);
      plVar10 = local_1a0;
      if (local_1a0 != (long *)0x0) {
        plVar1 = local_1a0 + 1;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          local_1a0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_230 = *plVar10;
          FUN_02a44274(lVar13 + 0xd8,&local_230);
        }
      }
      FUN_00ad52f4(param_1 + 0xb4,&local_f0);
      plVar10 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar1 = local_f0 + 1;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_1a0 = (long *)*plVar10;
          FUN_02a44274(lVar13 + 0xd8,&local_1a0);
        }
      }
      lVar13 = plVar14[0xb];
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_0108de64(&local_c0,param_1[0x41]);
  if (*local_b8 != (code)0x0) {
    FUN_01e9f7cc(param_1);
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_0108e348(&local_c0,param_1[0x41]);
  plVar10 = local_1d0;
  local_210 = local_1d0;
  if (local_1d0 == (long *)0x0) {
    FUN_01e9eb5c(&local_d0,param_1,&local_c0,&local_210);
    plVar14 = local_d0;
  }
  else {
    lVar13 = local_1d0[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01e9e0a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    piVar11 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01e9eb5c(&local_d0,param_1,&local_c0,&local_210);
    lVar13 = plVar10[0xb];
    piVar11 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar14 = local_d0;
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      plVar14 = local_d0;
    }
  }
  local_d0 = plVar14;
  if (plVar14 != (long *)0x0) {
    *(undefined1 *)((long)param_1 + 0x63e) = 1;
    (**(code **)(*plVar14 + 0x18))(&local_1a0,plVar14);
    local_f0 = (long *)0x0;
    uStack_e8 = 0;
    FUN_00ad3450(&local_f0,&local_1a0);
    plVar10 = local_1a0;
    if (local_1a0 != (long *)0x0) {
      plVar1 = local_1a0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_1a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_230 = *plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_230);
      }
    }
    FUN_00ad52f4(param_1 + 0xb6,&local_f0);
    plVar10 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar1 = local_f0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_1a0 = (long *)*plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_1a0);
      }
    }
    lVar13 = plVar14[0xb];
    piVar11 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_0108e9d8(&local_c0,param_1[0x41]);
  if (*local_b8 != (code)0x0) {
    FUN_01e9fd60(param_1);
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_0108e604(&local_230,param_1[0x41]);
  if (*local_228 != '\0') {
    pcVar9 = (char *)param_1[0x41];
    if (*pcVar9 == '\0') {
      piVar11 = *(int **)(pcVar9 + 0x28);
      if (piVar11 == (int *)0x0) {
        piVar11 = *(int **)(pcVar9 + 0x20);
      }
    }
    else {
      piVar11 = *(int **)(pcVar9 + 0x30);
    }
    fVar15 = 0.0;
    if ((0x2c < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x16], uVar12 != 0)) {
      fVar15 = *(float *)((long)piVar11 + uVar12);
    }
    fVar16 = *(float *)((long)param_1 + 0x4e4);
    uStack_c8 = CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar15 * fVar16,
                         (float)_UNK_03888fc8 * fVar15 * fVar16);
    local_d0 = (long *)CONCAT44((float)((ulong)_DAT_03888fc0 >> 0x20) * fVar15 * fVar16,
                                (float)_DAT_03888fc0 * fVar15 * fVar16);
    FUN_0108e604(&local_f0);
    if (param_1[0xc0] == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_009acf14(&local_38);
      if (local_38 != (long *)0x0) {
        local_f8 = (long *)0x0;
        lVar13 = param_1[1];
        local_110 = (long *)CONCAT71(local_110._1_7_,1);
        local_1b0 = (long *)CONCAT71(local_1b0._1_7_,1);
        local_fc[0] = 1;
        local_118 = (long *)((ulong)local_118 & 0xffffffffffffff00);
        local_1c0 = 0;
        FUN_01ea5884(&local_c0,param_1);
        plVar10 = (long *)FUN_01eae484(lVar13,&local_d0,&local_f0,&local_110,&local_1b0,&local_118,
                                       &local_1c0,local_fc,&local_c0);
        if (plVar10 != (long *)0x0) {
          lVar13 = plVar10[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01e9e0a4;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar8;
          }
          plVar14 = local_f8;
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_f8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            lVar13 = plVar14[0xb];
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))();
            }
          }
        }
        plVar14 = local_c0;
        local_f8 = plVar10;
        if (local_c0 != (long *)0x0) {
          plVar10 = local_c0 + 1;
          do {
            iVar7 = (int)*plVar10 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_1a0 = (long *)*plVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_1a0);
          }
        }
        (**(code **)(*param_1 + 0x10))(&local_c0,param_1);
        local_110 = (long *)0x0;
        uStack_108 = 0;
        FUN_01eacb9c(&local_110,&local_c0);
        plVar10 = local_c0;
        if (local_c0 != (long *)0x0) {
          plVar14 = local_c0 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_1a0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_1a0);
          }
        }
        plVar10 = local_38;
        local_1b0 = (long *)0x0;
        uStack_1a8 = 0;
        FUN_01ead384(&local_1b0,&local_110);
        local_180 = 0;
        uStack_178 = 0;
        local_190 = (undefined1 *)0x0;
        plStack_188 = (long *)0x0;
        local_1a0 = (long *)0x0;
        local_198 = (code *)0x0;
        FUN_01eacf70(&local_180,&local_1b0);
        local_1a0 = (long *)&LAB_01eaf81c;
        local_198 = FUN_01eafac8;
        local_190 = &LAB_01eafb88;
        plStack_188 = (long *)&LAB_01eafb9c;
        lVar13 = plVar10[0xf];
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        FUN_01ead384(&local_a0,&local_180);
        local_b8 = local_198;
        local_b0 = local_190;
        local_c0 = local_1a0;
        local_a8 = plStack_188;
        FUN_00bdc73c(&local_118,lVar13,0xc,&local_f8,&local_c0,0);
        pcVar4 = local_b8;
        if (local_b8 == (code *)0x0) {
          local_b8 = (code *)0x0;
        }
        else {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (long *)0x0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar4)(&local_a0);
        }
        pcVar4 = local_198;
        if (local_118 != (long *)0x0) {
          lVar13 = local_118[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_118 + 0x20))();
            pcVar4 = local_198;
          }
        }
        local_198 = (code *)0x0;
        plVar10 = local_1b0;
        if (pcVar4 != (code *)0x0) {
          local_190 = (undefined1 *)0x0;
          plStack_188 = (long *)0x0;
          local_1a0 = (long *)0x0;
          local_198 = (code *)0x0;
          (*pcVar4)(&local_180);
          plVar10 = local_1b0;
        }
        local_1b0 = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar14 = plVar10 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            plVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_c0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_c0);
          }
        }
        plVar10 = local_110;
        if (local_110 != (long *)0x0) {
          plVar14 = local_110 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_110[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_c0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_c0);
          }
        }
        if (local_f8 != (long *)0x0) {
          lVar13 = local_f8[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_f8 + 0x20))();
          }
        }
        if (local_38 != (long *)0x0) {
          lVar13 = local_38[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    *(undefined1 *)(param_1 + 200) = 1;
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  FUN_0108e750(&local_230,param_1[0x41]);
  if (*local_228 != '\0') {
    FUN_00956dac(&local_38,param_1 + 0x46);
    if (local_38 != (long *)0x0) {
      pcVar9 = (char *)param_1[0x41];
      if (*pcVar9 == '\0') {
        piVar11 = *(int **)(pcVar9 + 0x28);
        if (piVar11 == (int *)0x0) {
          piVar11 = *(int **)(pcVar9 + 0x20);
        }
      }
      else {
        piVar11 = *(int **)(pcVar9 + 0x30);
      }
      fVar15 = 0.0;
      if ((0x30 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x18], uVar12 != 0)) {
        fVar15 = *(float *)((long)piVar11 + uVar12);
      }
      uStack_c8 = CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar15,
                           (float)_UNK_03888fc8 * fVar15);
      local_d0 = (long *)CONCAT44((float)((ulong)_DAT_03888fc0 >> 0x20) * fVar15,
                                  (float)_DAT_03888fc0 * fVar15);
      FUN_0108e750(&local_f0);
      if (param_1[0xc0] == 0) {
        local_f8 = (long *)0x0;
      }
      else {
        FUN_009acf14(&local_f8);
        if (local_f8 != (long *)0x0) {
          local_118 = (long *)0x0;
          lVar13 = param_1[1];
          local_110 = (long *)CONCAT71(local_110._1_7_,1);
          local_1b0 = (long *)CONCAT71(local_1b0._1_7_,1);
          local_1b4[0] = 1;
          local_1c0 = 0;
          local_fc[0] = 0;
          FUN_01ea5884(&local_c0,param_1);
          plVar10 = (long *)FUN_01eae484(lVar13,&local_d0,&local_f0,&local_110,&local_1b0,&local_1c0
                                         ,local_fc,local_1b4,&local_c0);
          if (plVar10 != (long *)0x0) {
            lVar13 = plVar10[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01e9e0a4;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar8;
            }
            plVar14 = local_118;
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            local_118 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              lVar13 = plVar14[0xb];
              piVar11 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar3) {
                  *piVar11 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar14 + 0x20))();
              }
            }
          }
          plVar14 = local_c0;
          local_118 = plVar10;
          if (local_c0 != (long *)0x0) {
            plVar10 = local_c0 + 1;
            do {
              iVar7 = (int)*plVar10 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *(int *)plVar10 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_1a0 = (long *)*plVar14;
              FUN_02a44274(lVar13 + 0xd8,&local_1a0);
            }
          }
          (**(code **)(*param_1 + 0x10))(&local_c0,param_1);
          local_110 = (long *)0x0;
          uStack_108 = 0;
          FUN_01eacb9c(&local_110,&local_c0);
          plVar10 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar14 = local_c0 + 1;
            do {
              iVar7 = (int)*plVar14 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *(int *)plVar14 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_1a0 = (long *)*plVar10;
              FUN_02a44274(lVar13 + 0xd8,&local_1a0);
            }
          }
          plVar10 = local_f8;
          local_1b0 = (long *)0x0;
          uStack_1a8 = 0;
          FUN_01ead384(&local_1b0,&local_110);
          local_180 = 0;
          uStack_178 = 0;
          local_190 = (undefined1 *)0x0;
          plStack_188 = (long *)0x0;
          local_1a0 = (long *)0x0;
          local_198 = (code *)0x0;
          FUN_01eacf70(&local_180,&local_1b0);
          local_1a0 = (long *)&LAB_01eaffbc;
          local_198 = FUN_01eb098c;
          local_190 = &LAB_01eb0a4c;
          plStack_188 = (long *)&LAB_01eb0a60;
          lVar13 = plVar10[0xf];
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = (undefined1 *)0x0;
          local_a8 = (long *)0x0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          FUN_01ead384(&local_a0,&local_180);
          local_b8 = local_198;
          local_b0 = local_190;
          local_c0 = local_1a0;
          local_a8 = plStack_188;
          FUN_00bdc73c(&local_1c0,lVar13,0xc,&local_118,&local_c0,0);
          pcVar4 = local_b8;
          if (local_b8 == (code *)0x0) {
            plVar10 = (long *)CONCAT71(uStack_1bf,local_1c0);
            local_b8 = (code *)0x0;
          }
          else {
            local_b0 = (undefined1 *)0x0;
            local_a8 = (long *)0x0;
            local_c0 = (long *)0x0;
            local_b8 = (code *)0x0;
            (*pcVar4)(&local_a0);
            plVar10 = (long *)CONCAT71(uStack_1bf,local_1c0);
          }
          pcVar4 = local_198;
          if (plVar10 != (long *)0x0) {
            lVar13 = plVar10[0xb];
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
              pcVar4 = local_198;
            }
          }
          local_198 = (code *)0x0;
          plVar10 = local_1b0;
          if (pcVar4 != (code *)0x0) {
            local_190 = (undefined1 *)0x0;
            plStack_188 = (long *)0x0;
            local_1a0 = (long *)0x0;
            local_198 = (code *)0x0;
            (*pcVar4)(&local_180);
            plVar10 = local_1b0;
          }
          local_1b0 = plVar10;
          if (plVar10 != (long *)0x0) {
            plVar14 = plVar10 + 1;
            do {
              iVar7 = (int)*plVar14 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *(int *)plVar14 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              plVar10[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_c0 = (long *)*plVar10;
              FUN_02a44274(lVar13 + 0xd8,&local_c0);
            }
          }
          plVar10 = local_110;
          if (local_110 != (long *)0x0) {
            plVar14 = local_110 + 1;
            do {
              iVar7 = (int)*plVar14 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *(int *)plVar14 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              local_110[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_c0 = (long *)*plVar10;
              FUN_02a44274(lVar13 + 0xd8,&local_c0);
            }
          }
          if (local_118 != (long *)0x0) {
            lVar13 = local_118[0xb];
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_118 + 0x20))();
            }
          }
          if (local_f8 != (long *)0x0) {
            lVar13 = local_f8[0xb];
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_f8 + 0x20))();
            }
          }
        }
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        lVar13 = local_38[0xb];
        piVar11 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x641) = 1;
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  if (*(int *)((long)param_1 + 0x2ec) == 0) {
    FUN_0108d8b8(&local_c0,param_1[0x41]);
    if (*local_b8 != (code)0x0) {
      FUN_01ea0300(param_1);
      *(undefined1 *)((long)param_1 + 0x635) = 1;
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  FUN_0108db94(&local_230,param_1[0x41]);
  if (*local_228 != '\0') {
    pcVar9 = (char *)param_1[0x41];
    if (*pcVar9 == '\0') {
      piVar11 = *(int **)(pcVar9 + 0x28);
      if (piVar11 == (int *)0x0) {
        piVar11 = *(int **)(pcVar9 + 0x20);
      }
    }
    else {
      piVar11 = *(int **)(pcVar9 + 0x30);
    }
    fVar15 = 0.0;
    if ((0x10 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[8], uVar12 != 0)) {
      fVar15 = *(float *)((long)piVar11 + uVar12);
    }
    fVar16 = *(float *)((long)param_1 + 0x4e4);
    uStack_c8 = CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar15 * fVar16,
                         (float)_UNK_03888fc8 * fVar15 * fVar16);
    local_d0 = (long *)CONCAT44((float)((ulong)_DAT_03888fc0 >> 0x20) * fVar15 * fVar16,
                                (float)_DAT_03888fc0 * fVar15 * fVar16);
    FUN_0108db94(&local_f0);
    if (param_1[0xc0] == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_009acf14(&local_38);
      if (local_38 != (long *)0x0) {
        local_f8 = (long *)0x0;
        lVar13 = param_1[1];
        local_110 = (long *)CONCAT71(local_110._1_7_,1);
        local_1b0 = (long *)CONCAT71(local_1b0._1_7_,1);
        local_fc[0] = 1;
        local_118 = (long *)((ulong)local_118 & 0xffffffffffffff00);
        local_1c0 = 0;
        FUN_01ea5884(&local_c0,param_1);
        plVar10 = (long *)FUN_01eae484(lVar13,&local_d0,&local_f0,&local_110,&local_1b0,&local_118,
                                       &local_1c0,local_fc,&local_c0);
        if (plVar10 != (long *)0x0) {
          lVar13 = plVar10[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01e9e0a4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar8;
          }
          plVar14 = local_f8;
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_f8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            lVar13 = plVar14[0xb];
            piVar11 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))();
            }
          }
        }
        plVar14 = local_c0;
        local_f8 = plVar10;
        if (local_c0 != (long *)0x0) {
          plVar10 = local_c0 + 1;
          do {
            iVar7 = (int)*plVar10 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_1a0 = (long *)*plVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_1a0);
          }
        }
        (**(code **)(*param_1 + 0x10))(&local_c0,param_1);
        local_110 = (long *)0x0;
        uStack_108 = 0;
        FUN_01eacb9c(&local_110,&local_c0);
        plVar10 = local_c0;
        if (local_c0 != (long *)0x0) {
          plVar14 = local_c0 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_1a0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_1a0);
          }
        }
        plVar10 = local_38;
        local_1b0 = (long *)0x0;
        uStack_1a8 = 0;
        FUN_01ead384(&local_1b0,&local_110);
        local_180 = 0;
        uStack_178 = 0;
        local_190 = (undefined1 *)0x0;
        plStack_188 = (long *)0x0;
        local_1a0 = (long *)0x0;
        local_198 = (code *)0x0;
        FUN_01eacf70(&local_180,&local_1b0);
        local_1a0 = (long *)&LAB_01eae6d4;
        local_198 = FUN_01eaef1c;
        local_190 = &LAB_01eaefdc;
        plStack_188 = (long *)&LAB_01eaeff0;
        lVar13 = plVar10[0xf];
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        FUN_01ead384(&local_a0,&local_180);
        local_b8 = local_198;
        local_b0 = local_190;
        local_c0 = local_1a0;
        local_a8 = plStack_188;
        FUN_00bdc73c(&local_118,lVar13,0xc,&local_f8,&local_c0,0);
        pcVar4 = local_b8;
        if (local_b8 == (code *)0x0) {
          local_b8 = (code *)0x0;
        }
        else {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (long *)0x0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar4)(&local_a0);
        }
        pcVar4 = local_198;
        if (local_118 != (long *)0x0) {
          lVar13 = local_118[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_118 + 0x20))();
            pcVar4 = local_198;
          }
        }
        local_198 = (code *)0x0;
        plVar10 = local_1b0;
        if (pcVar4 != (code *)0x0) {
          local_190 = (undefined1 *)0x0;
          plStack_188 = (long *)0x0;
          local_1a0 = (long *)0x0;
          local_198 = (code *)0x0;
          (*pcVar4)(&local_180);
          plVar10 = local_1b0;
        }
        local_1b0 = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar14 = plVar10 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            plVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_c0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_c0);
          }
        }
        plVar10 = local_110;
        if (local_110 != (long *)0x0) {
          plVar14 = local_110 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            local_110[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_c0 = (long *)*plVar10;
            FUN_02a44274(lVar13 + 0xd8,&local_c0);
          }
        }
        if (local_f8 != (long *)0x0) {
          lVar13 = local_f8[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_f8 + 0x20))();
          }
        }
        if (local_38 != (long *)0x0) {
          lVar13 = local_38[0xb];
          piVar11 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    *(undefined1 *)((long)param_1 + 0x637) = 1;
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  FUN_0108e484(&local_c0,param_1[0x41]);
  if (*local_b8 != (code)0x0) {
    FUN_01ea0940(param_1);
    *(undefined1 *)((long)param_1 + 0x639) = 1;
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_1d0 != (long *)0x0) {
    lVar13 = local_1d0[0xb];
    piVar11 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_1d0 + 0x20))();
    }
  }
  if (local_1c8 != (long *)0x0) {
    lVar13 = local_1c8[0xb];
    piVar11 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_1c8 + 0x20))();
    }
  }
  return;
}


