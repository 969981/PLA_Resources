/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9060; name: FUN_004c9060
 */


void FUN_004c9060(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (0x4000 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: len <= SSL3_RT_MAX_PLAIN_LENGTH",
                 "external/openssl/ssl/record/rec_layer_d1.c",0x313);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_004c90a0();
  return;
}


