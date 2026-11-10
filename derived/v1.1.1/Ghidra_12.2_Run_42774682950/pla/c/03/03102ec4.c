/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03102ec4; name: FUN_03102ec4
 */


void FUN_03102ec4(long *param_1)

{
  uint uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong *puVar15;
  
  plVar6 = (long *)(*(ulong *)(*param_1 + 0x6c8) & 0xfffffffffffffffc);
  if (plVar6 != (long *)0x0) {
    puVar2 = (ulong *)(*param_1 + 0x6c8);
    puVar15 = puVar2;
    do {
      while( true ) {
        puVar8 = (ulong *)(plVar6 + 1);
        plVar13 = (long *)(*puVar8 & 0xfffffffffffffffc);
        if ((long *)plVar6[2] == param_1) break;
joined_r0x03102f48:
        plVar6 = plVar13;
        puVar15 = puVar8;
        if (plVar13 == (long *)0x0) goto LAB_03102f4c;
      }
      if ((*(byte *)puVar2 & 3) == 0) {
        *puVar15 = *puVar15 & 3 | (ulong)plVar13;
        (**(code **)(*plVar6 + 8))();
        puVar8 = puVar15;
        goto joined_r0x03102f48;
      }
      *puVar8 = (ulong)plVar13 | 1;
      plVar6 = plVar13;
      puVar15 = puVar8;
    } while (plVar13 != (long *)0x0);
  }
LAB_03102f4c:
  lVar9 = param_1[1];
  if ((int)param_1[5] != 0) {
    uVar1 = *(int *)((long)param_1 + 0x2c) + 1;
    uVar11 = *(uint *)(lVar9 + 8);
    if ((~uVar11 & 0xffffff) == 0) {
      uVar14 = 0;
      puVar10 = (uint *)(lVar9 + 0x18);
      do {
        uVar14 = uVar14 + 1;
        if (uVar1 <= uVar14) goto LAB_03102f64;
        uVar11 = *puVar10;
        puVar10 = puVar10 + 4;
      } while ((~uVar11 & 0xffffff) == 0);
    }
    else {
      uVar14 = 0;
    }
    do {
      FUN_031032a0(param_1,uVar11);
      puVar10 = (uint *)(lVar9 + 8 + (ulong)(uVar14 + 1) * 0x10);
      do {
        uVar14 = uVar14 + 1;
        if (uVar1 <= uVar14) goto LAB_03102f64;
        uVar11 = *puVar10;
        puVar10 = puVar10 + 4;
      } while ((~uVar11 & 0xffffff) == 0);
    } while( true );
  }
LAB_03102f64:
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x10))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x10))();
  }
  plVar6 = (long *)param_1[8];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar13 = plVar6 + 2;
    do {
      lVar9 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
      plVar6 = (long *)param_1[7];
      goto joined_r0x03102fb8;
    }
  }
  plVar6 = (long *)param_1[7];
joined_r0x03102fb8:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar7 = (int)param_1[2];
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      if (((~*(uint *)(param_1[1] + lVar9 * 0x10 + 8) & 0xffffff) != 0) &&
         (plVar6 = *(long **)(param_1[1] + lVar9 * 0x10), plVar6 != (long *)0x0)) {
        if (plVar6[1] != 0) {
          plVar13 = plVar6 + 2;
          do {
            lVar12 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        iVar7 = (int)param_1[2];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
  }
  puVar5 = PTR_PTR_0434a080;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[3],(long)(int)param_1[4]);
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[1],((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) << 4);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


