/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03152a98; name: FUN_03152a98
 */


void FUN_03152a98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (param_1[6] != 0) {
    FUN_03340d04(param_1[6] + 0x6d0,param_1);
  }
  FUN_032c20d0(param_1 + 4);
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[3] != 0) {
    lVar7 = param_1[2];
    lVar9 = lVar7 + (long)(int)param_1[3] * 0x10;
    do {
      plVar5 = *(long **)(lVar9 + -8);
      lVar9 = lVar9 + -0x10;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar8 = plVar5 + 2;
        do {
          lVar6 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (lVar9 != lVar7);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  param_1[2] = 0;
  if ((int)param_1[1] != 0) {
    plVar8 = (long *)*param_1;
    plVar10 = plVar8 + (long)(int)param_1[1] + -1;
    plVar5 = (long *)*plVar10;
    if (plVar5 != (long *)0x0) goto LAB_03152b88;
LAB_03152b78:
    if (plVar10 != plVar8) {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar5 = (long *)*plVar10;
        if (plVar5 == (long *)0x0) break;
LAB_03152b88:
        if (plVar5[1] == 0) break;
        plVar1 = plVar5 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 != 0) break;
        (**(code **)(*plVar5 + 0x18))();
        if (plVar10 == plVar8) goto LAB_03152bbc;
      }
      goto LAB_03152b78;
    }
  }
LAB_03152bbc:
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


