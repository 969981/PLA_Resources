/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00993804; name: FUN_00993804
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00993804(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_28 [8];
  
  plVar8 = *(long **)(param_1 + 0x100);
joined_r0x00993818:
  do {
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar7 = (long *)plVar8[3];
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
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
      plVar6 = (long *)FUN_009b45b4(plVar7 + 0x1e,auStack_28);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0xf0))();
      }
      lVar9 = plVar7[0xb];
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
        (**(code **)(*plVar7 + 0x20))(plVar7);
        plVar8 = (long *)*plVar8;
        goto joined_r0x00993818;
      }
    }
    plVar8 = (long *)*plVar8;
  } while( true );
}


