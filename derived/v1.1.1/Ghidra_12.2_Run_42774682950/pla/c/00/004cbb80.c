/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cbb80; name: FUN_004cbb80
 */


void FUN_004cbb80(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_00400420(plVar1,"external/openssl/ssl/packet.c",0x1a5);
    plVar1 = (long *)lVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


