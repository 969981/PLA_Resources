/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e44b0; name: FUN_003e44b0
 */


undefined8 FUN_003e44b0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_0439c3e8 & 1) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel_init.cc",0x60,2,
                 "assertion failed: %s","g_finalized");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_003e45d0(param_2);
  FUN_003e4680(param_1,uVar1);
  if ((&DAT_0439c3f8)[(ulong)param_2 * 3] != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (**(code **)((&DAT_0439c3f0)[(ulong)param_2 * 3] + lVar3))
                        (param_1,((undefined8 *)((&DAT_0439c3f0)[(ulong)param_2 * 3] + lVar3))[1]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < (ulong)(&DAT_0439c3f8)[(ulong)param_2 * 3]);
  }
  return 1;
}


