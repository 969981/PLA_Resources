/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066230c; name: FUN_0066230c
 */


void FUN_0066230c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0066230c(param_1,*param_2);
  FUN_0066230c(param_1,param_2[1]);
  plVar1 = (long *)param_2[0x10];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 0xc) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
  plVar1 = (long *)param_2[10];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 6) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x006623a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x90,0x10);
  return;
}


