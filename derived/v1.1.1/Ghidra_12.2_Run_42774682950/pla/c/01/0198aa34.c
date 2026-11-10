/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0198aa34; name: FUN_0198aa34
 */


void FUN_0198aa34(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long local_40;
  undefined1 auStack_38 [8];
  
  lVar7 = *(long *)(param_2 + 0x158);
  if (lVar7 == 0) {
    local_40 = param_2;
    lVar7 = FUN_0198c448(auStack_38,*(undefined8 *)(param_2 + 8),&local_40);
    *(ulong *)(lVar7 + 0x1e0) = *(ulong *)(lVar7 + 0x1e0) | 8;
    if (lVar7 != 0) {
      lVar9 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0198abac;
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
    }
    plVar6 = *(long **)(param_2 + 0x158);
    *(undefined8 *)(param_2 + 0x158) = 0;
    if (plVar6 != (long *)0x0) {
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
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long *)(param_2 + 0x158) = lVar7;
    pcVar8 = *(code **)(lVar7 + 0x3a8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x3b0) = 0;
      *(undefined8 *)(lVar7 + 0x3b8) = 0;
      *(undefined8 *)(lVar7 + 0x3a0) = 0;
      *(undefined8 *)(lVar7 + 0x3a8) = 0;
      (*pcVar8)(lVar7 + 0x3c0);
    }
    *(long *)(lVar7 + 0x3c0) = param_2;
    *(undefined **)(lVar7 + 0x3a0) = PTR_LAB_04382238;
    *(undefined **)(lVar7 + 0x3a8) = PTR_LAB_04382240;
    *(undefined **)(lVar7 + 0x3b0) = PTR_LAB_04382248;
    *(undefined **)(lVar7 + 0x3b8) = PTR_LAB_04382250;
    lVar7 = *(long *)(param_2 + 0x158);
    *param_1 = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    *param_1 = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 0x58);
  if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
LAB_0198abac:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


