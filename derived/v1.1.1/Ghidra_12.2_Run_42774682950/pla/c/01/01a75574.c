/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a75574; name: FUN_01a75574
 */


undefined1  [16] FUN_01a75574(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  long *local_18;
  
  FUN_0099c748(&local_18,param_1 + 0x248);
  if (local_18 == (long *)0x0) {
    auVar7 = ZEXT816(0);
  }
  else {
    auVar7 = (**(code **)(*local_18 + 0x248))();
    uVar8 = auVar7._8_8_;
    uVar6 = auVar7._0_8_;
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[0xb];
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
        (**(code **)(*local_18 + 0x20))();
        auVar7._8_8_ = uVar8;
        auVar7._0_8_ = uVar6;
      }
    }
  }
  return auVar7;
}


