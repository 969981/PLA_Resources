/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4cd94; name: FUN_02c4cd94
 */


void FUN_02c4cd94(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  code *local_278;
  code *local_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [96];
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  code *local_158;
  code *local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  long *local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long *local_48;
  
  iVar7 = *(int *)(param_1 + 0xcc);
  if (iVar7 == 2) {
    iVar7 = *(int *)(param_1 + 0x280);
    iVar5 = iVar7 + -1;
    *(int *)(param_1 + 0x280) = iVar5;
    if (iVar5 != 0 && 0 < iVar7) {
      return;
    }
LAB_02c4d3e4:
    *(undefined4 *)(param_1 + 0xcc) = 0;
    return;
  }
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      return;
    }
    lVar10 = **(long **)(param_1 + 0x68);
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (lVar10 != 0) {
      puVar2 = (undefined8 *)(lVar10 + 0x58);
    }
    if ((undefined1 *)*puVar2 == &DAT_cbf29ce484222645) {
      return;
    }
    FUN_02c4d578(*(undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 200) == 0) * 0x20 + 0x88),
                 *(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x170),
                 *(undefined8 *)(param_1 + 0x288));
    if (*(long *)(param_1 + 0x200) != 0) {
      local_170 = (undefined8 *)0x0;
      uStack_168 = 0;
      FUN_01309a54(&local_170,param_1 + 0xd0);
      local_150 = (code *)0x0;
      uStack_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
        (**(code **)(param_1 + 0xf0))(param_1 + 0x100,auStack_140);
        local_160 = *(undefined8 *)(param_1 + 0xe0);
        local_158 = *(code **)(param_1 + 0xe8);
        local_150 = *(code **)(param_1 + 0xf0);
        uStack_148 = *(undefined8 *)(param_1 + 0xf8);
      }
      local_e0 = (long *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      FUN_01309a54(&local_e0,&local_170);
      local_c0 = (code *)0x0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      if (local_150 != (code *)0x0) {
        (*local_150)(auStack_140,auStack_b0);
        local_d0 = local_160;
        local_c8 = local_158;
        local_c0 = local_150;
        uStack_b8 = uStack_148;
      }
      (**(code **)(param_1 + 0x200))(param_1 + 0x220,&local_e0);
      pcVar6 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (code *)0x0;
        uStack_b8 = 0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar6)(auStack_b0);
      }
      plVar8 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar11 = local_e0 + 1;
        do {
          iVar7 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = (long *)*plVar8;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      pcVar6 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = (code *)0x0;
        uStack_148 = 0;
        local_160 = 0;
        local_158 = (code *)0x0;
        (*pcVar6)(auStack_140);
      }
      puVar2 = local_170;
      if (local_170 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_170 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_e0 = (long *)*puVar2;
          FUN_02a44274(lVar10 + 0xd8,&local_e0);
        }
      }
    }
    plVar11 = *(long **)(param_1 + 0x68);
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar8 = (long *)plVar11[4];
    *plVar11 = 0;
    plVar11[1] = (long)&DAT_cbf29ce484222645;
    plVar11[4] = 0;
    plVar11[2] = (long)&DAT_03996322;
    plVar11[3] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + (ulong)(*(int *)(param_1 + 200) == 0) * 0x20 + 0x88) + 0x10
                    );
  if (lVar10 == 0) {
    return;
  }
  if (*(char *)(lVar10 + 0x1e1) == '\0') {
    return;
  }
  puVar2 = (undefined8 *)PTR_DAT_04379c88;
  if (**(long **)(param_1 + 0x68) != 0) {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x68) + 0x58);
  }
  if ((undefined1 *)*puVar2 != &DAT_cbf29ce484222645) goto LAB_02c4d3e4;
  FUN_02c4d6fc();
  lVar10 = *(long *)(param_1 + (ulong)(*(int *)(param_1 + 200) == 0) * 0x20 + 0x88);
  local_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_01309a54(&local_200,param_1 + 0xd0);
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = (code *)0x0;
  if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
    (**(code **)(param_1 + 0xf0))(param_1 + 0x100,auStack_1d0);
    local_1f0 = *(undefined8 *)(param_1 + 0xe0);
    local_1e8 = *(code **)(param_1 + 0xe8);
    local_1e0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_1d8 = *(undefined8 *)(param_1 + 0xf8);
  }
  pcVar6 = local_1e8;
  if ((local_200 != (undefined8 *)0x0) &&
     (iVar7 = *(int *)(param_1 + 0x160), *(int *)((long)local_200 + 0xc) != 0)) {
    if (local_200 == (undefined8 *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      FUN_0284dc38(&local_48);
    }
    local_e0 = local_48;
    puStack_d8 = &local_1f0;
    FUN_0284da90(&local_e0);
    lVar9 = FUN_00244288();
    *(long *)(*(long *)(lVar9 + 0x18) + (long)iVar7 * 0x10 + 8) = lVar10 + 0x40;
    pcVar6 = local_1e8;
    if (local_e0 != (long *)0x0) {
      lVar10 = local_e0[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_e0 + 0x20))();
        pcVar6 = local_1e8;
      }
    }
  }
  local_1e8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(auStack_1d0);
  }
  puVar2 = local_200;
  if (local_200 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_200 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_200[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_e0 = (long *)*puVar2;
      FUN_02a44274(lVar10 + 0xd8,&local_e0);
    }
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    local_290 = (undefined8 *)0x0;
    uStack_288 = 0;
    FUN_01309a54(&local_290,param_1 + 0xd0);
    local_270 = (code *)0x0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))(param_1 + 0x100,auStack_260);
      local_280 = *(undefined8 *)(param_1 + 0xe0);
      local_278 = *(code **)(param_1 + 0xe8);
      local_270 = *(code **)(param_1 + 0xf0);
      uStack_268 = *(undefined8 *)(param_1 + 0xf8);
    }
    local_e0 = (long *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    FUN_01309a54(&local_e0,&local_290);
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if (local_270 != (code *)0x0) {
      (*local_270)(auStack_260,auStack_b0);
      local_d0 = local_280;
      local_c8 = local_278;
      local_c0 = local_270;
      uStack_b8 = uStack_268;
    }
    (**(code **)(param_1 + 0x180))(param_1 + 0x1a0,&local_e0);
    pcVar6 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (code *)0x0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar6)(auStack_b0);
    }
    plVar8 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar11 = local_e0 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*plVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    pcVar6 = local_278;
    if (local_278 != (code *)0x0) {
      local_270 = (code *)0x0;
      uStack_268 = 0;
      local_280 = 0;
      local_278 = (code *)0x0;
      (*pcVar6)(auStack_260);
    }
    puVar2 = local_290;
    if (local_290 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_290 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_290[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_e0 = (long *)*puVar2;
        FUN_02a44274(lVar10 + 0xd8,&local_e0);
      }
    }
  }
  if (1 < *(uint *)(param_1 + 200)) {
                    /* WARNING: Subroutine does not return */
    FUN_02c4e6a0();
  }
  lVar10 = *(long *)(param_1 + (long)(int)*(uint *)(param_1 + 200) * 0x20 + 0x88);
  if (*(long *)(lVar10 + 0x48) != -1) {
    plVar8 = *(long **)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
        lVar9 = *(long *)(lVar10 + 0x10);
        goto joined_r0x02c4d3ac;
      }
    }
  }
  lVar9 = *(long *)(lVar10 + 0x10);
joined_r0x02c4d3ac:
  if (lVar9 != 0) {
    FUN_0098468c(lVar10 + 8);
  }
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) ^ 1;
  *(undefined4 *)(param_1 + 0x280) = 2;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  return;
}


