/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00383a6c; name: FUN_00383a6c
 */


void FUN_00383a6c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  long local_80;
  undefined *puStack_78;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined ***local_38;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"ClearField","Field does not match message type.");
  }
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar11 = *(uint *)(param_1 + 5);
    if (uVar11 == 0xffffffff) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 00383ae0 to 00383af3 has its CatchHandler @ 003840cc */
      uVar4 = FUN_0030f3ac(&local_70,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00383af4 to 00383afb has its CatchHandler @ 003840c8 */
      FUN_0030f41c(&local_38,uVar4);
      FUN_0030f658(&local_70);
      uVar11 = *(uint *)(param_1 + 5);
    }
    FUN_0032e238(param_2 + (ulong)uVar11,*(undefined4 *)(param_3 + 0x44));
    return;
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    puVar5 = *(ulong **)(param_3 + 0x30);
    if (puVar5 != (ulong *)0x0) {
      puStack_78 = PTR_LAB_04373a98;
      local_80 = param_3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_70 = &puStack_78;
        local_38 = &local_70;
        puStack_68 = (undefined1 *)&local_80;
        std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar11 = *(uint *)(param_3 + 0x38);
    switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar11 * 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar6 = FUN_0038fe58(param_1 + 1,param_3);
      *(undefined4 *)(param_2 + (uVar6 & 0xffffffff)) = 0;
      return;
    case 9:
      uVar6 = FUN_0038fe58(param_1 + 1,param_3);
      FUN_0032b96c(param_2 + (uVar6 & 0xffffffff));
      return;
    case 10:
      goto switchD_00383bac_caseD_a;
    default:
      return;
    }
  }
  lVar13 = *(long *)(param_3 + 0x58);
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) != 1) {
LAB_00383cdc:
      if (*(int *)(param_2 +
                  (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                               (int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x10) + 0x30)) >>
                                    4) * -0x55555554)) == *(int *)(param_3 + 0x44)) {
        FUN_003862a4(param_1,param_2,*(undefined8 *)(param_3 + 0x58));
        return;
      }
      return;
    }
    if (*(char *)(**(long **)(lVar13 + 0x20) + 0x41) == '\0') {
      if (*(char *)(**(long **)(lVar13 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(&local_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 00383cb8 to 00383ccb has its CatchHandler @ 003840c4 */
        uVar4 = FUN_0030f3ac(&local_70,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00383ccc to 00383cd3 has its CatchHandler @ 003840c0 */
        FUN_0030f41c(&local_38,uVar4);
        FUN_0030f658(&local_70);
      }
      goto LAB_00383cdc;
    }
  }
  uVar6 = FUN_0038691c(param_1,param_2,param_3);
  if ((uVar6 & 1) == 0) {
    return;
  }
  FUN_00387010(param_1,param_2,param_3);
  puVar5 = *(ulong **)(param_3 + 0x30);
  if (puVar5 != (ulong *)0x0) {
    puStack_78 = PTR_LAB_04373a98;
    local_80 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_70 = &puStack_78;
      local_38 = &local_70;
      puStack_68 = (undefined1 *)&local_80;
      std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (9 < *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) - 1U) {
    return;
  }
  plVar1 = param_1 + 1;
  switch(*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4)) {
  default:
    uVar10 = *(undefined4 *)(param_3 + 0x90);
    goto LAB_00383e08;
  case 2:
  case 4:
  case 5:
    uVar4 = *(undefined8 *)(param_3 + 0x90);
    uVar6 = FUN_0038fe58(plVar1,param_3);
    *(undefined8 *)(param_2 + (uVar6 & 0xffffffff)) = uVar4;
    break;
  case 7:
    uVar3 = *(undefined1 *)(param_3 + 0x90);
    uVar6 = FUN_0038fe58(plVar1,param_3);
    *(undefined1 *)(param_2 + (uVar6 & 0xffffffff)) = uVar3;
    break;
  case 8:
    lVar13 = FUN_0034484c(param_3);
    uVar10 = *(undefined4 *)(lVar13 + 0x10);
LAB_00383e08:
    uVar6 = FUN_0038fe58(plVar1,param_3);
    *(undefined4 *)(param_2 + (uVar6 & 0xffffffff)) = uVar10;
    break;
  case 9:
    uVar6 = FUN_0038f118(plVar1,param_3);
    lVar13 = param_1[1];
    if ((uVar6 & 1) == 0) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar11 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar11 = *(uint *)(param_1[2] +
                        (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2));
      puVar5 = *(ulong **)(param_3 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_78 = PTR_LAB_04373a98;
        local_80 = param_3;
        if (*puVar5 != 0xffffffffffffffff) {
          local_70 = &puStack_78;
          local_38 = &local_70;
          puStack_68 = (undefined1 *)&local_80;
          std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar11 = uVar11 & 0xfffffffe;
      }
      pbVar14 = *(byte **)(lVar13 + (ulong)uVar11);
      uVar6 = FUN_0038fe58(plVar1,param_3);
      uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      puVar5 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      if ((uVar8 & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      if (((puVar5 == (ulong *)0x0) &&
          (pbVar9 = *(byte **)(param_2 + (uVar6 & 0xffffffff)), pbVar9 != pbVar14)) &&
         (pbVar9 != (byte *)0x0)) {
        if ((*pbVar9 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar9 + 0x10));
        }
        FUN_002e2ea0(PTR_LAB_04373088,pbVar9);
      }
      *(byte **)(param_2 + (uVar6 & 0xffffffff)) = pbVar14;
    }
    else {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar11 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar11 = *(uint *)(param_1[2] +
                        (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2));
      puVar5 = *(ulong **)(param_3 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_78 = PTR_LAB_04373a98;
        local_80 = param_3;
        if (*puVar5 != 0xffffffffffffffff) {
          local_70 = &puStack_78;
          local_38 = &local_70;
          puStack_68 = (undefined1 *)&local_80;
          std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar11 = uVar11 & 0xfffffffe;
      }
      pbVar14 = (byte *)(lVar13 + (ulong)uVar11);
      uVar6 = FUN_0038fe58(plVar1,param_3);
      pbVar9 = (byte *)(param_2 + (uVar6 & 0xffffffff));
      if (pbVar9 != pbVar14) {
        uVar6 = *(ulong *)(pbVar14 + 8);
        pbVar2 = *(byte **)(pbVar14 + 0x10);
        if ((*pbVar14 & 1) == 0) {
          pbVar2 = pbVar14 + 1;
          uVar6 = (ulong)(*pbVar14 >> 1);
        }
        FUN_00291910(pbVar9,pbVar2,uVar6);
      }
    }
    break;
  case 10:
    if ((int)param_1[4] == -1) {
      uVar6 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      puVar5 = (ulong *)(uVar6 & 0xfffffffffffffffe);
      if ((uVar6 & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      if (puVar5 == (ulong *)0x0) {
        uVar6 = FUN_0038fe58(plVar1,param_3);
        puVar12 = *(undefined8 **)(param_2 + (uVar6 & 0xffffffff));
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12);
          FUN_002e2ea0(PTR_LAB_04373088,puVar12);
        }
      }
      uVar6 = FUN_0038fe58(plVar1,param_3);
      *(undefined8 *)(param_2 + (uVar6 & 0xffffffff)) = 0;
    }
    else {
      uVar6 = FUN_0038fe58(plVar1,param_3);
      (**(code **)(**(long **)(param_2 + (uVar6 & 0xffffffff)) + 0x28))();
    }
  }
  return;
switchD_00383bac_caseD_a:
  puVar5 = *(ulong **)(param_3 + 0x30);
  if (puVar5 != (ulong *)0x0) {
    puStack_78 = PTR_LAB_04373a98;
    local_80 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_70 = &puStack_78;
      local_38 = &local_70;
      puStack_68 = (undefined1 *)&local_80;
      std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar11 = *(uint *)(param_3 + 0x38);
  }
  if ((uVar11 == 0xb) && (uVar6 = FUN_00344344(param_3), (uVar6 & 1) != 0)) {
    uVar6 = FUN_0038fe58(param_1 + 1,param_3);
    (**(code **)(*(long *)(param_2 + (uVar6 & 0xffffffff)) + 0x58))();
    return;
  }
  uVar6 = FUN_0038fe58(param_1 + 1,param_3);
  FUN_00387124(param_2 + (uVar6 & 0xffffffff));
  return;
}


