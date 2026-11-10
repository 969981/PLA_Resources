/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058cf30; name: FUN_0058cf30
 */


void FUN_0058cf30(long param_1,long *param_2,ulong param_3)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,0x27b,2,"assertion failed: %s","recv_bytes != nullptr && self != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar3 = (ulong *)(param_2 + 1);
  if (*param_2 == 0) {
    uVar2 = (ulong)(byte)*puVar3;
  }
  else {
    uVar2 = *puVar3;
  }
  if (uVar2 == param_3) {
    return;
  }
  if (*param_2 == 0) {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = *puVar3;
  }
  *(ulong *)(param_1 + 0x20) = uVar2 - param_3;
  __dest = (void *)FUN_002ebd80();
  *(void **)(param_1 + 0x18) = __dest;
  if (*param_2 == 0) {
    lVar1 = (long)param_2 + 9;
  }
  else {
    lVar1 = param_2[2];
  }
  memcpy(__dest,(void *)(lVar1 + param_3),*(size_t *)(param_1 + 0x20));
  return;
}


