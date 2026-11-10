/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011da1f0; name: FUN_011da1f0
 */


void FUN_011da1f0(undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = *(long **)(*(long *)(param_3 + 0x2c8) + 0x148);
  lVar3 = *(long *)(*(long *)(param_3 + 0x2c8) + 0x150);
  if ((lVar3 == 0) || (*plVar2 == 0x1ac9ca5b52f44ccc)) {
    plVar5 = plVar2;
  }
  else {
    lVar4 = lVar3 * 0x30;
    plVar6 = plVar2;
    do {
      lVar4 = lVar4 + -0x30;
      if (lVar4 == 0) goto LAB_011da288;
      plVar1 = plVar6 + 6;
      plVar5 = plVar6 + 6;
      plVar6 = plVar6 + 6;
    } while (*plVar1 != 0x1ac9ca5b52f44ccc);
  }
  if ((plVar5 != plVar2 + lVar3 * 6) && (lVar3 = plVar5[4], lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x30) = param_1;
    *(undefined4 *)(lVar3 + 0x34) = param_2;
    *(undefined4 *)(lVar3 + 0x38) = 0;
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
    return;
  }
LAB_011da288:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


