/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0323c720; name: FUN_0323c720
 */


void FUN_0323c720(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_0323c4fc();
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar1 = 0x1a0;
  if (lVar4 != 0xffffffff) {
    lVar1 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0323c78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar1);
  return;
}


