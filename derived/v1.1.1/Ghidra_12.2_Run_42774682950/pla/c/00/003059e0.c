/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003059e0; name: FUN_003059e0
 */


void FUN_003059e0(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long local_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  ulong uStack_58;
  long local_50;
  long lStack_48;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar2 = uVar6 - param_2;
  if (uVar6 < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x10d,2,
                 "assertion failed: %s","src->length >= n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar6 == param_2) {
    FUN_00305640(param_1,param_3);
  }
  else {
    lVar12 = param_3[4];
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar11 = param_2;
      while( true ) {
        plVar9 = *(long **)(param_1 + 8);
        uStack_58 = plVar9[1];
        local_60 = *plVar9;
        lStack_48 = plVar9[3];
        local_50 = plVar9[2];
        *(long **)(param_1 + 8) = plVar9 + 4;
        *(long *)(param_1 + 0x10) = lVar8 + -1;
        uVar1 = uStack_58 & 0xff;
        if (local_60 != 0) {
          uVar1 = uStack_58;
        }
        uVar3 = uVar11 - uVar1;
        *(ulong *)(param_1 + 0x20) = uVar6 - uVar1;
        if (uVar11 < uVar1 || uVar3 == 0) break;
        local_80 = local_60;
        uStack_78 = uStack_58;
        lStack_70 = local_50;
        lStack_68 = lStack_48;
        FUN_003052c0(param_3,&local_80);
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_00305b90;
        uVar6 = *(ulong *)(param_1 + 0x20);
        uVar11 = uVar3;
      }
      if (uVar3 == 0) {
        local_a0 = local_60;
        uStack_98 = uStack_58;
        lStack_90 = local_50;
        lStack_88 = lStack_48;
        FUN_003052c0(param_3,&local_a0);
        if (param_3[4] != lVar12 + param_2) goto LAB_00305bf4;
        goto LAB_00305ba0;
      }
      FUN_002f3670(&local_a0,&local_60,uVar11,1);
      lVar5 = lStack_48;
      lVar4 = local_50;
      uVar1 = uStack_58;
      lVar8 = local_60;
      lVar7 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar7 + -0x20;
      *(ulong *)(lVar7 + -0x18) = uStack_98;
      *(long *)(lVar7 + -0x20) = local_a0;
      *(long *)(lVar7 + -8) = lStack_88;
      *(long *)(lVar7 + -0x10) = lStack_90;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      uVar6 = uStack_98 & 0xff;
      if (local_a0 != 0) {
        uVar6 = uStack_98;
      }
      *(ulong *)(param_1 + 0x20) = uVar6 + *(long *)(param_1 + 0x20);
      uVar6 = uStack_58 & 0xff;
      if (local_60 != 0) {
        uVar6 = uStack_58;
      }
      if (uVar6 != uVar11) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x128,2,
                     "assertion failed: %s","GRPC_SLICE_LENGTH(slice) == n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_3[2];
      if (lVar7 == 0) {
        lVar10 = *param_3;
        param_3[1] = lVar10;
      }
      else {
        lVar10 = param_3[1];
        if ((lVar10 - *param_3 >> 5) + lVar7 == param_3[3]) {
          FUN_00306350(param_3);
          lVar10 = param_3[1];
        }
      }
      plVar9 = (long *)(lVar10 + lVar7 * 0x20);
      *plVar9 = lVar8;
      plVar9[1] = uVar1;
      plVar9[3] = lVar5;
      plVar9[2] = lVar4;
      param_3[4] = param_3[4] + uVar11;
      param_3[2] = lVar7 + 1;
    }
LAB_00305b90:
    if (param_3[4] != lVar12 + param_2) {
LAB_00305bf4:
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x12d,2,
                   "assertion failed: %s","dst->length == output_len");
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00305ba0:
    if (*(long *)(param_1 + 0x20) != lVar2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x12e,2,
                   "assertion failed: %s","src->length == new_input_len");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x12f,2,
                   "assertion failed: %s","src->count > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


