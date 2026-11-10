/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ac410; name: FUN_005ac410
 */


undefined8 FUN_005ac410(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0xc0) == '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0xc0) = 0;
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x58) != param_2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                   ,0x54,2,"assertion failed: %s","t->lists[id].head == s");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(param_2 + 0x70);
    *(long *)(param_1 + 0x58) = lVar4;
  }
  else {
    *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    lVar4 = *(long *)(param_2 + 0x70);
  }
  plVar1 = (long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x78);
  }
  *plVar1 = lVar3;
  if (PTR_DAT_04374f78[0x10] == '\0') {
    return 1;
  }
  puVar2 = &DAT_0397b746;
  if (*(char *)(param_1 + 0xcf0) != '\0') {
    puVar2 = &DAT_039429e0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
               ,0x5d,1,"%p[%d][%s]: remove from %s",param_1,*(undefined4 *)(param_2 + 200),puVar2,
               "writable");
  return 1;
}


