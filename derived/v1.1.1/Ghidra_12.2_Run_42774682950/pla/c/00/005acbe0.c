/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005acbe0; name: FUN_005acbe0
 */


void FUN_005acbe0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (**(code **)(*(long *)(param_1 + 0x1130) + 0x10))(param_1 + 0x1130);
  if ((uVar3 & 1) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                 ,0xcc,2,"assertion failed: %s","t->flow_control->flow_control_enabled()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_2 + 0xc3) == '\0') {
    lVar4 = *(long *)(param_1 + 0x90);
    plVar1 = (long *)(param_1 + 0x88);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xa0);
    }
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(long *)(param_2 + 0xa8) = lVar4;
    *plVar1 = param_2;
    *(long *)(param_1 + 0x90) = param_2;
    *(undefined1 *)(param_2 + 0xc3) = 1;
    if (PTR_DAT_04374f78[0x10] != '\0') {
      puVar2 = &DAT_0397b746;
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        puVar2 = &DAT_039429e0;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                   ,0x7d,1,"%p[%d][%s]: add to %s",param_1,*(undefined4 *)(param_2 + 200),puVar2,
                   "stalled_by_stream");
      return;
    }
  }
  return;
}


