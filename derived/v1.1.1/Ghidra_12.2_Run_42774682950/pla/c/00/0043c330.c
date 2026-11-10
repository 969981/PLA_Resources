/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c330; name: FUN_0043c330
 */


undefined8 FUN_0043c330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if ((*(code **)(pbVar2 + 0x98) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    FUN_004014b0(0x10,0x127,0x42,"external/openssl/crypto/ec/ec_oct.c",0x18);
    return 0;
  }
  if ((pbVar2 != (byte *)*param_2) ||
     (((*(int *)(param_1 + 4) != 0 && (*(int *)(param_2 + 1) != 0)) &&
      (*(int *)(param_1 + 4) != *(int *)(param_2 + 1))))) {
    FUN_004014b0(0x10,0x127,0x65,"external/openssl/crypto/ec/ec_oct.c",0x1d);
    return 0;
  }
  if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0043c3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pbVar2 + 0x98))();
    return uVar1;
  }
  if (*(int *)(pbVar2 + 4) == 0x196) {
    uVar1 = FUN_0043d090();
    return uVar1;
  }
  uVar1 = FUN_0043c620();
  return uVar1;
}


