/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9f644; name: FUN_01b9f644
 */


undefined1  [16] FUN_01b9f644(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 in_q3 [16];
  undefined8 uVar9;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar9 = in_q3._8_8_;
  uVar8 = in_q3._0_8_;
  local_40 = *(undefined8 *)(param_1 + 0xae8);
  pcVar6 = *(char **)(param_1 + 0xaf0);
  local_30 = *(undefined8 *)(param_1 + 0xaf8);
  local_28 = *(long **)(param_1 + 0xb00);
  pcStack_38 = pcVar6;
  if (local_28 == (long *)0x0) {
    cVar3 = *pcVar6;
  }
  else {
    (**(code **)(*local_28 + 0x18))();
    cVar3 = *pcVar6;
  }
  if (cVar3 == '\0') {
    FUN_009c69bc(&local_48,param_1);
    if (local_48 == (long *)0x0) {
      auVar7 = ZEXT816(0);
    }
    else {
      (**(code **)(*local_48 + 0x40))();
      auVar7._8_8_ = uVar9;
      auVar7._0_8_ = uVar8;
      if (local_48 != (long *)0x0) {
        lVar5 = local_48[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
  }
  else {
    auVar7 = FUN_01b39890(param_1,&local_40);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return auVar7;
}


