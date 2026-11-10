/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ac920; name: FUN_005ac920
 */


void FUN_005ac920(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (**(code **)(*(long *)(param_1 + 0x1130) + 0x10))(param_1 + 0x1130);
  if ((uVar3 & 1) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                 ,0xbc,2,"assertion failed: %s","t->flow_control->flow_control_enabled()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_2 + 0xc2) == '\0') {
    lVar4 = *(long *)(param_1 + 0x80);
    plVar1 = (long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x90);
    }
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(long *)(param_2 + 0x98) = lVar4;
    *plVar1 = param_2;
    *(long *)(param_1 + 0x80) = param_2;
    *(undefined1 *)(param_2 + 0xc2) = 1;
    if (PTR_DAT_04374f78[0x10] != '\0') {
      puVar2 = &DAT_0397b746;
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        puVar2 = &DAT_039429e0;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_lists.cc"
                   ,0x7d,1,"%p[%d][%s]: add to %s",param_1,*(undefined4 *)(param_2 + 200),puVar2,
                   "stalled_by_transport");
      return;
    }
  }
  return;
}


