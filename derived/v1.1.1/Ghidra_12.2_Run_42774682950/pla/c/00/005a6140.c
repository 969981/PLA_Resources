/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6140; name: FUN_005a6140
 */


void FUN_005a6140(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = 9;
  bVar3 = 0;
  if (*param_1 != 0) {
    uVar2 = 1;
    bVar3 = *(byte *)((long)param_1 + 0x39);
  }
  lVar7 = *(long *)(param_1 + 4);
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(long *)(lVar4 + lVar7 * 0x20) == 0) {
    puVar5 = (undefined1 *)(lVar4 + lVar7 * 0x20 + 9);
  }
  else {
    puVar5 = *(undefined1 **)(lVar4 + lVar7 * 0x20 + 0x10);
  }
  uVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20) - *(long *)(param_1 + 2);
  if (*(ulong *)(param_1 + 0xc) < uVar6) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x139,2,"assertion failed: %s","frame_size <= st->max_frame_size");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (0x1000063 < uVar6) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x12a,2,"assertion failed: %s","len < 16777316");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = param_1[7];
  puVar5[3] = uVar2;
  *puVar5 = (char)(uVar6 >> 0x10);
  puVar5[1] = (char)(uVar6 >> 8);
  puVar5[2] = (char)uVar6;
  puVar5[4] = bVar3 | (param_2 != 0) << 2;
  puVar5[8] = (char)iVar1;
  puVar5[5] = (char)((uint)iVar1 >> 0x18);
  puVar5[6] = (char)((uint)iVar1 >> 0x10);
  puVar5[7] = (char)((uint)iVar1 >> 8);
  **(long **)(param_1 + 10) = **(long **)(param_1 + 10) + 9;
  *param_1 = 0;
  return;
}


