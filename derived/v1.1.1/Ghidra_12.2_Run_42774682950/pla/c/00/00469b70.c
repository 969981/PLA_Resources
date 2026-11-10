/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00469b70; name: FUN_00469b70
 */


undefined4 FUN_00469b70(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0xe8);
  iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
  if (((((lVar11 != 0) && (param_2 < iVar1)) && (0 < param_2)) &&
      (((*(uint *)(lVar11 + 0x28) & 5) != 0 && (*(long *)(param_1 + 0xe8) != 0)))) &&
     (((*(byte *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) != 0 &&
      (lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),param_2), lVar4 != 0)))) {
    iVar2 = FUN_00469e40(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xe8),lVar4,
                         param_2);
    if (iVar2 < 0) {
      return 2;
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x94) = param_2 + -1;
      return 1;
    }
  }
  if (param_2 < iVar1) {
    iVar2 = param_2;
    do {
      lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar2);
      iVar3 = FUN_0046c1c0(lVar4,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
      if (iVar3 == 1) goto LAB_00469de8;
      if (iVar3 == 2) goto LAB_00469d48;
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
    if (param_2 < iVar1) {
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar8 = 3;
      if ((uVar9 & 0x80000) != 0) {
        uVar8 = 1;
      }
      if (((uint)uVar9 >> 0x13 & 1) == 0) {
        return uVar8;
      }
      if (lVar11 == 0) {
        return uVar8;
      }
      goto LAB_00469dec;
    }
  }
  if ((iVar1 != param_2) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0)) {
    return 3;
  }
  lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
  pcVar10 = *(code **)(param_1 + 0x78);
  uVar5 = FUN_0044e530();
  lVar6 = (*pcVar10)(param_1,uVar5);
  if (lVar6 == 0) {
    return 3;
  }
  iVar1 = FUN_00407950();
  if (iVar1 < 1) {
    lVar7 = 0;
    iVar1 = FUN_00407950(lVar6);
    if (iVar1 < 1) goto LAB_00469dac;
  }
  else {
    iVar1 = 0;
    do {
      lVar7 = FUN_00407970(lVar6,iVar1);
      iVar2 = FUN_0044e550(lVar7,lVar4);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(lVar6);
    } while (iVar1 < iVar2);
    iVar2 = FUN_00407950(lVar6);
    if (iVar2 <= iVar1) {
LAB_00469dac:
      FUN_004078c0(lVar6,PTR_FUN_04374180);
      return 3;
    }
  }
  FUN_00466c20(lVar7);
  FUN_004078c0(lVar6,PTR_FUN_04374180);
  if (lVar7 == 0) {
    return 3;
  }
  iVar1 = FUN_0046c1c0(lVar7,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
  if (iVar1 == 2) {
    FUN_00460a80(lVar7);
    iVar2 = 0;
LAB_00469d48:
    *(int *)(param_1 + 0xac) = iVar2;
    if (lVar4 == 0) {
      lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar2);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x1c;
    *(long *)(param_1 + 0xb8) = lVar4;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar8 = 2;
    if (iVar1 != 0) {
      uVar8 = 3;
    }
    return uVar8;
  }
  FUN_004079a0(*(undefined8 *)(param_1 + 0x98),0,lVar7);
  FUN_00460a80(lVar4);
  *(undefined4 *)(param_1 + 0x94) = 0;
LAB_00469de8:
  if (lVar11 == 0) {
    return 1;
  }
LAB_00469dec:
  iVar1 = FUN_00407950(*(undefined8 *)(lVar11 + 8));
  if (iVar1 < 1) {
    return 1;
  }
  if (*(int *)(lVar11 + 0x30) < 0) {
    *(int *)(lVar11 + 0x30) = param_2;
  }
  uVar8 = 3;
  if (-1 < *(int *)(lVar11 + 0x2c)) {
    uVar8 = 1;
  }
  return uVar8;
}


