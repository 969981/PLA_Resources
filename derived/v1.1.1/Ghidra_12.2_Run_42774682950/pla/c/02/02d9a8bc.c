/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9a8bc; name: FUN_02d9a8bc
 */


void FUN_02d9a8bc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_158 [8];
  undefined1 auStack_150 [272];
  char local_40;
  undefined4 local_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0xbc) = 0;
  plVar5 = *(long **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  local_28 = 0;
  FUN_02d9d958(local_158,0,&local_28);
  memcpy((void *)(param_1 + 0xd0),auStack_150,0x110);
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    if (local_40 != '\0') {
      *(ulong *)(param_1 + 0x1e4) = CONCAT26(uStack_36,CONCAT24(uStack_38,local_3c));
      *(undefined1 *)(param_1 + 0x1e0) = 1;
    }
  }
  else if (local_40 == '\0') {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x1e8) = uStack_38;
    *(undefined4 *)(param_1 + 0x1e4) = local_3c;
  }
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  return;
}


