/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c6260; name: FUN_031c6260
 */


void FUN_031c6260(long param_1,int param_2,int param_3,code *param_4)

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
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined4 local_70 [2];
  long *local_68;
  
  local_68 = (long *)0x0;
  while( true ) {
    puVar1 = (undefined4 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10);
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
    iVar9 = param_3;
    iVar14 = param_2;
    do {
      lVar8 = param_1 + (long)iVar14 * 0x10;
      do {
        iVar13 = iVar14;
        lVar11 = lVar8;
        uVar5 = (*param_4)(lVar11,local_70);
        lVar8 = lVar11 + 0x10;
        iVar14 = iVar13 + 1;
      } while ((uVar5 & 1) != 0);
      lVar8 = param_1 + (long)iVar9 * 0x10;
      iVar9 = iVar9 + 1;
      do {
        iVar10 = iVar9;
        lVar12 = lVar8;
        uVar5 = (*param_4)(local_70,lVar12);
        iVar9 = iVar10 + -1;
        lVar8 = lVar12 + -0x10;
      } while ((uVar5 & 1) != 0);
      iVar14 = iVar13;
      if (iVar13 <= iVar9) {
        if (iVar13 != iVar9) {
          FUN_031c6430(lVar12,lVar11);
        }
        iVar9 = iVar10 + -2;
        iVar14 = iVar13 + 1;
      }
    } while (iVar14 <= iVar9);
    if (param_2 < iVar9) {
      FUN_031c6260(param_1,param_2,iVar9,param_4);
    }
    if (param_3 <= iVar14) break;
    param_2 = iVar14;
  }
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


