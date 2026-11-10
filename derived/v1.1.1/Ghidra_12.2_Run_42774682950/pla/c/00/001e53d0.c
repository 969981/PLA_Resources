/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e53d0; name: FUN_001e53d0
 */


void FUN_001e53d0(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  long lStack_20;
  long local_18;
  
  lStack_20 = 0;
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  uStack_30 = param_4[3];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_001e543c(&local_28,&LAB_001e6494,param_3,&local_48);
  if ((iVar1 != -1) && (local_18 != 0)) {
    if (local_18 == lStack_20) {
      local_28[-1] = 0;
    }
    else {
      *local_28 = 0;
    }
  }
  return;
}


