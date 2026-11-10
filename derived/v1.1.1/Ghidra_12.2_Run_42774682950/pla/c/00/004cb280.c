/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb280; name: FUN_004cb280
 */


undefined8 FUN_004cb280(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL","external/openssl/ssl/packet.c",0x9b);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20) = param_2;
  return 1;
}


