/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192b080; name: FUN_0192b080
 */


void FUN_0192b080(undefined1 *param_1,uint param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  undefined4 uStack_9;
  
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined4 *)(param_1 + (long)(int)param_2 * 0x14 + 0x48) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + (long)(int)param_2 * 0x14 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + (long)(int)param_2 * 0x14 + 0x40) = uVar2;
  if (*param_3 == '\0') {
    lVar6 = 0;
    iVar5 = -1;
    pbVar7 = param_1 + (long)(int)param_2 * 0x14 + 0x24;
    do {
      if ((int)param_2 + lVar6 < 1) goto LAB_0192b158;
      bVar4 = *pbVar7;
      lVar6 = lVar6 + -1;
      pbVar7 = pbVar7 + -0x14;
    } while ((bVar4 & 1) == 0);
    iVar5 = param_2 + (int)lVar6;
LAB_0192b158:
    if (param_2 < 4) {
      if ((param_1[0x88] & 1) != 0) {
        return;
      }
      if (param_2 < 3) {
        if ((param_1[0x74] & 1) != 0) {
          return;
        }
        if (param_2 < 2) {
          if ((param_1[0x60] & 1) != 0) {
            return;
          }
          if ((param_2 == 0) && ((param_1[0x4c] & 1) != 0)) {
            return;
          }
        }
      }
    }
    if (iVar5 < 0) {
      uStack_9._1_3_ = (undefined3)((uint)*(undefined4 *)(param_1 + 0xa4) >> 8);
      uStack_9._0_1_ = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x9d) >> 0x38);
      param_1[0x18] = 0;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x9c);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = param_4;
      *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_1 + 0x9d);
      *(undefined4 *)(param_1 + 0x20) = uStack_9;
      goto LAB_0192b10c;
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xac);
    uVar1 = *(undefined8 *)(param_1 + (long)iVar5 * 0x14 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + (long)iVar5 * 0x14 + 0x48);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + (long)iVar5 * 0x14 + 0x38);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  else {
    if (param_2 < 4) {
      if ((param_1[0x88] & 1) != 0) {
        return;
      }
      if (param_2 < 3) {
        if ((param_1[0x74] & 1) != 0) {
          return;
        }
        if (param_2 < 2) {
          if ((param_1[0x60] & 1) != 0) {
            return;
          }
          if ((param_2 == 0) && ((param_1[0x4c] & 1) != 0)) {
            return;
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xac);
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_4;
LAB_0192b10c:
  *(undefined4 *)(param_1 + 0x34) = param_5;
  *param_1 = 1;
  return;
}


