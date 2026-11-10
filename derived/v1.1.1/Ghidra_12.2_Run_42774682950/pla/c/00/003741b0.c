/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003741b0; name: FUN_003741b0
 */


void FUN_003741b0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5,
                 undefined8 param_6)

{
  byte *__src;
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  undefined **__src_00;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  void *__dest;
  undefined *__dest_00;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined7 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 *local_a0;
  undefined ***local_98;
  ulong *local_90;
  void *local_88;
  undefined **local_80;
  ulong *local_78;
  undefined *local_70 [4];
  ulong local_50;
  undefined *puStack_48;
  
  if ((param_5 != -1) && (*(int *)(param_4 + 0x3c) != 3)) {
    FUN_0030f640(&local_80,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x910);
                    /* try { // try from 00374208 to 00374227 has its CatchHandler @ 003749f4 */
    uVar6 = FUN_0030f3ac(&local_80,"CHECK failed: field->is_repeated() || (index == -1): ");
    uVar6 = FUN_0030f3ac(uVar6,"Index must be -1 for non-repeated fields");
                    /* try { // try from 00374228 to 0037422f has its CatchHandler @ 003749f0 */
    FUN_0030f41c(&local_98,uVar6);
    FUN_0030f658(&local_80);
  }
  plVar13 = (long *)(param_1 + 0x28);
  plVar14 = (long *)*plVar13;
  if (plVar14 == (long *)0x0) {
LAB_00374274:
    plVar13 = *(long **)(param_1 + 0x18);
    puVar7 = *(ulong **)(param_4 + 0x30);
  }
  else {
    plVar11 = plVar13;
    do {
      if ((ulong)plVar14[4] >= param_4) {
        plVar11 = plVar14;
      }
      plVar14 = (long *)plVar14[(ulong)plVar14[4] < param_4];
    } while (plVar14 != (long *)0x0);
    if ((plVar11 == plVar13) || (param_4 < (ulong)plVar11[4])) goto LAB_00374274;
    plVar13 = (long *)plVar11[5];
    puVar7 = *(ulong **)(param_4 + 0x30);
  }
  if (puVar7 != (ulong *)0x0) {
    local_b0._0_1_ = (byte)PTR_LAB_04373a98;
    local_b0._1_1_ = (undefined1)((ulong)PTR_LAB_04373a98 >> 8);
    local_b0._2_6_ = (undefined6)((ulong)PTR_LAB_04373a98 >> 0x10);
    local_c0._0_7_ = (undefined7)param_4;
    local_c0._7_1_ = (undefined1)(param_4 >> 0x38);
    if (*puVar7 != 0xffffffffffffffff) {
      local_80 = (undefined **)&local_b0;
      local_78 = &local_c0;
      local_98 = &local_80;
      std::__call_once(puVar7,&local_98,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 0x38) * 4)) {
  case 1:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar5 = FUN_00387acc();
    }
    else {
      uVar5 = FUN_00387768(param_3,param_2,param_4);
    }
    pcVar12 = *(code **)(*plVar13 + 0x18);
    goto LAB_0037457c;
  case 2:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_00388264();
    }
    else {
      uVar6 = FUN_00387f00(param_3,param_2,param_4);
    }
    pcVar12 = *(code **)(*plVar13 + 0x28);
    goto LAB_00374540;
  case 3:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar5 = FUN_003889fc();
    }
    else {
      uVar5 = FUN_00388698(param_3,param_2,param_4);
    }
    pcVar12 = *(code **)(*plVar13 + 0x20);
    goto LAB_0037457c;
  case 4:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_00389194();
    }
    else {
      uVar6 = FUN_00388e30(param_3,param_2,param_4);
    }
    pcVar12 = *(code **)(*plVar13 + 0x30);
LAB_00374540:
    (*pcVar12)(plVar13,uVar6,param_6);
    break;
  case 5:
    if (*(int *)(param_4 + 0x3c) == 3) {
      FUN_0038a0c4();
    }
    else {
      FUN_00389d60(param_3,param_2,param_4);
    }
    (**(code **)(*plVar13 + 0x40))(plVar13,param_6);
    break;
  case 6:
    if (*(int *)(param_4 + 0x3c) == 3) {
      FUN_0038992c();
    }
    else {
      FUN_003895c8(param_3,param_2,param_4);
    }
    (**(code **)(*plVar13 + 0x38))(plVar13,param_6);
    break;
  case 7:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar5 = FUN_0038a860();
    }
    else {
      uVar5 = FUN_0038a4f8(param_3,param_2,param_4);
    }
    uVar5 = uVar5 & 1;
    pcVar12 = *(code **)(*plVar13 + 0x10);
LAB_0037457c:
    (*pcVar12)(plVar13,uVar5,param_6);
    break;
  case 8:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar4 = FUN_0038bccc();
    }
    else {
      uVar4 = FUN_0038b724(param_3,param_2,param_4);
    }
    uVar6 = FUN_00346ae8(param_4);
    puVar9 = (undefined8 *)FUN_00343194(uVar6,uVar4);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)(*plVar13 + 0x58))(plVar13,uVar4,*puVar9,param_6);
      return;
    }
    local_80 = local_70;
    lVar10 = FUN_00320570(uVar4,local_70);
    __src_00 = local_80;
    puVar7 = (ulong *)(lVar10 - (long)local_70);
    local_98 = (undefined ***)0x0;
    local_90 = (ulong *)0x0;
    local_88 = (void *)0x0;
    local_78 = puVar7;
    if ((ulong *)0xffffffffffffffef < puVar7) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (&DAT_00000016 < puVar7) {
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(puVar7 + 2) & 0xfffffffffffffff0);
      local_98 = (undefined ***)((ulong)(puVar7 + 2) & 0xfffffffffffffff0 | 1);
      local_90 = puVar7;
      local_88 = __dest;
LAB_003746b8:
      memcpy(__dest,__src_00,(size_t)puVar7);
    }
    else {
      local_98 = (undefined ***)(ulong)(byte)((int)puVar7 << 1);
      __dest = (void *)((ulong)&local_98 | 1);
      if (puVar7 != (ulong *)0x0) goto LAB_003746b8;
    }
    *(undefined1 *)((long)__dest + (long)puVar7) = 0;
                    /* try { // try from 003746d4 to 003746e7 has its CatchHandler @ 00374994 */
    (**(code **)(*plVar13 + 0x58))(plVar13,uVar4,&local_98,param_6);
    goto LAB_00374848;
  case 9:
    local_90 = (ulong *)0x0;
    local_88 = (void *)0x0;
    local_98 = (undefined ***)0x0;
    if (*(int *)(param_4 + 0x3c) == 3) {
                    /* try { // try from 00374464 to 0037447b has its CatchHandler @ 003749a4 */
      pbVar8 = (byte *)FUN_0038b19c(param_3,param_2,param_4,param_5,&local_98);
    }
    else {
                    /* try { // try from 003745a0 to 003745b3 has its CatchHandler @ 003749a4 */
      pbVar8 = (byte *)FUN_0038aca4(param_3,param_2,param_4,&local_98);
    }
    local_a8 = 0;
    uStack_a7 = 0;
    local_a0 = (undefined1 *)0x0;
    local_b0._0_1_ = 0;
    local_b0._1_1_ = 0;
    local_b0._2_6_ = 0;
    puVar7 = *(ulong **)(param_1 + 0x10);
    if (0 < (long)puVar7) {
      bVar3 = *pbVar8;
      if ((bVar3 & 1) == 0) {
        puVar15 = (ulong *)(ulong)(bVar3 >> 1);
      }
      else {
        puVar15 = *(ulong **)(pbVar8 + 8);
      }
      if (puVar7 < puVar15) {
        local_78 = (ulong *)0x0;
        local_70[0] = (undefined *)0x0;
        puVar15 = (ulong *)(ulong)(bVar3 >> 1);
        local_80 = (undefined **)0x0;
        __src = *(byte **)(pbVar8 + 0x10);
        if ((bVar3 & 1) == 0) {
          __src = pbVar8 + 1;
        }
        else {
          puVar15 = *(ulong **)(pbVar8 + 8);
        }
        if (puVar7 <= puVar15) {
          puVar15 = puVar7;
        }
        if ((ulong *)0xffffffffffffffef < puVar15) {
                    /* try { // try from 00374914 to 0037491b has its CatchHandler @ 0037491c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < puVar15) {
          __dest_00 = (undefined *)
                      FUN_002e2e80(PTR_FUN_04373078,(ulong)(puVar15 + 2) & 0xfffffffffffffff0);
          local_80 = (undefined **)((ulong)(puVar15 + 2) & 0xfffffffffffffff0 | 1);
          local_78 = puVar15;
          local_70[0] = __dest_00;
LAB_00374714:
          memcpy(__dest_00,__src,(size_t)puVar15);
        }
        else {
          local_80 = (undefined **)(ulong)(byte)((int)puVar15 << 1);
          __dest_00 = (undefined *)((ulong)&local_80 | 1);
          if (puVar15 != (ulong *)0x0) goto LAB_00374714;
        }
        __dest_00[(long)puVar15] = 0;
                    /* try { // try from 00374728 to 0037473b has its CatchHandler @ 00374958 */
        pbVar8 = (byte *)FUN_002e4094(&local_80,"...<truncated>...",0x11);
        puVar1 = *(undefined1 **)(pbVar8 + 0x10);
        bVar3 = *pbVar8;
        uStack_b8 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 8) >> 8);
        local_c0._0_7_ = (undefined7)*(undefined8 *)(pbVar8 + 1);
        local_c0._7_1_ = (undefined1)((ulong)*(undefined8 *)(pbVar8 + 1) >> 0x38);
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8[4] = 0;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
        pbVar8[8] = 0;
        pbVar8[9] = 0;
        pbVar8[10] = 0;
        pbVar8[0xb] = 0;
        pbVar8[0xc] = 0;
        pbVar8[0xd] = 0;
        pbVar8[0xe] = 0;
        pbVar8[0xf] = 0;
        pbVar8[0x10] = 0;
        pbVar8[0x11] = 0;
        pbVar8[0x12] = 0;
        pbVar8[0x13] = 0;
        pbVar8[0x14] = 0;
        pbVar8[0x15] = 0;
        pbVar8[0x16] = 0;
        pbVar8[0x17] = 0;
        if (((byte)local_b0 & 1) != 0) {
          *local_a0 = 0;
          local_a8 = 0;
          uStack_a7 = 0;
          if (((byte)local_b0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_a0);
          }
        }
        local_b0._1_1_ = (undefined1)(undefined7)local_c0;
        local_b0._2_6_ = (undefined6)((uint7)(undefined7)local_c0 >> 8);
        local_c0._0_7_ = 0;
        local_a8 = local_c0._7_1_;
        uStack_a7 = uStack_b8;
        local_c0._7_1_ = 0;
        uStack_b8 = 0;
        local_b0._0_1_ = bVar3;
        local_a0 = puVar1;
        if (((ulong)local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_70[0]);
        }
        pbVar8 = (byte *)&local_b0;
      }
    }
    puVar7 = *(ulong **)(param_4 + 0x30);
    if ((puVar7 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_04373a98, local_50 = param_4, *puVar7 != 0xffffffffffffffff)) {
      local_80 = &puStack_48;
      local_78 = &local_50;
      local_c0._0_7_ = SUB87(&local_80,0);
      local_c0._7_1_ = (undefined1)((ulong)&local_80 >> 0x38);
                    /* try { // try from 003747fc to 003748a7 has its CatchHandler @ 003749b4 */
      std::__call_once(puVar7,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    iVar2 = *(int *)(param_4 + 0x38);
    if (iVar2 == 9) {
      (**(code **)(*plVar13 + 0x48))(plVar13,pbVar8,param_6);
    }
    else {
      puVar7 = *(ulong **)(param_4 + 0x30);
      if (puVar7 != (ulong *)0x0) {
        puStack_48 = PTR_LAB_04373a98;
        local_50 = param_4;
        if (*puVar7 != 0xffffffffffffffff) {
          local_80 = &puStack_48;
          local_78 = &local_50;
          local_c0._0_7_ = SUB87(&local_80,0);
          local_c0._7_1_ = (undefined1)((ulong)&local_80 >> 0x38);
          std::__call_once(puVar7,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        iVar2 = *(int *)(param_4 + 0x38);
      }
      if (iVar2 != 0xc) {
                    /* try { // try from 003748b4 to 003748cb has its CatchHandler @ 00374948 */
        FUN_0030f640(&local_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                     ,0x93a);
                    /* try { // try from 003748cc to 003748df has its CatchHandler @ 00374930 */
        uVar6 = FUN_0030f3ac(&local_80,
                             "CHECK failed: (field->type()) == (FieldDescriptor::TYPE_BYTES): ");
                    /* try { // try from 003748e0 to 003748e7 has its CatchHandler @ 0037492c */
        FUN_0030f41c(auStack_c8,uVar6);
        FUN_0030f658(&local_80);
      }
                    /* try { // try from 003748f8 to 00374907 has its CatchHandler @ 003749b4 */
      (**(code **)(*plVar13 + 0x50))(plVar13,pbVar8,param_6);
    }
    if (((byte)local_b0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
LAB_00374848:
    if (((ulong)local_98 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
    break;
  case 10:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_0038cfc0();
    }
    else {
      uVar6 = FUN_0038c150(param_3,param_2,param_4,0);
    }
    FUN_00372540(param_1,uVar6,param_6);
  }
  return;
}


