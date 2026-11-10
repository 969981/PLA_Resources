/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275c520; name: FUN_0275c520
 */


void FUN_0275c520(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_18;
  
  local_18 = param_2;
  if ((param_2 != 0) && (uVar3 = *(ulong *)(param_1 + 0xa0), uVar3 < *(ulong *)(param_1 + 0xa8))) {
    plVar4 = *(long **)(param_1 + 0x98);
    plVar2 = plVar4;
    if ((uVar3 != 0) && (*plVar4 != param_2)) {
      lVar6 = uVar3 * 8;
      plVar5 = plVar4;
      do {
        lVar6 = lVar6 + -8;
        plVar2 = plVar4 + uVar3;
        if (lVar6 == 0) break;
        plVar2 = plVar5 + 1;
        plVar1 = plVar5 + 1;
        plVar5 = plVar2;
      } while (*plVar1 != param_2);
    }
    if (plVar4 + uVar3 == plVar2) {
      FUN_0275cd88(param_1 + 0x78,&local_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


