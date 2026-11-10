/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373a40; name: FUN_03373a40
 */


void FUN_03373a40(undefined8 *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long lStack_38;
  long local_28;
  
  uVar1 = (long)param_2[1] >> 0x3f;
  local_40 = (*param_2 ^ uVar1) - uVar1;
  lStack_38 = ((uVar1 ^ param_2[1]) - uVar1) - (ulong)((*param_2 ^ uVar1) < uVar1);
  local_28 = -param_3;
  if (-1 < param_3) {
    local_28 = param_3;
  }
  FUN_03372c20(&local_40,&local_28,&local_60);
  if (-(int)((long)param_2[1] >> 0x3f) == -(int)(param_3 >> 0x3f)) {
    param_1[2] = local_50;
    param_1[3] = uStack_48;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  else {
    FUN_0337380c(param_1,&local_60);
  }
  return;
}


