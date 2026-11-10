/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cbb30; name: FUN_004cbb30
 */


undefined8 FUN_004cbb30(long param_1,long *param_2)

{
  if ((param_2 == (long *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL && len != NULL",
                 "external/openssl/ssl/packet.c",0x192);
  }
  *param_2 = *(long *)(param_1 + 0x18) - *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  return 1;
}


