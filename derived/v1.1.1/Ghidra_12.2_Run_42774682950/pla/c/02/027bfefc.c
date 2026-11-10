/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bfefc; name: FUN_027bfefc
 */


void FUN_027bfefc(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = FUN_02a43a8c();
    if (((uVar1 & 1) == 0) && (plVar2 = *(long **)(param_1 + 0x98), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x027bff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
      return;
    }
  }
  return;
}


