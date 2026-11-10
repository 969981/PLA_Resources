/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c0f00; name: FUN_032c0f00
 */


void FUN_032c0f00(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
    lVar2 = *param_1;
  }
  else {
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  *(undefined8 *)(lVar2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x032c0f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))
            (plVar1,lVar2 - *(int *)(lVar2 + -4),(long)*(int *)(lVar2 + -8) + 0x10);
  return;
}


