/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a3a80; name: FUN_005a3a80
 */


void FUN_005a3a80(undefined4 param_1,undefined8 param_2,ulong param_3,int param_4,long *param_5,
                 undefined8 param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long local_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  uVar2 = param_3 & 0xffffffff;
  FUN_002f27f0(&local_80,9);
  uStack_58 = uStack_78;
  local_60 = local_80;
  uStack_48 = uStack_68;
  local_50 = puStack_70;
  puVar1 = (undefined1 *)((ulong)&local_60 | 9);
  if (local_80 != 0) {
    puVar1 = puStack_70;
  }
  if ((param_3 & 0xff000000) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                 ,0x4a,2,"assertion failed: %s","write_bytes < (1 << 24)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar1[1] = (char)(uVar2 >> 8);
  *puVar1 = (char)(uVar2 >> 0x10);
  puVar1[5] = (char)((uint)param_1 >> 0x18);
  puVar1[6] = (char)((uint)param_1 >> 0x10);
  puVar1[2] = (char)uVar2;
  puVar1[3] = 0;
  puVar1[4] = param_4 != 0;
  puVar1[7] = (char)((uint)param_1 >> 8);
  puVar1[8] = (char)param_1;
  uStack_98 = uStack_78;
  local_a0 = local_80;
  uStack_88 = uStack_68;
  puStack_90 = puStack_70;
  FUN_003052c0(param_6,&local_a0);
  FUN_003059e0(param_2,param_3 & 0xffffffff,param_6);
  *param_5 = *param_5 + 9;
  param_5[1] = param_5[1] + (param_3 & 0xffffffff);
  return;
}


