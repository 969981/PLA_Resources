/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001faaa4; name: FUN_001faaa4
 */


void FUN_001faaa4(long param_1,int param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar6 + 0x3ff) >> 2 & 1) == 0) && (*(int *)(lVar6 + 0x230) != 0x14)) {
    if (param_2 == -1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(lVar6 + (long)param_2 * 4 + 600);
    }
    *(undefined4 *)(lVar6 + 0x450) = uVar5;
    if (param_5 == -1) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(lVar6 + (long)param_5 * 4 + 600);
    }
  }
  else {
    iVar2 = param_2;
    if ((param_2 != -1) || (iVar2 = param_5, param_5 != -1)) {
      iVar2 = *(int *)(lVar6 + (long)iVar2 * 4 + 600);
    }
    *(int *)(lVar6 + 0x450) = iVar2;
  }
  *(int *)(lVar6 + 0x454) = iVar2;
  uVar3 = (uint)*(ushort *)(param_1 + 0x660);
  uVar1 = (param_4 & 1) << 7;
  uVar4 = uVar3 & 0xffffff00 | uVar3 & 0x7f | uVar1;
  *(short *)(param_1 + 0x660) = (short)uVar4;
  *(long *)(param_1 + 0xf0) = param_3;
  if ((param_4 & 1) == 0) {
    uVar4 = uVar3 & 0xffffff00 | uVar3 & 0x7e | uVar1;
    *(short *)(param_1 + 0x660) = (short)uVar4;
    if (0 < param_3) {
      FUN_001f2d7c(param_1,param_3);
      uVar4 = (uint)*(ushort *)(param_1 + 0x660);
    }
  }
  if (((uVar4 >> 7 & 1) != 0) || ((*(byte *)(param_1 + 0xf43) & 1) == 0)) {
    if (param_2 != -1) {
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 1;
    }
    if (param_5 != -1) {
      if ((*(byte *)(param_1 + 0x15a5) & 1) != 0) {
        if (((*(byte *)(*(long *)(lVar6 + 0x420) + 0x80) & 3) != 0) &&
           (*(int *)(*(long *)(param_1 + 0x1e8) + 0x208) == 2)) {
          *(undefined4 *)(param_1 + 0x198) = 1;
          auVar7 = FUN_001f8fb4();
          *(undefined1 (*) [16])(param_1 + 0x188) = auVar7;
          FUN_001e6b54(param_1,*(undefined8 *)(param_1 + 0xee0),0);
          return;
        }
        *(undefined4 *)(param_1 + 0x198) = 2;
      }
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
    }
  }
  return;
}


