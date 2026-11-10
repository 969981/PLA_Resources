/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005387e0; name: FUN_005387e0
 */


void FUN_005387e0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *local_28;
  
  FUN_002ef750(param_1 + 0x20);
                    /* try { // try from 0053880c to 0053884b has its CatchHandler @ 00538868 */
  lVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar1 != 0) {
    FUN_002fe0e0(*(undefined8 *)(param_1 + 0x18));
  }
  if (param_2 == 0) {
    local_28 = param_3;
    FUN_00539c40(param_1 + 0xc0,&local_28);
  }
  else {
    FUN_005367ec(param_1 + 0xd8,param_2,param_3);
  }
                    /* try { // try from 0053884c to 00538853 has its CatchHandler @ 00538864 */
  FUN_002ef790(param_1 + 0x20);
  return;
}


