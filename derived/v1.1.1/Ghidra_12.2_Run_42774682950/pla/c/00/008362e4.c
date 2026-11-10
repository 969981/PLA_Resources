/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008362e4; name: FUN_008362e4
 */


byte * FUN_008362e4(undefined8 param_1,byte *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  long local_40 [4];
  
  FUN_007f0fc8(local_40,param_3);
  bVar1 = FUN_007e362c(local_40);
  *param_2 = bVar1 & 1;
  uVar2 = FUN_007e362c(local_40);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_007e4430(local_40);
    if ((uVar2 & 1) == 0) {
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      local_44 = 0;
      (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 5,&local_44,2);
      uVar3 = 7;
      param_2 = param_2 + 7;
    }
    else {
      local_44 = 0;
      (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 1,&local_44,6);
      uVar3 = 7;
      param_2 = param_2 + 7;
    }
  }
  else {
    local_44 = 0;
    (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 1,&local_44,0x12);
    uVar3 = 0x13;
    param_2 = param_2 + 0x13;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar3;
  }
  FUN_007e34a4(local_40);
  return param_2;
}


