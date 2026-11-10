/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03017724; name: FUN_03017724
 */


/* WARNING: Removing unreachable block (ram,0x030177f8) */
/* WARNING: Removing unreachable block (ram,0x03017888) */

void FUN_03017724(long param_1,ushort param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar8 = (ulong *)(param_1 + 0x30);
  plVar7 = (long *)(*puVar8 & 0xfffffffffffffffc);
  *puVar8 = (ulong)plVar7 | 1;
  if (plVar7 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar13 = puVar8;
    do {
      while( true ) {
        puVar14 = (ulong *)(plVar7 + 1);
        uVar9 = *puVar14;
        plVar12 = (long *)(uVar9 & 0xfffffffffffffffc);
        if ((uVar9 & 3) == 0) break;
        (**(code **)(*plVar7 + 8))();
        *puVar13 = *puVar13 & 3 | (ulong)plVar12;
        plVar7 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_0301790c;
      }
      (**(code **)(*plVar7 + 0x20))(plVar7,param_1,param_2);
      plVar7 = plVar12;
      puVar13 = puVar14;
    } while (plVar12 != (long *)0x0);
LAB_0301790c:
    uVar9 = *puVar8 & 0xfffffffffffffffc;
  }
  *(ulong *)(param_1 + 0x30) = uVar9;
  uVar9 = (ulong)param_2;
  uVar11 = (uint)param_2;
  if (*(int *)(param_1 + 0x48) <= (int)uVar11) {
    return;
  }
  puVar6 = (undefined4 *)(*(long *)(param_1 + 0x40) + uVar9 * 0x70);
  if (*(char *)(puVar6 + 0xe) == -1) {
    return;
  }
  *puVar6 = 0;
  FUN_03017c48(0x411cf5c3,puVar6,1);
  *(char *)(puVar6 + 0xe) = -1;
  uVar3 = *(uint *)(param_1 + 0x5c);
  uVar10 = uVar3 & 0xffffff;
  puVar1 = (uint *)(param_1 + 0x5c);
  if (uVar10 == 0xffffff) {
    uVar10 = 0xffffffff;
  }
  *(uint *)(*(long *)(param_1 + 0x40) + uVar9 * 0x70) = uVar10;
  uVar10 = *puVar1;
  if (uVar10 == uVar3) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 0xff000000 | uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_03017808;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      uVar3 = 0xffffffff;
      if ((uVar10 & 0xffffff) != 0xffffff) {
        uVar3 = uVar10 & 0xffffff;
      }
      *(uint *)(*(long *)(param_1 + 0x40) + uVar9 * 0x70) = uVar3;
      uVar3 = *puVar1;
      if (uVar3 == uVar10) break;
      ClearExclusiveLocal();
      uVar10 = uVar3;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar10 & 0xff000000 | uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    uVar10 = uVar3;
  } while (cVar4 != '\0');
LAB_03017808:
  piVar2 = (int *)(param_1 + 0x60);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


