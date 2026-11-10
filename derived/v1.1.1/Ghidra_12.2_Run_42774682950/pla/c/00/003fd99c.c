/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd99c; name: FUN_003fd99c
 */


void FUN_003fd99c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_18;
  
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_18 = *param_3;
  *param_3 = 0;
                    /* try { // try from 003fd9c4 to 003fd9cb has its CatchHandler @ 003fd9ec */
  FUN_003fd708(param_1,&local_18);
  lVar1 = local_18;
  local_18 = 0;
  if (lVar1 != 0) {
                    /* try { // try from 003fd9d8 to 003fd9db has its CatchHandler @ 003fd9e8 */
    FUN_003fef10();
  }
  return;
}


