/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295084c; name: FUN_0295084c
 */


ulong FUN_0295084c(long param_1,undefined4 param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  uint *puVar13;
  long *plVar14;
  undefined1 auStack_730 [1052];
  float local_314;
  float local_30c;
  float local_304;
  
  lVar11 = *(long *)(param_1 + 0x4a0);
  if (lVar11 == 0) {
    switch(param_2) {
    case 6:
    case 7:
      return 1;
    case 8:
      goto switchD_02950894_caseD_8;
    case 9:
      goto switchD_029508c8_caseD_9;
    case 10:
      goto switchD_02950894_caseD_a;
    case 0xb:
      goto switchD_029508c8_caseD_b;
    case 0xc:
      goto switchD_02950894_caseD_c;
    default:
      goto switchD_02950894_default;
    }
  }
  switch(param_2) {
  case 6:
  case 7:
    return 1;
  case 8:
switchD_02950894_caseD_8:
    puVar12 = (ushort *)(param_1 + 0x2d2);
    break;
  case 9:
    if (*(int *)(lVar11 + 0x1b8) == 0) goto switchD_029508c8_caseD_9;
switchD_029508c8_caseD_b:
    puVar12 = (ushort *)(param_1 + 0x2d8);
    break;
  case 10:
switchD_02950894_caseD_a:
    puVar12 = (ushort *)(param_1 + 0x2d6);
    break;
  case 0xb:
    if (*(int *)(lVar11 + 0x1b8) == 0) goto switchD_029508c8_caseD_b;
switchD_029508c8_caseD_9:
    puVar12 = (ushort *)(param_1 + 0x2d4);
    break;
  case 0xc:
switchD_02950894_caseD_c:
    puVar12 = (ushort *)(param_1 + 0x2da);
    break;
  default:
switchD_02950894_default:
    uVar9 = FUN_029506a8(param_1);
    return uVar9;
  }
  uVar9 = (ulong)*puVar12;
  bVar2 = *(byte *)(param_1 + 0x7d);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x4a8) + 0x110);
  if (bVar2 < 6) {
    lVar11 = 0;
  }
  else if (bVar2 < 0xc) {
    lVar11 = 2;
  }
  else if (bVar2 < 0x12) {
    lVar11 = 1;
  }
  else if (bVar2 < 0x18) {
    lVar11 = 3;
  }
  else {
    lVar11 = (ulong)(bVar2 < 0x1e) << 2;
  }
  if (2 < uVar3) {
    return uVar9;
  }
  if ((&PTR_DAT_042769d0)[(int)uVar3][lVar11] != '\x01') {
    return uVar9;
  }
  puVar13 = *(uint **)(*(long *)(param_1 + 0x4a8) + 0x58);
  if ((*(byte *)((long)puVar13 + 0x1041) & 0x1c) == 0) {
    if (1 < *puVar13) {
      return uVar9;
    }
    uVar10 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
    if (((uVar10 & 1) == 0) &&
       (uVar10 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98)), (uVar10 & 1) == 0)
       ) {
      return uVar9;
    }
  }
  uVar8 = FUN_02948d48(*(undefined8 *)(param_1 + 0x4a8),param_1);
  switch(uVar8) {
  case 1:
  case 4:
  case 5:
    plVar14 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar14 + 0xc);
    FUN_00945e04(auStack_730);
    local_304 = local_314;
    if (plVar14 == (long *)0x0) goto LAB_02950b28;
    plVar1 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      bVar7 = iVar6 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 2:
    plVar14 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar14 + 0xc);
    FUN_00945e04(auStack_730);
    local_304 = local_30c;
    if (plVar14 == (long *)0x0) goto LAB_02950b28;
    plVar1 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      bVar7 = iVar6 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 3:
    plVar14 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar14 + 0xc);
    FUN_00945e04(auStack_730);
    if (plVar14 == (long *)0x0) goto LAB_02950b28;
    plVar1 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      bVar7 = iVar6 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  default:
    local_304 = 1.0;
    goto LAB_02950b28;
  }
  if (bVar7) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_02950b28:
  return (ulong)(uint)(int)(local_304 * (float)uVar9);
}


