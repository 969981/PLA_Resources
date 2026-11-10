/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb1f0; name: FUN_004cb1f0
 */


undefined8 FUN_004cb1f0(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: buf != NULL","external/openssl/ssl/packet.c",0x89);
  }
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  lVar1 = FUN_004002a0(0x28,"external/openssl/ssl/packet.c",0x61);
  param_1[5] = lVar1;
  if (lVar1 == 0) {
    FUN_004014b0(0x14,0x279,0x41,"external/openssl/ssl/packet.c",0x62);
    return 0;
  }
  return 1;
}


