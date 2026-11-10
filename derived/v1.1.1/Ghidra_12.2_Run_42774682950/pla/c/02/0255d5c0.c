/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255d5c0; name: FUN_0255d5c0
 */


void FUN_0255d5c0(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_0255cb60(param_1,param_1 + 1,param_1 + 2,param_3);
  plVar9 = param_1 + 2;
  plVar6 = param_1 + 3;
  do {
    if (plVar6 == param_2) {
      return;
    }
    lVar10 = *param_3;
    local_68 = (**(code **)(*(long *)*plVar6 + 0x38))();
    local_70 = (**(code **)(*(long *)*plVar9 + 0x38))();
    lVar7 = FUN_0255db80(lVar10 + 0x1d0,&local_68);
    bVar3 = *(byte *)(lVar7 + 4);
    iVar2 = *(int *)(lVar7 + 8);
    lVar7 = FUN_0255db80(lVar10 + 0x1d0,&local_70);
    bVar3 = bVar3 & 1;
    bVar1 = *(byte *)(lVar7 + 4) & 1;
    if ((bVar1 < bVar3) || ((bVar1 <= bVar3 && (*(int *)(lVar7 + 8) < iVar2)))) {
      plVar11 = (long *)*plVar6;
      *plVar6 = 0;
      *plVar6 = 0;
      plVar12 = plVar6;
      while( true ) {
        plVar13 = plVar9;
        lVar7 = *plVar13;
        *plVar13 = 0;
        *plVar12 = lVar7;
        if (plVar13 == param_1) break;
        lVar10 = *param_3;
        local_68 = (**(code **)(*plVar11 + 0x38))(plVar11);
        plVar9 = plVar13 + -1;
        local_70 = (**(code **)(*(long *)*plVar9 + 0x38))();
        lVar7 = FUN_0255db80(lVar10 + 0x1d0,&local_68);
        bVar3 = *(byte *)(lVar7 + 4);
        iVar2 = *(int *)(lVar7 + 8);
        lVar7 = FUN_0255db80(lVar10 + 0x1d0,&local_70);
        bVar3 = bVar3 & 1;
        bVar1 = *(byte *)(lVar7 + 4) & 1;
        if ((bVar3 <= bVar1) && ((bVar3 < bVar1 || (iVar2 <= *(int *)(lVar7 + 8)))))
        goto LAB_0255d77c;
        plVar8 = (long *)*plVar13;
        *plVar13 = 0;
        plVar12 = plVar13;
        if (plVar8 != (long *)0x0) {
          plVar13 = plVar8 + 10;
          do {
            iVar2 = (int)*plVar13 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *(int *)plVar13 = iVar2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
      plVar13 = param_1;
LAB_0255d77c:
      plVar9 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar9 != (long *)0x0) {
        plVar12 = plVar9 + 10;
        do {
          iVar2 = (int)*plVar12 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *plVar13 = (long)plVar11;
    }
    plVar9 = plVar6;
    plVar6 = plVar6 + 1;
  } while( true );
}


