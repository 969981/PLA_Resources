/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281d280; name: FUN_0281d280
 */


void FUN_0281d280(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  int local_28;
  int local_24;
  
  if (*(code **)(param_1 + 0x610) != (code *)0x0) {
    lVar6 = *(long *)(param_1 + 0x8b0);
    piVar1 = (int *)(lVar6 + 0x20);
    if (*(int *)(lVar6 + 0x28) != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
    }
    local_28 = *(int *)(lVar6 + 0x14) + *piVar1 * *(int *)(lVar6 + 0x10);
    uVar5 = (**(code **)(param_1 + 0x610))(param_1 + 0x630,&local_28,param_1 + 0x85c);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  uVar3 = FUN_0282d9cc(*(undefined8 *)(param_1 + 0x8b0),param_1 + 0x85c);
  switch(uVar3) {
  case 1:
    FUN_0281e1ec(param_1);
    local_28 = FUN_0282d820(*(undefined8 *)(param_1 + 0x8b0));
    lVar6 = *(long *)(param_1 + 0x8b0);
    iVar7 = *(int *)(lVar6 + 0x14);
    if (*(int *)(lVar6 + 0x28) == 0) {
      local_24 = 0;
      if (*(int *)(lVar6 + 0x20) != 0) {
        local_24 = iVar7 / *(int *)(lVar6 + 0x20);
      }
    }
    else {
      iVar4 = *(int *)(lVar6 + 0x24);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar7 / iVar4;
      }
      local_24 = iVar7 - iVar2 * iVar4;
    }
    if (*(int *)(param_1 + 0x710) == 0) {
      if (*(int *)(lVar6 + 0x28) == 0) {
        iVar4 = *(int *)(lVar6 + 0x20);
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = iVar7 / iVar4;
        }
        local_28 = iVar7 - iVar2 * iVar4;
      }
      else {
        local_28 = 0;
        if (*(int *)(lVar6 + 0x24) != 0) {
          local_28 = iVar7 / *(int *)(lVar6 + 0x24);
        }
      }
      local_24 = FUN_0282d820();
      lVar6 = *(long *)(param_1 + 0x8b0);
    }
    iVar4 = FUN_0282dbc4(lVar6,&local_28);
    fVar8 = *(float *)(*(long *)(param_1 + 0x7f8) + 0x1a4);
    break;
  case 2:
  case 5:
    *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x10) =
         *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0xc);
    lVar6 = *(long *)(param_1 + 0x8b0);
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar6 + 0xc)) {
      iVar4 = *(int *)(lVar6 + 0x24) * *(int *)(lVar6 + 0x20) + -1;
    }
    else {
      piVar1 = (int *)(lVar6 + 0x20);
      if (*(int *)(lVar6 + 0x28) != 0) {
        piVar1 = (int *)(lVar6 + 0x24);
      }
      iVar4 = *(int *)(lVar6 + 8) + ~(*piVar1 * *(int *)(lVar6 + 0xc));
    }
    fVar8 = *(float *)(*(long *)(param_1 + 0x7f8) + 0x1a4);
    *(undefined1 *)(param_1 + 0x9f7) = 0;
    goto LAB_0281d37c;
  case 3:
    FUN_0281e1ec(param_1);
    local_28 = FUN_0282d680(*(undefined8 *)(param_1 + 0x8b0));
    lVar6 = *(long *)(param_1 + 0x8b0);
    iVar7 = *(int *)(lVar6 + 0x14);
    if (*(int *)(lVar6 + 0x28) == 0) {
      local_24 = 0;
      if (*(int *)(lVar6 + 0x20) != 0) {
        local_24 = iVar7 / *(int *)(lVar6 + 0x20);
      }
    }
    else {
      iVar4 = *(int *)(lVar6 + 0x24);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar7 / iVar4;
      }
      local_24 = iVar7 - iVar2 * iVar4;
    }
    if (*(int *)(param_1 + 0x710) == 0) {
      if (*(int *)(lVar6 + 0x28) == 0) {
        iVar4 = *(int *)(lVar6 + 0x20);
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = iVar7 / iVar4;
        }
        local_28 = iVar7 - iVar2 * iVar4;
      }
      else {
        local_28 = 0;
        if (*(int *)(lVar6 + 0x24) != 0) {
          local_28 = iVar7 / *(int *)(lVar6 + 0x24);
        }
      }
      local_24 = FUN_0282d680();
      lVar6 = *(long *)(param_1 + 0x8b0);
    }
    iVar4 = FUN_0282dbc4(lVar6,&local_28);
    fVar8 = *(float *)(*(long *)(param_1 + 0x7f8) + 0x1a0);
    break;
  case 4:
    lVar6 = *(long *)(param_1 + 0x8b0);
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar6 + 0xc)) {
      iVar7 = *(int *)(lVar6 + 0x24) * *(int *)(lVar6 + 0x20) + -1;
    }
    else {
      piVar1 = (int *)(lVar6 + 0x20);
      if (*(int *)(lVar6 + 0x28) != 0) {
        piVar1 = (int *)(lVar6 + 0x24);
      }
      iVar7 = *(int *)(lVar6 + 8) + ~(*piVar1 * *(int *)(lVar6 + 0xc));
    }
    FUN_02819878(param_1,iVar7);
    goto LAB_0281d3a0;
  case 6:
    *(undefined1 *)(param_1 + 0x9f7) = 0;
    FUN_0282ef20(0,*(undefined8 *)(param_1 + 0x7f8));
    iVar4 = 0;
    iVar7 = 0;
    goto LAB_0281d390;
  default:
    goto switchD_0281d304_default;
  }
  *(undefined1 *)(param_1 + 0x9f7) = 0;
LAB_0281d37c:
  iVar7 = (int)fVar8;
  FUN_0282ef20((float)iVar7);
LAB_0281d390:
  FUN_02819878(param_1,iVar4,iVar7);
  uVar5 = FUN_0282d5c0(*(undefined8 *)(param_1 + 0x8b0));
  if ((uVar5 & 1) == 0) {
LAB_0281d3a0:
    FUN_028354b0(param_1 + 0x9c0);
  }
switchD_0281d304_default:
  return;
}


