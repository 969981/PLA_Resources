/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303bac0; name: FUN_0303bac0
 */


void FUN_0303bac0(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint local_48;
  undefined2 uStack_44;
  ulong local_40;
  int local_38;
  
  uVar3 = param_2;
  if (-1 < (long)param_2) {
    uVar2 = FUN_032c0fa4(param_1 + 0x968,param_2,&local_48);
    uVar3 = (ulong)local_48;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0x7fffffff;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x488) + 8) + (long)(int)uVar3 * 0x68;
  if (*(int *)(lVar4 + 0x34) != param_3) {
    local_48 = 0x2000020;
    uStack_44 = 0x30;
    plVar1 = *(long **)(param_1 + 0x7f0);
    local_40 = param_2;
    local_38 = param_3;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
    }
    if (*(int *)(lVar4 + 0x34) != 0x7fffffff) {
      FUN_03003f7c(*(undefined8 *)(param_1 + 0x488),lVar4);
    }
    if (param_3 != 0x7fffffff) {
      FUN_03003e98(*(undefined8 *)(param_1 + 0x488),param_3,lVar4);
    }
  }
  return;
}


