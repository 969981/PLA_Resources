/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293ebd0; name: FUN_0293ebd0
 */


uint FUN_0293ebd0(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_740 [1056];
  float local_320;
  float local_318;
  float local_310;
  
  bVar4 = *(byte *)(param_2 + 0x7d);
  lVar2 = 3;
  if (0x17 < bVar4) {
    lVar2 = (ulong)(bVar4 < 0x1e) << 2;
  }
  lVar3 = 1;
  if (0x11 < bVar4) {
    lVar3 = lVar2;
  }
  lVar2 = 2;
  if (0xb < bVar4) {
    lVar2 = lVar3;
  }
  lVar3 = 0;
  if (5 < bVar4) {
    lVar3 = lVar2;
  }
  if (2 < *(uint *)(param_1 + 0x110)) {
    return param_3;
  }
  if ((&PTR_DAT_042764f8)[(int)*(uint *)(param_1 + 0x110)][lVar3] != '\x01') {
    return param_3;
  }
  if ((*(byte *)((long)*(uint **)(param_1 + 0x58) + 0x1041) & 0x1c) == 0) {
    if (1 < **(uint **)(param_1 + 0x58)) {
      return param_3;
    }
    uVar10 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x98));
    if (((uVar10 & 1) == 0) &&
       (uVar10 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x98)), (uVar10 & 1) == 0)
       ) {
      return param_3;
    }
  }
  uVar9 = FUN_02948d48(param_1,param_2);
  switch(uVar9) {
  case 1:
  case 4:
  case 5:
    plVar11 = *(long **)(param_1 + 0x1e8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_009463f0(auStack_740,plVar11 + 0xc);
    FUN_00945e04(auStack_740);
    local_310 = local_320;
    if (plVar11 == (long *)0x0) goto LAB_0293edc0;
    plVar1 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      bVar8 = iVar7 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  case 2:
    plVar11 = *(long **)(param_1 + 0x1e8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_009463f0(auStack_740,plVar11 + 0xc);
    FUN_00945e04(auStack_740);
    local_310 = local_318;
    if (plVar11 == (long *)0x0) goto LAB_0293edc0;
    plVar1 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      bVar8 = iVar7 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  case 3:
    plVar11 = *(long **)(param_1 + 0x1e8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_009463f0(auStack_740,plVar11 + 0xc);
    FUN_00945e04(auStack_740);
    if (plVar11 == (long *)0x0) goto LAB_0293edc0;
    plVar1 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      bVar8 = iVar7 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  default:
    local_310 = 1.0;
    goto LAB_0293edc0;
  }
  if (bVar8) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_0293edc0:
  return (int)(local_310 * (float)param_3);
}


