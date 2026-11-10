/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cfba0; name: FUN_032cfba0
 */


void FUN_032cfba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x032cfbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
  return;
}


