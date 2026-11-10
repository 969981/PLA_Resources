/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879a90; name: realloc
 */


void * realloc(void *__ptr,size_t __size)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  uVar3 = FUN_0094cba4(plVar5 + 1);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x02879b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar4 = (void *)(**(code **)(*plVar5 + 0xd0))(plVar5,__ptr,__size);
  return pvVar4;
}


