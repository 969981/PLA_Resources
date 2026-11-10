/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a52390; name: FUN_02a52390
 */


void FUN_02a52390(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  
  FUN_02a51968(param_1,param_3,param_4 & 1);
  *(undefined8 *)(param_1 + 0x230) = *param_2;
  *(undefined8 *)(param_1 + 0x238) = param_2[1];
  *(undefined8 *)(param_1 + 0x240) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x248);
  *(long **)(param_1 + 0x248) = plVar2;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a523f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


