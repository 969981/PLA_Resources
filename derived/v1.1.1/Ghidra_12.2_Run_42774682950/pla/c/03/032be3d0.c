/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032be3d0; name: FUN_032be3d0
 */


void FUN_032be3d0(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  param_1[1] = param_1 + 3;
  param_1[2] = 0x8000000800000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
  puVar5 = (uint *)((long)param_1 + 0x14);
  uVar6 = *puVar5;
  if ((int)param_3 <= (int)uVar4) {
    uVar4 = param_3;
  }
  *(uint *)((long)param_1 + 0x5c) = uVar4;
  puVar3 = PTR_PTR_0434a080;
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar4) {
    uVar7 = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 2);
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4);
      uVar6 = *puVar5;
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar1 = uVar4;
    if ((int)uVar4 <= (int)uVar6) {
      uVar1 = uVar6;
    }
    uVar7 = FUN_032bd1d4(puVar3,uVar1,8,uVar7,uVar2,puVar5);
    param_1[1] = uVar7;
  }
  if (*(uint *)(param_1 + 2) != uVar4) {
    *(uint *)(param_1 + 2) = uVar4;
  }
  return;
}


