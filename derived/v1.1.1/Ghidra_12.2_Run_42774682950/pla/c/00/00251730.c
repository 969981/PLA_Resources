/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251730; name: FUN_00251730
 */


void FUN_00251730(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar2 = FUN_0028ee24(param_2);
  FUN_0028ee70(param_1,uVar2);
  uVar2 = FUN_0028ee2c(param_2);
  FUN_0028ee78(param_1,uVar2);
  uVar1 = FUN_0028ee34(param_2);
  FUN_0028ee80(param_1,uVar1);
  uVar1 = FUN_0028ee4c(param_2);
  FUN_0028ee88(param_1,uVar1);
  FUN_0028ee24(param_2);
  pvVar3 = (void *)FUN_00232654();
  pvVar4 = (void *)FUN_0028edf0(param_2);
  sVar5 = FUN_0028ee24(param_2);
  memcpy(pvVar3,pvVar4,sVar5);
  FUN_0028ee60(param_1,pvVar3);
  FUN_0028ee2c(param_2);
  pvVar3 = (void *)FUN_00232654();
  pvVar4 = (void *)FUN_0028ede8(param_2);
  sVar5 = FUN_0028ee2c(param_2);
  memcpy(pvVar3,pvVar4,sVar5);
  FUN_0028ee68(param_1,pvVar3);
  return;
}


