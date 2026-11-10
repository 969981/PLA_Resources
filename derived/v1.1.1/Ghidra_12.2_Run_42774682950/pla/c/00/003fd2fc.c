/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd2fc; name: FUN_003fd2fc
 */


long FUN_003fd2fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_003fdb00(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),param_2,0);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x28);
    lVar2 = *(long *)(lVar3 + 0x30);
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x40) = lVar4;
    }
    else {
      *(long *)(lVar2 + 0x28) = lVar4;
      lVar4 = *(long *)(lVar3 + 0x28);
    }
    plVar1 = (long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x30);
    }
    *plVar1 = lVar2;
    if (*(long *)(param_1 + 0x50) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                   ,0xa7,2,"assertion failed: %s","use_order_list_size_ >= 1");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 == 0) {
      *(long *)(param_1 + 0x40) = lVar3;
      *(long *)(param_1 + 0x48) = lVar3;
      *(undefined8 *)(lVar3 + 0x28) = 0;
    }
    else {
      *(long *)(lVar3 + 0x28) = lVar4;
      *(long *)(lVar4 + 0x30) = lVar3;
      *(long *)(param_1 + 0x40) = lVar3;
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    FUN_003fd3d0(param_1);
  }
  return lVar3;
}


