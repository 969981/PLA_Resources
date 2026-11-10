/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128eb98; name: FUN_0128eb98
 */


void FUN_0128eb98(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 int param_5)

{
  undefined **local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  
  if (param_5 == 0) {
    local_80 = &PTR_LAB_041eb350;
    local_78 = 1;
    local_60 = 0xffffffff00000000;
    local_54 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_58 = 3;
    FUN_00d5e078(param_1,param_2,param_3,&local_80);
    FUN_00d5d5c8(param_1,param_2,param_3);
    FUN_00d5d6bc(param_1,param_2,param_3);
  }
  else {
    FUN_00d5e078(param_1,param_2,param_3);
  }
  FUN_00d57744(param_1,param_2,param_3,1);
  return;
}


