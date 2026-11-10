/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064bc70; name: FUN_0064bc70
 */


void FUN_0064bc70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)*param_2 + 400);
                    /* try { // try from 0064bc90 to 0064bc9b has its CatchHandler @ 0064bcb0 */
  FUN_0064d698(&local_30,&local_18,param_2);
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


