/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aca10; name: FUN_005aca10
 */


bool FUN_005aca10(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x78);
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    *param_2 = 0;
    return false;
  }
  if (*(char *)(lVar4 + 0xc2) == '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                 ,0x3b,2,"assertion failed: %s","s->included[id]");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(lVar4 + 0x90);
  if (lVar3 == 0) {
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    *plVar2 = lVar3;
    *(undefined8 *)(lVar3 + 0x98) = 0;
  }
  *(undefined1 *)(lVar4 + 0xc2) = 0;
  *param_2 = lVar4;
  if (PTR_DAT_04374f78[0x10] == '\0') {
    return lVar4 != 0;
  }
  puVar1 = &DAT_0397b746;
  if (*(char *)(param_1 + 0xcf0) != '\0') {
    puVar1 = &DAT_039429e0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
               ,0x47,1,"%p[%d][%s]: pop from %s",param_1,*(undefined4 *)(lVar4 + 200),puVar1,
               "stalled_by_transport");
  return lVar4 != 0;
}


