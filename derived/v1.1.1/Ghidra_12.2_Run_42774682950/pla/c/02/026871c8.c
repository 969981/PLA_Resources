/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026871c8; name: FUN_026871c8
 */


undefined4 FUN_026871c8(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  uVar6 = FUN_02687378();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x78) < 2) {
    plVar9 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68);
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02687360;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar6 = (**(code **)(*plVar9 + 0x68))(plVar9,param_2);
    if ((uVar6 & 1) != 0) {
      uVar8 = 1;
LAB_026872fc:
      lVar11 = plVar9[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      return uVar8;
    }
    uVar5 = FUN_02687144(plVar9,param_2);
    if (uVar5 < 2) {
      plVar10 = *(long **)(param_1 + (ulong)uVar5 * 8 + 0x68);
      if (plVar10 != (long *)0x0) {
        lVar11 = plVar10[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02687360;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar6 = (**(code **)(*plVar10 + 0x60))(plVar10,param_2);
      if (plVar10 != (long *)0x0) {
        lVar11 = plVar10[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
      uVar8 = 2;
      if ((uVar6 & 1) == 0) {
        uVar8 = 3;
      }
      goto LAB_026872fc;
    }
  }
  FUN_026874c0();
LAB_02687360:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


