/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf5b0; name: FUN_032cf5b0
 */


void FUN_032cf5b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x032cf5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,0);
  return;
}


