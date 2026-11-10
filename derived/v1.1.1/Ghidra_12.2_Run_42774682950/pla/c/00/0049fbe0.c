/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049fbe0; name: FUN_0049fbe0
 */


undefined8
FUN_0049fbe0(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_60 [2];
  undefined8 local_58;
  long local_50;
  undefined4 *local_48;
  long *local_40;
  undefined4 *local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = &local_50;
  local_50 = FUN_00407cb0(param_3);
  if (local_50 == 0) {
    uVar3 = 0x75;
    uVar4 = 0x2c;
  }
  else {
    lVar2 = FUN_00408eb0();
    if (lVar2 != 0) {
      local_48 = local_60;
      local_60[0] = 5;
      local_38 = local_78;
      local_58 = 0;
      local_78[0] = param_5;
      local_70 = param_4;
      iVar1 = FUN_00466e40(&local_40,&local_28);
      if (iVar1 < 0) {
        return 0;
      }
      *param_1 = local_28;
      *param_2 = iVar1;
      return 1;
    }
    uVar3 = 0x74;
    uVar4 = 0x31;
  }
  FUN_004014b0(4,0x92,uVar3,"external/openssl/crypto/rsa/rsa_sign.c",uVar4);
  return 0;
}


