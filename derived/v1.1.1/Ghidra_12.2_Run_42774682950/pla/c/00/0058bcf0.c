/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058bcf0; name: FUN_0058bcf0
 */


void FUN_0058bcf0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  char *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  long *local_90 [4];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (param_2 == (long *)0x0) {
    pcVar9 = "Invalid arguments to grpc_alts_auth_context_from_tsi_peer()";
    uVar8 = 0xb7;
  }
  else {
    lVar5 = FUN_003f4c80(param_2,"certificate_type");
    if ((lVar5 == 0) ||
       (iVar4 = strncmp(*(char **)(lVar5 + 8),"ALTS",*(size_t *)(lVar5 + 0x10)), iVar4 != 0)) {
      pcVar9 = "Invalid or missing certificate type property.";
      uVar8 = 0xc1;
    }
    else {
      lVar5 = FUN_003f4c80(param_2,"security_level");
      if (lVar5 == 0) {
        pcVar9 = "Missing security level property.";
        uVar8 = 200;
      }
      else {
        lVar5 = FUN_003f4c80(param_2,"rpc_versions");
        if (lVar5 == 0) {
          pcVar9 = "Missing rpc protocol versions property.";
          uVar8 = 0xcf;
        }
        else {
          FUN_0058b2e0(auStack_60,2,1);
          FUN_0058b330(auStack_60,2,1);
          FUN_002f2f40(local_90,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
          uVar6 = FUN_0058b490(local_90,auStack_70);
          if ((local_90[0] != (long *)0x0) &&
             (plVar10 = (long *)*local_90[0], plVar10 != (long *)0x0)) {
            plVar11 = plVar10 + 1;
            lVar5 = *plVar10;
            do {
              lVar12 = *plVar11;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = lVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                           "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar10,lVar12);
            }
            if (lVar12 < 1) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                           "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (lVar12 == 1) {
              (*(code *)local_90[0][3])(local_90[0][4]);
            }
          }
          if ((uVar6 & 1) == 0) {
            pcVar9 = "Invalid peer rpc protocol versions.";
            uVar8 = 0xda;
          }
          else {
            uVar6 = FUN_0058b690(auStack_60,auStack_70,0);
            if ((uVar6 & 1) == 0) {
              pcVar9 = "Mismatch of local and peer rpc protocol versions.";
              uVar8 = 0xe1;
            }
            else {
              lVar5 = FUN_003f4c80(param_2,"alts_context");
              if (lVar5 != 0) {
                puVar7 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x38);
                if (puVar7 != (undefined8 *)0x0) {
                  puVar7[6] = 0;
                  puVar3 = PTR_DAT_04374128;
                  puVar7[3] = 0;
                  puVar7[2] = 0;
                  puVar7[5] = 0;
                  puVar7[4] = 0;
                  *puVar7 = puVar3;
                  puVar7[1] = 1;
                }
                local_98 = puVar7;
                    /* try { // try from 0058becc to 0058bee3 has its CatchHandler @ 0058c13c */
                FUN_003f5670(puVar7,"transport_security_type",&DAT_038c9c0b);
                if (param_2[1] != 0) {
                  lVar5 = 0;
                  uVar6 = 0;
                  do {
                    lVar12 = *param_2;
                    pcVar9 = *(char **)(lVar12 + lVar5);
                    iVar4 = strcmp(pcVar9,"service_account");
                    if (iVar4 == 0) {
                    /* try { // try from 0058bf6c to 0058bfd7 has its CatchHandler @ 0058c15c */
                      FUN_003f5560(local_98,"service_account",*(undefined8 *)(lVar12 + lVar5 + 8),
                                   *(undefined8 *)(lVar12 + lVar5 + 0x10));
                      iVar4 = FUN_003f51a0(local_98,"service_account");
                      if (iVar4 != 1) {
                    /* try { // try from 0058c0c8 to 0058c0ef has its CatchHandler @ 0058c118 */
                        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/alts/alts_security_connector.cc"
                                     ,0xf9,2,"assertion failed: %s",
                                     "grpc_auth_context_set_peer_identity_property_name( ctx.get(), TSI_ALTS_SERVICE_ACCOUNT_PEER_PROPERTY) == 1"
                                    );
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      pcVar9 = *(char **)(lVar12 + lVar5);
                      iVar4 = strcmp(pcVar9,"alts_context");
                      if (iVar4 != 0) goto LAB_0058bf4c;
LAB_0058bf9c:
                      FUN_003f5560(local_98,"alts_context",*(undefined8 *)(lVar12 + lVar5 + 8),
                                   *(undefined8 *)(lVar12 + lVar5 + 0x10));
                      iVar4 = strcmp(*(char **)(lVar12 + lVar5),"security_level");
                    }
                    else {
                      iVar4 = strcmp(pcVar9,"alts_context");
                      if (iVar4 == 0) goto LAB_0058bf9c;
LAB_0058bf4c:
                      iVar4 = strcmp(pcVar9,"security_level");
                    }
                    if (iVar4 == 0) {
                      FUN_003f5560(local_98,"security_level",*(undefined8 *)(lVar12 + lVar5 + 8),
                                   *(undefined8 *)(lVar12 + lVar5 + 0x10));
                    }
                    uVar6 = uVar6 + 1;
                    lVar5 = lVar5 + 0x18;
                  } while (uVar6 < (ulong)param_2[1]);
                  puVar7 = local_98;
                }
                    /* try { // try from 0058c040 to 0058c08f has its CatchHandler @ 0058c14c */
                iVar4 = FUN_003f54a0(puVar7);
                if (iVar4 != 0) {
                  *param_1 = puVar7;
                  return;
                }
                FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/alts/alts_security_connector.cc"
                             ,0x109,2,"Invalid unauthenticated peer.");
                local_a8 = 
                "external/com_google_grpc_base/src/core/lib/security/security_connector/alts/alts_security_connector.cc"
                ;
                local_a0 = 0x10a;
                    /* try { // try from 0058c09c to 0058c0b3 has its CatchHandler @ 0058c12c */
                FUN_003f378c(&local_98,&local_a8,&DAT_039550b8,0);
                *param_1 = 0;
                if (local_98 == (undefined8 *)0x0) {
                  return;
                }
                    /* try { // try from 0058c0c0 to 0058c0c3 has its CatchHandler @ 0058c128 */
                FUN_003f3604();
                return;
              }
              pcVar9 = "Missing alts context property.";
              uVar8 = 0xe8;
            }
          }
        }
      }
    }
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/alts/alts_security_connector.cc"
               ,uVar8,2,pcVar9);
  *param_1 = 0;
  return;
}


