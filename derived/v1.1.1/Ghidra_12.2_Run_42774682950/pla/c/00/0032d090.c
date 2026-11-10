/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d090; name: FUN_0032d090
 */


void FUN_0032d090(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
                    /* try { // try from 0032d0b8 to 0032d107 has its CatchHandler @ 0032d140 */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(*param_2 + 0x40))(param_2,plVar1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)*plVar1)(plVar1);
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


