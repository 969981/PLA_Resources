/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015bb70; name: FUN_0015bb70
 */


int FUN_0015bb70(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,undefined4 param_5
                )

{
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  local_58 = param_1;
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_5;
  local_3c = (*param_3)(param_1,&DAT_038e4810,4);
  local_38._0_1_ = 0x53;
  if (local_3c == 0) {
    local_3c = (*param_3)(param_1,&local_38,1,param_4);
    local_38 = (ulong)local_38._1_7_ << 8;
    if ((local_3c != 0) || (local_3c = (*local_50)(local_58,&local_38,1,local_48), local_3c != 0))
    goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&DAT_039b0693,6,local_48);
    local_38._0_1_ = 4;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,1,local_48);
    local_38._0_1_ = 8;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,1,local_48);
    local_38._0_1_ = 4;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,1,local_48);
    local_38._0_1_ = 8;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,1,local_48);
    local_38 = CONCAT71(local_38._1_7_,8);
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,1,local_48);
    local_38 = 0x5678;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,8,local_48);
    local_38 = 0x4077280000000000;
    if (local_3c != 0) goto LAB_0015bc38;
    local_3c = (*local_50)(local_58,&local_38,8,local_48);
    local_38 = CONCAT71(local_38._1_7_,(char)*(undefined4 *)(param_2 + 0x10));
    if (local_3c != 0) goto LAB_0015bc5c;
    local_3c = 0;
  }
  else {
LAB_0015bc38:
    local_38 = CONCAT71(0x40772800000000,(char)*(undefined4 *)(param_2 + 0x10));
    if (local_3c != 0) goto LAB_0015bc5c;
  }
  local_3c = (*local_50)(local_58,&local_38,1,local_48);
LAB_0015bc5c:
  FUN_0015bdb0(param_2,0,&local_58);
  return local_3c;
}


