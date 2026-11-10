/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785034; name: FUN_00785034
 */


void FUN_00785034(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  FUN_00782f2c(param_2 + 0x40);
  plVar7 = *(long **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined8 *)(param_2 + 0xb0) = 0;
  uVar4 = FUN_00784130(*(undefined8 *)(param_2 + 0x10),param_2 + 0x20);
  if ((uVar4 & 1) == 0) {
    uVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 8))();
    *(undefined8 *)(param_2 + 0xb0) = uVar5;
    FUN_00784db0(param_1,param_2);
    return;
  }
  FUN_00784cb8(param_1,param_2);
  return;
}


