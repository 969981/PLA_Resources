/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047e590; name: FUN_0047e590
 */


undefined8 FUN_0047e590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  long local_30;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_30 = 0;
  uVar1 = FUN_00452120(0,&local_18,&local_28,&local_38,param_2);
  if ((int)uVar1 != 0) {
    FUN_00446af0(0,&local_24,&local_20,local_38);
    local_30 = FUN_0047f9a0(local_24,local_20);
    if (local_30 == 0) {
      FUN_004014b0(0x10,0xd7,0x10,"external/openssl/crypto/ec/ec_ameth.c",0x97);
      return 0;
    }
    lVar2 = FUN_0043bfc0(&local_30,&local_18,(long)local_28);
    if (lVar2 == 0) {
      FUN_004014b0(0x10,0xd7,0x8e,"external/openssl/crypto/ec/ec_ameth.c",0x9d);
      FUN_0042cd80(local_30);
      return 0;
    }
    FUN_004234e0(param_1,0x198,local_30);
    uVar1 = 1;
  }
  return uVar1;
}


