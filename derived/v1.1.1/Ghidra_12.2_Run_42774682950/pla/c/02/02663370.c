/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02663370; name: FUN_02663370
 */


undefined8 FUN_02663370(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if (*(uint *)(param_1 + 0x80) < 3) {
    plVar12 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x80) * 8 + 0x68);
    uVar11 = (ulong)param_2;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02663550;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar6 = FUN_02663568(param_1,uVar11);
    (**(code **)(*plVar12 + 0x70))(plVar12,uVar11,iVar6 == 3);
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    if (iVar6 != 3) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x80) < 3) {
      plVar12 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x80) * 8 + 0x68);
      uVar8 = plVar12[0x11];
      if ((uVar8 & uVar8 - 1) == 0) {
        plVar9 = *(long **)(plVar12[0x10] + (ulong)((int)uVar8 - 1U & param_2) * 8);
        do {
          do {
            plVar9 = (long *)*plVar9;
          } while (plVar9[1] != uVar11);
        } while (*(uint *)(plVar9 + 2) != param_2);
      }
      else {
        uVar10 = uVar11;
        if (uVar8 <= uVar11) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar11 / uVar8;
          }
          uVar10 = uVar11 - uVar10 * uVar8;
        }
        plVar9 = *(long **)(plVar12[0x10] + uVar10 * 8);
        do {
          do {
            plVar9 = (long *)*plVar9;
          } while (plVar9[1] != uVar11);
        } while (*(uint *)(plVar9 + 2) != param_2);
      }
      uVar3 = *(uint *)((long)plVar9 + 0x14);
      (**(code **)(*plVar12 + 0x78))();
      if (*(uint *)(param_1 + 0x80) < 3) {
        (**(code **)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x80) * 8 + 0x68) + 0x58))();
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
        if (uVar3 < 3) {
          (**(code **)(**(long **)(param_1 + (ulong)uVar3 * 8 + 0x68) + 0x40))();
          *(uint *)(param_1 + 0x80) = uVar3;
          return 1;
        }
      }
    }
  }
  FUN_026638d0();
LAB_02663550:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


