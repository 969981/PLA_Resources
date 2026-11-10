/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0272a99c; name: FUN_0272a99c
 */


void FUN_0272a99c(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (DAT_043ea528 == '\x01') {
    local_18 = 0;
    local_40 = 0xc437672bf8d5c64f;
    pcStack_38 = "DuplicatedRun";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_02728d78(param_1,&local_40,&local_18);
    plVar5 = local_28;
    if (local_28 == (long *)0x0) {
      return;
    }
  }
  else {
    DAT_043ea528 = '\x01';
    FUN_02728e10(&local_18);
    local_60 = 0xfaf6a7bef755c01f;
    pcStack_58 = "Finalize";
    local_50 = 8;
    uStack_48 = 0;
    FUN_0272aa90(param_1,CONCAT44(uStack_14,local_18),&local_60);
    plVar5 = (long *)CONCAT44(uStack_14,local_18);
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  (**(code **)(*plVar5 + 0x20))();
  return;
}


