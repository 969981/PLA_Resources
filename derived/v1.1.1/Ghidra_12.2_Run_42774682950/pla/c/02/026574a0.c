/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026574a0; name: FUN_026574a0
 */


void FUN_026574a0(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *local_30;
  long *local_28;
  
  *(undefined1 *)(param_1 + 0xd60) = 0;
  FUN_00956dac(&local_28,param_1 + 0xcc8);
  if (local_28 != (long *)0x0) {
    if (*(long *)(param_1 + 0xcb8) == 0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_025fa884(&local_30);
    }
    plVar6 = local_28;
    uVar8 = FUN_026c3894(local_30);
    *(undefined1 *)(plVar6 + 0x1c) = 1;
    plVar6[0x1b] = 0;
    plVar6[0x1a] = (ulong)uVar8 << 0x20;
    lVar7 = *(long *)PTR_DAT_04379570;
    lVar3 = *(long *)(PTR_DAT_04379570 + 8);
    *(undefined1 *)(local_28 + 0x1c) = 1;
    local_28[0x18] = lVar7;
    local_28[0x19] = lVar3;
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


