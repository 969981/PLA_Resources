/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848164; name: FUN_00848164
 */


int FUN_00848164(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_150;
  undefined4 local_148;
  char acStack_140 [256];
  
  memset(acStack_140,0,0xff);
  if ((long *)param_1[3] == param_1 + 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    plVar5 = (long *)(param_1[3] - (long)*(int *)((long)param_1 + 0x24));
    do {
      cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (cVar1 == -1) {
        local_148 = 0;
        local_150 = 1;
        (**(code **)(*param_1 + 0x10))(param_1,&local_150);
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
        if (acStack_140[uVar2 & 0xff] == '\0') {
          iVar4 = iVar4 + 1;
          uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
          acStack_140[uVar2 & 0xff] = '\x01';
        }
      }
      plVar3 = *(long **)((long)plVar5 + (long)*(int *)((long)param_1 + 0x24) + 8);
      plVar5 = (long *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x24));
    } while (plVar3 != param_1 + 2);
  }
  return iVar4;
}


