/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02579770; name: FUN_02579770
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02579770(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x750) == 2) {
    return;
  }
  if ((*(int *)(param_1 + 0x5ac) == 1) && (*(char *)(param_1 + 0x744) == '\0')) {
    if (*(long *)(param_1 + 0x6a8) != 0) {
      FUN_02579b58(param_1,0);
    }
    if (*(long *)(param_1 + 0x6b8) != 0) {
      FUN_02579b58(param_1,1);
    }
    if (*(long *)(param_1 + 0x6c8) != 0) {
      FUN_02579b58(param_1,2);
    }
    if (*(long *)(param_1 + 0x6d8) != 0) {
      FUN_02579b58(param_1,3);
    }
    if (*(long *)(param_1 + 0x6e8) != 0) {
      FUN_02579b58(param_1,4);
    }
    FUN_02579d04(param_1);
  }
  switch(*(undefined4 *)(param_1 + 0x704)) {
  case 1:
    if ((*(long *)(param_1 + 0x2c8) != 0) &&
       (uVar5 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_1 + 0x710), (uVar5 & 1) == 0))
    goto switchD_0257989c_default;
    if (*(int *)(param_1 + 0x5ac) == 0) {
      FUN_0257abf0(param_1);
    }
    else {
      FUN_0257b0b0(param_1);
    }
    uVar6 = 2;
LAB_025798c8:
    *(undefined4 *)(param_1 + 0x704) = uVar6;
    cVar3 = *(char *)(param_1 + 0x740);
    break;
  case 2:
    if (*(int *)(param_1 + 0x5ac) == 0) {
      lVar11 = *(long *)(param_1 + 0x5c0);
      if (((*(long *)(param_1 + 0x5c8) != lVar11) &&
          (*(short *)(lVar11 + (ulong)*(uint *)(param_1 + 0x6f8) * 6) != 0)) &&
         (*(short *)(lVar11 + (ulong)*(uint *)(param_1 + 0x6f8) * 6 + 2) != 0)) goto LAB_02579940;
    }
    else if ((*(int *)(param_1 + 0x5ac) != 1) ||
            ((*(long *)(param_1 + 0x630) != *(long *)(param_1 + 0x638) &&
             (*(int *)(*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8) != 6))))
    goto LAB_02579940;
    FUN_025774e0(param_1);
    cVar3 = *(char *)(param_1 + 0x740);
    break;
  case 3:
    if ((*(long *)(param_1 + 0x2c8) == 0) ||
       (uVar5 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_1 + 0x710), (uVar5 & 1) != 0)) {
      if (*(int *)(param_1 + 0x5ac) == 0) {
        FUN_0257abf0(param_1);
      }
      else {
        FUN_0257b0b0(param_1);
      }
      uVar6 = 4;
      goto LAB_025798c8;
    }
  default:
switchD_0257989c_default:
    cVar3 = *(char *)(param_1 + 0x740);
    break;
  case 4:
    if (*(int *)(param_1 + 0x5ac) == 0) {
      lVar11 = *(long *)(param_1 + 0x5c0);
      if (((*(long *)(param_1 + 0x5c8) == lVar11) ||
          (*(short *)(lVar11 + (ulong)*(uint *)(param_1 + 0x6f8) * 6) == 0)) ||
         (*(short *)(lVar11 + (ulong)*(uint *)(param_1 + 0x6f8) * 6 + 2) == 0)) goto LAB_02579ac0;
    }
    else if ((*(int *)(param_1 + 0x5ac) == 1) &&
            ((*(long *)(param_1 + 0x630) == *(long *)(param_1 + 0x638) ||
             (*(int *)(*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8) == 6))))
    {
LAB_02579ac0:
      FUN_025777e4(param_1);
      cVar3 = *(char *)(param_1 + 0x740);
      break;
    }
LAB_02579940:
    *(undefined4 *)(param_1 + 0x704) = 0;
    cVar3 = *(char *)(param_1 + 0x740);
  }
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x5b8) == '\0')) {
    if (*(char *)(param_1 + 0x741) == '\0') {
      return;
    }
    local_40 = 0xac46f1f964282aca;
    pcStack_38 = "anime_L_boxmax_00_close";
    local_30 = 0x17;
    uStack_28 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    }
    FUN_02579ebc(param_1);
    *(undefined1 *)(param_1 + 0x741) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x741) != '\0') {
    return;
  }
  local_40 = 0x9a8938f6dde4671e;
  pcStack_38 = "anime_L_boxmax_00_wake";
  local_30 = 0x16;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    plVar7 = *(long **)(param_1 + 0x2c8);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = false;
      plVar9 = (long *)plVar7[0x29];
      lVar11 = plVar7[0x2a];
      goto joined_r0x02579b44;
    }
  }
  bVar8 = true;
  plVar9 = (long *)plVar7[0x29];
  lVar11 = plVar7[0x2a];
joined_r0x02579b44:
  if ((lVar11 != 0) && (*plVar9 != -0x1228a54ab8eb23af)) {
    plVar10 = plVar9 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar9 = plVar10;
        break;
      }
      plVar2 = plVar9 + 6;
      plVar1 = plVar9 + 6;
      plVar9 = plVar2;
    } while (*plVar1 != -0x1228a54ab8eb23af);
  }
  *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) | 1;
  if (!bVar8) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *(int *)plVar9 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  FUN_02579ebc(param_1);
  *(undefined1 *)(param_1 + 0x741) = 1;
  return;
}


