/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04654; name: FUN_02f04654
 */


void FUN_02f04654(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    lVar4 = 0;
    do {
      lVar5 = lVar4;
      lVar4 = lVar2;
      if (lVar4 == 0) {
        return;
      }
      lVar2 = *(long *)(lVar4 + 0x10);
    } while (*(int *)(lVar4 + 0x38) != param_2);
    if (*plVar3 != lVar4) {
      plVar3 = (long *)(lVar5 + 0x10);
    }
    *plVar3 = *(long *)(lVar4 + 0x10);
    FUN_02f05fc8(DAT_0440a138,param_2,lVar4);
    iVar1 = *(int *)(lVar4 + 0x30);
    while (iVar1 != 0) {
      FUN_02f04728(lVar4,**(undefined4 **)(lVar4 + 0x28));
      iVar1 = *(int *)(lVar4 + 0x30);
    }
    FUN_02f0571c(lVar4);
    FUN_02f59e60(2,lVar4);
    if ((param_3 & 1) != 0) {
      FUN_02f04094(param_1);
      return;
    }
  }
  return;
}


