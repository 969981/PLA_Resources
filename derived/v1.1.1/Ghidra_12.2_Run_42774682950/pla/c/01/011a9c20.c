/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a9c20; name: FUN_011a9c20
 */


void FUN_011a9c20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar11 = *(long **)(lVar7 + 0xd0);
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar11[0xb];
  if (plVar6 == (long *)0x0) {
    bVar10 = DAT_00000088;
  }
  else {
    plVar12 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar10 = *(byte *)(plVar6 + 0x11);
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  plVar6 = plVar11 + 10;
  do {
    iVar5 = (int)*plVar6 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *(int *)plVar6 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  FUN_011a9804(param_1,0);
  lVar8 = *(long *)(param_1 + 0x5c0);
  lVar13 = *(long *)(lVar8 + 0x158);
  plVar11 = *(long **)(*(long *)(lVar8 + 8) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 8) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  plVar6 = *(long **)(lVar8 + 0x170);
  if (bVar10 == 0) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar9;
  FUN_011a9804(param_1,1);
  lVar8 = *(long *)(param_1 + 0x5c0);
  plVar11 = *(long **)(*(long *)(lVar8 + 0x508) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 0x508) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  lVar13 = *(long *)(lVar8 + 0x658);
  plVar6 = *(long **)(lVar8 + 0x670);
  if (bVar10 < 2) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar9;
  FUN_011a9804(param_1,2);
  lVar8 = *(long *)(param_1 + 0x5c0);
  plVar11 = *(long **)(*(long *)(lVar8 + 0xa08) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 0xa08) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  lVar13 = *(long *)(lVar8 + 0xb58);
  plVar6 = *(long **)(lVar8 + 0xb70);
  if (bVar10 < 3) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar9;
  FUN_011a9804(param_1,3);
  lVar8 = *(long *)(param_1 + 0x5c0);
  plVar11 = *(long **)(*(long *)(lVar8 + 0xf08) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 0xf08) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  lVar13 = *(long *)(lVar8 + 0x1058);
  plVar6 = *(long **)(lVar8 + 0x1070);
  if (bVar10 < 4) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar9;
  FUN_011a9804(param_1,4);
  lVar8 = *(long *)(param_1 + 0x5c0);
  plVar11 = *(long **)(*(long *)(lVar8 + 0x1408) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 0x1408) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  lVar13 = *(long *)(lVar8 + 0x1558);
  plVar6 = *(long **)(lVar8 + 0x1570);
  if (bVar10 < 5) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar9 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar9;
  FUN_011a9804(param_1,5);
  lVar8 = *(long *)(param_1 + 0x5c0);
  plVar11 = *(long **)(*(long *)(lVar8 + 0x1908) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar8 + 0x1908) + 0x150);
  plVar12 = plVar11 + lVar7 * 6;
  lVar13 = *(long *)(lVar8 + 0x1a58);
  plVar6 = *(long **)(lVar8 + 0x1a70);
  if (bVar10 < 6) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar10 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar4 = plVar11;
    if ((lVar7 != 0) && (*plVar11 != lVar13)) {
      lVar7 = lVar7 * 0x30;
      do {
        lVar7 = lVar7 + -0x30;
        plVar4 = plVar12;
        if (lVar7 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar7 = plVar4[4];
    bVar10 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar10;
  return;
}


