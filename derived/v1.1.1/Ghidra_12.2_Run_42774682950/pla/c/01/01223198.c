/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01223198; name: FUN_01223198
 */


bool FUN_01223198(int *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  iVar6 = *param_1;
  uVar8 = (*(byte *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) & 4) >> 2;
  if (iVar6 != 0) {
    if ((uVar9 & 1) != 0 || uVar8 != 0) {
      return false;
    }
    iVar7 = FUN_02c6849c();
    if (iVar6 != iVar7) {
      return false;
    }
  }
  cVar4 = *(char *)((long)param_1 + 5);
  cVar5 = (char)param_1[1];
  if (cVar4 == '\x12') {
    if (cVar5 == '\x12') goto LAB_01223260;
    cVar10 = '\x12';
    cVar11 = cVar5;
    if ((uVar9 & 1) != 0 || uVar8 != 0) {
      return false;
    }
  }
  else {
    cVar11 = cVar4;
    cVar10 = cVar5;
    if (cVar5 != '\x12') {
      cVar11 = cVar5;
      cVar10 = cVar4;
    }
    if ((uVar9 & 1) != 0 || uVar8 != 0) {
      return false;
    }
  }
  cVar4 = FUN_02c63ba8(param_2);
  cVar5 = FUN_02c63ce0(param_2);
  if ((cVar11 != cVar4) && (cVar11 != cVar5)) {
    return false;
  }
  if (((cVar10 != '\x12') && (cVar10 != cVar4)) && (cVar10 != cVar5)) {
    return false;
  }
LAB_01223260:
  if (param_1[2] != 0) {
    if ((uVar9 & 1) != 0 || uVar8 != 0) {
      return false;
    }
    iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),0);
    iVar7 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),1);
    uVar12 = 2;
    if (iVar6 == 0) {
      uVar12 = 1;
    }
    uVar13 = (uint)(iVar6 != 0);
    if (iVar7 != 0) {
      uVar13 = uVar12;
    }
    iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),2);
    if (iVar6 != 0) {
      uVar13 = uVar13 + 1;
    }
    iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),3);
    if (uVar13 == -(uint)(iVar6 != 0)) {
      return false;
    }
    uVar12 = 0;
    while (iVar6 = param_1[2], iVar7 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),uVar12),
          iVar6 != iVar7) {
      uVar12 = uVar12 + 1;
      iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),0);
      iVar7 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),1);
      uVar13 = 2;
      if (iVar6 == 0) {
        uVar13 = 1;
      }
      uVar1 = (uint)(iVar6 != 0);
      if (iVar7 != 0) {
        uVar1 = uVar13;
      }
      iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),2);
      if (iVar6 != 0) {
        uVar1 = uVar1 + 1;
      }
      iVar6 = FUN_02c6b1c0(*(undefined8 *)(param_2 + 0x98),3);
      if (iVar6 != 0) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 <= uVar12) {
        return false;
      }
    }
  }
  iVar6 = param_1[3];
  if ((iVar6 != 0x19) &&
     (((uVar9 & 1) != 0 || uVar8 != 0 || (iVar7 = FUN_02c624d0(param_2), iVar6 != iVar7)))) {
    return false;
  }
  iVar6 = param_1[4];
  if (iVar6 == 3) {
    if ((param_3 & 1) == 0) {
      return true;
    }
  }
  else {
    if ((uVar9 & 1) != 0 || uVar8 != 0) {
      return false;
    }
    iVar7 = FUN_02c6f5e8(*(undefined8 *)(param_2 + 0x98));
    bVar3 = iVar6 == iVar7;
    if (!bVar3) {
      return bVar3;
    }
    if ((param_3 & 1) == 0) {
      return bVar3;
    }
  }
  uVar2 = *(ushort *)(param_1 + 5);
  if (uVar2 != 0) {
    if ((uVar2 & 3) != 0) {
      uVar8 = FUN_02c5d3cc(param_2,0);
      if ((uVar2 & 3) != uVar8) {
        return false;
      }
      uVar2 = *(ushort *)(param_1 + 5);
    }
    if ((uVar2 >> 2 & 3) != 0) {
      uVar8 = FUN_02c5d3cc(param_2,1);
      if ((uVar2 >> 2 & 3) != uVar8) {
        return false;
      }
      uVar2 = *(ushort *)(param_1 + 5);
    }
    if ((uVar2 >> 4 & 3) != 0) {
      uVar8 = FUN_02c5d3cc(param_2,2);
      if ((uVar2 >> 4 & 3) != uVar8) {
        return false;
      }
      uVar2 = *(ushort *)(param_1 + 5);
    }
    if ((uVar2 >> 6 & 3) != 0) {
      uVar8 = FUN_02c5d3cc(param_2,3);
      if ((uVar2 >> 6 & 3) != uVar8) {
        return false;
      }
      uVar2 = *(ushort *)(param_1 + 5);
    }
    if ((uVar2 >> 8 & 3) != 0) {
      uVar8 = FUN_02c5d3cc(param_2,4);
      if ((uVar2 >> 8 & 3) != uVar8) {
        return false;
      }
      uVar2 = *(ushort *)(param_1 + 5);
    }
    if (((uVar2 >> 10 & 3) != 0) && (uVar8 = FUN_02c5d3cc(param_2,5), (uVar2 >> 10 & 3) != uVar8)) {
      return false;
    }
  }
  return true;
}


