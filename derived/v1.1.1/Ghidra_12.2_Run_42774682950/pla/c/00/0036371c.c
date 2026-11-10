/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036371c; name: FUN_0036371c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0036371c(undefined8 *param_1,undefined **param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined1 auStack_148 [8];
  undefined ***local_140;
  undefined **ppuStack_138;
  ulong local_130;
  undefined **local_110;
  undefined8 uStack_108;
  ulong local_100;
  long local_f8;
  undefined **local_f0;
  undefined ***pppuStack_e8;
  ulong local_e0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  undefined **local_60;
  undefined *puStack_58;
  
  if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) == 0) {
    FUN_0034b2f0(&local_b8,"Option \"",param_2[1]);
                    /* try { // try from 00363760 to 00363773 has its CatchHandler @ 00363f90 */
    puVar6 = (ulong *)FUN_002e4094(&local_b8,
                                   "\" is a message. To set the entire message, use syntax like \"",
                                   0x3c);
    uStack_98 = puVar6[1];
    local_a0 = (undefined ***)*puVar6;
    local_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pbVar12 = *param_2;
    uVar9 = *(ulong *)(pbVar12 + 8);
    pbVar2 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar2 = pbVar12 + 1;
      uVar9 = (ulong)(*pbVar12 >> 1);
    }
                    /* try { // try from 003637a8 to 003637af has its CatchHandler @ 00363f68 */
    puVar6 = (ulong *)FUN_002e4094(&local_a0,pbVar2,uVar9);
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    local_70 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 003637c8 to 003637db has its CatchHandler @ 00363f40 */
    puVar6 = (ulong *)FUN_002e4094(&local_80,
                                   " = { <proto text format> }\". To set fields within it, use syntax like \""
                                   ,0x47);
    uStack_108 = puVar6[1];
    local_110 = (undefined **)*puVar6;
    local_100 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pbVar12 = *param_2;
    uVar9 = *(ulong *)(pbVar12 + 8);
    pbVar2 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar2 = pbVar12 + 1;
      uVar9 = (ulong)(*pbVar12 >> 1);
    }
                    /* try { // try from 00363810 to 00363817 has its CatchHandler @ 00363f18 */
    puVar6 = (ulong *)FUN_002e4094(&local_110,pbVar2,uVar9);
    ppuStack_138 = (undefined **)puVar6[1];
    local_140 = (undefined ***)*puVar6;
    local_130 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00363830 to 00363843 has its CatchHandler @ 00363ef0 */
    puVar6 = (ulong *)FUN_002e4094(&local_140,".foo = value\".",0xe);
    pppuStack_e8 = (undefined ***)puVar6[1];
    local_f0 = (undefined **)*puVar6;
    local_e0 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00363868 to 00363873 has its CatchHandler @ 00363e9c */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_f0);
    if (((ulong)local_f0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_e0);
    }
    if (((ulong)local_140 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_130);
    }
    if (((ulong)local_110 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_100);
    }
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if (((ulong)local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if (((byte)local_b8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a8);
    }
    uVar13 = 0;
  }
  else {
    puVar6 = (ulong *)param_2[6];
    if ((puVar6 != (ulong *)0x0) && (local_110 = param_2, *puVar6 != 0xffffffffffffffff)) {
      pppuStack_e8 = &local_110;
      local_f0 = (undefined **)PTR_LAB_04373a98;
      local_140 = &local_f0;
      std::__call_once(puVar6,&local_140,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    plVar7 = (long *)FUN_003803e0(param_1 + 9,param_2[0xd]);
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x18))();
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00363920 to 00363937 has its CatchHandler @ 00363de0 */
      FUN_0030f640(&local_f0,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                   ,0x1bee);
                    /* try { // try from 00363938 to 00363953 has its CatchHandler @ 00363e78 */
      uVar13 = FUN_0030f3ac(&local_f0,"CHECK failed: dynamic.get() != nullptr: ");
      uVar13 = FUN_0030f3ac(uVar13,"Could not create an instance of ");
      local_110 = (undefined **)((ulong)local_110 & 0xffffffffff000000);
                    /* try { // try from 00363960 to 0036396f has its CatchHandler @ 00363dcc */
      FUN_0034af88(&local_140,param_2,&local_110);
                    /* try { // try from 00363970 to 0036397f has its CatchHandler @ 00363da0 */
      uVar13 = FUN_0030f3e8(uVar13,&local_140);
                    /* try { // try from 00363980 to 00363987 has its CatchHandler @ 00363d90 */
      FUN_0030f41c(&local_80,uVar13);
      if (((ulong)local_140 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_130);
      }
      FUN_0030f658(&local_f0);
    }
    local_110 = &PTR_LAB_04153ae8;
    uStack_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_b8 = PTR_DAT_04373c40 + 0x10;
    local_b0 = *param_1;
                    /* try { // try from 003639d0 to 003639d7 has its CatchHandler @ 00363e94 */
    FUN_003712b0(&local_140);
    local_140 = &local_110;
    ppuStack_138 = &local_b8;
                    /* try { // try from 003639ec to 003639f7 has its CatchHandler @ 00363e8c */
    uVar9 = FUN_00371764(&local_140,*(undefined8 *)(param_1[2] + 0x40),puVar8);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 00363aa0 to 00363aaf has its CatchHandler @ 00363e74 */
      FUN_0034b2f0(&local_a0,"Error while parsing option value for \"",*param_2);
                    /* try { // try from 00363ab0 to 00363ac3 has its CatchHandler @ 00363e60 */
      puVar6 = (ulong *)FUN_002e4094(&local_a0,&DAT_03924d6b,3);
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      local_70 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if ((uStack_108 & 1) == 0) {
        uVar9 = uStack_108 >> 1 & 0x7f;
        lVar3 = (long)&uStack_108 + 1;
      }
      else {
        uVar9 = local_100;
        lVar3 = local_f8;
      }
                    /* try { // try from 00363af8 to 00363aff has its CatchHandler @ 00363e38 */
      puVar10 = (undefined8 *)FUN_002e4094(&local_80,lVar3,uVar9);
      pppuStack_e8 = (undefined ***)puVar10[1];
      local_f0 = (undefined **)*puVar10;
      local_e0 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
                    /* try { // try from 00363b24 to 00363b2f has its CatchHandler @ 00363dfc */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_f0);
      if (((ulong)local_f0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_e0);
      }
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_70);
      }
      if (((ulong)local_a0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_90);
      }
      uVar13 = 0;
    }
    else {
      uStack_78 = 0;
      local_70 = 0;
      local_80 = 0;
                    /* try { // try from 00363a04 to 00363a97 has its CatchHandler @ 00363fb4 */
      FUN_0031eff0(puVar8,&local_80);
      puVar6 = (ulong *)param_2[6];
      if (puVar6 != (ulong *)0x0) {
        puStack_58 = PTR_LAB_04373a98;
        local_60 = param_2;
        if (*puVar6 != 0xffffffffffffffff) {
          local_f0 = &puStack_58;
          pppuStack_e8 = &local_60;
          local_a0 = &local_f0;
          std::__call_once(puVar6,&local_a0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      iVar11 = *(int *)(param_2 + 7);
      if (iVar11 == 0xb) {
        puVar6 = (ulong *)FUN_0030d8b4(param_3,*(undefined4 *)((long)param_2 + 0x44));
        if (puVar6 != &local_80) {
          uVar9 = local_80 >> 1 & 0x7f;
          uVar4 = (ulong)&local_80 | 1;
          if ((local_80 & 1) != 0) {
            uVar9 = uStack_78;
            uVar4 = local_70;
          }
          FUN_00291910(puVar6,uVar4,uVar9);
        }
      }
      else {
        puVar6 = (ulong *)param_2[6];
        if (puVar6 != (ulong *)0x0) {
          puStack_58 = PTR_LAB_04373a98;
          local_60 = param_2;
          if (*puVar6 != 0xffffffffffffffff) {
            local_f0 = &puStack_58;
            pppuStack_e8 = &local_60;
            local_a0 = &local_f0;
                    /* try { // try from 00363c10 to 00363c1f has its CatchHandler @ 00363fb4 */
            std::__call_once(puVar6,&local_a0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          iVar11 = *(int *)(param_2 + 7);
        }
        if (iVar11 != 10) {
                    /* try { // try from 00363c2c to 00363c43 has its CatchHandler @ 00363d80 */
          FUN_0030f640(&local_f0,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                       ,0x1c02);
                    /* try { // try from 00363c44 to 00363c57 has its CatchHandler @ 00363d68 */
          uVar13 = FUN_0030f3ac(&local_f0,
                                "CHECK failed: (option_field->type()) == (FieldDescriptor::TYPE_GROUP): "
                               );
                    /* try { // try from 00363c58 to 00363c5f has its CatchHandler @ 00363d64 */
          FUN_0030f41c(auStack_148,uVar13);
          FUN_0030f658(&local_f0);
        }
                    /* try { // try from 00363c6c to 00363c9b has its CatchHandler @ 00363dec */
        uVar13 = FUN_0030d9d0(param_3,*(undefined4 *)((long)param_2 + 0x44));
        bVar5 = (local_80 & 1) != 0;
        uVar9 = (ulong)&local_80 | 1;
        if (bVar5) {
          uVar9 = local_70;
        }
        uVar1 = (uint)((byte)local_80 >> 1);
        if (bVar5) {
          uVar1 = (uint)uStack_78;
        }
        FUN_0030dd0c(uVar13,uVar9,uVar1);
      }
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_70);
      }
      uVar13 = 1;
    }
    FUN_003712c4(&local_140);
    FUN_00371194(&local_b8);
    local_110 = &PTR_LAB_04153ae8;
    if ((uStack_108 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f8);
    }
    FUN_0039f174(&local_110);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      FUN_002e2ea0(PTR_LAB_04373088,puVar8);
    }
  }
  return uVar13;
}


