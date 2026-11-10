/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fe8d0; name: FUN_003fe8d0
 */


void FUN_003fe8d0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *param_2;
    *param_2 = 0;
    *puVar3 = &PTR_LAB_04157630;
                    /* try { // try from 003fe914 to 003fe91f has its CatchHandler @ 003fea04 */
    iVar1 = FUN_004e0ec0(lVar4,0);
    if (iVar1 < 1) {
                    /* try { // try from 003fe998 to 003fe9bf has its CatchHandler @ 003fea04 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_openssl.cc"
                   ,0x2a,2,"assertion failed: %s","size > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 003fe930 to 003fe93b has its CatchHandler @ 003fe9f8 */
    FUN_002f27f0(&local_50,(long)iVar1);
    local_58 = (long)&uStack_48 + 1;
    if (local_50 != 0) {
      local_58 = local_40;
    }
                    /* try { // try from 003fe954 to 003fe95f has its CatchHandler @ 003fe9ec */
    iVar2 = FUN_004e0ec0(lVar4,&local_58);
    if (iVar1 != iVar2) {
                    /* try { // try from 003fe9c0 to 003fe9e7 has its CatchHandler @ 003fe9ec */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_openssl.cc"
                   ,0x2e,2,"assertion failed: %s","size == second_size");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3[4] = uStack_38;
    puVar3[3] = local_40;
    puVar3[2] = uStack_48;
    puVar3[1] = local_50;
    if (lVar4 != 0) {
                    /* try { // try from 003fe978 to 003fe97f has its CatchHandler @ 003fe9e8 */
      FUN_003fef10(lVar4);
    }
  }
  *param_1 = puVar3;
  return;
}


