/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879b70; name: operator.new
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar4 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar4 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02879bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,param_1,8);
  return pvVar3;
}


