/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ac230; name: FUN_005ac230
 */


undefined8 FUN_005ac230(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_2 + 200);
  if (iVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                 ,0x8f,2,"assertion failed: %s","s->id != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_2 + 0xc0) != '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x60);
  plVar1 = (long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x70);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(long *)(param_2 + 0x78) = lVar4;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_2 + 0xc0) = 1;
  if (PTR_DAT_04374f78[0x10] == '\0') {
    return 1;
  }
  puVar2 = &DAT_0397b746;
  if (*(char *)(param_1 + 0xcf0) != '\0') {
    puVar2 = &DAT_039429e0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
               ,0x7d,1,"%p[%d][%s]: add to %s",param_1,iVar3,puVar2,"writable");
  return 1;
}


