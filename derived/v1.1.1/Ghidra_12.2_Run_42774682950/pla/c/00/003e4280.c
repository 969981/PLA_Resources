/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4280; name: FUN_003e4280
 */


void FUN_003e4280(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  
  if (DAT_0439c3e8 == '\x01') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel_init.cc",0x36,2,
                 "assertion failed: %s","!g_finalized");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1 = param_1 & 0xffffffff;
  puVar5 = &DAT_0439c3f8 + param_1 * 3;
  uVar3 = *puVar5;
  uVar4 = *(ulong *)(&DAT_0439c400 + param_1 * 0x18);
  plVar6 = &DAT_0439c3f0 + param_1 * 3;
  if (uVar4 == uVar3) {
    uVar4 = uVar4 * 3;
    uVar3 = 8;
    if (0xf < uVar4) {
      uVar3 = uVar4 >> 1;
    }
    *(ulong *)(&DAT_0439c400 + param_1 * 0x18) = uVar3;
    lVar2 = FUN_002ebdc0(*plVar6,uVar3 << 5);
    *plVar6 = lVar2;
    uVar3 = *puVar5;
  }
  else {
    lVar2 = *plVar6;
  }
  puVar1 = (undefined8 *)(lVar2 + uVar3 * 0x20);
  *puVar5 = uVar3 + 1;
  puVar1[3] = uVar3 + 1;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}


