/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b30210; name: FUN_02b30210
 */


void FUN_02b30210(long *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *local_28;
  undefined1 auStack_18 [8];
  
  uVar8 = *(ulong *)(param_2 + 0xd0);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_3;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar7;
    }
    else {
      uVar10 = uVar7;
      if (uVar8 <= uVar7) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar7 / uVar8;
        }
        uVar10 = uVar7 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 200) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_02b3032c;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_02b3032c;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_02b30318:
  *param_1 = 0;
  return;
LAB_02b3032c:
  local_28 = (long *)plVar11[6];
  if (local_28 != (long *)0x0) {
    plVar11 = local_28 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_28 != (long *)0x0) {
      lVar6 = FUN_02ab8084(auStack_18,*(undefined8 *)(param_2 + 8),&local_28);
      *param_1 = lVar6;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x50);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (local_28 == (long *)0x0) {
        return;
      }
      plVar11 = local_28 + 10;
      do {
        iVar4 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
        return;
      }
      return;
    }
  }
  goto LAB_02b30318;
}


