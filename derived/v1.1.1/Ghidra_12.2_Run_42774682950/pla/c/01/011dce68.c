/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dce68; name: FUN_011dce68
 */


void FUN_011dce68(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  
  *(bool *)(param_1 + 0x6f9) = *(int *)(param_1 + 0x6fc) == 1;
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar6[0x29];
  lVar10 = plVar6[0x2a];
  if ((lVar10 != 0) && (*plVar7 != 0x3be335720077e047)) {
    plVar9 = plVar7 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar7 = plVar9;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != 0x3be335720077e047);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) | 1;
  if (plVar6 == (long *)0x0) {
LAB_011dcf24:
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_011dcf24;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)plVar6[0x29];
  lVar10 = plVar6[0x2a];
  if ((lVar10 != 0) && (*plVar7 != 0x3be334720077de94)) {
    plVar9 = plVar7 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar7 = plVar9;
        break;
      }
      plVar2 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar2;
    } while (*plVar1 != 0x3be334720077de94);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) | 1;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      cVar3 = *(char *)(param_1 + 0x6f9);
      goto joined_r0x011dd29c;
    }
  }
  cVar3 = *(char *)(param_1 + 0x6f9);
joined_r0x011dd29c:
  if (cVar3 == '\0') {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(param_1 + 0x689);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x678) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x678) + 0x150);
  if ((lVar10 != 0) &&
     (*plVar6 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x688) * 0x18))) {
    plVar7 = plVar6 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar1 = plVar6 + 6;
      plVar9 = plVar6 + 6;
      plVar6 = plVar1;
    } while (*plVar9 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x688) * 0x18));
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar8;
  bVar8 = 0;
  if (*(char *)(param_1 + 0x6f9) != '\0') {
    bVar8 = *(byte *)(param_1 + 0x6a1);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x690) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x690) + 0x150);
  if ((lVar10 != 0) &&
     (*plVar6 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6a0) * 0x18))) {
    plVar7 = plVar6 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar1 = plVar6 + 6;
      plVar9 = plVar6 + 6;
      plVar6 = plVar1;
    } while (*plVar9 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6a0) * 0x18));
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar8;
  bVar8 = 0;
  if (*(char *)(param_1 + 0x6f9) != '\0') {
    bVar8 = *(byte *)(param_1 + 0x6b9);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x6a8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x6a8) + 0x150);
  if ((lVar10 != 0) &&
     (*plVar6 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6b8) * 0x18))) {
    plVar7 = plVar6 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar1 = plVar6 + 6;
      plVar9 = plVar6 + 6;
      plVar6 = plVar1;
    } while (*plVar9 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6b8) * 0x18));
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar8;
  bVar8 = 0;
  if (*(char *)(param_1 + 0x6f9) != '\0') {
    bVar8 = *(byte *)(param_1 + 0x6d1);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x6c0) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x150);
  if ((lVar10 != 0) &&
     (*plVar6 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6d0) * 0x18))) {
    plVar7 = plVar6 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar1 = plVar6 + 6;
      plVar9 = plVar6 + 6;
      plVar6 = plVar1;
    } while (*plVar9 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6d0) * 0x18));
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar8;
  bVar8 = 0;
  if (*(char *)(param_1 + 0x6f9) != '\0') {
    bVar8 = *(byte *)(param_1 + 0x6e9);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x6d8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x6d8) + 0x150);
  if ((lVar10 != 0) &&
     (*plVar6 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6e8) * 0x18))) {
    plVar7 = plVar6 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar1 = plVar6 + 6;
      plVar9 = plVar6 + 6;
      plVar6 = plVar1;
    } while (*plVar9 != *(long *)(&DAT_041f8280 + (ulong)*(byte *)(param_1 + 0x6e8) * 0x18));
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar8;
  return;
}


