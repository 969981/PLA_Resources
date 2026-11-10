/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a2550; name: FUN_010a2550
 */


void FUN_010a2550(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [24];
  long *local_38;
  
  lVar6 = FUN_00a24804(auStack_50,param_1);
  if (lVar6 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar6 + 0x58));
  }
  plVar5 = DAT_043ba448;
  DAT_043ba448 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  DAT_043ba448 = (long *)lVar6;
  FUN_02a4754c(auStack_50,&DAT_041efa38);
  FUN_010bc6b4(lVar6,auStack_50,0,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar6 = FUN_00a24804(auStack_50,param_1);
  if (lVar6 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar6 + 0x58));
  }
  plVar5 = DAT_043ba450;
  DAT_043ba450 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  DAT_043ba450 = (long *)lVar6;
  FUN_02a4754c(auStack_50,&DAT_041efa50);
  FUN_010bc6b4(lVar6,auStack_50,0,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar6 = FUN_00a24804(auStack_50,param_1);
  if (lVar6 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar6 + 0x58));
  }
  plVar5 = DAT_043ba458;
  DAT_043ba458 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  DAT_043ba458 = (long *)lVar6;
  FUN_02a4754c(auStack_50,&DAT_041efa68);
  FUN_010bc6b4(lVar6,auStack_50,0,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar6 = FUN_00a24804(auStack_50,param_1);
  if (lVar6 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar6 + 0x58));
  }
  plVar5 = DAT_043ba460;
  DAT_043ba460 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  DAT_043ba460 = (long *)lVar6;
  FUN_02a4754c(auStack_50,&DAT_041efa80);
  FUN_010bc6b4(lVar6,auStack_50,0,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


