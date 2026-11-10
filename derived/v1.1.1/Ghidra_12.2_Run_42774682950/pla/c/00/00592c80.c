/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592c80; name: FUN_00592c80
 */


void FUN_00592c80(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_record_protocol_common.cc"
                 ,0x38,2,"assertion failed: %s","rp != nullptr && sb != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (*(ulong *)(param_1 + 0x158) < uVar2) {
    uVar3 = *(ulong *)(param_1 + 0x158) * 2;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    *(ulong *)(param_1 + 0x158) = uVar2;
    uVar1 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x150),uVar2 << 4);
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
  if (uVar2 == 0) {
    return;
  }
  lVar4 = 0;
  uVar3 = 0;
  puVar5 = (ulong *)(*(long **)(param_2 + 8) + 1);
  if (**(long **)(param_2 + 8) != 0) goto LAB_00592d1c;
  do {
    lVar7 = *(long *)(param_1 + 0x150);
    *(byte **)(lVar7 + lVar4) = (byte *)((long)puVar5 + 1);
    uVar8 = (ulong)(byte)*puVar5;
    puVar6 = puVar5;
    while( true ) {
      uVar3 = uVar3 + 1;
      *(ulong *)(lVar7 + lVar4 + 8) = uVar8;
      lVar4 = lVar4 + 0x10;
      puVar5 = puVar6 + 4;
      if (uVar2 <= uVar3) {
        return;
      }
      if (puVar6[3] == 0) break;
LAB_00592d1c:
      lVar7 = *(long *)(param_1 + 0x150);
      *(ulong *)(lVar7 + lVar4) = puVar5[1];
      uVar8 = *puVar5;
      puVar6 = puVar5;
    }
  } while( true );
}


