/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01f14; name: FUN_02f01f14
 */


undefined8 FUN_02f01f14(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  int local_40 [2];
  int local_38;
  
  if ((*(uint *)(param_1 + 0x28) <= (uint)param_2) ||
     (iVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))
                        (*(long **)(param_1 + 0xa0),param_2,local_40), iVar3 != 1)) {
    return 2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x38);
  uVar4 = FUN_02f03890(puVar1,local_38 + *(int *)(param_1 + 0xa8),param_3);
  if (((uint)uVar4 | 2) != 3) {
    return uVar4;
  }
  if ((uint)uVar4 == 1) {
    if ((*(byte *)(param_1 + 0x7a) & 0x38) == 0x10) {
      *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xdf | 0x18;
    }
    else {
      (**(code **)(*(long *)*puVar1 + 0x90))();
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar2 = (uint *)(*(long *)(param_1 + 0x18) + 0x2a3);
  *(byte *)(param_1 + 0x20) = (byte)(*puVar2 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  *(uint *)(*(long *)(param_1 + 0x18) + 0x29c) = (uint)param_2 - local_40[0];
  *puVar2 = *puVar2 & 0xfe3fffff;
  *(int *)(param_1 + 0x24) = local_40[0];
  *(short *)(param_1 + 0x34) = (short)param_3;
  if ((*(byte *)(param_1 + 0xb8) >> 4 & 1) == 0) {
    if ((param_3 & 0xffff) == 1) {
      iVar3 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x30) + 1;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x58))
                      (*(long **)(param_1 + 0xa0),puVar1,local_40,iVar3 - local_40[0],param_3);
    if (iVar3 != 1) {
      return 2;
    }
    if ((*(ushort *)(param_1 + 0xb0) & 0x11) == 1) {
      FUN_02f02094(param_1);
    }
  }
  return 1;
}


