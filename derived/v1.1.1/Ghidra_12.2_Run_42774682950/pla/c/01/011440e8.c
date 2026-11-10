/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011440e8; name: FUN_011440e8
 */


undefined4 FUN_011440e8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  long *local_28;
  
  local_28 = (long *)0x0;
  auVar7 = FUN_010ce800(&local_28,param_1 + 0x410,8,0);
  uVar5 = 3;
  if ((auVar7._8_4_ == 0) && ((auVar7._0_8_ >> 0x20 & 0xff) != 0)) {
    auVar7 = FUN_02a8d6bc(local_28,param_1 + 0x444,8);
    uVar5 = 2;
    if ((auVar7._0_8_ >> 0x20 & 0xff) == 0 || auVar7._8_4_ != 0) {
      uVar5 = 3;
    }
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
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
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar5;
}


