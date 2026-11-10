/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00345e9c; name: FUN_00345e9c
 */


void FUN_00345e9c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  long lVar18;
  undefined8 **local_68;
  undefined8 **local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 ***local_38;
  
  pbVar13 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar7 = PTR_DAT_043730c0;
  puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar12 = (ulong *)*puVar12;
  }
  pbVar15 = *(byte **)(param_2 + 0x18);
  if (pbVar15 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x18),puVar12);
  }
  else if (pbVar15 != pbVar13) {
    uVar9 = *(ulong *)(pbVar13 + 8);
    pbVar4 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar4 = pbVar13 + 1;
      uVar9 = (ulong)(*pbVar13 >> 1);
    }
    FUN_00291910(pbVar15,pbVar4,uVar9);
  }
  uVar14 = *(uint *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)((long)param_1 + 0x44);
  *(uint *)(param_2 + 0x10) = uVar14 | 0x40;
  *(undefined4 *)(param_2 + 0x48) = uVar5;
  if (*(char *)((long)param_1 + 0x42) == '\0') {
LAB_00345f8c:
    cVar6 = *(char *)((long)param_1 + 0x41);
  }
  else {
    pbVar13 = (byte *)param_1[4];
    *(uint *)(param_2 + 0x10) = uVar14 | 0x50;
    puVar1 = (undefined8 *)(param_2 + 0x38);
    puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 != puVar7) {
      if (pbVar15 != pbVar13) {
        uVar9 = *(ulong *)(pbVar13 + 8);
        pbVar4 = *(byte **)(pbVar13 + 0x10);
        if ((*pbVar13 & 1) == 0) {
          pbVar4 = pbVar13 + 1;
          uVar9 = (ulong)(*pbVar13 >> 1);
        }
        FUN_00291910(pbVar15,pbVar4,uVar9);
      }
      goto LAB_00345f8c;
    }
    FUN_0029175c(puVar1,puVar12);
    cVar6 = *(char *)((long)param_1 + 0x41);
  }
  if (cVar6 != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x100;
    *(undefined1 *)(param_2 + 0x50) = 1;
  }
  uVar5 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar9 = FUN_003a2d10(uVar5);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("PROTOBUF_NAMESPACE_ID::FieldDescriptorProto_Label_IsValid(value)",
                  "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                  ,0x21ac,"_internal_set_label");
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
  *(undefined4 *)(param_2 + 0x54) = uVar5;
  puVar8 = PTR_LAB_04373a98;
  puVar12 = (ulong *)param_1[6];
  if (puVar12 != (ulong *)0x0) {
    local_48 = (undefined8 *)PTR_LAB_04373a98;
    local_50 = param_1;
    if (*puVar12 != 0xffffffffffffffff) {
      local_68 = &local_48;
      local_60 = &local_50;
      local_38 = &local_68;
      std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 7);
  uVar9 = FUN_003a2d00(uVar5);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("PROTOBUF_NAMESPACE_ID::FieldDescriptorProto_Type_IsValid(value)",
                  "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                  ,0x21c9,"_internal_set_type");
  }
  uVar14 = *(uint *)(param_2 + 0x10) | 0x400;
  *(uint *)(param_2 + 0x10) = uVar14;
  *(undefined4 *)(param_2 + 0x58) = uVar5;
  if (*(char *)((long)param_1 + 0x43) != '\0') {
    if (*(char *)(param_1[10] + 0x8d) == '\0') {
      FUN_00346788(param_2,&DAT_0389ff53);
      uVar14 = *(uint *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x10) = uVar14 | 2;
    plVar2 = (long *)(param_2 + 0x20);
    puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar2;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      puVar10 = (undefined *)*plVar2;
    }
    if (puVar10 == puVar7) {
      FUN_0029175c(plVar2,puVar12,PTR_DAT_043730c0);
      puVar10 = (undefined *)*plVar2;
    }
    pbVar15 = *(byte **)(param_1[10] + 8);
    uVar9 = *(ulong *)(pbVar15 + 8);
    pbVar13 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar13 = pbVar15 + 1;
      uVar9 = (ulong)(*pbVar15 >> 1);
    }
    FUN_002e4094(puVar10,pbVar13,uVar9);
  }
  puVar11 = (ulong *)param_1[6];
  puVar12 = (ulong *)0x0;
  if (puVar11 != (ulong *)0x0) {
    local_48 = (undefined8 *)puVar8;
    local_50 = param_1;
    if (*puVar11 != 0xffffffffffffffff) {
      local_68 = &local_48;
      local_60 = &local_50;
      local_38 = &local_68;
      std::__call_once(puVar11,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    puVar12 = (ulong *)param_1[6];
  }
  uVar14 = *(uint *)(param_1 + 7);
  if ((uVar14 | 1) == 0xb) {
    if ((puVar12 != (ulong *)0x0) && (local_48 = param_1, *puVar12 != 0xffffffffffffffff)) {
      local_60 = &local_48;
      local_68 = (undefined8 **)puVar8;
      local_38 = &local_68;
      std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    lVar16 = param_1[0xd];
    if (*(char *)(lVar16 + 0x8c) != '\0') {
      *(undefined4 *)(param_2 + 0x58) = 1;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffbff;
    }
    puVar12 = (ulong *)param_1[6];
    if (puVar12 != (ulong *)0x0) {
      local_48 = param_1;
      if (*puVar12 != 0xffffffffffffffff) {
        local_60 = &local_48;
        local_68 = (undefined8 **)puVar8;
        local_38 = &local_68;
        std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      lVar16 = param_1[0xd];
    }
    if (*(char *)(lVar16 + 0x8d) == '\0') {
      FUN_00346938(param_2,&DAT_0389ff53);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    puVar1 = (undefined8 *)(param_2 + 0x28);
    puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      puVar10 = (undefined *)*puVar1;
      if (puVar10 != puVar7) goto LAB_003461d0;
LAB_00346354:
      FUN_0029175c(puVar1,puVar12,PTR_DAT_043730c0);
      puVar10 = (undefined *)*puVar1;
      puVar12 = (ulong *)param_1[6];
    }
    else {
      puVar12 = (ulong *)*puVar12;
      puVar10 = (undefined *)*puVar1;
      if (puVar10 == puVar7) goto LAB_00346354;
LAB_003461d0:
      puVar12 = (ulong *)param_1[6];
    }
    if ((puVar12 != (ulong *)0x0) && (local_48 = param_1, *puVar12 != 0xffffffffffffffff)) {
      local_60 = &local_48;
      local_68 = (undefined8 **)puVar8;
      local_38 = &local_68;
      std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    lVar16 = param_1[0xd];
LAB_003463a8:
    pbVar15 = *(byte **)(lVar16 + 8);
    uVar9 = *(ulong *)(pbVar15 + 8);
    pbVar13 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar13 = pbVar15 + 1;
      uVar9 = (ulong)(*pbVar15 >> 1);
    }
    FUN_002e4094(puVar10,pbVar13,uVar9);
  }
  else {
    if (puVar12 != (ulong *)0x0) {
      local_48 = (undefined8 *)puVar8;
      local_50 = param_1;
      if (*puVar12 != 0xffffffffffffffff) {
        local_68 = &local_48;
        local_60 = &local_50;
        local_38 = &local_68;
        std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar14 = *(uint *)(param_1 + 7);
    }
    if (uVar14 == 0xe) {
      puVar12 = (ulong *)param_1[6];
      if ((puVar12 != (ulong *)0x0) && (local_48 = param_1, *puVar12 != 0xffffffffffffffff)) {
        local_60 = &local_48;
        local_68 = (undefined8 **)puVar8;
        local_38 = &local_68;
        std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      if (*(char *)(param_1[0xe] + 0x29) == '\0') {
        FUN_00346938(param_2,&DAT_0389ff53);
      }
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
      puVar1 = (undefined8 *)(param_2 + 0x28);
      puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) == 0) {
        puVar10 = (undefined *)*puVar1;
        if (puVar10 != puVar7) goto LAB_003462cc;
LAB_00346388:
        FUN_0029175c(puVar1,puVar12,PTR_DAT_043730c0);
        puVar10 = (undefined *)*puVar1;
        puVar12 = (ulong *)param_1[6];
      }
      else {
        puVar12 = (ulong *)*puVar12;
        puVar10 = (undefined *)*puVar1;
        if (puVar10 == puVar7) goto LAB_00346388;
LAB_003462cc:
        puVar12 = (ulong *)param_1[6];
      }
      if ((puVar12 != (ulong *)0x0) && (local_48 = param_1, *puVar12 != 0xffffffffffffffff)) {
        local_60 = &local_48;
        local_68 = (undefined8 **)puVar8;
        local_38 = &local_68;
        std::__call_once(puVar12,&local_38,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      lVar16 = param_1[0xe];
      goto LAB_003463a8;
    }
  }
  if (*(char *)(param_1 + 8) == '\0') goto LAB_00346458;
  FUN_00344354(&local_68,param_1,0);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  puVar12 = (ulong *)(param_2 + 0x30);
  puVar11 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    pppuVar17 = (undefined8 ***)*puVar12;
    if (pppuVar17 != (undefined8 ***)puVar7) goto LAB_00346410;
LAB_003464fc:
                    /* try { // try from 003464fc to 00346503 has its CatchHandler @ 00346550 */
    FUN_0029175c(puVar12,puVar11,&local_68);
  }
  else {
    puVar11 = (ulong *)*puVar11;
    pppuVar17 = (undefined8 ***)*puVar12;
    if (pppuVar17 == (undefined8 ***)puVar7) goto LAB_003464fc;
LAB_00346410:
    if (pppuVar17 != &local_68) {
      ppuVar3 = (undefined8 **)((ulong)local_68 >> 1 & 0x7f);
      uVar9 = (ulong)&local_68 | 1;
      if (((ulong)local_68 & 1) != 0) {
        ppuVar3 = local_60;
        uVar9 = local_58;
      }
                    /* try { // try from 00346438 to 0034643f has its CatchHandler @ 00346550 */
      FUN_00291910(pppuVar17,uVar9,ppuVar3);
    }
  }
  if (((ulong)local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
LAB_00346458:
  lVar16 = param_1[0xb];
  if ((lVar16 != 0) && (*(char *)((long)param_1 + 0x43) == '\0')) {
    lVar18 = *(long *)(*(long *)(lVar16 + 0x10) + 0x30);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
    *(int *)(param_2 + 0x4c) = (int)((ulong)(lVar16 - lVar18) >> 4) * -0x55555555;
  }
  lVar18 = param_1[0xf];
  lVar16 = FUN_003b6cf4();
  if (lVar18 != lVar16) {
    lVar16 = *(long *)(param_2 + 0x40);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
    if (lVar16 == 0) {
      puVar12 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar12 = (ulong *)*puVar12;
      }
      lVar16 = FUN_003c06c0(puVar12);
      *(long *)(param_2 + 0x40) = lVar16;
    }
    FUN_003b7968(lVar16,param_1[0xf]);
  }
  return;
}


