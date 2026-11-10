/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d624c; name: FUN_032d624c
 */


void FUN_032d624c(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1[1] = *param_1;
  do {
    iVar4 = DAT_0434a930;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x434a930,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_0434a930 = DAT_0434a930 + 1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 5) = iVar4;
  if (iVar4 == 0) {
    do {
      iVar4 = DAT_0434a930;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x434a930,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_0434a930 = DAT_0434a930 + 1;
      }
    } while (cVar2 != '\0');
    *(int *)(param_1 + 5) = iVar4;
  }
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 8);
    uVar8 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar8, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "FiFrameId";
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar6 + 0x28);
    }
  }
  plVar5 = (long *)FUN_032d49a4();
  lVar6 = (**(code **)(*plVar5 + 0x80))();
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
    lVar9 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x10);
  }
  if (lVar9 != 0) {
    puVar1 = *(undefined8 **)(lVar9 + 8);
    uVar8 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar8, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "PdUsing a debug/slow memory system.";
      lVar6 = *(long *)(lVar7 + 0x38d490);
    }
  }
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
    lVar7 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x10);
  }
  if (lVar7 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 8);
    uVar8 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar8, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_038bd3fb;
    }
  }
  return;
}


