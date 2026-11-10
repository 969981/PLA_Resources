/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6770; name: FUN_032e6770
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_032e6770(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined8 *******pppppppuVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *******local_68;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  pbVar3 = (byte *)param_2[1];
  pbVar5 = pbVar3;
  if ((*pbVar3 & 1) == 0) {
    pbVar5 = *(byte **)(pbVar3 + 8);
    bVar1 = *pbVar5;
    while ((bVar1 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar1 = *pbVar5;
    }
  }
  uVar2 = 0x80040200;
  switch(*(uint *)(pbVar5 + 0x10) & 0x1f) {
  case 0:
  case 1:
    goto switchD_032e67d8_caseD_0;
  case 2:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
LAB_032e6b58:
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) != 2) {
        pbVar5 = (byte *)0x0;
        goto LAB_032e6b58;
      }
      uVar8 = *param_1;
      uVar10 = param_1[2];
      if ((uVar10 & 1) != 0) {
        FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
        uVar10 = param_1[2];
        pbVar3 = (byte *)param_2[1];
      }
    }
    local_68 = (undefined8 *******)((ulong)local_68 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    pppppppuVar4 = (undefined8 *******)((ulong)local_68 & 0xff);
    goto LAB_032e6b80;
  case 3:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) == 3) {
        uVar8 = *param_1;
        uVar10 = param_1[2];
        if ((uVar10 & 1) != 0) {
          FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
          uVar10 = param_1[2];
          pbVar3 = (byte *)param_2[1];
        }
      }
      else {
        uVar8 = 0;
        pbVar5 = (byte *)0x0;
        uVar10 = 0;
      }
    }
    local_68 = (undefined8 *******)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    pppppppuVar4 = local_68;
LAB_032e6b80:
    plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
    pcVar7 = *(code **)(*plVar9 + 0x30);
LAB_032e6b8c:
    uVar2 = (*pcVar7)(plVar9,uVar8,pbVar5,pppppppuVar4);
    break;
  case 4:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
LAB_032e6bc0:
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) != 4) {
        pbVar5 = (byte *)0x0;
        goto LAB_032e6bc0;
      }
      uVar8 = *param_1;
      uVar10 = param_1[2];
      if ((uVar10 & 1) != 0) {
        FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
        uVar10 = param_1[2];
        pbVar3 = (byte *)param_2[1];
      }
    }
    local_68 = (undefined8 *******)0x0;
    local_60 = (undefined *)((ulong)local_60 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
    pcVar7 = *(code **)(*plVar9 + 0x30);
    pppppppuVar4 = &local_68;
    goto LAB_032e6b8c;
  case 5:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
LAB_032e6c08:
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) != 5) {
        pbVar5 = (byte *)0x0;
        goto LAB_032e6c08;
      }
      uVar8 = *param_1;
      uVar10 = param_1[2];
      if ((uVar10 & 1) != 0) {
        FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
        uVar10 = param_1[2];
        pbVar3 = (byte *)param_2[1];
      }
    }
    local_68 = (undefined8 *******)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar9 + 0x30))(local_68,plVar9,uVar8,pbVar5);
joined_r0x032e6b14:
    if ((uVar10 & 1) == 0) {
      return uVar2;
    }
    goto LAB_032e6cb4;
  case 6:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
LAB_032e6c5c:
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) != 6) {
        pbVar5 = (byte *)0x0;
        goto LAB_032e6c5c;
      }
      uVar8 = *param_1;
      uVar10 = param_1[2];
      if ((uVar10 & 1) != 0) {
        FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
        uVar10 = param_1[2];
        pbVar3 = (byte *)param_2[1];
      }
    }
    local_60 = (undefined *)0x0;
    local_58 = 0;
    local_68 = (undefined8 *******)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar9 + 0x48))(plVar9,uVar8,pbVar5,&local_68);
    if ((local_58 & 1) != 0) {
      FUN_032e0c40(local_58 & 0xfffffffffffffffe);
      goto joined_r0x032e6b14;
    }
    break;
  case 7:
    param_1 = (undefined8 *)*param_1;
    local_60 = (undefined *)0x0;
    local_58 = 0;
    local_68 = (undefined8 *******)0x0;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 != (byte *)0x0) {
      bVar1 = *pbVar5;
      while ((bVar1 & 1) == 0) {
        pbVar5 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar5;
      }
      if ((*(ulong *)(pbVar5 + 0x10) & 0x1f) == 7) {
        local_68 = (undefined8 *******)*param_1;
        local_60 = (undefined *)param_1[1];
        uVar10 = param_1[2];
        if ((uVar10 & 1) != 0) {
          FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
          uVar10 = param_1[2];
        }
        local_58 = uVar10;
      }
    }
    uVar10 = local_58;
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_38 = param_2[2];
    if ((local_38 & 1) != 0) {
      FUN_032e0c28(local_38 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_032e6548(&local_68,&local_48);
    if ((local_38 & 1) != 0) {
      FUN_032e0c40(local_38 & 0xfffffffffffffffe);
    }
    if ((uVar10 & 1) != 0) {
      FUN_032e0c40(uVar10 & 0xfffffffffffffffe);
    }
    return uVar2;
  case 8:
    param_1 = (undefined8 *)*param_1;
    pbVar5 = (byte *)param_1[1];
    if (pbVar5 == (byte *)0x0) {
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar5;
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = *(byte **)(pbVar5 + 8);
        bVar1 = *pbVar6;
        while ((bVar1 & 1) == 0) {
          pbVar6 = *(byte **)(pbVar6 + 8);
          bVar1 = *pbVar6;
        }
      }
      if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) == 8) {
        uVar8 = *param_1;
        uVar10 = param_1[2];
        if ((uVar10 & 1) != 0) {
          FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
          uVar10 = param_1[2];
          pbVar3 = (byte *)param_2[1];
        }
      }
      else {
        uVar8 = 0;
        pbVar5 = (byte *)0x0;
        uVar10 = 0;
      }
    }
    local_58 = 0;
    local_50 = 0;
    local_68 = (undefined8 *******)0x0;
    local_60 = (undefined *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar3,&local_68);
    plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar9 + 0x48))(plVar9,uVar8,pbVar5,&local_68);
    if ((local_50 & 1) == 0) goto joined_r0x032e6b14;
    FUN_032e0c40(local_50 & 0xfffffffffffffffe);
    break;
  default:
    local_58 = 0;
    local_68 = (undefined8 *******)0x0;
    local_60 = PTR_DAT_04372528;
    FUN_03320b50(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3b,"Bad var visitor switch",&local_68);
    goto switchD_032e67d8_caseD_0;
  }
  if ((uVar10 & 1) != 0) {
LAB_032e6cb4:
    FUN_032e0c40(plVar9);
  }
switchD_032e67d8_caseD_0:
  return uVar2;
}


