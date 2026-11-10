/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327e910; name: FUN_0327e910
 */


void FUN_0327e910(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  iVar2 = (int)param_1[0xb];
  *param_1 = (long)&PTR_LAB_0433bea8;
  if (iVar2 != 0) {
    plVar7 = (long *)param_1[10];
    lVar8 = (long)iVar2 * 8 + -8;
    plVar6 = plVar7;
    if (((uint)lVar8 >> 3 & 1) == 0) {
      lVar9 = *plVar7;
      *(undefined8 *)(lVar9 + 0x100) = 0;
      *(undefined8 *)(lVar9 + 0x108) = 0xffffffffffffffff;
      plVar6 = plVar7 + 1;
    }
    if (lVar8 != 0) {
      do {
        lVar8 = *plVar6;
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *(undefined8 *)(lVar8 + 0x108) = 0xffffffffffffffff;
        lVar8 = plVar6[1];
        plVar6 = plVar6 + 2;
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *(undefined8 *)(lVar8 + 0x108) = 0xffffffffffffffff;
      } while (plVar6 != plVar7 + iVar2);
    }
  }
  plVar6 = (long *)param_1[0x10];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar7 = plVar6 + 2;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[0xf] != 0) {
    plVar7 = (long *)param_1[0xe];
    plVar10 = plVar7 + (long)(int)param_1[0xf] + -1;
    plVar6 = (long *)*plVar10;
    if (plVar6 != (long *)0x0) goto LAB_0327e9e4;
LAB_0327e9d4:
    if (plVar10 != plVar7) {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar6 = (long *)*plVar10;
        if (plVar6 == (long *)0x0) break;
LAB_0327e9e4:
        if (plVar6[1] == 0) break;
        plVar1 = plVar6 + 2;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 != 0) break;
        (**(code **)(*plVar6 + 0x18))();
        if (plVar10 == plVar7) goto LAB_0327ea18;
      }
      goto LAB_0327e9d4;
    }
  }
LAB_0327ea18:
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0xe],((ulong)*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) << 3);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0xc],((ulong)*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  if ((int)param_1[0xb] != 0) {
    plVar7 = (long *)param_1[10];
    plVar10 = plVar7 + (long)(int)param_1[0xb] + -1;
    plVar6 = (long *)*plVar10;
    if (plVar6 != (long *)0x0) goto LAB_0327eaac;
LAB_0327ea9c:
    if (plVar10 != plVar7) {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar6 = (long *)*plVar10;
        if (plVar6 == (long *)0x0) break;
LAB_0327eaac:
        if (plVar6[1] == 0) break;
        plVar1 = plVar6 + 2;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 != 0) break;
        (**(code **)(*plVar6 + 0x18))();
        if (plVar10 == plVar7) goto LAB_0327eae0;
      }
      goto LAB_0327ea9c;
    }
  }
LAB_0327eae0:
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[10],((ulong)*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  FUN_03340f78(param_1 + 7);
  FUN_03340f78(param_1 + 6);
  FUN_03340f78(param_1 + 5);
  FUN_03340f78(param_1 + 4);
  FUN_03340f78(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


