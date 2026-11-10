/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8b7b8; name: FUN_01a8b7b8
 */


void FUN_01a8b7b8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = *(long *)(param_1 + 0x658);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      uVar5 = FUN_01aa54d4(*(undefined8 *)(lVar7 + 0x10));
      if ((uVar5 & 1) == 0) break;
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a8b800;
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + -0x50);
          FUN_01a29470(plVar6);
          lVar7 = *(long *)(lVar7 + 8);
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar7 = *(long *)(param_1 + 0x668);
          if (lVar7 == 0) {
            return;
          }
          goto LAB_01a8b878;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a8b800:
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
  lVar7 = *(long *)(param_1 + 0x668);
  if (lVar7 != 0) {
LAB_01a8b878:
    if (*(int *)(lVar7 + 0xc) != 0) {
      piVar1 = (int *)(lVar7 + 0xc);
      iVar8 = *(int *)(lVar7 + 0xc);
      do {
        uVar5 = FUN_01aa55e8(*(undefined8 *)(lVar7 + 0x10));
        if ((uVar5 & 1) == 0) {
          return;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x18);
            if (lVar7 == 0) {
              return;
            }
            plVar6 = (long *)(lVar7 + -0x50);
            FUN_01b4f6f8(plVar6);
            lVar7 = *(long *)(lVar7 + 8);
            piVar1 = (int *)(lVar7 + 0xc);
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
              *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a8b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x20))(plVar6);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
  }
  return;
}


