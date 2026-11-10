/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be435c; name: FUN_02be435c
 */


undefined8 FUN_02be435c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = *(long **)(param_1 + 0xd8);
  if (plVar4 == (long *)0x0) {
LAB_02be4420:
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    pcVar5 = (code *)plVar4[7];
    if (pcVar5 != (code *)0x0) {
      plVar4[8] = 0;
      plVar4[9] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      (*pcVar5)(plVar4 + 10);
      plVar4 = *(long **)(param_1 + 0xd8);
      if (plVar4 == (long *)0x0) goto LAB_02be4420;
    }
    pcVar5 = (code *)plVar4[0x17];
    if (pcVar5 != (code *)0x0) {
      plVar4[0x18] = 0;
      plVar4[0x19] = 0;
      plVar4[0x16] = 0;
      plVar4[0x17] = 0;
      (*pcVar5)(plVar4 + 0x1a);
      plVar4 = *(long **)(param_1 + 0xd8);
      if (plVar4 == (long *)0x0) goto LAB_02be4420;
    }
    pcVar5 = (code *)plVar4[0x27];
    if (pcVar5 != (code *)0x0) {
      plVar4[0x28] = 0;
      plVar4[0x29] = 0;
      plVar4[0x26] = 0;
      plVar4[0x27] = 0;
      (*pcVar5)(plVar4 + 0x2a);
      plVar4 = *(long **)(param_1 + 0xd8);
      if (plVar4 == (long *)0x0) goto LAB_02be4420;
    }
    pcVar5 = (code *)plVar4[0x37];
    if (pcVar5 == (code *)0x0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    else {
      plVar4[0x38] = 0;
      plVar4[0x39] = 0;
      plVar4[0x36] = 0;
      plVar4[0x37] = 0;
      (*pcVar5)(plVar4 + 0x3a);
      plVar4 = *(long **)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if (plVar4 == (long *)0x0) goto LAB_02be4424;
    }
    if (plVar4[1] != 0) {
      plVar7 = plVar4 + 2;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
LAB_02be4424:
  plVar4 = *(long **)(param_1 + 200);
  plVar7 = *(long **)(param_1 + 0xd0);
  if (plVar7[7] != -1) {
    iVar3 = (**(code **)(*plVar4 + 0x100))(plVar4);
    if (iVar3 != 0) {
      (**(code **)(*plVar4 + 0xd8))(plVar4,plVar7 + 7,1,0);
    }
    plVar7[7] = -1;
    plVar7 = *(long **)(param_1 + 0xd0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar4 = plVar7 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar4 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar7 = plVar4 + 2;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 4;
  return 1;
}


