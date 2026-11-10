/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b758fc; name: FUN_01b758fc
 */


undefined1  [16] FUN_01b758fc(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar9 = *(long **)(param_1 + 0x5c0);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar5 = *(ushort *)((long)plVar9 + 0x54);
  uVar2 = *(uint *)(param_1 + 0x430);
  uVar3 = *(undefined4 *)(param_1 + 0x434);
  uVar4 = *(undefined4 *)(param_1 + 1000);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  auVar10._12_4_ = uVar4;
  auVar10._8_4_ = uVar3;
  auVar10._0_8_ = (ulong)uVar5 | (ulong)uVar2 << 0x20;
  return auVar10;
}


