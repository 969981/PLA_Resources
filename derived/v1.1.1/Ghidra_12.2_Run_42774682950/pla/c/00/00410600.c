/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410600; name: FUN_00410600
 */


undefined4 FUN_00410600(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    FUN_004014b0(3,0x91,0x77,"external/openssl/crypto/bn/bn_shift.c",0x59);
    return 0;
  }
  uVar1 = FUN_00410660();
  FUN_0040c8f0(param_1);
  return uVar1;
}


