/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0310396c; name: FUN_0310396c
 */


void FUN_0310396c(long param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  param_2 = param_2 & 0xffffff;
  lVar10 = (ulong)param_2 * 0x10;
  plVar12 = (long *)(param_1 + 8);
  lVar8 = *plVar12;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(*(long *)(lVar8 + lVar10) + 0x15d4)
  ;
  lVar11 = *(long *)(lVar8 + lVar10);
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined4 *)(lVar11 + 0x150) = 0xffffff;
  plVar7 = *(long **)(lVar8 + lVar10);
  *(undefined8 *)(lVar8 + lVar10) = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if ((int)param_2 < *(int *)(param_1 + 0x10)) {
    lVar8 = *plVar12;
    uVar9 = *(uint *)(lVar8 + (long)(int)param_2 * 0x10 + 8);
    if ((~uVar9 & 0xffffff) != 0) {
      lVar10 = (long)(int)param_2;
      lVar11 = lVar10 * 0x10;
      plVar7 = *(long **)(lVar8 + lVar11);
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar1 = plVar7 + 2;
          do {
            lVar8 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        lVar8 = *plVar12;
        uVar9 = *(uint *)(lVar8 + lVar10 * 0x10 + 8);
      }
      *(uint *)(lVar8 + lVar11 + 8) = uVar9 | 0xffffff;
      uVar4 = *(uint *)(param_1 + 0x24);
      uVar9 = uVar4 & 0xffffff;
      if (uVar9 == 0xffffff) {
        uVar9 = 0xffffffff;
      }
      puVar2 = (uint *)(param_1 + 0x24);
      *(uint *)(*plVar12 + lVar11 + 0xc) = uVar9;
      uVar9 = *puVar2;
      if (uVar9 == uVar4) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar4 & 0xff000000 | param_2;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
LAB_03103b38:
          piVar3 = (int *)(param_1 + 0x28);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        uVar4 = uVar9 & 0xffffff;
        if (uVar4 == 0xffffff) {
          uVar4 = 0xffffffff;
        }
        *(uint *)(*plVar12 + lVar10 * 0x10 + 0xc) = uVar4;
        uVar4 = *puVar2;
        if (uVar4 == uVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar9 & 0xff000000 | param_2;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_03103b38;
        }
        else {
          ClearExclusiveLocal();
        }
        uVar9 = uVar4;
      } while( true );
    }
  }
  return;
}


