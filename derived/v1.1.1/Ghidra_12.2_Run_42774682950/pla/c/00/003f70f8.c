/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f70f8; name: FUN_003f70f8
 */


void FUN_003f70f8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (DAT_0439cd40 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker_registry.cc",100,2,
                 "assertion failed: %s","g_handshaker_factory_lists != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = (ulong *)(DAT_0439cd40 + (param_1 & 0xffffffff) * 0x18);
  uVar2 = *puVar4;
  if (1 < uVar2) {
    uVar5 = 0;
    plVar1 = (long *)(DAT_0439cd40 + (param_1 & 0xffffffff) * 0x18 + 8);
    do {
      plVar3 = plVar1;
      if ((uVar2 & 1) != 0) {
        plVar3 = (long *)*plVar1;
      }
      (*(code *)**(undefined8 **)plVar3[uVar5])((undefined8 *)plVar3[uVar5],param_2,param_3,param_4)
      ;
      uVar2 = *puVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2 >> 1);
  }
  return;
}


