/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00382880; name: FUN_00382880
 */


void FUN_00382880(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 extraout_x1;
  ulong *puVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  void *pvVar20;
  void *__dest;
  undefined ****local_b0;
  undefined **ppuStack_a8;
  void *local_a0;
  undefined *local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined *local_60;
  undefined ***local_58;
  
  iVar5 = *(int *)(param_4 + 0x3c);
  puVar9 = *(ulong **)(param_4 + 0x30);
  if (puVar9 != (ulong *)0x0) {
    local_58 = (undefined ***)PTR_LAB_04373a98;
    local_60 = param_4;
    if (*puVar9 != 0xffffffffffffffff) {
      local_b0 = &local_58;
      ppuStack_a8 = &local_60;
      local_70 = (undefined **)&local_b0;
      std::__call_once(puVar9,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  puVar8 = PTR_DAT_04373ab0;
  uVar18 = *(uint *)(param_4 + 0x38);
  if (iVar5 != 3) {
    switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar18 * 4)) {
    case 1:
    case 3:
    case 6:
    case 8:
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      uVar10 = FUN_0038fe58(param_1 + 8,param_4);
      uVar6 = *(undefined4 *)(param_2 + (uVar11 & 0xffffffff));
      *(undefined4 *)(param_2 + (uVar11 & 0xffffffff)) =
           *(undefined4 *)(param_3 + (uVar10 & 0xffffffff));
      *(undefined4 *)(param_3 + (uVar10 & 0xffffffff)) = uVar6;
      return;
    case 2:
    case 4:
    case 5:
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      uVar10 = FUN_0038fe58(param_1 + 8,param_4);
      uVar12 = *(undefined8 *)(param_2 + (uVar11 & 0xffffffff));
      *(undefined8 *)(param_2 + (uVar11 & 0xffffffff)) =
           *(undefined8 *)(param_3 + (uVar10 & 0xffffffff));
      *(undefined8 *)(param_3 + (uVar10 & 0xffffffff)) = uVar12;
      return;
    case 7:
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      uVar10 = FUN_0038fe58(param_1 + 8,param_4);
      uVar7 = *(undefined1 *)(param_2 + (uVar11 & 0xffffffff));
      *(undefined1 *)(param_2 + (uVar11 & 0xffffffff)) =
           *(undefined1 *)(param_3 + (uVar10 & 0xffffffff));
      *(undefined1 *)(param_3 + (uVar10 & 0xffffffff)) = uVar7;
      return;
    case 9:
      goto switchD_0038297c_caseD_9;
    case 10:
      uVar11 = (ulong)*(uint *)(param_1 + 0x24);
      plVar19 = (long *)(*(ulong *)(param_2 + uVar11) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + uVar11) & 1) == 0) {
        uVar11 = *(ulong *)(param_3 + uVar11);
      }
      else {
        plVar19 = (long *)*plVar19;
        uVar11 = *(ulong *)(param_3 + uVar11);
      }
      puVar9 = (ulong *)(uVar11 & 0xfffffffffffffffe);
      if ((uVar11 & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      uVar11 = uVar11 & 0xffffffff;
      uVar10 = FUN_0038fe58(param_1 + 8,param_4);
      uVar10 = uVar10 & 0xffffffff;
      if ((ulong *)plVar19 == puVar9) {
        uVar12 = *(undefined8 *)(param_2 + uVar11);
        *(undefined8 *)(param_2 + uVar11) = *(undefined8 *)(param_3 + uVar10);
        *(undefined8 *)(param_3 + uVar10) = uVar12;
        return;
      }
      plVar19 = *(long **)(param_2 + uVar11);
      plVar17 = *(long **)(param_3 + uVar10);
      if (plVar19 == (long *)0x0) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        puVar9 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        plVar19 = (long *)(**(code **)(*plVar17 + 0x20))(plVar17,puVar9);
        *(long **)(param_2 + uVar11) = plVar19;
        (**(code **)(*plVar19 + 0x70))(plVar19,*(undefined8 *)(param_3 + uVar10));
      }
      else {
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x98))();
          FUN_00383254(extraout_x1,*(undefined8 *)(param_2 + uVar11),
                       *(undefined8 *)(param_3 + uVar10));
          return;
        }
        puVar9 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_3 + 8) & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        plVar19 = (long *)(**(code **)(*plVar19 + 0x20))(plVar19,puVar9);
        *(long **)(param_3 + uVar10) = plVar19;
        (**(code **)(*plVar19 + 0x70))(plVar19,*(undefined8 *)(param_2 + uVar11));
        param_3 = param_2;
      }
      FUN_00383a6c(param_1,param_3,param_4);
      return;
    default:
      FUN_0030f640(&local_b0,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x1d8);
                    /* try { // try from 00382d00 to 00382d6f has its CatchHandler @ 0038323c */
      uVar12 = FUN_0030f3ac(&local_b0,"Unimplemented type: ");
      puVar9 = *(ulong **)(param_4 + 0x30);
      if (puVar9 != (ulong *)0x0) {
        local_60 = PTR_LAB_04373a98;
        local_78 = param_4;
        if (*puVar9 != 0xffffffffffffffff) {
          local_70 = &local_60;
          ppuStack_68 = &local_78;
          local_58 = &local_70;
          std::__call_once(puVar9,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      uVar12 = FUN_0030f52c(uVar12,*(undefined4 *)(puVar8 + (ulong)*(uint *)(param_4 + 0x38) * 4));
                    /* try { // try from 00382d70 to 00382d77 has its CatchHandler @ 00383234 */
      FUN_0030f41c(&local_70,uVar12);
      goto LAB_00382d78;
    }
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar18 * 4)) {
  case 1:
  case 8:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_00327018(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 2:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_00328b18(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 3:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_00327d98(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 4:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_00329898(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 5:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_0032b398(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 6:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_0032a618(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 7:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    uVar10 = FUN_0038fe58(param_1 + 8,param_4);
    FUN_0032629c(param_2 + (uVar11 & 0xffffffff),param_3 + (uVar10 & 0xffffffff));
    break;
  case 9:
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    plVar19 = (long *)(param_2 + (uVar11 & 0xffffffff));
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    if (*(long *)(param_3 + (uVar11 & 0xffffffff)) != *plVar19) {
      FUN_003903a0(plVar19);
      return;
    }
    goto LAB_00382e7c;
  case 10:
    puVar9 = *(ulong **)(param_4 + 0x30);
    if (puVar9 != (ulong *)0x0) {
      local_58 = (undefined ***)PTR_LAB_04373a98;
      local_60 = param_4;
      if (*puVar9 != 0xffffffffffffffff) {
        local_b0 = &local_58;
        ppuStack_a8 = &local_60;
        local_70 = (undefined **)&local_b0;
        std::__call_once(puVar9,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar18 = *(uint *)(param_4 + 0x38);
    }
    if ((uVar18 == 0xb) && (uVar11 = FUN_00344344(param_4), (uVar11 & 1) != 0)) {
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      plVar19 = (long *)(param_2 + (uVar11 & 0xffffffff));
      uVar11 = FUN_0038fe58(param_1 + 8,param_4);
      (**(code **)(*plVar19 + 0x48))(plVar19,param_3 + (uVar11 & 0xffffffff));
      return;
    }
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    plVar19 = (long *)(param_2 + (uVar11 & 0xffffffff));
    uVar11 = FUN_0038fe58(param_1 + 8,param_4);
    if (*(long *)(param_3 + (uVar11 & 0xffffffff)) != *plVar19) {
      FUN_003907f8(plVar19);
      return;
    }
LAB_00382e7c:
    FUN_0032bcc4(plVar19);
    break;
  default:
    FUN_0030f640(&local_b0,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x18b);
                    /* try { // try from 00382c6c to 00382cdb has its CatchHandler @ 00383240 */
    uVar12 = FUN_0030f3ac(&local_b0,"Unimplemented type: ");
    puVar9 = *(ulong **)(param_4 + 0x30);
    if (puVar9 != (ulong *)0x0) {
      local_60 = PTR_LAB_04373a98;
      local_78 = param_4;
      if (*puVar9 != 0xffffffffffffffff) {
        local_70 = &local_60;
        ppuStack_68 = &local_78;
        local_58 = &local_70;
        std::__call_once(puVar9,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar12 = FUN_0030f52c(uVar12,*(undefined4 *)(puVar8 + (ulong)*(uint *)(param_4 + 0x38) * 4));
                    /* try { // try from 00382cdc to 00382ce3 has its CatchHandler @ 00383238 */
    FUN_0030f41c(&local_70,uVar12);
LAB_00382d78:
    FUN_0030f658(&local_b0);
  }
  return;
switchD_0038297c_caseD_9:
  uVar11 = (ulong)*(uint *)(param_1 + 0x24);
  plVar19 = (long *)(*(ulong *)(param_2 + uVar11) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + uVar11) & 1) == 0) {
    uVar11 = *(ulong *)(param_3 + uVar11);
  }
  else {
    plVar19 = (long *)*plVar19;
    uVar11 = *(ulong *)(param_3 + uVar11);
  }
  puVar9 = (ulong *)(uVar11 & 0xfffffffffffffffe);
  if ((uVar11 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  lVar2 = param_1 + 8;
  uVar11 = FUN_0038f118(lVar2,param_4);
  uVar10 = FUN_0038fe58(lVar2,param_4);
  puVar15 = (ulong *)(param_2 + (uVar10 & 0xffffffff));
  if ((uVar11 & 1) != 0) {
    uVar11 = FUN_0038fe58(lVar2,param_4);
    ppuStack_a8 = (undefined **)puVar15[1];
    local_b0 = (undefined ****)*puVar15;
    puVar9 = (ulong *)(param_3 + (uVar11 & 0xffffffff));
    local_a0 = (void *)puVar15[2];
    uVar10 = puVar9[1];
    uVar11 = *puVar9;
    puVar15[2] = puVar9[2];
    puVar15[1] = uVar10;
    *puVar15 = uVar11;
LAB_00383084:
    puVar9[2] = (ulong)local_a0;
    puVar9[1] = (ulong)ppuStack_a8;
    *puVar9 = (ulong)local_b0;
    return;
  }
  uVar11 = FUN_0038fe58(lVar2,param_4);
  lVar2 = *(long *)(param_1 + 8);
  if (param_4[0x43] == '\0') {
    plVar17 = (long *)(*(long *)(param_4 + 0x50) + 0x28);
  }
  else if (*(long *)(param_4 + 0x60) == 0) {
    plVar17 = (long *)(*(long *)(param_4 + 0x28) + 0x80);
  }
  else {
    plVar17 = (long *)(*(long *)(param_4 + 0x60) + 0x50);
  }
  uVar18 = (int)((ulong)((long)param_4 - *plVar17) >> 3) * 0x286bca1b;
  uVar18 = *(uint *)(*(long *)(param_1 + 0x10) +
                    (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2));
  puVar13 = *(ulong **)(param_4 + 0x30);
  if (puVar13 != (ulong *)0x0) {
    local_58 = (undefined ***)PTR_LAB_04373a98;
    local_60 = param_4;
    if (*puVar13 != 0xffffffffffffffff) {
      local_b0 = &local_58;
      ppuStack_a8 = &local_60;
      local_70 = (undefined **)&local_b0;
      std::__call_once(puVar13,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_4 + 0x38) == 0xc) || (*(int *)(param_4 + 0x38) == 9)) {
    uVar18 = uVar18 & 0xfffffffe;
  }
  puVar13 = *(ulong **)(lVar2 + (ulong)uVar18);
  puVar1 = (undefined8 *)(param_3 + (uVar11 & 0xffffffff));
  if ((ulong *)plVar19 == puVar9) {
    puVar14 = (ulong *)*puVar15;
    if (puVar14 == puVar13) {
      if ((ulong *)*puVar1 == puVar13) {
        return;
      }
      FUN_0029175c(puVar15,plVar19,puVar13);
      puVar14 = (ulong *)*puVar15;
    }
    puVar9 = (ulong *)*puVar1;
    if (puVar9 == puVar13) {
      FUN_0029175c(puVar1,plVar19,puVar13);
      puVar9 = (ulong *)*puVar1;
    }
    ppuStack_a8 = (undefined **)puVar14[1];
    local_b0 = (undefined ****)*puVar14;
    local_a0 = (void *)puVar14[2];
    uVar10 = puVar9[1];
    uVar11 = *puVar9;
    puVar14[2] = puVar9[2];
    puVar14[1] = uVar10;
    *puVar14 = uVar11;
    goto LAB_00383084;
  }
  puVar14 = (ulong *)*puVar15;
  ppuStack_a8 = (undefined **)0x0;
  local_a0 = (void *)0x0;
  local_b0 = (undefined ****)0x0;
  if ((*puVar14 & 1) == 0) {
    ppuStack_a8 = (undefined **)puVar14[1];
    local_b0 = (undefined ****)*puVar14;
    local_a0 = (void *)puVar14[2];
    puVar16 = (ulong *)*puVar1;
    goto joined_r0x00383128;
  }
  uVar11 = puVar14[1];
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar20 = (void *)puVar14[2];
  if (uVar11 < 0x17) {
    local_b0 = (undefined ****)(ulong)(byte)((int)uVar11 << 1);
    __dest = (void *)((ulong)&local_b0 | 1);
    if (uVar11 != 0) goto LAB_00383108;
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_b0 = (undefined ****)(uVar10 | 1);
    ppuStack_a8 = (undefined **)uVar11;
    local_a0 = __dest;
LAB_00383108:
    memcpy(__dest,pvVar20,uVar11);
  }
  *(undefined1 *)((long)__dest + uVar11) = 0;
  puVar14 = (ulong *)*puVar15;
  puVar16 = (ulong *)*puVar1;
joined_r0x00383128:
  if (puVar14 == puVar13) {
    FUN_0029175c(puVar15,plVar19);
  }
  else if (puVar14 != puVar16) {
    uVar11 = puVar16[1];
    pbVar4 = (byte *)puVar16[2];
    if (((byte)*puVar16 & 1) == 0) {
      pbVar4 = (byte *)((long)puVar16 + 1);
      uVar11 = (ulong)(byte)((byte)*puVar16 >> 1);
    }
                    /* try { // try from 0038314c to 003831ab has its CatchHandler @ 00383210 */
    FUN_00291910(puVar14,pbVar4,uVar11);
  }
  puVar15 = (ulong *)*puVar1;
  if (puVar15 == puVar13) {
    FUN_0029175c(puVar1,puVar9,&local_b0);
  }
  else if ((undefined *****)puVar15 != &local_b0) {
    ppuVar3 = (undefined **)((ulong)local_b0 >> 1 & 0x7f);
    pvVar20 = (void *)((ulong)&local_b0 | 1);
    if (((ulong)local_b0 & 1) != 0) {
      ppuVar3 = ppuStack_a8;
      pvVar20 = local_a0;
    }
    FUN_00291910(puVar15,pvVar20,ppuVar3);
  }
  if (((ulong)local_b0 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  return;
}


