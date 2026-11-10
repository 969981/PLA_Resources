/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fa5cc; name: FUN_018fa5cc
 */


void FUN_018fa5cc(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  puVar5 = PTR_DAT_0437a1e8;
  lVar10 = *(long *)(param_1 + 0xc0);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      FUN_01900910();
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_018fa5f0;
        if (plVar12 == (long *)puVar5) break;
        plVar12 = (long *)*plVar12;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_018fa638;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + -0x50);
          (**(code **)(*(long *)(lVar10 + -0x50) + 0x150))(plVar12);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 != 0) break;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
          lVar10 = *(long *)(param_1 + 0xe0);
          pbVar4 = PTR_DAT_0437a1e0;
          puVar5 = PTR_DAT_0437a1e8;
          puVar6 = (undefined8 *)PTR_DAT_0437a1f0;
          goto joined_r0x018fa700;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018fa638:
      iVar11 = iVar9;
    } while (iVar9 != 0);
  }
LAB_018fa5f0:
  lVar10 = *(long *)(param_1 + 0xe0);
  pbVar4 = PTR_DAT_0437a1e0;
  puVar5 = PTR_DAT_0437a1e8;
  puVar6 = (undefined8 *)PTR_DAT_0437a1f0;
joined_r0x018fa700:
  PTR_DAT_0437a1e0 = pbVar4;
  PTR_DAT_0437a1e8 = puVar5;
  PTR_DAT_0437a1f0 = (undefined *)puVar6;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    do {
      puVar13 = *(undefined8 **)(lVar10 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
        FUN_01900910();
        *puVar6 = puVar5;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (puVar13 == (undefined8 *)0x0) goto LAB_018fa5f8;
        if (puVar13 == puVar6) break;
        puVar13 = (undefined8 *)*puVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_018fa730;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + -0x50);
          (**(code **)(*(long *)(lVar10 + -0x50) + 0x150))(plVar12);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 != 0) break;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
          lVar10 = *(long *)(param_1 + 0xf0);
          if (lVar10 == 0) {
            return;
          }
          goto LAB_018fa7f4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018fa730:
      iVar11 = iVar9;
    } while (iVar9 != 0);
  }
LAB_018fa5f8:
  lVar10 = *(long *)(param_1 + 0xf0);
  if (lVar10 != 0) {
LAB_018fa7f4:
    puVar8 = PTR_DAT_04381fc8;
    puVar7 = PTR_DAT_04381fc0;
    puVar5 = PTR_DAT_0437a1e8;
    if (*(int *)(lVar10 + 0xc) != 0) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_01900910();
          *(undefined **)puVar8 = puVar5;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) {
            return;
          }
          if (plVar12 == (long *)puVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 == 0) {
              return;
            }
            plVar12 = (long *)(lVar10 + -0x50);
            (**(code **)(*(long *)(lVar10 + -0x50) + 0x150))(plVar12,param_2);
            lVar10 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018fa8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar12 + 0x20))(plVar12);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar9;
      } while (iVar9 != 0);
    }
  }
  return;
}


