/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617c4c; name: FUN_00617c4c
 */


void FUN_00617c4c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  *param_1 = (long)(PTR_DAT_04375478 + 0x10);
  uVar7 = FUN_00612290();
  FUN_00783f38(param_1 + 1,uVar7);
  plVar1 = param_1 + 3;
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  param_1[5] = 0;
  plVar8 = (long *)FUN_00612290();
  param_1[6] = (long)plVar8;
  if (param_3 != 0) {
    plVar4 = param_2 + param_3 * 2;
    puVar2 = PTR_DAT_04375480 + 0x10;
    while( true ) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
      *plVar8 = 0;
      plVar8[2] = (long)puVar2;
      plVar8[3] = (long)(plVar8 + 3);
      plVar8[4] = (long)(plVar8 + 3);
      plVar8[5] = (long)param_1;
      plVar8[6] = *param_2;
      lVar9 = param_2[1];
      plVar8[7] = lVar9;
      if (lVar9 != 0) {
        plVar3 = (long *)(lVar9 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = *plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      thunk_FUN_00783da8();
      plVar8[1] = (long)plVar1;
      lVar9 = param_1[3];
      *plVar8 = lVar9;
      *(long **)(lVar9 + 8) = plVar8;
      param_2 = param_2 + 2;
      param_1[3] = (long)plVar8;
      param_1[5] = param_1[5] + 1;
      if (param_2 == plVar4) break;
      plVar8 = (long *)param_1[6];
    }
  }
  return;
}


