/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b078c; name: FUN_031b078c
 */


void FUN_031b078c(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  
  *param_1 = &PTR_LAB_0430b5d8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  puVar5 = (uint *)((long)param_1 + 0x3c);
  puVar5[0] = 0x80000000;
  puVar5[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0x101000001030100;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x3c23d70a3f800000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 100000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xbf8000007f7fffee;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffffffffffff;
  uVar6 = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0xbf800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar2 = PTR_PTR_0434a080;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (0 < (int)param_2) {
    if ((int)param_2 < 0x40000000) {
      uVar6 = 0;
    }
    else {
      FUN_032bd0a8(param_2);
      uVar6 = (*puVar5 & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
    }
    uVar3 = param_2;
    if ((int)param_2 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    uVar4 = FUN_032bd1d4(puVar2,uVar3,0x10,0,0);
    uVar6 = *(uint *)(param_1 + 7);
    param_1[6] = uVar4;
  }
  if (uVar6 != param_2) {
    *(uint *)(param_1 + 7) = param_2;
  }
  uVar6 = *(uint *)((long)param_1 + 0x54);
  if ((int)(uVar6 & 0x3fffffff) < (int)param_2) {
    uVar4 = param_1[9];
    uVar1 = *(undefined4 *)(param_1 + 10);
    if (0x3fffffff < (int)param_2) {
      FUN_032bd0a8(param_2);
      uVar6 = *(uint *)((long)param_1 + 0x54);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar3 = param_2;
    if ((int)param_2 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    uVar4 = FUN_032bd1d4(puVar2,uVar3,4,uVar4,uVar1);
    param_1[9] = uVar4;
  }
  if (*(uint *)(param_1 + 10) != param_2) {
    *(uint *)(param_1 + 10) = param_2;
  }
  return;
}


