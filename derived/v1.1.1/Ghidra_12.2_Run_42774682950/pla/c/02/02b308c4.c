/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b308c4; name: FUN_02b308c4
 */


void FUN_02b308c4(undefined1 *param_1,long *param_2,ulong *param_3,ulong param_4,long *param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  
  if (param_5 == (long *)0x0) {
    param_5 = (long *)param_2[1];
  }
  uVar2 = *param_3;
  uVar12 = param_3[1];
  uVar11 = param_3[2];
  plVar14 = (long *)param_3[3];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *(ulong *)(param_1 + 8) = uVar2;
  *(ulong *)(param_1 + 0x10) = uVar12;
  *param_1 = 1;
  *(ulong *)(param_1 + 0x18) = uVar11;
  *(long **)(param_1 + 0x20) = plVar14;
  uVar11 = param_2[0xf];
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar2;
    }
    else {
      uVar13 = uVar2;
      if (uVar11 <= uVar2) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar2 / uVar11;
        }
        uVar13 = uVar2 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(param_2[0xe] + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar2) {
            if (plVar14[2] == uVar2) {
              return;
            }
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar2) {
            if (plVar14[2] == uVar2) {
              return;
            }
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_5;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x128,8);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*param_5 + 0xb8))(param_5);
  }
  FUN_02b27abc(plVar14,param_3);
  plVar14[1] = (long)param_5;
  plVar14[2] = (long)plVar14;
  plVar14[3] = 0x128;
  plVar14[4] = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_4 & 1) != 0) {
    FUN_02b29034(plVar14,param_2 + 0xd);
  }
  local_78 = param_2;
  plVar9 = (long *)FUN_02b34cc0(param_5,&local_78);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)plVar9[0x1a];
  plVar9[0x1a] = (long)plVar14;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(undefined2 *)((long)plVar9 + 0x189) = 0x101;
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = plVar9 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = (int)*plVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_68 = 1;
  local_78 = plVar14;
  local_70 = plVar9;
  FUN_02b30cf4(param_2 + 0xe,param_3,&local_78);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  do {
    iVar7 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b30ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x10))(plVar14);
      return;
    }
  }
  return;
}


