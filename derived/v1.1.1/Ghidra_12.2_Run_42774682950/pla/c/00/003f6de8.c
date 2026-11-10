/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6de8; name: FUN_003f6de8
 */


void FUN_003f6de8(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *__s;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = DAT_0439cd40;
  if (DAT_0439cd40 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker_registry.cc",0x53,2,
                 "assertion failed: %s","g_handshaker_factory_lists != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = FUN_002e2f10(DAT_0439cd40);
  puVar1 = PTR_LAB_04373088;
  if (uVar3 < 0x18) {
LAB_003f6f00:
    FUN_002e2ef0(PTR_LAB_04373088,puVar2);
    DAT_0439cd40 = (ulong *)0x0;
    return;
  }
  uVar6 = 0;
  uVar4 = *puVar2;
  puVar7 = puVar2;
  if ((uVar4 & 1) != 0) goto LAB_003f6e84;
LAB_003f6e70:
  __s = puVar2 + uVar6 * 3 + 1;
  do {
    uVar4 = uVar4 >> 1;
    if (uVar4 != 0) {
      uVar8 = uVar4;
      do {
        uVar9 = uVar8 - 1;
        plVar5 = (long *)__s[uVar8 - 1];
        __s[uVar8 - 1] = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5);
          FUN_002e2ea0(puVar1,plVar5);
        }
        uVar8 = uVar9;
      } while (uVar9 != 0);
    }
    memset(__s,0xab,uVar4 << 3);
    if ((*puVar7 & 1) == 0) goto LAB_003f6e58;
    uVar4 = puVar2[uVar6 * 3 + 1];
    while( true ) {
      FUN_002e2ea0(puVar1,uVar4);
LAB_003f6e58:
      uVar6 = uVar6 + 1;
      if (uVar3 / 0x18 <= uVar6) goto LAB_003f6f00;
      puVar7 = puVar2 + uVar6 * 3;
      uVar4 = *puVar7;
      if ((uVar4 & 1) == 0) goto LAB_003f6e70;
LAB_003f6e84:
      __s = (ulong *)puVar2[uVar6 * 3 + 1];
      if (__s != (ulong *)0x0) break;
      uVar4 = 0;
    }
  } while( true );
}


