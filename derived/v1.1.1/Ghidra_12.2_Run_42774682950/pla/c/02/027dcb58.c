/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dcb58; name: FUN_027dcb58
 */


void FUN_027dcb58(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    FUN_02a439f4(*(undefined8 *)(param_2 + 0x58));
  }
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if ((plVar2 == (long *)0x0) || (uVar1 = FUN_02a43a5c(plVar2[0xb]), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027dcbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return;
}


