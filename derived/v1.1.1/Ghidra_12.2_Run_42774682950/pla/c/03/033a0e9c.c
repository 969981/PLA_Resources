/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a0e9c; name: FUN_033a0e9c
 */


void FUN_033a0e9c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_0339f7f0();
  if (param_1 == 0) {
    return;
  }
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x033a0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,0xd8);
  return;
}


