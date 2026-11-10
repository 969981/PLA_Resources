/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00999828; name: FUN_00999828
 */


void FUN_00999828(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_60 [8];
  long *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  
  plVar10 = *(long **)(param_1 + 0x100);
  if (plVar10 != (long *)0x0) {
    do {
      plVar8 = (long *)plVar10[3];
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_009999e4;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar2 = plVar8 + 0x1e;
        plVar7 = (long *)FUN_009b45b4(plVar2,&local_58);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0xf8))();
        }
        local_58 = plVar2;
        local_50 = &local_48;
        local_48 = auStack_60;
        FUN_009b4a20(plVar2,&local_58);
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  plVar10 = *(long **)(param_1 + 0x98);
  if (plVar10 != (long *)0x0) {
    do {
      while (plVar8 = (long *)plVar10[3], plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_009999e4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar2 = plVar8 + 0x1e;
        plVar7 = (long *)FUN_009abf14(plVar2,&local_58);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0xf8))();
        }
        local_58 = plVar2;
        local_50 = &local_48;
        local_48 = auStack_60;
        FUN_009b5ddc(plVar2,&local_58);
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 != 0) break;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          return;
        }
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return;
}


