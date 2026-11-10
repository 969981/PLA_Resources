/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00635a88; name: FUN_00635a88
 */


undefined8 FUN_00635a88(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_006342a8(&local_40,param_1[2],&uStack_18,0);
  if (local_40 == 0) {
    return 0;
  }
  local_48 = local_30;
  local_58 = local_40;
  uStack_50 = uStack_38;
  pbVar1 = *(byte **)(local_40 + 8);
  FUN_00633efc(&local_58);
  FUN_00633cac(param_1[2],&local_40);
  if ((pbVar1 != (byte *)0x0) && (*param_1 == 0)) {
    FUN_002ded3c(pbVar1 + 0x18);
    if ((*pbVar1 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar1);
  }
  return 1;
}


