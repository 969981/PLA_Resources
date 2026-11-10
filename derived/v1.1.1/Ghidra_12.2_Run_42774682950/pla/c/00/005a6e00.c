/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6e00; name: FUN_005a6e00
 */


void FUN_005a6e00(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (*param_2 == 0) {
    uVar3 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar3 = param_2[1];
  }
  if (uVar3 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar5 = *(long *)(lVar6 + 0x20) - *(long *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x30) - uVar5;
  if (*(ulong *)(param_1 + 0x30) < uVar5) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x139,2,"assertion failed: %s","frame_size <= st->max_frame_size");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (uVar1 < uVar3) {
    *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar1;
    FUN_002f3860(auStack_80,param_2);
    FUN_003052c0(lVar6,auStack_80);
    FUN_005a6140(param_1,0);
    local_40 = 0;
    local_38 = 9;
    uVar2 = FUN_00305230(*(undefined8 *)(param_1 + 0x20),&local_40);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    lStack_98 = param_2[1];
    local_a0 = *param_2;
    lStack_88 = param_2[3];
    lStack_90 = param_2[2];
    FUN_005a6e00(param_1,&local_a0);
    return;
  }
  *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar3;
  lStack_58 = param_2[1];
  local_60 = *param_2;
  lStack_48 = param_2[3];
  lStack_50 = param_2[2];
  FUN_003052c0(lVar6,&local_60);
  return;
}


