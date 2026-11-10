/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318fc9c; name: FUN_0318fc9c
 */


long FUN_0318fc9c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x118);
  iVar1 = uVar8 + param_2;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff) < iVar1) {
    uVar6 = FUN_031921e8(PTR_PTR_0434a080,iVar1,*(undefined8 *)(param_1 + 0x110),uVar8,
                         param_1 + 0x11c);
    uVar8 = *(uint *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = uVar6;
  }
  if ((int)uVar8 < iVar1) {
    *(int *)(param_1 + 0x118) = iVar1;
    memset((void *)(*(long *)(param_1 + 0x110) + (long)(int)uVar8 * 2),0xff,
           (ulong)(iVar1 + ~uVar8) * 2 + 2);
  }
  else if (iVar1 < (int)uVar8) {
    *(int *)(param_1 + 0x118) = iVar1;
  }
  puVar5 = PTR_PTR_0434a080;
  iVar1 = *(int *)(param_1 + 0x158);
  uVar3 = iVar1 + *(int *)(param_1 + 0x60) * param_2;
  uVar8 = *(uint *)(param_1 + 0x15c);
  if ((int)(uVar8 & 0x3fffffff) < (int)uVar3) {
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar8 = *(uint *)(param_1 + 0x15c);
    }
    uVar8 = (uVar8 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar4 = uVar3;
    if ((int)uVar3 <= (int)uVar8) {
      uVar4 = uVar8;
    }
    uVar6 = FUN_032bd1d4(puVar5,uVar4,4,uVar6,iVar1,(uint *)(param_1 + 0x15c));
    *(undefined8 *)(param_1 + 0x150) = uVar6;
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar1 = iVar2 + param_2;
  *(uint *)(param_1 + 0x158) = uVar3;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < iVar1) {
    nn::os::LockMutex(*(MutexType **)(param_1 + 0x1a8));
    iVar1 = *(int *)(param_1 + 0xe8);
    lVar7 = *(long *)(param_1 + 0xe0);
    param_2 = iVar1 + param_2;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < param_2) {
      lVar7 = FUN_0318a8d4(puVar5,param_2,lVar7,iVar1,(uint *)(param_1 + 0xec));
      *(long *)(param_1 + 0xe0) = lVar7;
    }
    lVar7 = lVar7 + (long)iVar1 * 0x14;
    *(int *)(param_1 + 0xe8) = param_2;
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x1a8));
  }
  else {
    *(int *)(param_1 + 0xe8) = iVar1;
    lVar7 = *(long *)(param_1 + 0xe0) + (long)iVar2 * 0x14;
  }
  return lVar7;
}


