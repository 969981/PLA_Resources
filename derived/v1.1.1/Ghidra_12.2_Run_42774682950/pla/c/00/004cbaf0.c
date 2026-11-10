/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cbaf0; name: caseD_42
 */


undefined8 switchD_004bf1a8::caseD_42(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: written != NULL","external/openssl/ssl/packet.c",0x187);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return 1;
}


