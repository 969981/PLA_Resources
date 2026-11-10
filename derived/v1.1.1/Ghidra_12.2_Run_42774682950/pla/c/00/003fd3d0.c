/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd3d0; name: FUN_003fd3d0
 */


void FUN_003fd3d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x48) != 0) goto LAB_003fd46c;
  }
  else {
    lVar4 = 0;
    lVar1 = *(long *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      lVar2 = lVar1;
      if (*(long *)(lVar2 + 0x30) != lVar3) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                     ,200,2,"assertion failed: %s","current->prev_ == prev");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar1 = FUN_003fdb00(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),lVar2,0);
      if (lVar1 != lVar2) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                     ,0xca,2,"assertion failed: %s","node == current");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = lVar4 + 1;
      lVar1 = *(long *)(lVar2 + 0x28);
      lVar3 = lVar2;
    } while (*(long *)(lVar2 + 0x28) != 0);
    if (lVar2 != *(long *)(param_1 + 0x48)) {
LAB_003fd46c:
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                   ,0xce,2,"assertion failed: %s","prev == use_order_list_tail_");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (lVar4 != *(long *)(param_1 + 0x50)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                 ,0xcf,2,"assertion failed: %s","size == use_order_list_size_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = FUN_003fd880(*(undefined8 *)(param_1 + 0x60));
  if (lVar1 != lVar4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                 ,0xd0,2,"assertion failed: %s",
                 "calculate_tree_size(entry_by_key_.root) == use_order_list_size_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


