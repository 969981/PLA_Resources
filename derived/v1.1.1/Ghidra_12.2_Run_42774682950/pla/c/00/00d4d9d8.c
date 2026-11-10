/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4d9d8; name: FUN_00d4d9d8
 */


void FUN_00d4d9d8(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_34;
  
  lVar8 = param_1 + (long)param_3 * 0x60;
  if (*(long *)(lVar8 + 0x638) == 0) {
    lVar12 = (long)param_3;
    local_34 = param_2;
    if (param_2 == 0) {
      local_34 = 1;
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    plVar1 = (long *)(lVar8 + 0x638);
    local_48 = uVar10;
    FUN_00d4db10(&local_68,uVar10,local_34);
    lVar8 = local_68;
    lVar9 = param_1 + lVar12 * 0x60;
    local_68 = 0;
    lVar7 = *(long *)(lVar9 + 0x618);
    *(long *)(lVar9 + 0x618) = lVar8;
    if (lVar7 == 0) {
      puVar11 = (undefined8 *)(param_1 + lVar12 * 0x60 + 0x620);
    }
    else {
      puVar11 = (undefined8 *)(param_1 + lVar12 * 0x60 + 0x620);
      FUN_00d60d20(puVar11);
    }
    puVar11[1] = uStack_58;
    puVar11[2] = local_50;
    *puVar11 = local_60;
    FUN_00d4dc6c(&local_68,uVar10,&local_34,&local_48);
    plVar6 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *plVar1 = local_68;
  }
  return;
}


