/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125689c; name: FUN_0125689c
 */


void FUN_0125689c(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  long *local_38;
  
  uVar6 = FUN_01255464();
  FUN_01255324(param_1);
  local_38 = *(long **)(param_1 + 0x5b0);
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
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
  FUN_0281e3a4(uVar6,&local_38);
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  puVar8 = (undefined4 *)FUN_012554ec(param_1);
  FUN_0281e390(uVar6,puVar8[1]);
  FUN_0281e380(uVar6,*puVar8,0);
  FUN_0281e398(uVar6,param_2 & 1);
  FUN_0281857c(uVar6);
  uVar5 = FUN_0124efdc(param_1);
  FUN_0124f2d8(param_1,uVar5 & 1);
  return;
}


