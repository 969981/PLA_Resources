/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265090; name: FUN_00265090
 */


undefined8 FUN_00265090(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_40;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  lVar5 = *(long *)(param_1[1] + 0x238);
  if (*(uint *)(param_1 + 2) == 3) {
    lVar3 = 0;
    lVar4 = *(long *)(lVar5 + 0x300);
  }
  else {
    lVar3 = *(long *)(lVar5 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
    lVar4 = *(long *)(lVar5 + 0x300);
  }
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x150);
    uStack_38 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x198);
    local_40 = *(long *)(*(long *)(lVar5 + 0x20) + 400) + *(long *)(lVar5 + 0x38);
    if (*(int *)(lVar3 + 0x14c) != -1) {
      FUN_00878324(uVar2,*(int *)(lVar3 + 0x14c),0,&local_40,*(undefined8 *)(lVar5 + 0x308));
    }
    if (iVar1 != -1) {
      FUN_00878324(uVar2,iVar1,4,&local_40,*(undefined8 *)(lVar5 + 0x308));
    }
    uVar2 = 1;
  }
  return uVar2;
}


