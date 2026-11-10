/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003862a4; name: FUN_003862a4
 */


void FUN_003862a4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined **local_88;
  long *plStack_80;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  
  if ((*(int *)(param_3 + 0x18) == 1) && (*(char *)(**(long **)(param_3 + 0x20) + 0x41) != '\0')) {
    FUN_00383a6c(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                           (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4
                                ) * -0x55555554)) == 0) {
    return;
  }
  lVar3 = FUN_00342e08(*param_1);
  uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  puVar7 = (ulong *)(uVar8 & 0xfffffffffffffffe);
  if ((uVar8 & 1) != 0) {
    puVar7 = (ulong *)*puVar7;
  }
  if (puVar7 == (ulong *)0x0) {
    puVar7 = *(ulong **)(lVar3 + 0x30);
    if ((puVar7 != (ulong *)0x0) &&
       (puStack_50 = PTR_LAB_04373a98, local_58 = lVar3, *puVar7 != 0xffffffffffffffff)) {
      local_88 = &puStack_50;
      plStack_80 = &local_58;
      local_48 = &local_88;
      std::__call_once(puVar7,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar6 = *(uint *)(lVar3 + 0x38);
    if (*(int *)(PTR_DAT_04373ab0 + (ulong)uVar6 * 4) == 10) {
      uVar8 = FUN_0038fe58(param_1 + 1,lVar3);
      pbVar10 = *(byte **)(param_2 + (uVar8 & 0xffffffff));
      if (pbVar10 != (byte *)0x0) {
        (*(code *)**(undefined8 **)pbVar10)(pbVar10);
LAB_00386480:
        FUN_002e2ea0(PTR_LAB_04373088,pbVar10);
        iVar2 = *(int *)(param_3 + 0x18);
        goto joined_r0x00386350;
      }
    }
    else if (*(int *)(PTR_DAT_04373ab0 + (ulong)uVar6 * 4) == 9) {
      lVar1 = param_1[1];
      if (*(char *)(lVar3 + 0x43) == '\0') {
        plVar9 = (long *)(*(long *)(lVar3 + 0x50) + 0x28);
      }
      else if (*(long *)(lVar3 + 0x60) == 0) {
        plVar9 = (long *)(*(long *)(lVar3 + 0x28) + 0x80);
      }
      else {
        plVar9 = (long *)(*(long *)(lVar3 + 0x60) + 0x50);
      }
      uVar12 = (int)((ulong)(lVar3 - *plVar9) >> 3) * 0x286bca1b;
      uVar12 = *(uint *)(param_1[2] +
                        (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2));
      puVar7 = *(ulong **)(lVar3 + 0x30);
      if (puVar7 != (ulong *)0x0) {
        puStack_50 = PTR_LAB_04373a98;
        local_58 = lVar3;
        if (*puVar7 != 0xffffffffffffffff) {
          local_88 = &puStack_50;
          plStack_80 = &local_58;
          local_48 = &local_88;
          std::__call_once(puVar7,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        uVar6 = *(uint *)(lVar3 + 0x38);
      }
      if ((uVar6 == 0xc) || (uVar6 == 9)) {
        uVar12 = uVar12 & 0xfffffffe;
      }
      pbVar11 = *(byte **)(lVar1 + (ulong)uVar12);
      puVar5 = (undefined8 *)FUN_0038ae60(param_1,param_2,lVar3);
      uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      puVar7 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      if ((uVar8 & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
      if ((puVar7 == (ulong *)0x0) &&
         (pbVar10 = (byte *)*puVar5, pbVar10 != pbVar11 && pbVar10 != (byte *)0x0)) {
        if ((*pbVar10 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar10 + 0x10));
        }
        goto LAB_00386480;
      }
    }
  }
  iVar2 = *(int *)(param_3 + 0x18);
joined_r0x00386350:
  if ((iVar2 == 1) && (*(char *)(**(long **)(param_3 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(&local_88,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x768);
                    /* try { // try from 0038637c to 0038638f has its CatchHandler @ 00386594 */
    uVar4 = FUN_0030f3ac(&local_88,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00386390 to 00386397 has its CatchHandler @ 00386590 */
    FUN_0030f41c(&local_48,uVar4);
    FUN_0030f658(&local_88);
  }
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4) *
                -0x55555554)) = 0;
  return;
}


