/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f047d4; name: FUN_02f047d4
 */


void FUN_02f047d4(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar2 != (long *)0x0) && (lVar3 = *plVar2, lVar3 != 0)) {
    do {
      if (*(long *)(lVar3 + 0x10) == 0) {
        *plVar2 = 0;
      }
      else {
        *plVar2 = *(long *)(lVar3 + 0x10);
      }
      FUN_02f05fc8(DAT_0440a138,*(undefined4 *)(lVar3 + 0x38),lVar3);
      iVar1 = *(int *)(lVar3 + 0x30);
      while (iVar1 != 0) {
        FUN_02f04728(lVar3,**(undefined4 **)(lVar3 + 0x28));
        iVar1 = *(int *)(lVar3 + 0x30);
      }
      FUN_02f0571c(lVar3);
      FUN_02f59e60(2,lVar3);
      lVar3 = *plVar2;
    } while (lVar3 != 0);
    if ((param_2 & 1) != 0) {
      FUN_02f04094(param_1);
      return;
    }
  }
  return;
}


