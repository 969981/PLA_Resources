/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04390; name: FUN_02f04390
 */


undefined8 FUN_02f04390(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02f043e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return uVar2;
}


