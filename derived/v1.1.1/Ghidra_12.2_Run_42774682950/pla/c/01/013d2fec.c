/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d2fec; name: FUN_013d2fec
 */


void FUN_013d2fec(long param_1,long param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  long *local_420;
  char *pcStack_418;
  undefined8 local_410;
  long *local_408;
  long *local_400;
  undefined8 *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  code *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [720];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  
  uVar10 = *(ulong *)(param_1 + 0x5d0);
  if ((uVar10 & 1) == 0) {
    if (param_3 == 0) {
      fVar13 = 30.0;
    }
    else {
      fVar13 = 30.0 / (float)param_3;
    }
    plVar11 = *(long **)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x5d8) = fVar13;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar10 = *(ulong *)(param_1 + 0x5d0);
    }
    uVar3 = uVar10 | 0x20;
    if ((param_4 & 1) == 0) {
      uVar3 = uVar10 & 0xffffffffffffffdf;
    }
    *(ulong *)(param_1 + 0x5d0) = uVar3;
    if (*(long *)(param_1 + 0x5b0) == 0) {
      uVar12 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
      FUN_00d2bd40(&local_3f0,uVar12,1);
      puVar7 = local_3f0;
      local_3f0 = (undefined8 *)0x0;
      lVar9 = *(long *)(param_1 + 0x5b0);
      *(undefined8 **)(param_1 + 0x5b0) = puVar7;
      if (lVar9 == 0) {
        *(code **)(param_1 + 0x5c8) = local_3d8;
        *(undefined8 *)(param_1 + 0x5c0) = local_3e0;
        *(undefined8 *)(param_1 + 0x5b8) = local_3e8;
        local_3f0 = (undefined8 *)0x0;
      }
      else {
        FUN_00d347f0(param_1 + 0x5b8);
        puVar7 = local_3f0;
        *(code **)(param_1 + 0x5c8) = local_3d8;
        *(undefined8 *)(param_1 + 0x5c0) = local_3e0;
        *(undefined8 *)(param_1 + 0x5b8) = local_3e8;
        local_3f0 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d347f0(&local_3e8);
        }
      }
      local_70 = 0xd4ce496b872fdd5;
      local_68 = "pane_P_picture";
      local_420 = (long *)0x8bc885c1f75c6cca;
      pcStack_418 = "work_oneshot_picture";
      local_410 = 0x14;
      local_408 = (long *)0x0;
      local_60 = 0xe;
      local_58 = (long *)0x0;
      FUN_00d62910(&local_3f0,*(undefined8 *)(param_1 + 0x2c8),&local_420,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_408 != (long *)0x0) {
        (**(code **)(*local_408 + 0x20))();
      }
      local_f0 = &LAB_013d4420;
      local_e8 = FUN_013d4594;
      local_e0 = &LAB_013d4598;
      local_d8 = &LAB_013d45a4;
      alStack_d0[0] = param_1;
      FUN_0284d5a8(*(undefined8 *)(param_1 + 0x5b0),uVar12,&local_3f0,0,&local_f0);
      pcVar6 = local_e8;
      if (local_e8 == (code *)0x0) {
        local_e8 = (code *)0x0;
        pcVar6 = local_3d8;
      }
      else {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar6)(alStack_d0);
        pcVar6 = local_3d8;
      }
      local_3d8 = pcVar6;
      if (pcVar6 != (code *)0x0) {
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_3e0 = 0;
        local_3d8 = (code *)0x0;
        (*pcVar6)(auStack_3c0);
      }
      puVar7 = local_3f0;
      if (local_3f0 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_3f0 + 1);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          local_3f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_420 = (long *)*puVar7;
          FUN_02a44274(lVar9 + 0xd8,&local_420);
        }
      }
    }
    memset(&local_3f0,0,0x300);
    snprintf((char *)&local_3f0,0x300,"bin/appli/oneshot_picture/bin/%s.bntx",
             *(char **)(param_2 + 8));
    FUN_013d33bc(&local_420,&local_3f0);
    uVar10 = FUN_0284dbec(*(undefined8 *)(param_1 + 0x5b0),&local_420,0,0,0);
    if ((uVar10 & 1) == 0) {
      local_70 = param_1 + 0x5d0;
      local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
      FUN_013d4690(&local_70);
    }
    else {
      local_70 = 0xd4ce496b872fdd5;
      local_68 = "pane_P_picture";
      local_60 = 0xe;
      local_58 = (long *)0x0;
      FUN_0283b11c(plVar11,&local_70,1);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      *(ulong *)(param_1 + 0x5d0) = *(ulong *)(param_1 + 0x5d0) & 0xffffffffffffffef | 1;
    }
    if (local_400 != (long *)0x0) {
      (**(code **)(*local_400 + 0x20))();
    }
    if (local_420 != (long *)0x0) {
      (**(code **)(*local_420 + 0x20))();
    }
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return;
}


