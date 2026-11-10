/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a73734; name: FUN_02a73734
 */


undefined1  [16] FUN_02a73734(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long local_38;
  
  (**(code **)(*param_1 + 0x50))(&local_38);
  plVar5 = (long *)param_1[0x4a];
  param_1[0x4a] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0x4a] = local_38;
  auVar8 = FUN_02a768ac(param_1);
  uVar7 = auVar8._0_8_;
  uVar6 = uVar7 >> 0x28;
  if ((uVar7 >> 0x20 & 0xff) == 0) {
    uVar7 = 0;
  }
  else if (auVar8._8_4_ == 0) {
    auVar8 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar7 = auVar8._0_8_ >> 0x20;
    uVar6 = auVar8._0_8_ >> 0x28;
    if (*(char *)((long)param_1 + 0x1e2) != '\0') {
      nn::fs::CloseFile(param_1[0x1c]);
      *(undefined1 *)((long)param_1 + 0x1e2) = 0;
    }
  }
  else {
    uVar7 = uVar7 >> 0x20;
  }
  auVar9._8_8_ = auVar8._8_8_ & 0xffffffff;
  auVar9._0_8_ = uVar6 << 0x28 | (uVar7 & 0xff) << 0x20 | auVar8._0_8_ & 0xffffffff;
  return auVar9;
}


