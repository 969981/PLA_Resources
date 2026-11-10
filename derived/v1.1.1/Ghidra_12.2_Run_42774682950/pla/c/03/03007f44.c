/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03007f44; name: FUN_03007f44
 */


void FUN_03007f44(undefined2 *param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = (undefined2 *)((long)param_1 + (long)param_2);
  *param_3 = 0x2000000000;
  *(int *)(param_3 + 3) = param_2;
  iVar4 = param_4;
  if (param_4 < 1) {
    iVar4 = 0xff;
  }
  param_3[1] = 0;
  param_3[2] = param_1;
  if (param_1 < puVar1) {
    iVar7 = 0;
    iVar5 = 0;
    iVar6 = 0x20;
    iVar8 = 1;
    do {
      switch(*param_1) {
      case 1:
        goto switchD_03007fa0_caseD_1;
      case 2:
        param_1 = param_1 + 0x48;
        goto joined_r0x03008184;
      case 3:
        goto switchD_03007fa0_caseD_3;
      case 4:
        param_1 = param_1 + 0x38;
        goto joined_r0x03008184;
      case 5:
        iVar6 = iVar6 + 0x90;
        iVar7 = iVar7 + 3;
        iVar5 = iVar5 + 3;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        *(int *)((long)param_3 + 0xc) = iVar5;
        *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + -0x10;
        break;
      case 6:
        iVar6 = iVar6 + 0x70;
        goto LAB_03007fa8;
      case 7:
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        *(int *)((long)param_3 + 0xc) = iVar5;
        *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + 0x10;
        break;
      default:
        goto switchD_03007fa0_caseD_8;
      case 9:
      case 0x15:
      case 0x16:
        iVar6 = iVar6 + 0x40;
        goto LAB_03007fcc;
      case 10:
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 2;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        iVar5 = iVar5 + 2;
        goto LAB_0300819c;
      case 0xb:
        iVar6 = iVar6 + 0x50;
        goto LAB_0300814c;
      case 0xc:
        iVar6 = iVar6 + 0x60;
        iVar7 = iVar7 + 2;
        iVar5 = iVar5 + 2;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        *(int *)((long)param_3 + 0xc) = iVar5;
        *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + 0x20;
        break;
      case 0xd:
        uVar10 = (uint)*(byte *)((long)param_1 + 5);
        uVar3 = (uint)*(byte *)((long)param_1 + 5) * 0x30;
        uVar2 = uVar10 * 0x20;
        if (uVar10 * 0x20 <= uVar3) {
          uVar2 = uVar3;
        }
        iVar6 = uVar2 + iVar6;
        iVar7 = iVar7 + uVar10;
        iVar5 = iVar5 + uVar10;
        *(int *)((long)param_3 + 0xc) = iVar5;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        *(uint *)((long)param_3 + 0x1c) =
             *(int *)((long)param_3 + 0x1c) + (uint)*(byte *)((long)param_1 + 5) * 0x10;
        break;
      case 0xe:
      case 0xf:
        iVar6 = iVar6 + 0x30;
LAB_03007fcc:
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
LAB_03007fd8:
        param_1 = param_1 + 0x10;
        goto LAB_03007fb8;
      case 0x10:
        iVar6 = iVar6 + 0x50;
LAB_03007fa8:
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
LAB_03007fb4:
        param_1 = param_1 + 0x18;
LAB_03007fb8:
        *(int *)((long)param_3 + 0xc) = iVar5;
        goto joined_r0x03008184;
      case 0x11:
        iVar6 = iVar6 + (uint)*(byte *)(param_1 + 2) * 0x30;
        iVar9 = (uint)*(byte *)(param_1 + 2) * 2;
        iVar7 = iVar9 + iVar7;
        iVar5 = iVar9 + iVar5;
        *(int *)((long)param_3 + 0xc) = iVar5;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        break;
      case 0x12:
        iVar6 = iVar6 + 0x40;
LAB_0300814c:
        iVar7 = iVar7 + 2;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        iVar5 = iVar5 + 2;
        goto LAB_03007fd8;
      case 0x13:
        iVar6 = iVar6 + 0xc0;
        iVar7 = iVar7 + 6;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        iVar5 = iVar5 + 6;
        goto LAB_03008060;
      case 0x14:
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        *(int *)((long)param_3 + 0xc) = iVar5;
        param_1 = param_1 + 0x20;
        *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + 0x30;
        goto joined_r0x03008184;
      case 0x17:
        break;
      case 0x18:
        iVar6 = iVar6 + 0x70;
        iVar7 = iVar7 + 3;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        iVar5 = iVar5 + 3;
LAB_0300819c:
        param_1 = param_1 + 8;
        goto LAB_03007fb8;
      case 0x19:
        iVar6 = iVar6 + 0xb0;
        goto LAB_030081b0;
      case 0x1a:
        iVar6 = iVar6 + 0xc0;
LAB_030081b0:
        iVar7 = iVar7 + 3;
        iVar5 = iVar5 + 3;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
LAB_03008060:
        param_1 = param_1 + 0x30;
        goto LAB_03007fb8;
      case 0x1c:
        iVar6 = iVar6 + 0x70;
        iVar5 = iVar5 + 2;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)((long)param_3 + 0xc) = iVar5;
        goto switchD_03007fa0_caseD_3;
      case 0x1d:
        iVar6 = iVar6 + 0x70;
        iVar7 = iVar7 + 2;
        *(int *)((long)param_3 + 4) = iVar6;
        *(int *)(param_3 + 1) = iVar7;
        iVar5 = iVar5 + 2;
        goto LAB_03007fb4;
      }
      param_1 = param_1 + 8;
switchD_03007fa0_caseD_8:
      if (iVar4 <= iVar8) break;
LAB_03008040:
      iVar8 = iVar8 + 1;
    } while (param_1 < puVar1);
  }
  else {
    iVar5 = 0;
    iVar6 = 0x20;
  }
LAB_03008070:
  if ((param_1 != puVar1) && (0 < param_4)) {
    *(int *)((long)param_3 + 4) = iVar6 + 0x140;
    *(int *)((long)param_3 + 0xc) = iVar5 + 6;
    return;
  }
switchD_03007fa0_caseD_1:
  return;
switchD_03007fa0_caseD_3:
  param_1 = param_1 + 0x18;
joined_r0x03008184:
  if (iVar8 < iVar4) goto LAB_03008040;
  goto LAB_03008070;
}


