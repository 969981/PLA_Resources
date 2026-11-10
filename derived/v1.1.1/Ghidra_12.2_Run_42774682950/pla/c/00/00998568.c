/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00998568; name: FUN_00998568
 */


uint FUN_00998568(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *local_28;
  
  pbVar3 = *(byte **)(param_1 + 0x138);
  do {
    if (pbVar3 == *(byte **)(param_1 + 0x140)) {
      uVar10 = *(ulong *)(param_1 + 0x70);
      uVar9 = (ulong)param_2;
      if ((uVar10 & uVar10 - 1) == 0) {
        plVar11 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar10 - 1 & uVar9) * 8);
        do {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11[1] != uVar9);
        } while (*(byte *)(plVar11 + 2) != param_2);
      }
      else {
        if (uVar9 < uVar10) {
          uVar10 = uVar9;
        }
        else {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar9 / uVar10;
          }
          uVar10 = uVar9 - uVar6 * uVar10;
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
        do {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11[1] != uVar9);
        } while (*(byte *)(plVar11 + 2) != param_2);
      }
      plVar11 = *(long **)((long)plVar11 + 0x18);
      local_28 = plVar11;
      if (plVar11 == (long *)0x0) {
        uVar7 = FUN_009986ec(&local_28);
      }
      else {
        lVar12 = plVar11[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar7 = FUN_009986ec(&local_28);
        lVar12 = plVar11[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
LAB_00998630:
      return uVar7 & 1;
    }
    if ((pbVar3[0x55] != 0) && (*pbVar3 == param_2)) {
      uVar7 = 0;
      goto LAB_00998630;
    }
    pbVar3 = pbVar3 + 0x60;
  } while( true );
}


