/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ac840; name: FUN_005ac840
 */


void FUN_005ac840(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0xc4) != '\0') {
    lVar3 = *(long *)(param_2 + 0xb8);
    *(undefined1 *)(param_2 + 0xc4) = 0;
    if (lVar3 == 0) {
      if (*(long *)(param_1 + 0x98) != param_2) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                     ,0x54,2,"assertion failed: %s","t->lists[id].head == s");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = *(long *)(param_2 + 0xb0);
      *(long *)(param_1 + 0x98) = lVar4;
    }
    else {
      *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      lVar4 = *(long *)(param_2 + 0xb0);
    }
    plVar1 = (long *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xb8);
    }
    *plVar1 = lVar3;
    if (PTR_DAT_04374f78[0x10] != '\0') {
      puVar2 = &DAT_0397b746;
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        puVar2 = &DAT_039429e0;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                   ,0x5d,1,"%p[%d][%s]: remove from %s",param_1,*(undefined4 *)(param_2 + 200),
                   puVar2,"waiting_for_concurrency");
      return;
    }
  }
  return;
}


