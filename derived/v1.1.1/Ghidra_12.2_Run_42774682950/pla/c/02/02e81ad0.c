/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e81ad0; name: FUN_02e81ad0
 */


void FUN_02e81ad0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  long *local_28;
  
  if (param_1 != (long *)0x0) {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    uVar1 = 5;
    local_48 = param_2;
    local_40 = param_6;
    uStack_3c = param_4;
    local_38 = param_5;
    local_28 = param_1;
    switch(param_3) {
    case 0:
      FUN_02e83118(DAT_0440a128,param_1,param_2,param_6);
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 1;
      FUN_02e8352c(DAT_0440a128,param_1,param_2,1,param_6);
      break;
    case 2:
      FUN_02e83a14(DAT_0440a128,param_1,param_2,0,param_6);
      uVar1 = 2;
      break;
    case 3:
      FUN_02e83e20(DAT_0440a128,param_1,param_2,param_6);
      uVar1 = 3;
      break;
    case 4:
      break;
    default:
      goto switchD_02e81b2c_default;
    }
    local_50[0] = uVar1;
    (**(code **)(*param_1 + 0x98))(param_1,local_50);
  }
switchD_02e81b2c_default:
  return;
}


