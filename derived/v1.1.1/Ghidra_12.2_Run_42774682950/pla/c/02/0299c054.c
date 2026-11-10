/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299c054; name: FUN_0299c054
 */


void FUN_0299c054(undefined4 *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  
  switch(*param_1) {
  case 1:
  case 5:
    bVar4 = FUN_0294e104(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar7 = (ulong)param_2[6];
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) {
LAB_0299c600:
      uVar7 = 0;
    }
    else {
      pbVar10 = param_2;
      uVar8 = uVar7;
      do {
        if (*pbVar10 == bVar4) {
          return;
        }
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    break;
  case 2:
  case 7:
    if ((ulong)*(byte *)(param_1 + 1) < 6) {
      if ((param_3 - 1U & 0xff) < 5) {
        puVar9 = (undefined4 *)(&PTR_DAT_04277040)[(char)(param_3 - 1U)];
      }
      else {
        puVar9 = &DAT_03a7eb68;
      }
      uVar1 = puVar9[*(byte *)(param_1 + 1)];
      uVar6 = 2;
      if ((int)uVar1 < 5) {
        uVar6 = 2;
        if (uVar1 != 4) {
          uVar6 = (uVar1 & 0xfffffffd) == 0;
        }
      }
    }
    else {
      uVar6 = 2;
    }
    uVar5 = FUN_0294dd9c(1,param_3,uVar6,0);
    bVar4 = FUN_0294e104(1,param_3,uVar5,0);
    uVar7 = (ulong)param_2[6];
    if (uVar7 < 6) {
      if (param_2[6] == 0) {
        uVar7 = 0;
      }
      else {
        pbVar10 = param_2;
        uVar8 = uVar7;
        do {
          if (*pbVar10 == bVar4) goto LAB_0299c2f4;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      param_2[uVar7] = bVar4;
      param_2[6] = param_2[6] + 1;
    }
LAB_0299c2f4:
    if ((ulong)*(byte *)(param_1 + 1) < 6) {
      if ((param_3 - 1U & 0xff) < 5) {
        puVar9 = (undefined4 *)(&PTR_DAT_04277040)[(char)(param_3 - 1U)];
      }
      else {
        puVar9 = &DAT_03a7eb68;
      }
      uVar1 = puVar9[*(byte *)(param_1 + 1)];
      uVar6 = 2;
      if ((int)uVar1 < 5) {
        uVar6 = 2;
        if (uVar1 != 4) {
          uVar6 = (uVar1 & 0xfffffffd) == 0;
        }
      }
    }
    else {
      uVar6 = 2;
    }
    uVar5 = FUN_0294dd9c(1,param_3,uVar6,0);
    bVar4 = FUN_0294e104(1,param_3,uVar5,1);
    uVar7 = (ulong)param_2[6];
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299c600;
    pbVar10 = param_2;
    uVar8 = uVar7;
    do {
      if (*pbVar10 == bVar4) {
        return;
      }
      uVar8 = uVar8 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar8 != 0);
    break;
  case 3:
    if ((ulong)*(byte *)(param_1 + 1) < 6) {
      if ((param_3 - 1U & 0xff) < 5) {
        puVar9 = (undefined4 *)(&PTR_DAT_04277040)[(char)(param_3 - 1U)];
      }
      else {
        puVar9 = &DAT_03a7eb68;
      }
      uVar1 = puVar9[*(byte *)(param_1 + 1)];
      uVar6 = 2;
      if ((int)uVar1 < 5) {
        uVar6 = 2;
        if (uVar1 != 4) {
          uVar6 = (uVar1 & 0xfffffffd) == 0;
        }
      }
    }
    else {
      uVar6 = 2;
    }
    uVar5 = FUN_0294dd9c(1,param_3,uVar6,0);
    bVar4 = FUN_0294e104(1,param_3,uVar5,0);
    uVar7 = (ulong)param_2[6];
    if (uVar7 < 6) {
      if (param_2[6] == 0) {
        uVar7 = 0;
      }
      else {
        pbVar10 = param_2;
        uVar8 = uVar7;
        do {
          if (*pbVar10 == bVar4) goto LAB_0299c440;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      param_2[uVar7] = bVar4;
      param_2[6] = param_2[6] + 1;
    }
LAB_0299c440:
    if ((ulong)*(byte *)(param_1 + 1) < 6) {
      if ((param_3 - 1U & 0xff) < 5) {
        puVar9 = (undefined4 *)(&PTR_DAT_04277040)[(char)(param_3 - 1U)];
      }
      else {
        puVar9 = &DAT_03a7eb68;
      }
      uVar1 = puVar9[*(byte *)(param_1 + 1)];
      uVar6 = 2;
      if ((int)uVar1 < 5) {
        uVar6 = 2;
        if (uVar1 != 4) {
          uVar6 = (uVar1 & 0xfffffffd) == 0;
        }
      }
    }
    else {
      uVar6 = 2;
    }
    uVar5 = FUN_0294dd9c(1,param_3,uVar6,0);
    bVar4 = FUN_0294e104(1,param_3,uVar5,1);
    uVar7 = (ulong)param_2[6];
    if (uVar7 < 6) {
      if (param_2[6] == 0) {
        uVar7 = 0;
      }
      else {
        pbVar10 = param_2;
        uVar8 = uVar7;
        do {
          if (*pbVar10 == bVar4) goto LAB_0299c50c;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      param_2[uVar7] = bVar4;
      param_2[6] = param_2[6] + 1;
    }
LAB_0299c50c:
    bVar4 = FUN_0294e104(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar7 = (ulong)param_2[6];
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299c600;
    pbVar10 = param_2;
    uVar8 = uVar7;
    do {
      if (*pbVar10 == bVar4) {
        return;
      }
      uVar8 = uVar8 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar8 != 0);
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 1);
    bVar3 = FUN_0294e104(1,param_3,bVar2,1);
    uVar7 = (ulong)param_2[6];
    bVar4 = bVar2;
    if (bVar2 <= bVar3) {
      bVar4 = bVar3;
      bVar3 = bVar2;
    }
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) {
      uVar7 = 0;
    }
    else {
      pbVar10 = param_2;
      uVar8 = uVar7;
      do {
        if (*pbVar10 == bVar3) goto LAB_0299c568;
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    param_2[uVar7] = bVar3;
    uVar7 = (ulong)(param_2[6] + 1);
    param_2[6] = (byte)(param_2[6] + 1);
LAB_0299c568:
    if (5 < ((uint)uVar7 & 0xff)) {
      return;
    }
    if ((uVar7 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 & 0xff;
      pbVar10 = param_2;
      uVar8 = uVar7;
      do {
        if (*pbVar10 == bVar4) {
          return;
        }
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    param_2[uVar7] = bVar4;
    goto LAB_0299c608;
  case 6:
  case 9:
    uVar7 = (ulong)param_2[6];
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) {
      uVar7 = 0;
    }
    else {
      pbVar10 = param_2;
      uVar8 = uVar7;
      do {
        if (*pbVar10 == 0) goto LAB_0299c2a4;
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    param_2[uVar7] = 0;
    uVar7 = (ulong)(param_2[6] + 1);
    param_2[6] = (byte)(param_2[6] + 1);
LAB_0299c2a4:
    if (5 < ((uint)uVar7 & 0xff)) {
      return;
    }
    if ((uVar7 & 0xff) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xff;
      pbVar10 = param_2;
      uVar11 = uVar8;
      do {
        if (*pbVar10 == 1) goto LAB_0299c63c;
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
    }
    param_2[uVar8] = 1;
    uVar7 = (ulong)(param_2[6] + 1);
    param_2[6] = (byte)(param_2[6] + 1);
LAB_0299c63c:
    if (5 < ((uint)uVar7 & 0xff)) {
      return;
    }
    if ((uVar7 & 0xff) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xff;
      pbVar10 = param_2;
      uVar11 = uVar8;
      do {
        if (*pbVar10 == 2) goto LAB_0299c69c;
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
    }
    param_2[uVar8] = 2;
    uVar7 = (ulong)(param_2[6] + 1);
    param_2[6] = (byte)(param_2[6] + 1);
LAB_0299c69c:
    if (5 < ((uint)uVar7 & 0xff)) {
      return;
    }
    if ((uVar7 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 & 0xff;
      pbVar10 = param_2;
      uVar8 = uVar7;
      do {
        if (*pbVar10 == 3) {
          return;
        }
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    param_2[uVar7] = 3;
    goto LAB_0299c608;
  case 8:
    uVar7 = (ulong)param_2[6];
    bVar4 = *(byte *)(param_1 + 1);
    if (uVar7 < 6) {
      if (param_2[6] == 0) {
        uVar7 = 0;
      }
      else {
        pbVar10 = param_2;
        uVar8 = uVar7;
        do {
          if (*pbVar10 == bVar4) goto LAB_0299c5bc;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      param_2[uVar7] = bVar4;
      param_2[6] = param_2[6] + 1;
      bVar4 = *(byte *)(param_1 + 1);
    }
LAB_0299c5bc:
    bVar4 = FUN_0294e104(1,param_3,bVar4,1);
    uVar7 = (ulong)param_2[6];
    if (5 < uVar7) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299c600;
    pbVar10 = param_2;
    uVar8 = uVar7;
    do {
      if (*pbVar10 == bVar4) {
        return;
      }
      uVar8 = uVar8 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar8 != 0);
    break;
  default:
    goto switchD_0299c094_default;
  }
  param_2[uVar7] = bVar4;
LAB_0299c608:
  param_2[6] = param_2[6] + 1;
switchD_0299c094_default:
  return;
}


