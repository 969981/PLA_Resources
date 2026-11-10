/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050b4ac; name: FUN_0050b4ac
 */


undefined8 FUN_0050b4ac(ulong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  byte local_98 [16];
  ulong local_88;
  undefined1 auStack_80 [32];
  undefined **local_60;
  undefined *local_58;
  long local_50;
  undefined *puStack_48;
  
  puVar9 = param_1 + 0x13;
  if (param_1[0x14] - *puVar9 != 0x7f8) {
    puVar1 = (undefined4 *)FUN_0050b92c(param_1);
    if (param_2 == 5) {
      local_58 = (undefined *)0x0;
      local_50 = 0;
      *puVar1 = 5;
      plVar12 = (long *)(puVar1 + 10);
      local_60 = &local_58;
      FUN_003e9f80(puVar1 + 8,*plVar12);
      *(undefined ***)(puVar1 + 8) = local_60;
      *plVar12 = (long)local_58;
      *(long *)(puVar1 + 0xc) = local_50;
      if (local_50 == 0) {
        *(long **)(puVar1 + 8) = plVar12;
      }
      else {
        *(long **)(local_58 + 0x10) = plVar12;
        local_58 = (undefined *)0x0;
        local_50 = 0;
        local_60 = &local_58;
      }
      FUN_003e9f80(&local_60,local_58);
      puVar8 = (undefined8 *)param_1[0x14];
      puVar5 = (undefined8 *)param_1[0x15];
      if (puVar8 != puVar5) {
LAB_0050b6e4:
        *puVar8 = puVar1;
        param_1[0x14] = param_1[0x14] + 8;
        return 1;
      }
    }
    else {
      if (param_2 != 6) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xd7,2,
                     "assertion failed: %s","type == Json::Type::ARRAY");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *puVar1 = 6;
      FUN_0050bdc4(puVar1 + 0xe);
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar8 = (undefined8 *)param_1[0x14];
      puVar5 = (undefined8 *)param_1[0x15];
      if (puVar8 != puVar5) goto LAB_0050b6e4;
    }
    lVar10 = (long)((long)puVar8 - *puVar9) >> 3;
    uVar11 = lVar10 + 1;
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)puVar5 - *puVar9;
    if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
      uVar7 = lVar6 >> 2;
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
      if (uVar11 == 0) {
        lVar6 = 0;
        goto LAB_0050b70c;
      }
    }
    else {
      uVar11 = 0x1fffffffffffffff;
    }
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
LAB_0050b70c:
    puVar8 = (undefined8 *)(lVar6 + lVar10 * 8);
    *puVar8 = puVar1;
    pvVar3 = (void *)param_1[0x13];
    sVar4 = param_1[0x14] - (long)pvVar3;
    if (0 < (long)sVar4) {
      memcpy((void *)((long)puVar8 - sVar4),pvVar3,sVar4);
      pvVar3 = (void *)*puVar9;
    }
    param_1[0x13] = (ulong)((long)puVar8 - sVar4);
    param_1[0x14] = (ulong)(puVar8 + 1);
    param_1[0x15] = lVar6 + uVar11 * 8;
    if (pvVar3 == (void *)0x0) {
      return 1;
    }
    FUN_002e2ea0(PTR_LAB_04373088);
    return 1;
  }
  puVar9 = param_1 + 5;
  if (param_1[6] - *puVar9 == 0x80) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 0;
  }
  local_60 = (undefined **)0xff;
  local_58 = PTR_FUN_043737e0;
  local_50 = param_1[1] + ~*param_1;
  puStack_48 = PTR_LAB_04374a10;
  FUN_002e6390(local_98,"exceeded max stack depth (%d) at index %lu",0x2a,&local_60,2);
  uVar11 = (ulong)local_98 | 1;
  if ((local_98[0] & 1) != 0) {
    uVar11 = local_88;
  }
                    /* try { // try from 0050b5d0 to 0050b5f3 has its CatchHandler @ 0050b824 */
  FUN_002f2ff0(auStack_80,uVar11);
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xcf,
                       auStack_80,0,0);
  puVar8 = (undefined8 *)param_1[6];
  if (puVar8 < (undefined8 *)param_1[7]) {
    *puVar8 = uVar2;
    param_1[6] = param_1[6] + 8;
    goto joined_r0x0050b7bc;
  }
  lVar10 = (long)((long)puVar8 - *puVar9) >> 3;
  uVar11 = lVar10 + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 0050b81c to 0050b823 has its CatchHandler @ 0050b824 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)param_1[7] - *puVar9;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 != 0) goto LAB_0050b760;
    lVar6 = 0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_0050b760:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
  }
  puVar8 = (undefined8 *)(lVar6 + lVar10 * 8);
  *puVar8 = uVar2;
  pvVar3 = (void *)param_1[5];
  sVar4 = param_1[6] - (long)pvVar3;
  if (0 < (long)sVar4) {
    memcpy((void *)((long)puVar8 - sVar4),pvVar3,sVar4);
    pvVar3 = (void *)*puVar9;
  }
  param_1[5] = (ulong)((long)puVar8 - sVar4);
  param_1[6] = (ulong)(puVar8 + 1);
  param_1[7] = lVar6 + uVar11 * 8;
  if (pvVar3 != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
joined_r0x0050b7bc:
  if ((local_98[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  return 0;
}


