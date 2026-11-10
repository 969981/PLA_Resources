/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129efa0; name: FUN_0129efa0
 */


bool FUN_0129efa0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = &DAT_753f74378b49da9c;
  pcStack_48 = "View_Top";
  local_40 = 8;
  plVar6 = (long *)FUN_012a11fc(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_50 = (undefined1 *)0xc58dc80dd320b76b;
      pcStack_48 = "View_General";
      local_40 = 0xc;
      local_38 = (long *)0x0;
      plVar8 = (long *)FUN_012a144c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar9 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
            *(undefined8 *)(lVar9 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (*(char *)((long)plVar6 + 0x5ab) == '\0') {
            bVar5 = true;
          }
          else {
            bVar5 = *(char *)((long)plVar8 + 0x5ab) == '\0';
          }
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
          lVar9 = plVar6[0xb];
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
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          return bVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


