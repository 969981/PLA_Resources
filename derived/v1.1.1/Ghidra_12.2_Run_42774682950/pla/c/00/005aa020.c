/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa020; name: FUN_005aa020
 */


void FUN_005aa020(undefined4 param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  param_2 = param_2 & 0xffffffff;
  FUN_002f27f0(&local_50,0x11);
  puVar2 = (undefined1 *)((long)&uStack_48 + 1);
  if (local_50 != 0) {
    puVar2 = local_40;
  }
  uVar4 = param_3[1] & 0xff;
  if (*param_3 != 0) {
    uVar4 = param_3[1];
  }
  if (0xfffffff6 < uVar4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
                 ,0x9c,2,"assertion failed: %s","GRPC_SLICE_LENGTH(debug_data) < UINT32_MAX - 4 - 4"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = (int)uVar4 + 8;
  *puVar2 = (char)((uint)iVar1 >> 0x10);
  puVar2[2] = (char)iVar1;
  puVar2[3] = 7;
  puVar2[9] = (char)((uint)param_1 >> 0x18);
  puVar2[10] = (char)((uint)param_1 >> 0x10);
  puVar2[0xb] = (char)((uint)param_1 >> 8);
  puVar2[1] = (char)((uint)iVar1 >> 8);
  puVar2[0xd] = (char)(param_2 >> 0x18);
  puVar2[0xc] = (char)param_1;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[0xf] = (char)(param_2 >> 8);
  puVar2[0xe] = (char)(param_2 >> 0x10);
  puVar2[0x10] = (char)param_2;
  puVar3 = local_40;
  if (local_50 == 0) {
    puVar3 = (undefined1 *)((long)&uStack_48 + 1);
  }
  uVar4 = uStack_48;
  if (local_50 == 0) {
    uVar4 = uStack_48 & 0xff;
  }
  if (puVar2 + 0x11 != puVar3 + uVar4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
                 ,0xb6,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(header)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  puStack_60 = local_40;
  FUN_003052c0(param_4,&local_70);
  lStack_88 = param_3[1];
  local_90 = *param_3;
  lStack_78 = param_3[3];
  lStack_80 = param_3[2];
  FUN_003052c0(param_4,&local_90);
  return;
}


