/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00619620; name: FUN_00619620
 */


void FUN_00619620(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*param_2 + 400);
                    /* try { // try from 00619640 to 0061964b has its CatchHandler @ 00619668 */
  FUN_00619a50(&local_30,&local_18,param_2,param_3);
  FUN_0061966c(local_30);
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


