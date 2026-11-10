/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03391f08; name: FUN_03391f08
 */


void FUN_03391f08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_38;
  
  puVar3 = PTR_PTR_0434a080;
  uVar5 = *(uint *)((long)param_1 + 0xc);
  uVar7 = (ulong)((long)param_3 - (long)param_2) >> 3;
  uVar6 = (uint)uVar7;
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar6) {
    uVar4 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar7 & 0xffffffff);
      uVar5 = *(uint *)((long)param_1 + 0xc);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar1 = uVar6;
    if ((int)uVar6 <= (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar4 = FUN_032bd1d4(puVar3,uVar1,8,uVar4,uVar2);
    *param_1 = uVar4;
  }
  if (*(int *)(param_1 + 3) * 2 < (int)((uVar6 + 1) * 3)) {
    FUN_032c2334(param_1 + 2);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    local_38 = FUN_032c4990(*param_2,param_4);
    FUN_03396100(param_1,&local_38);
  }
  return;
}


