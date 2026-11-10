/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02651a50; name: FUN_02651a50
 */


undefined8 FUN_02651a50(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  if (*(uint *)(param_1 + 0x78) < 2) {
    plVar8 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68);
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02651bd0;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    iVar5 = FUN_02651c6c(param_1,param_2);
    (**(code **)(*plVar8 + 0x70))(plVar8,param_2,iVar5 == 3);
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    if (iVar5 != 3) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x78) < 2) {
      uVar6 = FUN_02651be8(*(undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68),
                           param_2);
      if (*(uint *)(param_1 + 0x78) < 2) {
        (**(code **)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68) + 0x78))();
        if (*(uint *)(param_1 + 0x78) < 2) {
          (**(code **)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68) + 0x58))()
          ;
          *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
          if (uVar6 < 2) {
            (**(code **)(**(long **)(param_1 + (ulong)uVar6 * 8 + 0x68) + 0x40))();
            *(uint *)(param_1 + 0x78) = uVar6;
            return 1;
          }
        }
      }
    }
  }
  FUN_02651f60();
LAB_02651bd0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


