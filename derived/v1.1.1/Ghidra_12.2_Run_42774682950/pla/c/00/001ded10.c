/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ded10; name: FUN_001ded10
 */


undefined4 FUN_001ded10(long *param_1,long param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_160 [68];
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  puVar1 = local_160;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  lVar6 = *param_1;
  *puVar1 = uVar4;
  uVar2 = *(undefined4 *)((long)param_1 + 0xbc);
  puVar1[1] = uVar2;
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    uVar7 = 0x11;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 0xc);
  }
  puVar1[2] = uVar7;
  uVar5 = *(uint *)(param_2 + 0x10);
  if (0xff < uVar5) {
    uVar5 = 0x100;
  }
  puVar1[3] = uVar5;
  memcpy(puVar1 + 4,*(void **)(param_2 + 0x20),(ulong)uVar5);
  if (*(long *)(lVar6 + 0x758) == 0) {
    iVar3 = nnsocketSocket(uVar4,uVar2,uVar7);
    *param_4 = iVar3;
  }
  else {
    FUN_001e95f0(lVar6,1);
    iVar3 = (**(code **)(lVar6 + 0x758))(*(undefined8 *)(lVar6 + 0x760),0,puVar1);
    *param_4 = iVar3;
    FUN_001e95f0(lVar6,0);
    iVar3 = *param_4;
  }
  uVar4 = 7;
  if (iVar3 != -1) {
    uVar4 = 0;
  }
  return uVar4;
}


