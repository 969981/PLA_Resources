/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02681610; name: FUN_02681610
 */


void FUN_02681610(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long *local_48;
  
  FUN_01a5bd74(param_1,&DAT_03a7dc68,0);
  if (*(long *)(param_1 + 0xbf0) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_48);
    if ((local_48 != (long *)0x0) &&
       (FUN_01a5bd74(local_48,&DAT_03a7dc68,0), local_48 != (long *)0x0)) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  FUN_01a51334(param_1,&DAT_03a7dc80,0);
  if (*(long *)(param_1 + 0xbf0) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_48);
    if ((local_48 != (long *)0x0) &&
       (FUN_01a51334(local_48,&DAT_03a7dc80,0), local_48 != (long *)0x0)) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  FUN_01a5bd74(param_1,&DAT_03a7dc78,0);
  if (*(long *)(param_1 + 0xbf0) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_48);
    if ((local_48 != (long *)0x0) &&
       (FUN_01a5bd74(local_48,&DAT_03a7dc78,0), local_48 != (long *)0x0)) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
        lVar8 = *(long *)(param_1 + 0xc70);
        pbVar4 = PTR_DAT_0437a6d8;
        puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
        goto joined_r0x026817bc;
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0xc70);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x026817bc:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar9 = *(int *)(lVar8 + 0xc);
    do {
      plVar10 = *(long **)(lVar8 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
        uVar7 = FUN_00ad3750();
        *puVar5 = uVar7;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_02681690;
        if (plVar10 == puVar5) break;
        plVar10 = (long *)*plVar10;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 != 0) {
            plVar10 = (long *)(lVar8 + -0x50);
            FUN_02c91f14(plVar10);
            lVar8 = *(long *)(lVar8 + 8);
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
LAB_02681690:
  FUN_0261b928(param_1);
  FUN_026818a0(param_1);
  return;
}


