/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134ed70; name: FUN_0134ed70
 */


void FUN_0134ed70(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((plVar2 == (long *)0x0) || (uVar1 = FUN_02a43a5c(plVar2[0xb]), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0134edb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return;
}


