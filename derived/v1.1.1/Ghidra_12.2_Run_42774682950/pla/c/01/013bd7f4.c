/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bd7f4; name: FUN_013bd7f4
 */


void FUN_013bd7f4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  local_38 = *(undefined8 *)(param_1 + 8);
  lVar5 = FUN_013bfad8(auStack_28,local_38,&DAT_03a7b608,&local_38);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x58);
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
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  if (plVar7 != (long *)0x0) {
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
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x5c0) = lVar5;
  FUN_013bd8e8(param_1);
  FUN_013bdae8(param_1);
  FUN_013bdcac(param_1);
  return;
}


