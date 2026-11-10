/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03005068; name: FUN_03005068
 */


/* WARNING: Removing unreachable block (ram,0x03005274) */
/* WARNING: Removing unreachable block (ram,0x03005358) */

undefined8 FUN_03005068(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  
  if (*param_1 != 0) {
    lVar14 = param_1[1];
    uVar15 = (ulong)param_2;
    if ((~*(uint *)(lVar14 + uVar15 * 0x68 + 8) & 0xffffff) != 0) {
      FUN_030057f4(param_1 + 0x12,uVar15,lVar14,*(undefined8 *)(lVar14 + uVar15 * 0x68));
    }
    if ((~*(uint *)(lVar14 + uVar15 * 0x68 + 0x18) & 0xffffff) != 0) {
      FUN_030057f4(param_1 + 0x12,uVar15,lVar14,*(undefined8 *)(lVar14 + uVar15 * 0x68 + 0x10));
    }
  }
  if (*(int *)(param_1[1] + (long)(int)param_2 * 0x68 + 0x34) != 0x7fffffff) {
    FUN_03003f7c(param_1,param_1[1] + (long)(int)param_2 * 0x68);
  }
  plVar1 = param_1 + 1;
  if ((int)param_1[2] <= (int)param_2) {
    return 0x80040200;
  }
  lVar14 = *plVar1;
  if (*(int *)(lVar14 + (long)(int)param_2 * 0x68 + 0x30) == 0x7fffffff) {
    return 0x80040200;
  }
  lVar13 = (long)(int)param_2;
  puVar16 = (ulong *)(lVar14 + lVar13 * 0x68 + 0x58);
  uVar15 = *puVar16;
  if (1 < uVar15) {
    uVar4 = *(undefined2 *)(lVar14 + lVar13 * 0x68 + 0x56);
    lVar7 = tpidr_el0;
    lVar12 = *(long *)(lVar7 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar12;
    }
    plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar15,uVar4);
  }
  lVar14 = lVar14 + lVar13 * 0x68;
  *puVar16 = 0;
  plVar8 = *(long **)(lVar14 + 0x20);
  *(undefined2 *)(lVar14 + 0x56) = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar14 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar9 = (uint *)((long)param_1 + 0x24);
  puVar11 = (undefined8 *)(*plVar1 + lVar13 * 0x68);
  *(undefined4 *)(puVar11 + 6) = 0x7fffffff;
  *(ushort *)((long)puVar11 + 0x42) = *(ushort *)((long)puVar11 + 0x42) | 4;
  *(undefined4 *)(puVar11 + 1) = 0xffffff;
  *(undefined4 *)(puVar11 + 3) = 0xffffff;
  *puVar11 = 0xffffffffffffffff;
  puVar11[2] = 0xffffffffffffffff;
  uVar3 = *puVar9;
  uVar10 = 0xffffffff;
  if ((uVar3 & 0xffffff) != 0xffffff) {
    uVar10 = uVar3 & 0xffffff;
  }
  *(uint *)(*plVar1 + lVar13 * 0x68 + 0x34) = uVar10;
  uVar10 = *puVar9;
  if (uVar10 == uVar3) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar6) {
      *puVar9 = uVar3 & 0xff000000 | param_2 & 0xffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_03005284;
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
      *(uint *)(*plVar1 + lVar13 * 0x68 + 0x34) = uVar3;
      uVar3 = *puVar9;
      if (uVar3 == uVar10) break;
      ClearExclusiveLocal();
      uVar10 = uVar3;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar6) {
      *puVar9 = uVar10 & 0xff000000 | param_2 & 0xffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
    uVar10 = uVar3;
  } while (cVar5 != '\0');
LAB_03005284:
  param_1 = param_1 + 5;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar6) {
      *(int *)param_1 = (int)*param_1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return 0;
}


