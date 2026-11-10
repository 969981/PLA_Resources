/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e99e50; name: FUN_01e99e50
 */


void FUN_01e99e50(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar8 = param_1[0xb4];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar10 = *(int *)(lVar8 + 0xc);
    do {
      plVar11 = *(long **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_01e99e70;
        if (plVar11 == (long *)puVar5) break;
        plVar11 = (long *)*plVar11;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01e99ec0;
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x298);
          if ((*(long *)(lVar9 + 0xe8) != 0) &&
             (*(int *)(lVar9 + 0xf0) == *(int *)(*(long *)(lVar9 + 0xe8) + 0x2c))) {
            FUN_002669c8(lVar9 + 0xe8);
            FUN_002667b4();
          }
          lVar9 = *(long *)(lVar8 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))((long *)(lVar8 + -0x50));
          lVar8 = param_1[0xb6];
          if (lVar8 == 0) goto LAB_01e99e78;
          goto LAB_01e99fa0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01e99ec0:
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01e99e70:
  lVar8 = param_1[0xb6];
  if (lVar8 != 0) {
LAB_01e99fa0:
    puVar5 = PTR_DAT_0437a6e0;
    puVar4 = PTR_DAT_0437a6d8;
    if (*(int *)(lVar8 + 0xc) != 0) {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar10 = *(int *)(lVar8 + 0xc);
      do {
        plVar11 = *(long **)(lVar8 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01e99e78;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x298);
              if ((*(long *)(lVar9 + 0xe8) != 0) &&
                 (*(int *)(lVar9 + 0xf0) == *(int *)(*(long *)(lVar9 + 0xe8) + 0x2c))) {
                FUN_002669c8(lVar9 + 0xe8);
                FUN_002667b4();
              }
              lVar9 = *(long *)(lVar8 + 8);
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))((long *)(lVar8 + -0x50));
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
  }
LAB_01e99e78:
                    /* WARNING: Could not recover jumptable at 0x01e99e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,7);
  return;
}


