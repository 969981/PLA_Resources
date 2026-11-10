/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192b210; name: FUN_0192b210
 */


void FUN_0192b210(undefined1 *param_1,uint param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  lVar7 = (long)(int)param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + lVar7 * 0x20 + 0x60) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + lVar7 * 0x20 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + lVar7 * 0x20 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + lVar7 * 0x20 + 0x58) = uVar2;
  if (*param_3 == '\0') {
    lVar8 = 0;
    iVar6 = -1;
    pbVar9 = param_1 + lVar7 * 0x20 + 0x30;
    do {
      if (lVar7 + lVar8 < 1) goto LAB_0192b2e4;
      bVar5 = *pbVar9;
      lVar8 = lVar8 + -1;
      pbVar9 = pbVar9 + -0x20;
    } while ((bVar5 & 1) == 0);
    iVar6 = param_2 + (int)lVar8;
LAB_0192b2e4:
    if (param_2 < 4) {
      if ((param_1[0xd0] & 1) != 0) {
        return;
      }
      if (param_2 < 3) {
        if ((param_1[0xb0] & 1) != 0) {
          return;
        }
        if (param_2 < 2) {
          if ((param_1[0x90] & 1) != 0) {
            return;
          }
          if ((param_2 == 0) && ((param_1[0x70] & 1) != 0)) {
            return;
          }
        }
      }
    }
    if (iVar6 < 0) {
      param_1[0x24] = 0;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x28) = 0;
      param_1[0x27] = param_1[0xf3];
      *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)(param_1 + 0xf1);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = param_4;
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x108);
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x108);
      uVar1 = *(undefined8 *)(param_1 + (long)iVar6 * 0x20 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + (long)iVar6 * 0x20 + 0x58);
      uVar2 = *(undefined8 *)(param_1 + (long)iVar6 * 0x20 + 0x60);
      uVar4 = *(undefined8 *)(param_1 + (long)iVar6 * 0x20 + 0x68);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = param_4;
      *(undefined8 *)(param_1 + 0x24) = uVar1;
      *(undefined8 *)(param_1 + 0x3c) = uVar4;
      *(undefined8 *)(param_1 + 0x34) = uVar2;
      *(undefined8 *)(param_1 + 0x2c) = uVar3;
    }
  }
  else {
    if (param_2 < 4) {
      if ((param_1[0xd0] & 1) != 0) {
        return;
      }
      if (param_2 < 3) {
        if ((param_1[0xb0] & 1) != 0) {
          return;
        }
        if (param_2 < 2) {
          if ((param_1[0x90] & 1) != 0) {
            return;
          }
          if ((param_2 == 0) && ((param_1[0x70] & 1) != 0)) {
            return;
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x108);
    uVar1 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = param_4;
    *(undefined8 *)(param_1 + 0x24) = uVar1;
    *(undefined8 *)(param_1 + 0x3c) = uVar4;
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  *param_1 = 1;
  return;
}


