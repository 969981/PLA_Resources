/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f7ed0; name: FUN_029f7ed0
 */


undefined8 FUN_029f7ed0(long param_1,undefined8 *param_2,ulong *param_3,byte param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte local_38 [4];
  byte local_34 [4];
  
  if ((*param_3 & 0x800f) == 0x8003) {
    return 0;
  }
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0x5400000;
  switch((uint)*param_3 & 0xf) {
  case 1:
    *(undefined4 *)(param_2 + 1) = 1;
    *(uint *)(param_2 + 2) = (uint)*param_3 >> 0xd & 0xffff;
    *(byte *)((long)param_2 + 0xc) = (byte)((uint)*param_3 >> 9) & 0xf;
    uVar1 = (uint)*param_3 >> 9 & 0xf;
    if (uVar1 == 6) {
LAB_029f8140:
      uVar2 = 0x1f;
    }
    else {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
      FUN_02947b84(*puVar8,uVar1,local_34,local_38);
      uVar7 = (ulong)local_34[0];
      if (((uVar7 == 5) || (*(byte *)(puVar8 + uVar7 * 7 + 7) <= local_38[0])) ||
         (puVar8[uVar7 * 7 + (ulong)local_38[0] + 1] == 0)) goto LAB_029f8140;
      uVar2 = *(undefined1 *)(puVar8[uVar7 * 7 + (ulong)local_38[0] + 1] + 0x7d);
    }
    *(undefined1 *)((long)param_2 + 0xd) = uVar2;
    *(uint *)((long)param_2 + 0x14) = (uint)*param_3 >> 0x1e;
    break;
  case 2:
    *(undefined4 *)(param_2 + 1) = 2;
    *(char *)(param_2 + 3) = (char)(*param_3 >> 9);
    *(short *)((long)param_2 + 0x1a) = (short)(*param_3 >> 0x11);
    *(char *)((long)param_2 + 0x1c) = (char)(*param_3 >> 0x21);
    break;
  case 3:
    *(undefined4 *)(param_2 + 1) = 3;
    *(byte *)((long)param_2 + 0x1e) = (byte)((uint)*param_3 >> 9) & 7;
    *(byte *)((long)param_2 + 0x1f) = (byte)((uint)*param_3 >> 0xc) & 7;
    *(byte *)(param_2 + 4) = (byte)((uint)*param_3 >> 0xf) & 1;
    break;
  case 4:
    *(undefined4 *)(param_2 + 1) = 4;
    *(uint *)((long)param_2 + 0x24) = (uint)*param_3 >> 9 & 0xff;
    break;
  case 5:
    uVar3 = 5;
    goto LAB_029f8088;
  case 6:
    uVar3 = 6;
    goto LAB_029f8088;
  case 7:
    uVar3 = 7;
    goto LAB_029f8088;
  case 8:
    uVar3 = 8;
    goto LAB_029f8088;
  case 9:
    uVar3 = 9;
LAB_029f8088:
    *(undefined4 *)(param_2 + 1) = uVar3;
    break;
  default:
    *(undefined4 *)(param_2 + 1) = 0;
  }
  uVar7 = *param_3;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if ((uVar7 & 0xf) == 3) {
    uVar1 = (uint)uVar7 >> 9 & 7;
    if (uVar1 < *(byte *)(lVar4 + (ulong)param_4 * 0x38 + 0x38)) {
      uVar5 = *(undefined8 *)(lVar4 + (ulong)param_4 * 0x38 + (ulong)uVar1 * 8 + 8);
      goto LAB_029f80f0;
    }
  }
  else {
    uVar7 = uVar7 >> 4 & 0x1f;
    if (uVar7 != 0x1f) {
      uVar5 = *(undefined8 *)(lVar4 + uVar7 * 8 + 0x120);
      goto LAB_029f80f0;
    }
  }
  uVar5 = 0;
LAB_029f80f0:
  *param_2 = uVar5;
  *(byte *)((long)param_2 + 0x5c) = param_4;
  *(undefined2 *)((long)param_2 + 0x5d) = 0;
  *(undefined1 *)((long)param_2 + 0x5f) = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  iVar6 = *(int *)(lVar4 + 8);
  if (iVar6 == 0) {
    iVar6 = 1;
    *(undefined4 *)(lVar4 + 8) = 1;
  }
  *(int *)(param_2 + 5) = iVar6;
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  return 1;
}


