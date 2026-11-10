/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f212d4; name: FUN_02f212d4
 */


undefined8 FUN_02f212d4(ulong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar2 = param_2 & 0xff;
  uVar3 = uVar2 + (param_2 & 2) * 2 & 0x1fc | param_2 & 1;
  uVar7 = 0x14;
  if (uVar2 < 4) {
    uVar7 = 0;
  }
  uVar4 = uVar3 << 4;
  iVar1 = (uVar4 | 0xf) + (uVar7 | (param_2 & 1) << 7 | -(param_2 >> 1 & 1) & 0x60);
  *(uint *)(param_1 + 0xe) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 3) = iVar1;
  *(uint *)((long)param_1 + 0x1c) = uVar2;
  pvVar5 = (void *)(**(code **)(PTR_PTR_042a9250 + 0x10))(&PTR_PTR_042a9250,iVar1);
  param_1[1] = (ulong)pvVar5;
  if (pvVar5 != (void *)0x0) {
    memset(pvVar5,0,(ulong)(uint)param_1[3]);
    uVar6 = param_1[1] + 0xf & 0xfffffffffffffff0;
    uVar8 = (ulong)(uVar3 << 2);
    *(undefined1 *)(param_1 + 9) = 0;
    *(int *)(param_1 + 8) = iVar1;
    *(uint *)((long)param_1 + 0x44) = uVar2;
    *param_1 = uVar6;
    *(uint *)(param_1 + 3) = uVar4;
    param_1[2] = uVar6 + uVar8 * 4;
    pvVar5 = (void *)(**(code **)(PTR_PTR_042a9250 + 0x10))(&PTR_PTR_042a9250,iVar1);
    param_1[6] = (ulong)pvVar5;
    if (pvVar5 != (void *)0x0) {
      memset(pvVar5,0,(ulong)(uint)param_1[8]);
      uVar6 = param_1[6] + 0xf & 0xfffffffffffffff0;
      param_1[5] = uVar6;
      *(uint *)(param_1 + 8) = uVar4;
      param_1[7] = uVar6 + uVar8 * 4;
      return 1;
    }
    if (param_1[1] != 0) {
      (**(code **)(PTR_PTR_042a9250 + 0x18))(&PTR_PTR_042a9250,param_1[1]);
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  if (param_1[6] != 0) {
    (**(code **)(PTR_PTR_042a9250 + 0x18))(&PTR_PTR_042a9250);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return 2;
}


