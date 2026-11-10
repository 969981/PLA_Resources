/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f035e0; name: FUN_02f035e0
 */


undefined8 FUN_02f035e0(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  int local_40 [2];
  undefined4 local_38;
  
  uVar3 = *(uint *)(param_1 + 6);
  uVar1 = *(int *)((long)param_1 + 0x2c) + param_3;
  param_1[3] = param_2 + (ulong)uVar3;
  *(uint *)(param_1 + 4) = param_3 - uVar3;
  *(uint *)(param_1 + 5) = uVar3 + *(int *)((long)param_1 + 0x2c);
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  bVar4 = *(byte *)((long)param_1 + 0x42);
  lVar2 = 0x3c;
  if (*(short *)(param_1 + 8) == 1) {
    lVar2 = 0x34;
  }
  if (uVar1 < *(uint *)((long)param_1 + lVar2)) {
    if ((bVar4 & 0xf8) != 0x10) {
      *(undefined4 *)(param_1 + 6) = 0;
LAB_02f0364c:
      if ((bVar4 & 0xc0) == 0x40) {
        *(byte *)((long)param_1 + 0x42) = bVar4 & 0x3f | 0x80;
      }
      return 1;
    }
    iVar6 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,uVar1,0,local_40);
    if (iVar6 != 1) {
      return 2;
    }
    *(int *)((long)param_1 + 0x2c) = local_40[0];
    *(uint *)(param_1 + 6) = uVar1 - local_40[0];
  }
  else {
    *(uint *)(param_1 + 4) = ((param_3 - uVar3) - uVar1) + *(uint *)((long)param_1 + lVar2);
    if (*(short *)(param_1 + 8) == 1) {
      *(byte *)((long)param_1 + 0x42) = bVar4 | 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 7);
      iVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,iVar6,0,local_40);
      if (iVar5 != 1) {
        return 2;
      }
      *(int *)((long)param_1 + 0x2c) = local_40[0];
      *(int *)(param_1 + 6) = iVar6 - local_40[0];
      sVar8 = *(short *)(param_1 + 8);
      if (sVar8 != 0) {
        sVar8 = sVar8 + -1;
      }
      *(short *)(param_1 + 8) = sVar8;
      *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) | 4;
      if (sVar8 == 1) {
        (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,local_40);
        local_38 = 0;
        (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,local_40);
      }
    }
    if ((bVar4 & 0xf8) != 0x10) {
      bVar4 = *(byte *)((long)param_1 + 0x42);
      goto LAB_02f0364c;
    }
  }
  uVar7 = (**(code **)(*(long *)*param_1 + 0x68))();
  if ((int)uVar7 == 1) {
    *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 0x3f | 0x40;
    return uVar7;
  }
  return 2;
}


