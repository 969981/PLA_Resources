/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cfc00; name: FUN_011cfc00
 */


void FUN_011cfc00(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_28;
  
  lVar5 = FUN_011cfed4();
  FUN_011cfdd0(param_1);
  plVar6 = *(long **)(lVar5 + 0x9d8);
  *(undefined8 *)(lVar5 + 0x9c0) = 0xd2b7481b82583848;
  *(char **)(lVar5 + 0x9c8) = "PLAY_UI_COMMON_TRANSITION";
  *(undefined8 *)(lVar5 + 0x9d0) = 0x19;
  *(undefined8 *)(lVar5 + 0x9d8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  local_28 = *(long **)(param_1 + 0x650);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
  }
  FUN_0281e3a4(lVar5,&local_28);
  if (local_28 != (long *)0x0) {
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
  FUN_0281e390(lVar5,0);
  FUN_0281e380(lVar5,0,0);
  FUN_0281e398(lVar5,param_2 & 1);
  FUN_0281857c(lVar5);
  return;
}


