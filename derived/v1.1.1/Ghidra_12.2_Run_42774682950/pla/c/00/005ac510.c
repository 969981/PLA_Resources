/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ac510; name: FUN_005ac510
 */


undefined8 FUN_005ac510(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 0xc1) != '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x80);
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(long *)(param_2 + 0x88) = lVar3;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x70) = param_2;
  *(undefined1 *)(param_2 + 0xc1) = 1;
  if (PTR_DAT_04374f78[0x10] == '\0') {
    return 1;
  }
  puVar2 = &DAT_0397b746;
  if (*(char *)(param_1 + 0xcf0) != '\0') {
    puVar2 = &DAT_039429e0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
               ,0x7d,1,"%p[%d][%s]: add to %s",param_1,*(undefined4 *)(param_2 + 200),puVar2,
               "writing");
  return 1;
}


