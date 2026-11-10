/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147d44; name: FUN_03147d44
 */


void FUN_03147d44(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_38;
  
  plVar4 = *(long **)(param_1 + 0x70);
  iVar3 = *(int *)((long)plVar4 + 0x14);
  while (iVar3 != 0) {
    iVar2 = *(int *)((long)plVar4 + 0xc);
    local_38 = *(undefined8 *)(*plVar4 + (long)iVar2 * 8);
    iVar3 = 0;
    if (iVar2 + 1 != (int)plVar4[1]) {
      iVar3 = iVar2 + 1;
    }
    *(int *)((long)plVar4 + 0xc) = iVar3;
    *(int *)((long)plVar4 + 0x14) = *(int *)((long)plVar4 + 0x14) + -1;
    iVar3 = *(int *)(param_1 + 0x38);
    if ((0 < iVar3) &&
       (lVar5 = (long)iVar3 + -1, plVar4 = *(long **)(*(long *)(param_1 + 0x30) + lVar5 * 8),
       (**(code **)(*plVar4 + 0x28))(plVar4,local_38,param_2), 0 < lVar5)) {
      lVar5 = (long)iVar3 + -2;
      do {
        plVar4 = *(long **)(*(long *)(param_1 + 0x30) + lVar5 * 8);
        (**(code **)(*plVar4 + 0x28))(plVar4,local_38,param_2);
        bVar1 = 0 < lVar5;
        lVar5 = lVar5 + -1;
      } while (bVar1);
    }
    (**(code **)(*param_2 + 0xd8))(param_2,&local_38,1,0);
    plVar4 = *(long **)(param_1 + 0x70);
    iVar3 = *(int *)((long)plVar4 + 0x14);
  }
  return;
}


