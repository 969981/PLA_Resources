/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096c2c4; name: FUN_0096c2c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096c2c4(undefined8 param_1,uint *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  code *pcVar12;
  
  puVar5 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  lVar11 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar11;
  plVar9 = *(long **)(lVar11 + 0xb0);
  if (plVar9 == (long *)0x0) {
    lVar11 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = plVar9[0x1c];
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x160) + 0x68);
  if (*(char *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x138) + 0x68) + 8) + 0x354) == '\0') {
    bVar2 = *(byte *)(*(long *)(lVar11 + 8) + 0x355);
    uVar10 = (uint)bVar2;
    if (bVar2 == 0) goto LAB_0096c37c;
    lVar11 = 1;
  }
  else {
    lVar11 = 0;
  }
  uVar10 = (&DAT_038892f4)[lVar11 * 2];
LAB_0096c37c:
  *param_2 = uVar10;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar11 = *(long *)puVar6;
  *(long *)puVar7 = lVar11;
  plVar9 = *(long **)(lVar11 + 0xb0);
  if (plVar9 == (long *)0x0) {
    lVar11 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = plVar9[0x1c];
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  pcVar12 = *(code **)(param_2 + 0x26);
  *(long *)(param_2 + 2) = lVar11;
  if (pcVar12 != (code *)0x0) {
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    (*pcVar12)(param_2 + 0x2c);
  }
  *(undefined1 **)(param_2 + 0x24) = &LAB_0096e0dc;
  *(undefined1 **)(param_2 + 0x26) = &LAB_0096e0e4;
  *(undefined1 **)(param_2 + 0x28) = &LAB_0096e200;
  *(undefined1 **)(param_2 + 0x2a) = &LAB_0096e204;
  pcVar12 = *(code **)(param_2 + 6);
  if (pcVar12 != (code *)0x0) {
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    (*pcVar12)(param_2 + 0xc);
  }
  *(undefined1 **)(param_2 + 4) = &LAB_0096e208;
  *(undefined1 **)(param_2 + 6) = &LAB_0096e210;
  *(undefined1 **)(param_2 + 8) = &LAB_0096e32c;
  *(undefined1 **)(param_2 + 10) = &LAB_0096e330;
  pcVar12 = *(code **)(param_2 + 0x46);
  if (pcVar12 != (code *)0x0) {
    param_2[0x48] = 0;
    param_2[0x49] = 0;
    param_2[0x4a] = 0;
    param_2[0x4b] = 0;
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    (*pcVar12)(param_2 + 0x4c);
  }
  *(undefined1 **)(param_2 + 0x44) = &LAB_0096e334;
  *(undefined1 **)(param_2 + 0x46) = &LAB_0096e33c;
  *(undefined1 **)(param_2 + 0x48) = &LAB_0096e424;
  *(undefined1 **)(param_2 + 0x4a) = &LAB_0096e428;
  return;
}


