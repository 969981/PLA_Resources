/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b7df4; name: FUN_016b7df4
 */


void FUN_016b7df4(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  undefined8 local_28;
  
  if (((*(long *)(param_1 + 0x158) == 0) ||
      (lVar8 = *(long *)(*(long *)(param_1 + 0x158) + 0x70), lVar8 == 0)) ||
     (*(char *)(lVar8 + 0x1e1) == '\0')) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    plVar4 = *(long **)(param_1 + 0x78);
    plVar7 = (long *)PTR_DAT_04379c88;
    if (plVar4 != (long *)0x0) {
      plVar7 = plVar4 + 0xb;
    }
    local_50 = *plVar7;
    plVar7 = (long *)PTR_PTR_04379d00;
    if (plVar4 != (long *)0x0) {
      plVar7 = plVar4 + 0xc;
    }
    lStack_48 = *plVar7;
    if (plVar4 == (long *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = plVar4[0xd];
    }
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    local_38 = plVar4;
    FUN_0107eebc(&local_28,uVar3,&local_50,*(undefined8 *)(param_1 + 0x80));
    plVar7 = *(long **)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    uVar3 = local_28;
    local_28 = 0;
    *(undefined8 *)(param_1 + 0x158) = uVar3;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


