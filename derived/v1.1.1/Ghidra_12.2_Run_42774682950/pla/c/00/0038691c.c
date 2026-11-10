/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038691c; name: FUN_0038691c
 */


byte FUN_0038691c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  double *pdVar8;
  float *pfVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined **local_78;
  long *plStack_70;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  
  if (*(char *)(*(long *)(param_3 + 0x78) + 0x4f) != '\0') {
    FUN_0030f640(&local_78,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x789);
                    /* try { // try from 0038695c to 0038696f has its CatchHandler @ 00386cd8 */
    uVar5 = FUN_0030f3ac(&local_78,"CHECK failed: !field->options().weak(): ");
                    /* try { // try from 00386970 to 00386977 has its CatchHandler @ 00386cd4 */
    FUN_0030f41c(&local_38,uVar5);
    FUN_0030f658(&local_78);
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar15 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar15 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar15 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar1 = (int)((ulong)(param_3 - *plVar15) >> 3) * 0x286bca1b;
    if (*(int *)(*(long *)(param_1 + 0x18) +
                (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) != -1) {
      uVar5 = FUN_003875f4(param_1,param_2);
      if (*(int *)(param_1 + 0x20) == -1) {
        bVar4 = FUN_003876d0(uVar5,0xffffffff);
      }
      else {
        if (*(char *)(param_3 + 0x43) == '\0') {
          plVar15 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar15 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
        }
        else {
          plVar15 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
        }
        uVar1 = (int)((ulong)(param_3 - *plVar15) >> 3) * 0x286bca1b;
        bVar4 = FUN_003876d0(uVar5,*(undefined4 *)
                                    (*(long *)(param_1 + 0x18) +
                                    (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar1 << 2)));
      }
      goto LAB_00386c0c;
    }
  }
  puVar6 = *(ulong **)(param_3 + 0x30);
  if (puVar6 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_04373a98;
    local_48 = param_3;
    if (*puVar6 != 0xffffffffffffffff) {
      local_78 = &puStack_40;
      plStack_70 = &local_48;
      local_38 = &local_78;
      std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  puVar2 = PTR_DAT_04373ab0;
  iVar13 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  if (iVar13 == 10) {
    if (*(long *)(param_1 + 8) == param_2) {
      bVar4 = 0;
      goto LAB_00386c0c;
    }
    puVar6 = (ulong *)FUN_003826d4(param_1,param_2,param_3);
    uVar14 = *puVar6;
    goto LAB_00386a98;
  }
  puVar6 = *(ulong **)(param_3 + 0x30);
  if (puVar6 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_04373a98;
    local_48 = param_3;
    if (*puVar6 != 0xffffffffffffffff) {
      local_78 = &puStack_40;
      plStack_70 = &local_48;
      local_38 = &local_78;
      std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    iVar13 = *(int *)(puVar2 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  }
  switch(iVar13) {
  case 1:
  case 8:
    piVar7 = (int *)FUN_0038f450(param_1,param_2,param_3);
    goto LAB_00386b94;
  case 2:
    puVar6 = (ulong *)FUN_0038f5fc(param_1,param_2,param_3);
    uVar14 = *puVar6;
    goto LAB_00386a98;
  case 3:
    piVar7 = (int *)FUN_0038f7a8(param_1,param_2,param_3);
LAB_00386b94:
    bVar3 = *piVar7 == 0;
    break;
  case 4:
    puVar6 = (ulong *)FUN_0038f954(param_1,param_2,param_3);
    uVar14 = *puVar6;
    goto LAB_00386a98;
  case 5:
    pdVar8 = (double *)FUN_0038fcac(param_1,param_2,param_3);
    bVar3 = *pdVar8 == 0.0;
    break;
  case 6:
    pfVar9 = (float *)FUN_0038fb00(param_1,param_2,param_3);
    bVar3 = *pfVar9 == 0.0;
    break;
  case 7:
    pcVar10 = (char *)FUN_0038f2a4(param_1,param_2,param_3);
    bVar3 = *pcVar10 == '\0';
    break;
  case 9:
    uVar14 = FUN_0038f118((long *)(param_1 + 8),param_3);
    if ((uVar14 & 1) == 0) {
      puVar12 = (undefined8 *)FUN_00382598(param_1,param_2,param_3);
      bVar4 = *(byte *)*puVar12;
      if ((bVar4 & 1) == 0) {
        uVar14 = (ulong)(bVar4 >> 1);
      }
      else {
        uVar14 = *(ulong *)((byte *)*puVar12 + 8);
      }
    }
    else {
      pbVar11 = (byte *)FUN_0038245c(param_1,param_2,param_3);
      uVar14 = (ulong)(*pbVar11 >> 1);
      if ((*pbVar11 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar11 + 8);
      }
    }
LAB_00386a98:
    bVar3 = uVar14 == 0;
    break;
  default:
    FUN_0030f640(&local_78,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x7bf);
                    /* try { // try from 00386c74 to 00386c87 has its CatchHandler @ 00386cd0 */
    uVar5 = FUN_0030f3ac(&local_78,"Reached impossible case in HasBit().");
                    /* try { // try from 00386c88 to 00386c8f has its CatchHandler @ 00386ccc */
    FUN_0030f41c(&local_38,uVar5);
    FUN_0030f658(&local_78);
    bVar4 = 0;
    goto LAB_00386c0c;
  }
  bVar4 = !bVar3;
LAB_00386c0c:
  return bVar4 & 1;
}


