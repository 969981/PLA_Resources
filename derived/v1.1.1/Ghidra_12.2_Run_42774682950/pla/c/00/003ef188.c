/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ef188; name: FUN_003ef188
 */


void FUN_003ef188(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0;
  uStack_44 = 0;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
                    /* try { // try from 003ef1b0 to 003ef1bb has its CatchHandler @ 003ef1e0 */
  local_48 = param_3;
  FUN_003ef204(&local_48,param_2);
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  return;
}


