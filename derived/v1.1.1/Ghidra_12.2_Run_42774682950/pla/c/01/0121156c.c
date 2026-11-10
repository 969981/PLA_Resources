/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121156c; name: FUN_0121156c
 */


void FUN_0121156c(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar2 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0xa8) + (param_2 & 0xffffffff) * 6);
  lVar4 = FUN_0120e1b8(*(undefined8 *)(param_1 + 0x5e0));
  uVar7 = (uint)uVar2;
  if (*(short *)(lVar4 + 2) == -1) {
LAB_012116d4:
    if (*(uint *)(param_1 + 0x5d8) < 7) {
      uVar8 = (uint)uVar2;
      switch(*(uint *)(param_1 + 0x5d8)) {
      case 0:
        if (uVar8 == 0x2f && **(int **)(param_1 + 0x5e0) == 6) {
          **(uint **)(param_1 + 0x5b0) = 0;
        }
        else {
          **(uint **)(param_1 + 0x5b0) = uVar8;
        }
        break;
      case 1:
        *(char *)(*(long *)(param_1 + 0x5b0) + 4) = (char)uVar2;
        break;
      case 2:
        *(char *)(*(long *)(param_1 + 0x5b0) + 5) = (char)uVar2;
        break;
      case 3:
        if (uVar8 == 0x2f && **(int **)(param_1 + 0x5e0) == 6) {
          *(undefined4 *)(*(long *)(param_1 + 0x5b0) + 8) = 0;
        }
        else {
          *(uint *)(*(long *)(param_1 + 0x5b0) + 8) = uVar8;
        }
        break;
      case 4:
        *(uint *)(*(long *)(param_1 + 0x5b0) + 0xc) = uVar7;
        break;
      case 5:
        *(uint *)(*(long *)(param_1 + 0x5b0) + 0x10) = uVar7;
        break;
      case 6:
        if (uVar8 < 6) {
          uVar6 = (uint)uVar2 << 1;
          uVar2 = *(ushort *)(*(long *)(param_1 + 0x5b0) + 0x14);
          uVar7 = uVar2 >> (ulong)(uVar6 & 0x1f) & 3;
          iVar1 = 0;
          if (uVar7 + 1 < 3) {
            iVar1 = uVar7 + 1;
          }
          *(ushort *)(*(long *)(param_1 + 0x5b0) + 0x14) =
               (ushort)(iVar1 << (ulong)(uVar6 & 0x1f)) |
               uVar2 & ((ushort)(3 << (ulong)(uVar6 & 0x1f)) ^ 0xffff);
          FUN_01211e38(param_1,uVar8,param_4);
        }
        lVar4 = *(long *)(param_1 + 0x440);
        goto joined_r0x012117f8;
      }
    }
    FUN_0120e13c(param_1);
    *(undefined4 *)(param_1 + 0x5d8) = 8;
    FUN_0120ddac(param_1,1);
    FUN_0120e260(param_1);
    *(undefined4 *)(param_1 + 0x5ac) = 2;
  }
  else {
    if (**(int **)(param_1 + 0x5e0) == 7) {
      local_50 = 0x917389f633874ee9;
      pcStack_48 = "search_sub_list";
      local_40 = 0xf;
      local_38 = (long *)0x0;
      uVar5 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      uVar3 = FUN_0281a4fc(uVar5);
      *(undefined4 *)(param_1 + 0x5f4) = uVar3;
      uVar3 = FUN_0281a508(uVar5);
      *(undefined4 *)(param_1 + 0x5f8) = uVar3;
    }
    else if (**(int **)(param_1 + 0x5e0) == 6) {
      local_50 = 0x917389f633874ee9;
      pcStack_48 = "search_sub_list";
      local_40 = 0xf;
      local_38 = (long *)0x0;
      uVar5 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      uVar3 = FUN_0281a4fc(uVar5);
      *(undefined4 *)(param_1 + 0x5ec) = uVar3;
      uVar3 = FUN_0281a508(uVar5);
      *(undefined4 *)(param_1 + 0x5f0) = uVar3;
    }
    if (uVar2 == 0x2f && **(int **)(param_1 + 0x5e0) == 6) goto LAB_012116d4;
    lVar4 = FUN_0120e1b8();
    lVar4 = (long)*(short *)(lVar4 + 2);
    *(undefined **)(param_1 + 0x5e0) = &DAT_03a79cd4 + lVar4 * 0x10;
    uVar8 = *(uint *)(&DAT_03a79cd4 + lVar4 * 0x10);
    if (uVar8 == 7) {
      *(ushort *)(param_1 + 0x5e8) = uVar2;
      if (uVar7 == 0) {
        lVar4 = FUN_0120e1b8();
        lVar4 = (long)*(short *)(lVar4 + 2);
        *(undefined **)(param_1 + 0x5e0) = &DAT_03a79cd4 + lVar4 * 0x10;
        uVar8 = *(uint *)(&DAT_03a79cd4 + lVar4 * 0x10);
        goto LAB_01211818;
      }
      uVar8 = 7;
    }
    else {
LAB_01211818:
      if ((uVar8 | 2) == 2) {
        *(ushort *)(param_1 + 0x5ea) = uVar2;
        uVar8 = *(uint *)(&DAT_03a79cd4 + lVar4 * 0x10);
      }
    }
    FUN_0120e4bc(param_1,uVar8);
    FUN_0120ef44(param_1,0,0);
    FUN_0120f25c(param_1);
    lVar4 = *(long *)(param_1 + 0x440);
joined_r0x012117f8:
    if (lVar4 != 0) {
      FUN_02831440();
    }
  }
  return;
}


