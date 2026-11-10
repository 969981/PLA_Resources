/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592190; name: FUN_00592190
 */


undefined8 FUN_00592190(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &local_170;
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x12a,2,"assertion failed: %s","client != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if ((param_2 & 1) != 0) {
    local_158 = param_1 + 0x158;
    local_150 = param_1 + 0x160;
    local_170 = DAT_0388a5c8;
    uStack_168 = 0;
    uStack_160 = 0;
    FUN_002ef5d0(param_1 + 8);
    iVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined8 *)(param_1 + 0x18),&local_170,1,param_1 + 0x110);
    if (iVar2 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                   ,0x13d,2,"assertion failed: %s","call_error == GRPC_CALL_OK");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = &local_d0;
    local_120 = 4;
    local_110 = param_1 + 0x88;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  *(undefined4 *)puVar4 = 1;
  puVar4[2] = *(undefined8 *)(param_1 + 0x70);
  if (399 < (long)puVar4 + (0x50 - (long)&local_170)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x14d,2,"assertion failed: %s","op - ops <= kHandshakerClientOpNum");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(puVar4 + 10) = 5;
  puVar4[0xc] = param_1 + 0x78;
  lVar1 = (long)puVar4 + (0xa0 - (long)&local_170);
  if (399 < lVar1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x151,2,"assertion failed: %s","op - ops <= kHandshakerClientOpNum");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x152,2,"assertion failed: %s","client->grpc_caller != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = (**(code **)(param_1 + 0x20))
                    (*(undefined8 *)(param_1 + 0x18),&local_170,(lVar1 >> 4) * -0x3333333333333333,
                     param_1 + 0x28);
  if ((int)uVar3 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x156,2,"Start batch operation failed");
    uVar3 = 7;
  }
  return uVar3;
}


