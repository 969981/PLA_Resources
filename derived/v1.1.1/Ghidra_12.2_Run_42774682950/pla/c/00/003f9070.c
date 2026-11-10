/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9070; name: FUN_003f9070
 */


void FUN_003f9070(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  char *__s1;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long local_100;
  long local_f0;
  int local_e4;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *plStack_c0;
  ulong local_b8;
  byte local_b0 [16];
  undefined8 local_a0;
  long local_80;
  long local_78;
  undefined1 auStack_68 [8];
  
  if (param_2[1] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0x109,2,"assertion failed: %s","peer->property_count >= 1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[6] = 0;
    puVar4 = PTR_DAT_04374128;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *puVar6 = puVar4;
    puVar6[1] = 1;
  }
  *param_1 = puVar6;
                    /* try { // try from 003f90d8 to 003f90eb has its CatchHandler @ 003f9660 */
  FUN_003f5670(puVar6,"transport_security_type",param_3);
  if (param_2[1] == 0) {
    return;
  }
  lVar12 = 0;
  uVar11 = 0;
  bVar2 = false;
  local_e4 = 0;
  local_100 = 0;
  local_f0 = 0;
  puVar10 = (undefined8 *)*param_2;
  __s1 = (char *)*puVar10;
  pcVar3 = (char *)0x0;
  do {
    pcVar9 = pcVar3;
    if (__s1 != (char *)0x0) {
      pcVar9 = "x509_subject_alternative_name";
      iVar5 = strcmp(__s1,"x509_subject_common_name");
      if (iVar5 == 0) {
        pcVar9 = "x509_common_name";
        if (pcVar3 != (char *)0x0) {
          pcVar9 = pcVar3;
        }
                    /* try { // try from 003f9164 to 003f92e7 has its CatchHandler @ 003f9668 */
        FUN_003f5560(puVar6,"x509_common_name",*(undefined8 *)((long)puVar10 + lVar12 + 8),
                     *(undefined8 *)((long)puVar10 + lVar12 + 0x10));
      }
      else {
        iVar5 = strcmp(__s1,"x509_subject_alternative_name");
        if (iVar5 == 0) {
          FUN_003f5560(puVar6,"x509_subject_alternative_name",
                       *(undefined8 *)((long)puVar10 + lVar12 + 8),
                       *(undefined8 *)((long)puVar10 + lVar12 + 0x10));
        }
        else {
          iVar5 = strcmp(__s1,"x509_pem_cert");
          if (iVar5 == 0) {
            FUN_003f5560(puVar6,"x509_pem_cert",*(undefined8 *)((long)puVar10 + lVar12 + 8),
                         *(undefined8 *)((long)puVar10 + lVar12 + 0x10));
            pcVar9 = pcVar3;
          }
          else {
            iVar5 = strcmp(__s1,"x509_pem_cert_chain");
            if (iVar5 == 0) {
              FUN_003f5560(puVar6,"x509_pem_cert_chain",*(undefined8 *)((long)puVar10 + lVar12 + 8),
                           *(undefined8 *)((long)puVar10 + lVar12 + 0x10));
              pcVar9 = pcVar3;
            }
            else {
              iVar5 = strcmp(__s1,"ssl_session_reused");
              if (iVar5 == 0) {
                FUN_003f5560(puVar6,"ssl_session_reused",*(undefined8 *)((long)puVar10 + lVar12 + 8)
                             ,*(undefined8 *)((long)puVar10 + lVar12 + 0x10));
                pcVar9 = pcVar3;
              }
              else {
                iVar5 = strcmp(__s1,"security_level");
                if (iVar5 == 0) {
                  FUN_003f5560(puVar6,"security_level",*(undefined8 *)((long)puVar10 + lVar12 + 8),
                               *(undefined8 *)((long)puVar10 + lVar12 + 0x10));
                  pcVar9 = pcVar3;
                }
                else {
                  iVar5 = strcmp(__s1,"x509_uri");
                  if (iVar5 == 0) {
                    uVar7 = *(ulong *)((long)puVar10 + lVar12 + 0x10);
                    if ((long)uVar7 < 0) {
                    /* try { // try from 003f9530 to 003f954f has its CatchHandler @ 003f95f0 */
                    /* WARNING: Subroutine does not return */
                      __assert_fail("false && \"len <= kMaxSize\"",
                                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                    "operator()");
                    }
                    local_e4 = local_e4 + 1;
                    pcVar9 = pcVar3;
                    if ((8 < uVar7) &&
                       (plVar8 = *(long **)((long)puVar10 + lVar12 + 8),
                       *plVar8 == 0x2f3a656666697073 && (char)plVar8[1] == '/')) {
                      if (uVar7 < 0x801) {
                        local_d8 = 0;
                        uStack_d0 = 0;
                        local_c8 = 0;
                    /* try { // try from 003f9398 to 003f93a7 has its CatchHandler @ 003f9634 */
                        plStack_c0 = plVar8;
                        local_b8 = uVar7;
                        FUN_003f9970(local_b0,&local_d8,0x2f);
                    /* try { // try from 003f93a8 to 003f93b7 has its CatchHandler @ 003f960c */
                        FUN_003f9b78(&local_80,auStack_68,local_b0);
                        if ((local_b0[0] & 1) != 0) {
                          FUN_002e2ea0(PTR_LAB_04373088,local_a0);
                        }
                        if ((local_d8 & 1) != 0) {
                          FUN_002e2ea0(PTR_LAB_04373088,local_c8);
                        }
                        if (((ulong)(local_78 - local_80 >> 4) < 4) ||
                           (*(long *)(local_80 + 0x38) == 0)) {
                          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                                       ,0xf9,1,"Invalid SPIFFE ID: workload id is empty.");
LAB_003f944c:
                          bVar1 = false;
                        }
                        else {
                          if (0xff < *(ulong *)(local_80 + 0x28)) {
                    /* try { // try from 003f9410 to 003f944b has its CatchHandler @ 003f95f4 */
                            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                                         ,0xfd,1,
                                         "Invalid SPIFFE ID: domain longer than 255 characters.");
                            goto LAB_003f944c;
                          }
                          bVar1 = true;
                        }
                        if (local_80 != 0) {
                          local_78 = local_80;
                          FUN_002e2ea0(PTR_LAB_04373088);
                        }
                        if (bVar1) {
                          bVar2 = true;
                          local_f0 = *(long *)((long)puVar10 + lVar12 + 8);
                          local_100 = *(long *)((long)puVar10 + lVar12 + 0x10);
                        }
                      }
                      else {
                    /* try { // try from 003f936c to 003f9387 has its CatchHandler @ 003f9608 */
                        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                                     ,0xf4,1,"Invalid SPIFFE ID: ID longer than 2048 bytes.");
                      }
                    }
                  }
                  else {
                    pcVar9 = pcVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
    lVar12 = lVar12 + 0x18;
    if ((ulong)param_2[1] <= uVar11) {
                    /* try { // try from 003f94a4 to 003f950f has its CatchHandler @ 003f965c */
      if ((pcVar9 != (char *)0x0) && (iVar5 = FUN_003f51a0(puVar6,pcVar9), iVar5 != 1)) {
                    /* try { // try from 003f9578 to 003f95ef has its CatchHandler @ 003f965c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x13e,2,"assertion failed: %s",
                     "grpc_auth_context_set_peer_identity_property_name( ctx.get(), peer_identity_property_name) == 1"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (!bVar2) {
        return;
      }
      if (local_e4 != 1) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x149,1,"Invalid SPIFFE ID: multiple URI SANs.");
        return;
      }
      if (local_100 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x143,2,"assertion failed: %s","spiffe_length > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (local_f0 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x144,2,"assertion failed: %s","spiffe_data != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_003f5560(puVar6,"peer_spiffe_id",local_f0,local_100);
      return;
    }
    puVar10 = (undefined8 *)*param_2;
    __s1 = *(char **)((long)puVar10 + lVar12);
    pcVar3 = pcVar9;
  } while( true );
}


