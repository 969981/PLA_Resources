/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aaf430; name: FUN_00aaf430
 */


void FUN_00aaf430(undefined8 *param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *local_60 [2];
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_3 & 1) == 0) {
    lVar7 = FUN_00ab48e4(*param_2 + 0xf0,local_50);
    if (lVar7 == 0) {
      return;
    }
    FUN_00aaf6d0(local_50);
    FUN_00ab2b6c(param_1,local_50);
    if (local_50[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_50[0] + 1);
    do {
      iVar5 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_50[0];
    } while (cVar3 != '\0');
  }
  else {
    FUN_00ab346c(*param_2 + 0xf0,local_50);
    FUN_01c26998(local_50);
    puVar8 = local_50[0];
    if (local_50[0] == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)((long)local_50[0] + 0xc) != 0) {
      if ((local_50[0] == (undefined8 *)0x0) || (*(int *)((long)local_50[0] + 0xc) == 0)) {
LAB_00aaf4e0:
        plVar9 = (long *)0x0;
      }
      else {
        piVar1 = (int *)((long)local_50[0] + 0xc);
        iVar5 = *(int *)((long)local_50[0] + 0xc);
        do {
          uVar6 = FUN_00ab47d0(puVar8[2]);
          if ((uVar6 & 1) == 0) goto LAB_00aaf4e0;
          iVar2 = *piVar1;
          if (iVar2 == iVar5) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar7 = puVar8[3];
              plVar9 = (long *)0x0;
              if (lVar7 != 0) {
                plVar9 = (long *)(lVar7 + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar9 = (long *)0x0;
          iVar5 = iVar2;
        } while (iVar2 != 0);
      }
      FUN_00aaf6d0(local_60,plVar9);
      FUN_00ab2b6c(param_1,local_60);
      if (local_60[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60[0] + 1);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_38 = *local_60[0];
          FUN_02a44274(lVar7 + 0xd8,&local_38);
        }
      }
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    }
    if (local_50[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_50[0] + 1);
    do {
      iVar5 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_50[0];
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
    puVar8[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar7 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar7;
    local_60[0] = (undefined8 *)*puVar8;
    FUN_02a44274(lVar7 + 0xd8,local_60);
  }
  return;
}


