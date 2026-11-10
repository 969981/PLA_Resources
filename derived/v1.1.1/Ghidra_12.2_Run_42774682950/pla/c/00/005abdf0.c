/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005abdf0; name: FUN_005abdf0
 */


void FUN_005abdf0(long *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  
  FUN_002f27f0(0xd);
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 0xd;
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  if ((int)param_3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_window_update.cc"
                 ,0x25,2,"assertion failed: %s","window_update");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar1 = 0x8040000;
  *(char *)((long)puVar1 + 5) = (char)((uint)param_2 >> 0x18);
  *(char *)((long)puVar1 + 6) = (char)((uint)param_2 >> 0x10);
  *(char *)((long)puVar1 + 7) = (char)((uint)param_2 >> 8);
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)(puVar1 + 2) = (char)param_2;
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 3) = (char)param_3;
  return;
}


