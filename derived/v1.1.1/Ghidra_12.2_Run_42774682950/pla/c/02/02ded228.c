/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded228; name: FUN_02ded228
 */


int FUN_02ded228(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_70 [2];
  undefined8 local_68;
  undefined1 auStack_60 [8];
  short *local_58;
  
  if (param_2 != 0) {
    local_70[0] = 0;
    local_68 = 0;
    iVar3 = FUN_02ead870(param_2,param_3,auStack_60,param_1 + 0x40,(uint *)(param_1 + 0x34),
                         (uint *)(param_1 + 0x38),(int *)(param_1 + 0x2c),param_1 + 0x30,local_70,0,
                         0);
    if (iVar3 != 1) {
      return iVar3;
    }
    if (*local_58 != -1) {
      return 7;
    }
    uVar1 = *(undefined4 *)(local_58 + 10);
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      sVar2 = local_58[1];
      *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(local_58 + 2);
      *(undefined4 *)(lVar5 + 0x244) = uVar1;
      *(undefined1 *)(lVar5 + 0x24a) = 5;
      *(ushort *)(lVar5 + 0x248) = sVar2 << 8 | 0x20;
    }
    if (local_70[0] != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_68;
    }
    param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x30);
    *(long *)(param_1 + 0x110) = param_2;
    uVar7 = *(uint *)(local_58 + 0xc);
    *(uint *)(param_1 + 0x24) = uVar7;
    uVar8 = *(undefined8 *)(local_58 + 0x12);
    uVar9 = *(undefined8 *)(local_58 + 0x16);
    uVar10 = *(undefined8 *)(local_58 + 0x1a);
    *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(local_58 + 0x1d);
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    *(undefined8 *)(param_1 + 0xe0) = uVar10;
    *(undefined8 *)(param_1 + 0xd0) = uVar8;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(local_58 + 0xe);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(local_58 + 2);
    uVar6 = *(uint *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    if (uVar6 == 0) {
      uVar6 = uVar7 - 1;
      *(uint *)(param_1 + 0x38) = uVar6;
    }
    if (uVar7 <= uVar6) {
      return 2;
    }
    if (uVar6 < *(uint *)(param_1 + 0x34)) {
      return 2;
    }
    if (*(int *)(param_1 + 0x2c) + *(uint *)(param_1 + 0x30) == param_3) {
      *(long *)(param_1 + 0x108) = param_2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x2a0);
      }
      *(undefined2 *)(param_1 + 0x54) = uVar4;
      iVar3 = FUN_02ded460(param_1);
      if (iVar3 != 1) {
        return iVar3;
      }
      if ((*(long *)(param_1 + 0x18) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x18) + 0x2a5) >> 6 & 1) == 0)) {
        uVar7 = 0;
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_02ded548(param_1);
        lVar5 = *(long *)(param_1 + 0x18);
        if ((*(byte *)(lVar5 + 0x2a5) >> 6 & 1) == 0) {
          uVar7 = *(uint *)(lVar5 + 0x29c);
        }
        else {
          uVar7 = 0;
        }
        *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar7;
        *(undefined4 *)(lVar5 + 0x29c) = 0;
        uVar7 = uVar7 & 0xffff;
        *(uint *)(lVar5 + 0x2a3) = *(uint *)(lVar5 + 0x2a3) & 0xfe3fffff;
      }
      lVar5 = 0xde;
      if (*(short *)(param_1 + 0x54) != 1) {
        lVar5 = 0xd2;
      }
      FUN_02dee070(param_1 + 0x68,uVar7,*(undefined2 *)(param_1 + lVar5));
      *(undefined4 *)(param_1 + 0x60) = 3;
      return iVar3;
    }
  }
  return 2;
}


