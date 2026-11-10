/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057e320; name: FUN_0057e320
 */


long * FUN_0057e320(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x1a4,1,"grpc_compute_engine_credentials_create(reserved=%p)",param_1);
  }
  if (param_1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x1a5,2,"assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0xd0);
  if (plVar2 != (long *)0x0) {
    plVar2[2] = 0;
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[2] = 1;
    plVar2[3] = (long)"Oauth2";
    *(undefined4 *)(plVar2 + 4) = 2;
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[0x18] = 0;
    plVar2[0x17] = 0;
    plVar2[0x16] = 0;
    plVar2[0x15] = 0;
    plVar2[0x14] = 0;
    plVar2[0x13] = 0;
    plVar2[0x12] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    puVar1 = PTR_DAT_04374e08 + 0x10;
    plVar2[0x19] = 0;
    *plVar2 = (long)puVar1;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    auVar3 = FUN_002eefe0(0);
    *(undefined1 (*) [16])(plVar2 + 10) = auVar3;
    *(undefined1 *)(plVar2 + 0xc) = 0;
    plVar2[0xd] = 0;
    FUN_002fe040();
    auVar3 = FUN_003d6b30();
    *(undefined1 (*) [16])(plVar2 + 0xf) = auVar3;
    FUN_002ef6d0(plVar2 + 5);
    FUN_00578e10(plVar2 + 0xe);
    *plVar2 = (long)&PTR_FUN_04189bb8;
  }
  return plVar2;
}


