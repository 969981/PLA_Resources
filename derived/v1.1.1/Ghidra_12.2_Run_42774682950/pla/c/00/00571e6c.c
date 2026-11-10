/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00571e6c; name: FUN_00571e6c
 */


undefined8 FUN_00571e6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 *local_168;
  long local_160;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined8 local_130;
  undefined8 local_128;
  byte local_108 [16];
  ulong local_f8;
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_130 = 0;
  local_b0 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8[0] = 0;
  local_78 = 0;
  local_128 = 0;
  local_138 = (char *)0x6570797408;
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_90 = 0;
                    /* try { // try from 00571ee4 to 00571eef has its CatchHandler @ 00572410 */
  local_98 = &local_90;
  lVar5 = FUN_00572e24(param_2 + 0x20,&local_138);
  if (((ulong)local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  if (param_2 + 0x28 == lVar5) {
                    /* try { // try from 00571f38 to 00571f93 has its CatchHandler @ 005723fc */
    FUN_002f2c60(&local_138,"\"type\" field not present");
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xe0,&local_138,0,0);
    if (local_60 < local_58) goto LAB_00571fd0;
    lVar5 = (long)local_60 - (long)local_68 >> 3;
    uVar11 = lVar5 + 1;
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
LAB_00572040:
    if ((ulong)((long)local_58 - (long)local_68 >> 3) < 0xfffffffffffffff) {
      uVar10 = (long)local_58 - (long)local_68 >> 2;
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      if (uVar11 != 0) goto LAB_0057206c;
      lVar6 = 0;
    }
    else {
      uVar11 = 0x1fffffffffffffff;
LAB_0057206c:
      lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
    }
    puVar1 = (undefined8 *)(lVar6 + lVar5 * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar11 * 8);
    *puVar1 = uVar7;
    sVar8 = (long)local_60 - (long)local_68;
    puVar12 = (undefined8 *)((long)puVar1 - sVar8);
    if (0 < (long)sVar8) {
      memcpy(puVar12,local_68,sVar8);
    }
    bVar3 = local_68 != (undefined8 *)0x0;
    local_68 = puVar12;
    local_60 = puVar1 + 1;
    local_58 = puVar2;
    if (bVar3) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  else if (*(int *)(lVar5 + 0x38) == 4) {
    if ((local_d0 & 1) != 0) {
      *local_c0 = 0;
      uStack_c8 = 0;
      if ((local_d0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
      }
    }
    uStack_c8 = *(ulong *)(lVar5 + 0x48);
    local_d0 = *(ulong *)(lVar5 + 0x40);
    local_c0 = *(undefined1 **)(lVar5 + 0x50);
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(ulong *)(lVar5 + 0x40) = 0;
  }
  else {
                    /* try { // try from 00571f94 to 00571fbf has its CatchHandler @ 005723f4 */
    FUN_002f2c60(&local_138,"\"type\" field is not a string");
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xe3,&local_138,0,0);
    if (local_58 <= local_60) {
      lVar5 = (long)local_60 - (long)local_68 >> 3;
      uVar11 = lVar5 + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 005723e0 to 005723e7 has its CatchHandler @ 005723f4 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_00572040;
    }
LAB_00571fd0:
    *local_60 = uVar7;
    local_60 = local_60 + 1;
  }
  local_130 = 0;
  local_128 = 0;
  local_138 = (char *)0x6769666e6f630c;
                    /* try { // try from 005720e8 to 005720f3 has its CatchHandler @ 00572400 */
  lVar5 = FUN_00572e24(param_2 + 0x20,&local_138);
  if (((ulong)local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  if (param_2 + 0x28 == lVar5) goto LAB_0057225c;
  iVar4 = *(int *)(lVar5 + 0x38);
  if (iVar4 == 5) {
    *(undefined4 *)(lVar5 + 0x38) = 0;
    local_b8[0] = iVar4;
    FUN_003e9f80(&local_98,local_90);
    local_98 = *(long **)(lVar5 + 0x58);
    plVar9 = (long *)(lVar5 + 0x60);
    local_90 = *plVar9;
    local_88 = *(long *)(lVar5 + 0x68);
    if (local_88 == 0) {
      local_98 = &local_90;
    }
    else {
      *(long **)(local_90 + 0x10) = &local_90;
      *(long **)(lVar5 + 0x58) = plVar9;
      *plVar9 = 0;
      *(undefined8 *)(lVar5 + 0x68) = 0;
    }
    goto LAB_0057225c;
  }
                    /* try { // try from 00572168 to 00572193 has its CatchHandler @ 005723f0 */
  FUN_002f2c60(&local_138,"\"config\" field is not an object");
  uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                       ,0xeb,&local_138,0,0);
  if (local_60 < local_58) {
    *local_60 = uVar7;
    local_60 = local_60 + 1;
    goto LAB_0057225c;
  }
  lVar5 = (long)local_60 - (long)local_68 >> 3;
  uVar11 = lVar5 + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 005723e8 to 005723ef has its CatchHandler @ 005723f0 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)local_58 - (long)local_68 >> 3) < 0xfffffffffffffff) {
    uVar10 = (long)local_58 - (long)local_68 >> 2;
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) goto LAB_00572204;
    lVar6 = 0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_00572204:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
  }
  puVar1 = (undefined8 *)(lVar6 + lVar5 * 8);
  puVar2 = (undefined8 *)(lVar6 + uVar11 * 8);
  *puVar1 = uVar7;
  sVar8 = (long)local_60 - (long)local_68;
  puVar12 = (undefined8 *)((long)puVar1 - sVar8);
  if (0 < (long)sVar8) {
    memcpy(puVar12,local_68,sVar8);
  }
  bVar3 = local_68 != (undefined8 *)0x0;
  local_68 = puVar12;
  local_60 = puVar1 + 1;
  local_58 = puVar2;
  if (bVar3) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
LAB_0057225c:
  uVar11 = local_d0 >> 1 & 0x7f;
  if ((local_d0 & 1) != 0) {
    uVar11 = uStack_c8;
  }
  if (uVar11 != 0) {
                    /* try { // try from 00572278 to 0057227f has its CatchHandler @ 005723f8 */
    FUN_00573418(param_4 + 0x18,&local_d0);
  }
  if (local_68 == local_60) {
    uVar7 = 0;
  }
  else {
    local_138 = "errors parsing index ";
    local_130 = 0x15;
                    /* try { // try from 005722a4 to 005722d3 has its CatchHandler @ 00572444 */
    local_160 = FUN_002ed6c0(param_3,auStack_158);
    local_160 = local_160 - (long)auStack_158;
    local_168 = auStack_158;
    if (local_160 < 0) {
                    /* try { // try from 005723c0 to 005723df has its CatchHandler @ 00572444 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002eced0(local_108,&local_138,&local_168);
    uVar11 = (ulong)local_108 | 1;
    if ((local_108[0] & 1) != 0) {
      uVar11 = local_f8;
    }
                    /* try { // try from 005722e8 to 0057230b has its CatchHandler @ 00572424 */
    FUN_002f2ff0(auStack_f0,uVar11);
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xf7,auStack_f0,0,0);
    if ((local_108[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f8);
    }
    if (local_60 != local_68) {
      uVar11 = 0;
      do {
                    /* try { // try from 0057233c to 00572343 has its CatchHandler @ 00572448 */
        uVar7 = FUN_002f13f0(uVar7,local_68[uVar11]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulong)((long)local_60 - (long)local_68 >> 3));
    }
  }
  FUN_003ee5f8(local_b8);
  if ((local_d0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c0);
  }
  if (local_68 != (undefined8 *)0x0) {
    local_60 = local_68;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar7;
}


