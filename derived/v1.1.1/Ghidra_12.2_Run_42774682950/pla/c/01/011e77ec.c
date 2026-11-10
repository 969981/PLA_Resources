/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e77ec; name: FUN_011e77ec
 */


void FUN_011e77ec(long param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0x9013238925be94c4;
  *(char **)(param_2 + 4) = "work_blost_00";
  *(undefined8 *)(param_2 + 6) = 0xd;
  *(undefined8 *)(param_2 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_011e7868(param_1);
  FUN_011e7af4(param_1);
  FUN_00d2f768(param_1 + 0x180,0x80,0);
  return;
}


