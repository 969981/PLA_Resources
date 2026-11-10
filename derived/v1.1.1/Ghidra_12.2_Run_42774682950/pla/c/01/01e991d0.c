/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e991d0; name: FUN_01e991d0
 */


void FUN_01e991d0(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 in_q3 [16];
  undefined8 uVar8;
  long *local_38;
  long *local_28;
  
  uVar8 = in_q3._8_8_;
  uVar7 = in_q3._0_8_;
  FUN_00956dac(&local_28,param_1 + 0x230);
  if (local_28 != (long *)0x0) {
    if (**(char **)(param_3 + 8) == '\0') {
      (**(code **)(*local_28 + 0x40))();
      auVar6._8_8_ = uVar8;
      auVar6._0_8_ = uVar7;
    }
    else {
      auVar6 = FUN_01ea5fec(param_1,param_3);
    }
    FUN_00956dac(&local_38,param_2);
    if (local_38 != (long *)0x0) {
      *(undefined1 *)(local_38 + 0x1c) = 1;
      lVar5 = local_38[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      *(undefined1 (*) [16])(local_38 + 0x1a) = auVar6;
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      lVar5 = local_28[0xb];
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
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


