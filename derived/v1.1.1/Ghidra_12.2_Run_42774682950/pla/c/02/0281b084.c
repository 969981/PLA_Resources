/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281b084; name: FUN_0281b084
 */


undefined8 FUN_0281b084(long param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  lVar12 = *(long *)(param_1 + 0x8b0);
  *(int *)(param_1 + 0x864) = param_3;
  uVar6 = FUN_0282d908(lVar12);
  uVar5 = param_3 - 1;
  if ((param_3 == 1) && ((uVar6 & 1) != 0)) {
    uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x8d0) + 0x40))();
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x85c) = *(undefined8 *)param_2;
    uVar9 = 3;
    goto LAB_0281b254;
  }
  iVar4 = *(int *)(lVar12 + 0x14);
  iVar11 = *(int *)(lVar12 + 0x28);
  if (iVar11 == 0) {
    iVar10 = *(int *)(lVar12 + 0x20);
    iVar7 = 0;
    if (iVar10 != 0) {
      iVar7 = iVar4 / iVar10;
    }
    iVar10 = iVar4 - iVar7 * iVar10;
  }
  else {
    iVar7 = *(int *)(lVar12 + 0x24);
    iVar10 = 0;
    if (iVar7 != 0) {
      iVar10 = iVar4 / iVar7;
    }
    iVar7 = iVar4 - iVar10 * iVar7;
  }
  iVar3 = *param_2;
  iVar13 = param_2[1];
  iVar1 = iVar3;
  if (iVar11 != 0) {
    iVar1 = iVar13;
    iVar10 = iVar7;
  }
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar8 = (uint)(iVar1 + iVar10) >> 0x1f;
      goto joined_r0x0281b1e4;
    }
  }
  else {
    piVar2 = (int *)(lVar12 + 0x20);
    if (iVar11 != 0) {
      piVar2 = (int *)(lVar12 + 0x24);
    }
    uVar8 = (uint)(*piVar2 <= iVar1 + iVar10);
joined_r0x0281b1e4:
    if ((uVar5 < 2) && (uVar8 != 0)) {
      uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x8d0) + 0x40))();
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x85c) = *(undefined8 *)param_2;
      uVar9 = 4;
      goto LAB_0281b254;
    }
  }
  uVar6 = FUN_0282d4d4(lVar12,param_2);
  if ((uVar5 < 2) && ((uVar6 & 1) != 0)) {
    uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x8d0) + 0x40))();
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x85c) = *(undefined8 *)param_2;
      uVar9 = 2;
LAB_0281b254:
      *(undefined4 *)(param_1 + 0x858) = uVar9;
      return 1;
    }
  }
  else {
    if (iVar11 == 0) {
      iVar7 = *(int *)(lVar12 + 0x20) * iVar13;
      iVar13 = iVar3;
    }
    else {
      iVar7 = *(int *)(lVar12 + 0x24) * iVar3;
    }
    iVar4 = iVar7 + iVar13 + iVar4;
    if (-1 < iVar4) {
      if (*(int *)(lVar12 + 0x10) < *(int *)(lVar12 + 0xc)) {
        iVar11 = *(int *)(lVar12 + 0x24) * *(int *)(lVar12 + 0x20) + -1;
      }
      else {
        piVar2 = (int *)(lVar12 + 0x20);
        if (iVar11 != 0) {
          piVar2 = (int *)(lVar12 + 0x24);
        }
        iVar11 = *(int *)(lVar12 + 8) + ~(*piVar2 * *(int *)(lVar12 + 0xc));
      }
      if (1 < uVar5) {
        return 0;
      }
      if (iVar11 < iVar4) {
        return 0;
      }
      uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x8d0) + 0x40))();
      if ((uVar6 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x85c) = *(undefined8 *)param_2;
        *(undefined4 *)(param_1 + 0x858) = 1;
        return 1;
      }
    }
  }
  return 0;
}


