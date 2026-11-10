/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb500; name: FUN_004cb500
 */


undefined8 FUN_004cb500(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL","external/openssl/ssl/packet.c",0x116);
  }
  puVar1 = (undefined8 *)FUN_004002a0(0x28,"external/openssl/ssl/packet.c",0x119);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(0x14,0x27a,0x41,"external/openssl/ssl/packet.c",0x11a);
    return 0;
  }
  *puVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  puVar1[2] = 0;
  puVar1[3] = uVar2;
  puVar1[1] = 0;
  return 1;
}


