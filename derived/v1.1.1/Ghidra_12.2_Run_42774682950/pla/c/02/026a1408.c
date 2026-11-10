/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a1408; name: FUN_026a1408
 */


void FUN_026a1408(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long local_48;
  
  FUN_01a5bd74(param_1,&DAT_03a7dca0,0);
  if (*(long *)(param_1 + 0xbf0) == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_78);
    if ((local_78 != (long *)0x0) &&
       (FUN_01a5bd74(local_78,&DAT_03a7dca0,0), local_78 != (long *)0x0)) {
      lVar11 = local_78[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  FUN_0261940c(param_1,&DAT_03a7dca8,0);
  *(undefined1 *)(param_1 + 0xc68) = 0;
  *(undefined2 *)(param_1 + 0xc6d) = 0;
  *(undefined1 *)(param_1 + 0xc6f) = 0;
  *(undefined2 *)(param_1 + 0xc71) = 0;
  lVar11 = *(long *)(param_1 + 0xc58);
  *(undefined2 *)(param_1 + 0xc74) = 0;
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar12 = *(long **)(lVar11 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar10 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_026a147c;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + -0x50);
            FUN_02c91f14(plVar12);
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_026a147c:
  *(ulong *)(param_1 + 0xc78) = *(ulong *)(param_1 + 0xc78) & 0xfffffffffffffffc;
  FUN_026a1098(param_1);
  FUN_0261b928(param_1);
  if (*(char *)(param_1 + 0xc73) != '\0') {
    FUN_01a60570(&local_78,param_1);
    if (local_78 == (long *)0x0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_58);
      plVar12 = local_78;
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *plVar12;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
    }
    if (local_58 != (long *)0x0) {
      local_78 = (long *)0x33694b4c93791621;
      pcStack_70 = "STOP_PM_RIDE_DASH_WHOOSH_LP";
      local_68 = 0x1b;
      local_60 = (long *)0x0;
      FUN_0290b66c(local_58,&local_78,0);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        lVar11 = local_58[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
    *(undefined1 *)(param_1 + 0xc73) = 0;
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar11 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar11;
    lVar11 = lVar11 + 0x3c0;
    local_78 = (long *)&DAT_56d709df6eaf0595;
    uVar7 = FUN_00da36a4(lVar11,&local_78);
    FUN_00da36f0(lVar11,uVar7,0);
  }
  return;
}


