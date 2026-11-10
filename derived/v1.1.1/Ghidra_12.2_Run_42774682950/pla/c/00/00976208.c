/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00976208; name: FUN_00976208
 */


void FUN_00976208(long param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_38;
  
  FUN_00931034(&local_38,*(undefined8 *)(param_1 + 0x58));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = local_38[0xd1];
  uVar5 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xd);
  uVar6 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xe);
  if (param_3 == 0) {
    FUN_011d83c8(lVar7 + 0x5b0,*(undefined8 *)(lVar7 + 0x6f0),*(undefined8 *)(lVar7 + 8),uVar5,uVar6
                 ,0x14);
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  FUN_00931034(&local_38,*(undefined8 *)(param_1 + 0x58));
  FUN_011da0c8(local_38[0xd2],param_3,param_2);
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


