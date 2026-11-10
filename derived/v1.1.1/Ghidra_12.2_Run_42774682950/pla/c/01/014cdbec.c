/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014cdbec; name: FUN_014cdbec
 */


void FUN_014cdbec(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 auStack_48 [8];
  long local_38;
  
  local_54 = 0x100;
  local_60 = *(undefined8 *)(param_1 + 8);
  FUN_014cdd18(&local_38,local_60,&local_54,&local_60);
  plVar6 = *(long **)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x5b0) = local_38;
  FUN_014cdda0(param_1);
  lVar7 = 0;
  do {
    if (*(undefined1 **)(param_1 + 0x5c0 + lVar7 * 8) == &DAT_cbf29ce484222645) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x5b0);
    local_50 = (undefined4)lVar7;
    local_4c = 0;
    uVar3 = *(ulong *)(lVar8 + 0xb0);
    if (uVar3 < *(ulong *)(lVar8 + 0xb8)) {
      FUN_011d216c(lVar8 + 0x88,*(long *)(lVar8 + 0xa8) + uVar3 * 8,&local_50);
      *(long *)(lVar8 + 0xb0) = *(long *)(lVar8 + 0xb0) + 1;
    }
    else {
      local_38 = *(long *)(lVar8 + 0xa8) + uVar3 * 8;
      FUN_011d20a4(auStack_48,lVar8 + 0x88,&local_38,1,&local_50);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x100);
  return;
}


