/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00969634; name: FUN_00969634
 */


void FUN_00969634(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  if ((*(long *)(param_2 + 0x108) != 0) && (sVar3 = **(short **)(param_2 + 0x100), sVar3 != 0)) {
    iVar1 = *(int *)(param_2 + 0x118);
    FUN_00982d58(param_1);
    if (iVar1 < 0) {
      FUN_00923c30();
      uVar5 = FUN_0092877c();
    }
    else {
      uVar6 = FUN_00923c80();
      uVar5 = FUN_0092723c(uVar6,iVar1);
    }
    uVar2 = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(short *)(param_1 + 0x6c) = sVar3;
    *(undefined1 *)(param_1 + 0x6e) = uVar5;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    return;
  }
  if ((*(int *)(param_1 + 0x1ac) == 1) && (cVar4 = *(char *)(param_1 + 0x1ab), -1 < cVar4)) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    FUN_00982d58(param_1);
    uVar6 = FUN_00923c80();
    uVar5 = FUN_0092723c(uVar6,(int)cVar4);
    *(undefined1 *)(param_1 + 0x74) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}


