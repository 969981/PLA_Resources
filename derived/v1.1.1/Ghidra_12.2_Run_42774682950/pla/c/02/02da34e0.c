/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da34e0; name: FUN_02da34e0
 */


undefined8 FUN_02da34e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (((*(long *)(param_1 + 0xa8) == 0) || (*(int *)(*(long *)(param_1 + 0xa8) + 0xc) == 0)) ||
     (plVar2 = *(long **)(param_1 + 0xb8), plVar2 == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02da3510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x6c,param_2);
  return uVar1;
}


