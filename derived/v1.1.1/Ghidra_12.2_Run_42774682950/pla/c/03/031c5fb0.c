/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c5fb0; name: FUN_031c5fb0
 */


void FUN_031c5fb0(long param_1,ulong param_2,int param_3,code *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined4 local_70 [2];
  long *local_68;
  
  local_68 = (long *)0x0;
  do {
    uVar10 = param_2 & 0xffffffff;
    iVar9 = (int)param_2;
    puVar1 = (undefined4 *)(param_1 + (long)(iVar9 + param_3 >> 1) * 0x10);
    local_70[0] = *puVar1;
    plVar7 = (long *)(puVar1 + 2);
    plVar6 = (long *)*plVar7;
    plVar4 = local_68;
    if (local_68 != plVar6) {
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar6 = plVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = (long *)*plVar7;
      }
      plVar4 = plVar6;
      if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
        plVar7 = local_68 + 2;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          lVar8 = *local_68;
          local_68 = plVar6;
          (**(code **)(lVar8 + 0x18))();
          plVar4 = local_68;
        }
      }
    }
    local_68 = plVar4;
    param_2 = uVar10;
    iVar11 = param_3;
    do {
      lVar8 = param_1 + (long)(int)param_2 * 0x10;
      param_2 = (ulong)(int)param_2;
      uVar5 = (*param_4)(lVar8,local_70);
      if ((uVar5 & 1) != 0) {
        lVar8 = param_1 + param_2 * 0x10;
        do {
          lVar8 = lVar8 + 0x10;
          param_2 = param_2 + 1;
          uVar5 = (*param_4)(lVar8,local_70);
        } while ((uVar5 & 1) != 0);
      }
      lVar12 = param_1 + (long)iVar11 * 0x10;
      lVar14 = (long)iVar11;
      uVar5 = (*param_4)(local_70,lVar12);
      if ((uVar5 & 1) != 0) {
        lVar12 = param_1 + lVar14 * 0x10;
        do {
          lVar12 = lVar12 + -0x10;
          lVar14 = lVar14 + -1;
          iVar11 = (int)lVar14;
          uVar5 = (*param_4)(local_70,lVar12);
        } while ((uVar5 & 1) != 0);
      }
      iVar13 = (int)param_2;
      if (iVar13 <= iVar11) {
        if (iVar11 != iVar13) {
          FUN_031c6190(lVar12,lVar8);
        }
        iVar11 = iVar11 + -1;
        param_2 = (ulong)(iVar13 + 1);
      }
    } while ((int)param_2 <= iVar11);
    if (iVar9 < iVar11) {
      FUN_031c5fb0(param_1,uVar10,iVar11,param_4);
    }
  } while ((int)param_2 < param_3);
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar6 = local_68 + 2;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  return;
}


