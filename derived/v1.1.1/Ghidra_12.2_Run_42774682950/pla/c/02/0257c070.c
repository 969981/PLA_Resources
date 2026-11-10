/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257c070; name: FUN_0257c070
 */


void FUN_0257c070(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint local_48;
  undefined1 local_44;
  
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_1 + 0x630);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar5 = *(long **)(lVar7 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar5[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar5 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))();
    uVar11 = (uint)*(byte *)(plVar9 + 0x11);
    if (uVar11 == 0) goto LAB_0257c190;
  }
  else {
    uVar11 = (uint)*(byte *)(plVar9 + 0x11);
    if (*(byte *)(plVar9 + 0x11) == 0) goto LAB_0257c190;
  }
  uVar10 = 0;
  do {
    lVar7 = (**(code **)(*plVar9 + 0x58))(plVar9,uVar10);
    uVar6 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
    if (((uVar6 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
      local_44 = 0;
      local_48 = uVar10;
      if (*(long *)(param_1 + 0x638) == *(long *)(param_1 + 0x640)) {
        FUN_0257dc2c(param_1 + 0x630,&local_48);
      }
      else {
        FUN_0257dd0c(param_1 + 0x648,*(long *)(param_1 + 0x638),&local_48);
        *(long *)(param_1 + 0x638) = *(long *)(param_1 + 0x638) + 8;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar11 != uVar10);
LAB_0257c190:
  lVar8 = *(long *)(param_1 + 0x630);
  lVar7 = *(long *)(param_1 + 0x638);
  uVar6 = lVar7 - lVar8 >> 3;
  *(bool *)(param_1 + 0x744) = lVar7 == lVar8;
  *(bool *)(param_1 + 0x743) = 1 < uVar6;
  if (lVar7 != lVar8) {
    lVar8 = uVar6 - 2;
    local_44 = 0;
    local_48 = 6;
    if (uVar6 < 2 || lVar8 == 0) {
      while( true ) {
        if (lVar7 == *(long *)(param_1 + 0x640)) {
          FUN_0257dc2c(param_1 + 0x630,&local_48);
        }
        else {
          FUN_0257dd0c(param_1 + 0x648,lVar7,&local_48);
          *(long *)(param_1 + 0x638) = *(long *)(param_1 + 0x638) + 8;
        }
        if (lVar8 == 0) break;
        lVar7 = *(long *)(param_1 + 0x638);
        lVar8 = lVar8 + 1;
      }
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0257c23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


