/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01288cb0; name: FUN_01288cb0
 */


void FUN_01288cb0(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0xc0f9a466021362a2;
  *(char **)(param_2 + 4) = "work_ibox_top_00";
  *(undefined8 *)(param_2 + 6) = 0x10;
  *(undefined8 *)(param_2 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_01288d1c(param_1);
  FUN_01289090(param_1);
  return;
}


