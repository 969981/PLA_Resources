/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02663568; name: FUN_02663568
 */


undefined4 FUN_02663568(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  uVar11 = (ulong)param_2;
  uVar5 = FUN_02663794();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x80) < 3) {
    plVar10 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x80) * 8 + 0x68);
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266377c;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = (**(code **)(*plVar10 + 0x68))(plVar10,uVar11);
    if ((uVar5 & 1) != 0) {
      uVar7 = 1;
joined_r0x02663714:
      if (plVar10 != (long *)0x0) {
        lVar12 = plVar10[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
      return uVar7;
    }
    uVar5 = plVar10[0x11];
    if ((uVar5 & uVar5 - 1) == 0) {
      plVar8 = *(long **)(plVar10[0x10] + (ulong)((int)uVar5 - 1U & param_2) * 8);
      do {
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8[1] != uVar11);
      } while (*(uint *)(plVar8 + 2) != param_2);
    }
    else {
      uVar9 = uVar11;
      if (uVar5 <= uVar11) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar11 / uVar5;
        }
        uVar9 = uVar11 - uVar9 * uVar5;
      }
      plVar8 = *(long **)(plVar10[0x10] + uVar9 * 8);
      do {
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8[1] != uVar11);
      } while (*(uint *)(plVar8 + 2) != param_2);
    }
    if (*(uint *)((long)plVar8 + 0x14) < 3) {
      plVar8 = *(long **)(param_1 + (ulong)*(uint *)((long)plVar8 + 0x14) * 8 + 0x68);
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266377c;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,uVar11);
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      uVar7 = 2;
      if ((uVar5 & 1) == 0) {
        uVar7 = 3;
      }
      goto joined_r0x02663714;
    }
  }
  FUN_026638d0();
LAB_0266377c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


