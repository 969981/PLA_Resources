/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535d6c; name: FUN_00535d6c
 */


void FUN_00535d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_003d6900(0);
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  *(undefined8 *)(lVar1 + 0x60) = param_3;
  plVar2 = (long *)FUN_003d7710(*(undefined8 *)(param_1 + 0x18),0);
                    /* WARNING: Could not recover jumptable at 0x00535db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,lVar1);
  return;
}


