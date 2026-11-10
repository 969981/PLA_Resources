/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134ed10; name: FUN_0134ed10
 */


void FUN_0134ed10(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_04206af0;
  param_1[9] = &PTR_LAB_04206b28;
  FUN_0134ed70();
  plVar2 = (long *)param_1[0xc];
  if ((plVar2 == (long *)0x0) || (uVar1 = FUN_02a43a5c(plVar2[0xb]), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0134ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return;
}


