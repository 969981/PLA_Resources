/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec672c; name: FUN_01ec672c
 */


void FUN_01ec672c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  long *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  int local_1a0;
  long *local_148;
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined4 local_134;
  long *local_130;
  long *local_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  long local_110;
  long lStack_108;
  long *local_f8;
  long *local_f0;
  code *pcStack_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  
  if (param_1[0x44] == 0) {
    local_f8 = (long *)0x0;
    goto LAB_01ec675c;
  }
  FUN_009acf14(&local_f8);
  if (local_f8 == (long *)0x0) goto LAB_01ec675c;
  FUN_009c69bc(&local_f0,param_1);
  lStack_108 = local_f0[0x1b];
  local_110 = local_f0[0x1a];
  if (local_f0 == (long *)0x0) {
LAB_01ec681c:
    cVar2 = (char)param_1[0x78];
  }
  else {
    lVar9 = local_f0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01ec681c;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_f0 + 0x20))();
    cVar2 = (char)param_1[0x78];
  }
  if (cVar2 != '\0') {
    lStack_108 = param_1[0x7b];
    local_110 = param_1[0x7a];
  }
  iVar7 = *(int *)((long)param_1 + 0x39c);
  if (iVar7 < (int)param_1[0x74]) {
    do {
      (**(code **)(*param_1 + 0x10))(&local_f0,param_1);
      local_120 = (undefined8 *)0x0;
      uStack_118 = 0;
      FUN_00b6111c(&local_120,&local_f0);
      plVar10 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar8 = local_f0 + 1;
        do {
          iVar6 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_1e8 = (long *)*plVar10;
          FUN_02a44274(lVar9 + 0xd8,&local_1e8);
        }
      }
      lVar9 = param_1[1];
      FUN_009c69bc(&local_130,param_1);
      pcStack_e8 = (code *)local_130[0x19];
      local_f0 = (long *)local_130[0x18];
      local_134 = 0;
      local_138[0] = 1;
      local_13c[0] = 1;
      FUN_01eca87c(&local_1e8,lVar9,&local_110,&local_f0,param_1 + 0x46,param_3,&local_134,param_2,
                   local_138,(long)param_1 + 0x39c,local_13c,param_1 + 0x73);
      local_128 = local_1e8;
      local_1e8 = (long *)0x0;
      if (local_130 != (long *)0x0) {
        lVar9 = local_130[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
        }
      }
      plVar10 = local_f8;
      local_1e8 = (long *)0x0;
      uStack_1e0 = 0;
      FUN_00b640d4(&local_1e8,&local_120);
      local_1d0 = (long *)0x0;
      local_1c8 = (code *)0x0;
      local_1c0 = (code *)0x0;
      local_1b8 = (code *)0x0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1d8 = iVar7;
      FUN_00b6141c(&local_1b0,&local_1e8);
      local_1a0 = local_1d8;
      local_1c8 = FUN_01ed0768;
      local_1d0 = (long *)&LAB_01ed0084;
      local_1b8 = FUN_01ed1000;
      local_1c0 = FUN_01ed0fc8;
      lVar9 = plVar10[0xf];
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      local_f0 = (long *)0x0;
      pcStack_e8 = (code *)0x0;
      FUN_00b640d4(&local_d0,&local_1b0);
      local_c0 = local_1a0;
      local_d8 = local_1b8;
      local_f0 = local_1d0;
      pcStack_e8 = local_1c8;
      local_e0 = local_1c0;
      FUN_01ecce54(&local_148,lVar9,&local_128,&local_f0);
      pcVar5 = pcStack_e8;
      if (pcStack_e8 == (code *)0x0) {
        pcStack_e8 = (code *)0x0;
      }
      else {
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        local_f0 = (long *)0x0;
        pcStack_e8 = (code *)0x0;
        (*pcVar5)(&local_d0);
      }
      pcVar5 = local_1c8;
      if (local_148 != (long *)0x0) {
        lVar9 = local_148[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_148 + 0x20))();
          pcVar5 = local_1c8;
        }
      }
      local_1c8 = (code *)0x0;
      plVar10 = local_1e8;
      if (pcVar5 != (code *)0x0) {
        local_1c0 = (code *)0x0;
        local_1b8 = (code *)0x0;
        local_1d0 = (long *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar5)(&local_1b0);
        plVar10 = local_1e8;
      }
      local_1e8 = plVar10;
      if (plVar10 != (long *)0x0) {
        plVar8 = plVar10 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar7;
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
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_f0 = (long *)*plVar10;
          FUN_02a44274(lVar9 + 0xd8,&local_f0);
        }
      }
      puVar4 = local_120;
      if (local_128 != (long *)0x0) {
        lVar9 = local_128[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_128 + 0x20))();
          puVar4 = local_120;
        }
      }
      local_120 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
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
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_f0 = (long *)*puVar4;
          FUN_02a44274(lVar9 + 0xd8,&local_f0);
        }
      }
      iVar7 = *(int *)((long)param_1 + 0x39c) + 1;
      *(int *)((long)param_1 + 0x39c) = iVar7;
    } while (iVar7 < (int)param_1[0x74]);
  }
  if (local_f8 != (long *)0x0) {
    lVar9 = local_f8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
LAB_01ec675c:
  plVar10 = (long *)param_1[0x72];
  param_1[0x3f] = param_1[0x6f];
  param_1[0x40] = param_1[0x70];
  param_1[0x41] = param_1[0x71];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar8 = (long *)param_1[0x42];
  param_1[0x42] = (long)plVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x3e) = 7;
  return;
}


