/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047d660; name: FUN_0047d660
 */


void FUN_0047d660(long param_1,undefined8 param_2)

{
  int local_60 [2];
  long local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 **local_18;
  
  local_38 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x60) != 0) {
    local_18 = (undefined1 **)0x0;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0047d6c4;
    if (0 < *(int *)(param_1 + 0x58)) {
      uStack_50 = 8;
      local_18 = &local_48;
      local_60[0] = *(int *)(param_1 + 0x58);
      local_58 = *(long *)(param_1 + 0x50);
      local_48 = (undefined1 *)local_60;
      lStack_40 = *(long *)(param_1 + 0x60);
      goto LAB_0047d6c4;
    }
  }
  local_18 = (undefined1 **)0x0;
LAB_0047d6c4:
  FUN_0041f020(&local_38,param_2,&DAT_0416cd90);
  return;
}


