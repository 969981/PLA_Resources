/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a88bc; name: FUN_008a88bc
 */


void FUN_008a88bc(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_40 = *(undefined4 *)(param_2 + 4);
  local_3c = *(undefined4 *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  local_34 = *(undefined4 *)(param_2 + 0x10);
  local_30 = *(undefined4 *)(param_2 + 0x14);
  local_2c = *(undefined1 *)(param_2 + 0x18);
  local_2b = *(undefined1 *)(param_2 + 0x19);
  local_2a = *(undefined1 *)(param_2 + 0x1a);
  local_29 = *(undefined1 *)(param_2 + 0x1b);
  local_28 = *(undefined1 *)(param_2 + 0x1c);
  local_27 = *(undefined1 *)(param_2 + 0x1e);
  FUN_0109c570(&local_18,&local_40);
  *param_3 = local_18;
  *(undefined1 *)(param_3 + 1) = local_14;
  *(undefined1 *)((long)param_3 + 5) = local_13;
  return;
}


