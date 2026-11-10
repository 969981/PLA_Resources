/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f03890; name: FUN_02f03890
 */


int FUN_02f03890(undefined8 *param_1,uint param_2,short param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if ((((param_1[3] != 0) && (uVar1 = *(uint *)(param_1 + 5), uVar1 <= param_2)) &&
      (param_2 < *(int *)(param_1 + 4) + uVar1)) &&
     (((*(byte *)((long)param_1 + 0x42) >> 2 & 1) == 0 && (*(short *)(param_1 + 8) == param_3)))) {
    param_1[3] = param_1[3] + (ulong)(param_2 - uVar1);
    *(uint *)(param_1 + 5) = param_2;
    iVar2 = 3;
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (param_2 - uVar1);
    goto LAB_02f03920;
  }
  if (param_1[2] == 0) {
LAB_02f038dc:
    iVar2 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,param_2,0,&local_40);
    if (iVar2 != 1) {
      return 2;
    }
    *(int *)((long)param_1 + 0x2c) = local_40;
    *(uint *)(param_1 + 6) = param_2 - local_40;
    bVar4 = *(byte *)((long)param_1 + 0x42);
  }
  else {
    bVar4 = *(byte *)((long)param_1 + 0x42);
    if (*(uint *)((long)param_1 + 0x24) <= param_2) {
      if ((bVar4 & 0x38) != 0) {
        *(byte *)((long)param_1 + 0x42) = bVar4 & 0xdf | 0x18;
      }
      goto LAB_02f038dc;
    }
    bVar4 = bVar4 & 7 | 8;
    *(byte *)((long)param_1 + 0x42) = bVar4;
    *(uint *)((long)param_1 + 0x2c) = param_2;
  }
  *(byte *)((long)param_1 + 0x42) = bVar4 & 0xfa;
  iVar2 = 1;
LAB_02f03920:
  *(short *)(param_1 + 8) = param_3;
  (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,&local_40);
  if (*(short *)(param_1 + 8) == 1) {
    local_3c = 0;
    uStack_38 = 0;
  }
  else {
    local_3c = *(undefined4 *)(param_1 + 7);
    uStack_38 = *(undefined4 *)((long)param_1 + 0x3c);
  }
  (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,&local_40);
  iVar3 = (**(code **)(*(long *)*param_1 + 0x68))();
  if (iVar3 != 1) {
    iVar2 = iVar3;
  }
  return iVar2;
}


