/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec5aa4; name: FUN_01ec5aa4
 */


void FUN_01ec5aa4(float param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  long *local_38;
  long *local_30;
  long lStack_28;
  
  FUN_009c69bc(&local_38);
  lStack_28 = local_38[0x19];
  local_30 = (long *)local_38[0x18];
  auVar6 = FUN_0098fad4(&local_30);
  if (local_38 != (long *)0x0) {
    lVar5 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  auVar7 = FUN_009a7ff4(auVar6._4_4_ +
                        (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) *
                        param_1,auVar6._0_8_,auVar6._8_4_);
  FUN_009c69bc(&local_30,param_2);
  *(undefined1 *)(local_30 + 0x1c) = 1;
  *(undefined1 (*) [16])(local_30 + 0x18) = auVar7;
  if (local_30 != (long *)0x0) {
    lVar5 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


