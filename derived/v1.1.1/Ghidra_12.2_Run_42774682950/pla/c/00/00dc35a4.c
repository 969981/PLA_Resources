/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc35a4; name: FUN_00dc35a4
 */


void FUN_00dc35a4(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  double dVar7;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_1[10];
  if (7 < param_1[10]) {
    iVar1 = *param_1;
  }
  if (2 < iVar1 - 1U) {
    return;
  }
  if (0 < param_1[0x10]) {
    param_1[0x10] = param_1[0x10] + -1;
    return;
  }
  dVar7 = (double)*(long *)(DAT_043ef568 + 0x158) / 1000000.0;
  iVar6 = param_1[8];
  param_1[8] = iVar6 + 1;
  iVar2 = param_1[0xd];
  *(double *)(param_1 + 2) = dVar7;
  dVar7 = *(double *)(param_1 + 4) + dVar7;
  *(double *)(param_1 + 4) = dVar7;
  if (0 < param_1[0xe]) {
    param_1[0xe] = param_1[0xe] + -1;
  }
  if (iVar6 < 1) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  dVar7 = dVar7 * 0.5;
  *(double *)(param_1 + 6) = dVar7;
  dVar7 = dVar7 / 33.333334;
  if (0.949999988079071 <= dVar7) {
    iVar6 = iVar2;
    if (1 < iVar2) {
      iVar6 = 2;
    }
    iVar6 = iVar6 + 1;
    bVar3 = iVar6 != iVar2;
    if (bVar3) {
      param_1[0x10] = 2;
    }
    param_1[9] = 0;
    param_1[0xe] = 0x1e;
    param_1[0xf] = (int)(float)dVar7;
  }
  else {
    if (0.800000011920929 < dVar7) {
      return;
    }
    iVar6 = param_1[9];
    param_1[9] = iVar6 + 1;
    if (iVar6 < 0xe) {
      return;
    }
    iVar6 = iVar2;
    if (iVar2 < 2) {
      iVar6 = 1;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 == iVar2) {
      return;
    }
    param_1[0x10] = 2;
    bVar3 = true;
  }
  if (iVar1 != 1) {
    return;
  }
  if (!bVar3) {
    return;
  }
  uVar5 = 0x3f59999a;
  local_18 = 0x3f59999a;
  local_14 = 0x3f666666;
  switch(iVar6) {
  case 0:
    uVar5 = 0x3f800000;
    local_14 = 0x3f800000;
    break;
  case 1:
    local_14 = 0x3f666666;
    break;
  case 2:
    local_14 = 0x3f59999a;
    uVar5 = 0x3f4ccccd;
    break;
  case 3:
    local_14 = 0x3f4ccccd;
    uVar5 = 0x3f333333;
    break;
  default:
    goto switchD_00dc3760_default;
  }
  local_18 = uVar5;
switchD_00dc3760_default:
  param_1[0xd] = iVar6;
  local_40 = 0x4aa9ba3dccea94ea;
  pcStack_38 = "3DBufferWidthScale";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_40,&local_14);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x66e7a756352d0d9f;
  pcStack_38 = "3DBufferHeightScale";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  plVar4 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_40,&local_18);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


