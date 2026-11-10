/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00480180; name: FUN_00480180
 */


undefined8 FUN_00480180(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 local_18;
  
  lVar1 = FUN_0043c550();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0040c710(local_18,lVar1,in_x3);
  FUN_00400420(local_18,"external/openssl/crypto/ec/ec_print.c",0x1d);
  return uVar2;
}


