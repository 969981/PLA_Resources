/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafd48; name: FUN_01bafd48
 */


void FUN_01bafd48(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_28;
  
  local_28 = (long *)*param_2;
  if (local_28 == (long *)0x0) {
    FUN_01a54f4c(param_1,&local_28);
  }
  else {
    lVar8 = local_28[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    plVar6 = local_28;
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_01a54f4c(param_1,&local_28);
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xbf4) = 0;
  *(undefined1 *)(param_1 + 0xbfc) = 0;
  if ((*(byte *)(param_1 + 0xb50) & 1) == 0) {
    FUN_01a51334(param_1,&DAT_03a7ca60,*(undefined4 *)(param_1 + 0xb80));
    uVar3 = *(undefined4 *)(param_1 + 0xb88);
  }
  else {
    FUN_01a51334(param_1,&DAT_03a7ca60,0);
    uVar3 = 0;
  }
  FUN_01a51334(param_1,&DAT_03a7ca68,uVar3);
  return;
}


