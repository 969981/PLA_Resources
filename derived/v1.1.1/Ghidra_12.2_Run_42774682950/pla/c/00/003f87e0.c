/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f87e0; name: FUN_003f87e0
 */


void FUN_003f87e0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *local_80;
  undefined4 local_78;
  
  lVar4 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)(lVar4 + 0x10);
  if ((void *)puVar7[0x1e] != (void *)0x0) {
    free((void *)puVar7[0x1e]);
    puVar7[0x1e] = 0;
  }
  if ((void *)puVar7[0x1f] != (void *)0x0) {
    free((void *)puVar7[0x1f]);
    puVar7[0x1f] = 0;
  }
  if (puVar7[0x20] != 0) {
    local_80 = "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
    ;
    local_78 = 0x90;
    FUN_003f3870(puVar7[0x20],&local_80,"grpc_auth_metadata_context");
    puVar7[0x20] = 0;
  }
  if (4 < param_2) {
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                           ,0xa5);
  }
  if (param_2 == 0) {
    if (4 < (ulong)puVar7[0xd]) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                   ,0xa7,2,"assertion failed: %s",
                   "calld->md_array.size <= MAX_CREDENTIALS_METADATA_COUNT");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                   ,0xa8,2,"assertion failed: %s","batch->send_initial_metadata");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (puVar7[0xd] != 0) {
      uVar6 = 0;
      param_2 = 0;
      puVar5 = puVar7 + 0xe;
      uVar1 = **(undefined8 **)(param_1 + 8);
      do {
        uVar2 = FUN_003e0280(*(undefined8 *)(puVar7[0xc] + uVar6 * 8),
                             "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                             ,0xae);
        lVar3 = FUN_003de9d0(uVar1,puVar5,uVar2);
        if (lVar3 != 0) {
          if (param_2 == 0) {
            FUN_002f2c60(&local_80,"Client auth metadata plugin error");
            param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                                   ,0x99,&local_80,0,0);
          }
          param_2 = FUN_002f13f0(param_2,lVar3);
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 4;
      } while (uVar6 < (ulong)puVar7[0xd]);
      if (param_2 != 0) goto LAB_003f8880;
    }
    FUN_003d7c00(lVar4,param_1);
  }
  else {
LAB_003f8880:
    uVar1 = FUN_002f0d20(param_2,3,0xe);
    FUN_003d5fa0(param_1,uVar1,puVar7[1]);
  }
  FUN_003c9ce0(*puVar7,"get_request_metadata");
  return;
}


