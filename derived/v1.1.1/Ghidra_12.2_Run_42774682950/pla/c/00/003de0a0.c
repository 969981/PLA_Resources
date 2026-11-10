/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003de0a0; name: FUN_003de0a0
 */


void FUN_003de0a0(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar1 = (ulong *)param_1[2];
  puVar2 = (ulong *)param_1[3];
  if ((puVar1 == (ulong *)0x0) != (puVar2 == (ulong *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x25,2,
                 "assertion failed: %s","(list->head == nullptr) == (list->tail == nullptr)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (puVar1 != (ulong *)0x0) {
    if (puVar1[2] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x27,2,
                   "assertion failed: %s","list->head->prev == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (puVar2[1] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x28,2,
                   "assertion failed: %s","list->tail->next == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((puVar1 == puVar2) != (puVar1[1] == 0)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x29,2,
                   "assertion failed: %s",
                   "(list->head == list->tail) == (list->head->next == nullptr)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = 0;
    uVar5 = *puVar1;
    puVar3 = puVar1;
    while( true ) {
      if (uVar5 < 4) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x2d,2
                     ,"assertion failed: %s","!GRPC_MDISNULL(l->md)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = puVar3[2];
      if ((puVar3 == puVar1) != (uVar5 == 0)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x2e,2
                     ,"assertion failed: %s","(l->prev == nullptr) == (l == list->head)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar6 = (ulong *)puVar3[1];
      if ((puVar3 == puVar2) != (puVar6 == (ulong *)0x0)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x2f,2
                     ,"assertion failed: %s","(l->next == nullptr) == (l == list->tail)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((puVar6 != (ulong *)0x0) && ((ulong *)puVar6[2] != puVar3)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x30,2
                     ,"assertion failed: %s","l->next->prev == l");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((uVar5 != 0) && (*(ulong **)(uVar5 + 8) != puVar3)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x31,2
                     ,"assertion failed: %s","l->prev->next == l");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = lVar4 + 1;
      if (puVar6 == (ulong *)0x0) break;
      uVar5 = *puVar6;
      puVar3 = puVar6;
    }
    if (*param_1 != lVar4) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x34,2,
                   "assertion failed: %s","list->count == verified_count");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


