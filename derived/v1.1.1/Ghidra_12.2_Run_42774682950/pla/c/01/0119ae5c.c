/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119ae5c; name: FUN_0119ae5c
 */


void FUN_0119ae5c(long param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0x3727e18bcc5ae53e;
  *(char **)(param_2 + 4) = "work_bag_top_00";
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_0119af04(param_1);
  FUN_0119b2ac(param_1);
  FUN_0119f520(param_1);
  FUN_0119b40c(param_1);
  FUN_0119b610(param_1,0);
  FUN_00d2f768(param_1 + 0x180,0x80,0x81);
  FUN_00d5fcfc(param_1,0x80,0x83);
  return;
}


