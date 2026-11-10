/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bd5e0; name: FUN_031bd5e0
 */


void FUN_031bd5e0(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_0430b668;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar6 = (uint)param_2;
  param_1[0xb] = 100000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0x7f7fffee3f800000;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar4 = PTR_PTR_0434a080;
  if (0 < (int)uVar6) {
    puVar1 = (uint *)((long)param_1 + 0x3c);
    uVar5 = FUN_0315ac2c(PTR_PTR_0434a080,param_2,0,0,(long)param_1 + 0x54);
    param_1[9] = uVar5;
    if (*(uint *)(param_1 + 10) != uVar6) {
      *(uint *)(param_1 + 10) = uVar6;
    }
    uVar7 = *puVar1;
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar6) {
      uVar5 = param_1[6];
      uVar3 = *(undefined4 *)(param_1 + 7);
      if (0x3fffffff < (int)uVar6) {
        FUN_032bd0a8(param_2 & 0xffffffff);
        uVar7 = *puVar1;
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar2 = uVar6;
      if ((int)uVar6 <= (int)uVar7) {
        uVar2 = uVar7;
      }
      uVar5 = FUN_032bd1d4(puVar4,uVar2,0x10,uVar5,uVar3,puVar1);
      param_1[6] = uVar5;
    }
    if ((*(int *)(param_1 + 7) < (int)uVar6) || ((int)uVar6 < *(int *)(param_1 + 7))) {
      *(uint *)(param_1 + 7) = uVar6;
    }
  }
  return;
}


