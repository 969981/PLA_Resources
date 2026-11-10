/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129f31c; name: FUN_0129f31c
 */


void FUN_0129f31c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar5 = FUN_0129efa0();
  if ((uVar5 & 1) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x688) = 1;
  local_40 = 0xc58dc80dd320b76b;
  pcStack_38 = "View_General";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  plVar6 = (long *)FUN_012a144c(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_00d42690(plVar6,1,1);
      FUN_00d7331c(plVar6,0);
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      *(undefined1 *)((long)plVar6 + 0x5ab) = 0;
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
        (**(code **)(*plVar6 + 0x20))(plVar6);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


