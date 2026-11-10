/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a4c84; name: FUN_011a4c84
 */


void FUN_011a4c84(long param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  byte bVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined4 *)(param_1 + 0x6d8) = param_2;
  *(int *)(param_1 + 0x16c4) = param_3;
  if (**(int **)(param_1 + 0x1648) == 1) {
    if (param_3 == 1) {
      FUN_0119b610(param_1,0);
    }
    local_50 = 0x95d3ad9d60d1227f;
    pcStack_48 = "InputChange";
    local_40 = 0xb;
    uStack_38 = 0;
    FUN_00d4d788(param_1,&local_50,0);
    bVar10 = 0;
    plVar6 = (long *)plVar9[0x29];
    lVar8 = plVar9[0x2a];
  }
  else {
    local_50 = 0x95d3ad9d60d1227f;
    pcStack_48 = "InputChange";
    local_40 = 0xb;
    uStack_38 = 0;
    bVar10 = 1;
    FUN_00d4d788(param_1,&local_50,1);
    plVar6 = (long *)plVar9[0x29];
    lVar8 = plVar9[0x2a];
  }
  if ((lVar8 != 0) && (*plVar6 != -0x4dbe980a4320f608)) {
    plVar7 = plVar6 + lVar8 * 6;
    lVar8 = lVar8 * 0x30;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar2 = plVar6 + 6;
      plVar1 = plVar6 + 6;
      plVar6 = plVar2;
    } while (*plVar1 != -0x4dbe980a4320f608);
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar10;
  plVar6 = (long *)plVar9[0x29];
  lVar8 = plVar9[0x2a];
  if ((lVar8 != 0) && (*plVar6 != 0xa1983e1098a29cf)) {
    plVar7 = plVar6 + lVar8 * 6;
    lVar8 = lVar8 * 0x30;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar2 = plVar6 + 6;
      plVar1 = plVar6 + 6;
      plVar6 = plVar2;
    } while (*plVar1 != 0xa1983e1098a29cf);
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe | bVar10;
  local_40 = 0x10;
  uStack_38 = 0;
  local_50 = 0x8e3c144ba873676c;
  pcStack_48 = "InputPageChangeL";
  FUN_00d4d788(param_1,&local_50,bVar10);
  local_50 = 0x8e3c2a4ba8738cce;
  pcStack_48 = "InputPageChangeR";
  local_40 = 0x10;
  uStack_38 = 0;
  FUN_00d4d788(param_1,&local_50,bVar10);
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011a4ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


