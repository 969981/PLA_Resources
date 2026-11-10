/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02682eb8; name: FUN_02682eb8
 */


void FUN_02682eb8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
  (**(code **)(*plVar1 + 0x18))();
  FUN_01a5eaa4(param_1,param_2);
  plVar1 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
  if (*plVar1 == 0x275dbcecced052c0) {
    *(undefined1 *)(param_1 + 0xc69) = 0;
    FUN_026818a0(param_1);
  }
  plVar1 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
  if (*plVar1 == -0x6b73db40c8f78d86) {
    FUN_026818a0(param_1);
    return;
  }
  return;
}


