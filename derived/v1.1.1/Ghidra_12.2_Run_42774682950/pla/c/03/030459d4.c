/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030459d4; name: FUN_030459d4
 */


void FUN_030459d4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong local_48;
  
  *param_1 = &PTR_LAB_042b26c8;
  param_1[1] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[2] = 1;
  param_1[3] = param_2;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  puVar1 = PTR_PTR_0434a080;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48 = 0x1000;
  uVar3 = (**(code **)(*(long *)puVar1 + 0x10))(puVar1,0x1000,&local_48);
  param_1[8] = uVar3;
  uVar5 = (undefined4)(local_48 >> 4);
  if (0x3ffffffef < local_48) {
    uVar5 = 0x3fffffff;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
  uVar2 = (**(code **)(*(long *)param_1[3] + 0xf0))();
  uVar6 = *(uint *)((long)param_1 + 0x5c);
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar2) {
    uVar3 = param_1[10];
    uVar5 = *(undefined4 *)(param_1 + 0xb);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar6 = *(uint *)((long)param_1 + 0x5c);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar4 = uVar2;
    if ((int)uVar2 <= (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar3 = FUN_032bd1d4(puVar1,uVar4,2,uVar3,uVar5,(uint *)((long)param_1 + 0x5c));
    param_1[10] = uVar3;
  }
  uVar6 = *(uint *)(param_1 + 0xb);
  if ((int)uVar6 < (int)uVar2) {
    *(uint *)(param_1 + 0xb) = uVar2;
    memset((void *)(param_1[10] + (long)(int)uVar6 * 2),0xff,(ulong)(uVar2 + ~uVar6) * 2 + 2);
  }
  else if ((int)uVar2 < (int)uVar6) {
    *(uint *)(param_1 + 0xb) = uVar2;
  }
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  return;
}


