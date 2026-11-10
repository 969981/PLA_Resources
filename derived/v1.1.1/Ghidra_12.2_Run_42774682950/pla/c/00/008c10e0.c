/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c10e0; name: FUN_008c10e0
 */


undefined8 FUN_008c10e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *local_28;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    plVar7 = *(long **)(param_1 + 0x88);
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar7[0xd] == 0) {
        local_28 = (long *)0x0;
LAB_008c114c:
        bVar5 = true;
      }
      else {
        FUN_009c66e4(&local_28);
        if (local_28 == (long *)0x0) goto LAB_008c114c;
        bVar5 = (int)local_28[0xd] == 3;
        lVar8 = local_28[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (!bVar5) goto LAB_008c1170;
    }
LAB_008c11b8:
    uVar6 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0) goto LAB_008c11b8;
    FUN_008c1224(param_1);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_008c1170:
    uVar6 = 0;
  }
  return uVar6;
}


