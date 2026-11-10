/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b54fa0; name: FUN_01b54fa0
 */


void FUN_01b54fa0(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *local_58;
  
  plVar8 = *(long **)(param_1 + 0x3c0);
  plVar9 = *(long **)(param_1 + 0x3c8);
  if (plVar8 != plVar9) {
    do {
      local_58 = (long *)*plVar8;
      lVar7 = local_58[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar5;
      }
      plVar6 = local_58;
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((undefined1 *)local_58[0x29] != &DAT_cbf29ce484222645) {
        FUN_01b62b0c(param_1 + 0x4f8,local_58 + 0x29);
      }
      FUN_01b55130(plVar6,param_2 & 1);
      FUN_01b55228(param_1 + 0x430,&local_58);
      if (local_58 != (long *)0x0) {
        lVar7 = local_58[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
    plVar8 = *(long **)(param_1 + 0x3c0);
    plVar9 = *(long **)(param_1 + 0x3c8);
LAB_01b550b0:
    if (plVar9 != plVar8) {
      while( true ) {
        plVar9 = plVar9 + -1;
        plVar6 = (long *)*plVar9;
        if (plVar6 == (long *)0x0) break;
        lVar7 = plVar6[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) break;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
        if (plVar9 == plVar8) goto LAB_01b550f4;
      }
      goto LAB_01b550b0;
    }
  }
LAB_01b550f4:
  *(long **)(param_1 + 0x3c8) = plVar8;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  return;
}


