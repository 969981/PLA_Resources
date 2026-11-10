/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006372e8; name: FUN_006372e8
 */


void FUN_006372e8(long *param_1,long *param_2)

{
  long lVar1;
  long local_78;
  undefined4 local_70;
  long local_68;
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
  FUN_00634a20(&local_78);
  lStack_38 = param_1[2];
  FUN_00634138(&local_40,*(undefined8 *)(lStack_38 + 0x18));
  lStack_58 = lStack_38;
  local_60 = local_40;
  local_50 = local_30;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  FUN_00637454(&local_78,&local_60,&local_40);
  if (param_1 != param_2) {
                    /* try { // try from 00637368 to 006373f7 has its CatchHandler @ 00637440 */
    FUN_00633bd0(param_1);
    lStack_38 = param_2[2];
    FUN_00634138(&local_40,*(undefined8 *)(lStack_38 + 0x18));
    lStack_58 = lStack_38;
    local_60 = local_40;
    local_40 = 0;
    lStack_38 = 0;
    local_50 = local_30;
    local_30 = 0;
    FUN_00637454(param_1,&local_60,&local_40);
  }
  if (&local_78 != param_2) {
    FUN_00633bd0(param_2);
    lStack_38 = local_68;
    FUN_00634138(&local_40,*(undefined8 *)(local_68 + 0x18));
    lStack_58 = lStack_38;
    local_60 = local_40;
    local_40 = 0;
    lStack_38 = 0;
    local_50 = local_30;
    local_30 = 0;
    FUN_00637454(param_2,&local_60,&local_40);
  }
  FUN_00633b70(&local_78);
  return;
}


