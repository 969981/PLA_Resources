/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879b10; name: aligned_alloc
 */


void aligned_alloc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar3 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02879b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_1);
  return;
}


