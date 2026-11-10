/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b4c78; name: FUN_007b4c78
 */


void FUN_007b4c78(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_40;
  long lStack_38;
  undefined8 local_30;
  
  if (*param_1 == *param_2) {
    lVar1 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar1;
    lVar1 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar1;
    return;
  }
  local_78 = 0;
  local_70 = (undefined4)param_1[1];
  FUN_007b2d70(&local_78);
  lStack_38 = param_1[2];
  FUN_007b17a0(&local_40,*(undefined8 *)(lStack_38 + 0x18));
  lStack_58 = lStack_38;
  local_60 = local_40;
  local_50 = local_30;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  FUN_007b4e34(&local_78,&local_60,&local_40);
                    /* try { // try from 007b4cec to 007b4d03 has its CatchHandler @ 007b4d4c */
  FUN_007b4d60(param_1,param_2);
  FUN_007b4d60(param_2,&local_78);
  FUN_007b1184(&local_78);
  return;
}


