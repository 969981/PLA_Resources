/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003840e0; name: FUN_003840e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003840e0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  void *__src;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  void *__dest;
  undefined8 *******pppppppuVar15;
  ulong local_140;
  ulong local_138;
  undefined8 ******local_130;
  long *local_128;
  ulong local_120;
  undefined8 ******local_118;
  void *local_110;
  byte local_108 [16];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *******local_b8;
  undefined8 ******ppppppuStack_b0;
  void *local_a8;
  undefined8 ******local_88;
  undefined8 ******local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  undefined8 ******ppppppuStack_68;
  
  iVar12 = *(int *)(param_4 + 0x18);
  if ((iVar12 == 1) && (*(char *)(**(long **)(param_4 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x1df);
                    /* try { // try from 00384140 to 00384153 has its CatchHandler @ 00384d28 */
    uVar3 = FUN_0030f3ac(&local_b8,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00384154 to 0038415b has its CatchHandler @ 00384d24 */
    FUN_0030f41c(&local_70,uVar3);
    FUN_0030f658(&local_b8);
    iVar12 = *(int *)(param_4 + 0x18);
  }
  if ((iVar12 == 1) && (*(char *)(**(long **)(param_4 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x761);
                    /* try { // try from 00384198 to 003841ab has its CatchHandler @ 00384d20 */
    uVar3 = FUN_0030f3ac(&local_b8,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 003841ac to 003841b3 has its CatchHandler @ 00384d1c */
    FUN_0030f41c(&local_70,uVar3);
    FUN_0030f658(&local_b8);
    iVar12 = *(int *)(param_4 + 0x18);
  }
  uVar14 = (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                        (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x10) + 0x30)) >> 4) *
                        -0x55555554);
  iVar1 = *(int *)(param_2 + uVar14);
  if ((iVar12 == 1) && (*(char *)(**(long **)(param_4 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x761);
                    /* try { // try from 00384214 to 00384227 has its CatchHandler @ 00384d18 */
    uVar3 = FUN_0030f3ac(&local_b8,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00384228 to 0038422f has its CatchHandler @ 00384d14 */
    FUN_0030f41c(&local_70,uVar3);
    FUN_0030f658(&local_b8);
    uVar14 = (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                          (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x10) + 0x30)) >> 4)
                          * -0x55555554);
  }
  iVar12 = *(int *)(param_3 + uVar14);
  if (iVar1 == 0) {
    ppppppuVar4 = (undefined8 ******)0x0;
    local_128 = (long *)0x0;
joined_r0x0038433c:
    local_130 = (undefined8 ******)0x0;
    local_138 = 0;
    local_140 = 0;
    pppppppuVar15 = (undefined8 *******)0x0;
    __src = (void *)0x0;
    goto joined_r0x00384750;
  }
                    /* try { // try from 00384260 to 00384307 has its CatchHandler @ 00384d40 */
  ppppppuVar4 = (undefined8 ******)FUN_00342e08(*param_1,iVar1);
  pppppuVar5 = ppppppuVar4[6];
  if ((pppppuVar5 != (undefined8 *****)0x0) &&
     (local_78 = (undefined8 *******)PTR_LAB_04373a98, local_80 = ppppppuVar4,
     *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
    local_b8 = &local_78;
    ppppppuStack_b0 = &local_80;
    local_70 = &local_b8;
    std::__call_once((ulong *)pppppuVar5,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(ppppppuVar4 + 7) * 4)) {
  case 1:
    puVar9 = (undefined4 *)FUN_0038f450(param_1,param_2,ppppppuVar4);
    local_bc = *puVar9;
    break;
  case 2:
    puVar7 = (undefined8 *)FUN_0038f5fc(param_1,param_2,ppppppuVar4);
    local_128 = (long *)0x0;
    local_c8 = *puVar7;
    plVar8 = local_128;
    goto joined_r0x00384750;
  case 3:
    puVar9 = (undefined4 *)FUN_0038f7a8(param_1,param_2,ppppppuVar4);
    local_cc = *puVar9;
    break;
  case 4:
    puVar7 = (undefined8 *)FUN_0038f954(param_1,param_2,ppppppuVar4);
    local_d8 = *puVar7;
    break;
  case 5:
                    /* try { // try from 003843f8 to 00384683 has its CatchHandler @ 00384d40 */
    puVar7 = (undefined8 *)FUN_0038fcac(param_1,param_2,ppppppuVar4);
    local_128 = (long *)0x0;
    local_e8 = *puVar7;
    goto joined_r0x0038433c;
  case 6:
    puVar9 = (undefined4 *)FUN_0038fb00(param_1,param_2,ppppppuVar4);
    local_dc = *puVar9;
    goto joined_r0x0038469c;
  case 7:
    puVar10 = (undefined1 *)FUN_0038f2a4(param_1,param_2,ppppppuVar4);
    local_ec[0] = *puVar10;
joined_r0x0038469c:
    local_138 = 0;
    local_140 = 0;
    local_a8 = (void *)0x0;
    local_130 = (undefined8 ******)0x0;
    pppppppuVar15 = (undefined8 *******)0x0;
    goto joined_r0x00384788;
  case 8:
    puVar9 = (undefined4 *)FUN_0038f450(param_1,param_2,ppppppuVar4);
    local_140 = 0;
    local_138 = 0;
    pppppppuVar15 = (undefined8 *******)0x0;
    local_a8 = (void *)0x0;
    local_130 = (undefined8 ******)0x0;
    local_f0 = *puVar9;
    goto joined_r0x00384788;
  case 9:
                    /* try { // try from 00384758 to 0038476b has its CatchHandler @ 00384cec */
    FUN_00384d60(&local_b8,param_1,param_2,ppppppuVar4);
    local_140 = (ulong)local_b8 & 0xffffffffffff0000;
    local_138 = (ulong)local_b8 & 0xff00;
    local_130 = ppppppuStack_b0;
    pppppppuVar15 = local_b8;
joined_r0x00384788:
    local_128 = (long *)0x0;
    __src = local_a8;
    goto joined_r0x00384750;
  case 10:
    plVar8 = (long *)FUN_0038ccac(param_1,param_2,ppppppuVar4,0);
    uVar14 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
    plVar13 = (long *)(uVar14 & 0xfffffffffffffffe);
    if ((uVar14 & 1) != 0) {
      plVar13 = (long *)*plVar13;
    }
    if ((plVar8 != (long *)0x0) && (plVar13 != (long *)0x0)) {
      local_128 = (long *)(**(code **)(*plVar8 + 0x18))();
      (**(code **)(*local_128 + 0x70))(local_128,plVar8);
      goto joined_r0x0038433c;
    }
    goto joined_r0x00384750;
  default:
                    /* try { // try from 003846a4 to 003846bb has its CatchHandler @ 00384cf4 */
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x20b);
                    /* try { // try from 003846bc to 0038472f has its CatchHandler @ 00384d10 */
    uVar3 = FUN_0030f3ac(&local_b8,"Unimplemented type: ");
    pppppuVar5 = ppppppuVar4[6];
    if ((pppppuVar5 != (undefined8 *****)0x0) &&
       (local_80 = (undefined8 ******)PTR_LAB_04373a98, local_88 = ppppppuVar4,
       *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
      local_70 = &local_80;
      ppppppuStack_68 = &local_88;
      local_78 = &local_70;
      std::__call_once((ulong *)pppppuVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar3 = FUN_0030f52c(uVar3,*(undefined4 *)
                                (PTR_DAT_04373ab0 + (ulong)*(uint *)(ppppppuVar4 + 7) * 4));
                    /* try { // try from 00384730 to 00384737 has its CatchHandler @ 00384cf0 */
    FUN_0030f41c(&local_70,uVar3);
    FUN_0030f658(&local_b8);
    local_128 = (long *)0x0;
    plVar8 = local_128;
joined_r0x00384750:
    local_130 = (undefined8 ******)0x0;
    local_138 = 0;
    local_140 = 0;
    pppppppuVar15 = (undefined8 *******)0x0;
    __src = (void *)0x0;
    local_128 = plVar8;
    goto joined_r0x00384750;
  }
  local_128 = (long *)0x0;
  local_130 = (undefined8 ******)0x0;
  local_138 = 0;
  local_140 = 0;
  pppppppuVar15 = (undefined8 *******)0x0;
  __src = (void *)0x0;
joined_r0x00384750:
  if (iVar12 == 0) {
    FUN_003862a4(param_1,param_2,param_4);
  }
  else {
                    /* try { // try from 00384344 to 003843eb has its CatchHandler @ 00384d3c */
    ppppppuVar6 = (undefined8 ******)FUN_00342e08(*param_1,iVar12);
    pppppuVar5 = ppppppuVar6[6];
    if ((pppppuVar5 != (undefined8 *****)0x0) &&
       (local_78 = (undefined8 *******)PTR_LAB_04373a98, local_80 = ppppppuVar6,
       *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
      local_b8 = &local_78;
      ppppppuStack_b0 = &local_80;
      local_70 = &local_b8;
      std::__call_once((ulong *)pppppuVar5,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(ppppppuVar6 + 7) * 4)) {
    case 1:
      uVar3 = FUN_0038f450(param_1,param_3,ppppppuVar6);
      FUN_00384fdc(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 2:
      uVar3 = FUN_0038f5fc(param_1,param_3,ppppppuVar6);
      FUN_003851a4(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 3:
      uVar3 = FUN_0038f7a8(param_1,param_3,ppppppuVar6);
      FUN_0038536c(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 4:
      uVar3 = FUN_0038f954(param_1,param_3,ppppppuVar6);
      FUN_00385534(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 5:
                    /* try { // try from 00384790 to 00384913 has its CatchHandler @ 00384d3c */
      uVar3 = FUN_0038fcac(param_1,param_3,ppppppuVar6);
      FUN_003858c4(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 6:
      uVar3 = FUN_0038fb00(param_1,param_3,ppppppuVar6);
      FUN_003856fc(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 7:
      uVar3 = FUN_0038f2a4(param_1,param_3,ppppppuVar6);
      FUN_00385a8c(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 8:
      uVar3 = FUN_0038f450(param_1,param_3,ppppppuVar6);
      FUN_00384fdc(param_1,param_2,ppppppuVar6,uVar3);
      break;
    case 9:
                    /* try { // try from 003849fc to 00384a0f has its CatchHandler @ 00384d3c */
      FUN_00384d60(local_108,param_1,param_3,ppppppuVar6);
                    /* try { // try from 00384a10 to 00384a23 has its CatchHandler @ 00384cc4 */
      FUN_00385d54(param_1,param_2,ppppppuVar6,local_108);
      if ((local_108[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f8);
      }
      break;
    case 10:
      plVar13 = (long *)FUN_0038ccac(param_1,param_3,ppppppuVar6,0);
      uVar14 = *(ulong *)(param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
      plVar8 = (long *)(uVar14 & 0xfffffffffffffffe);
      if ((uVar14 & 1) != 0) {
        plVar8 = (long *)*plVar8;
      }
      plVar11 = plVar13;
      if ((plVar13 != (long *)0x0) && (plVar8 != (long *)0x0)) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar11 + 0x70))(plVar11,plVar13);
      }
      FUN_00385c54(param_1,param_2,plVar11,ppppppuVar6);
      break;
    default:
                    /* try { // try from 00384918 to 0038492f has its CatchHandler @ 00384ce8 */
      FUN_0030f640(&local_b8,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x22a);
                    /* try { // try from 00384930 to 003849a3 has its CatchHandler @ 00384cfc */
      uVar3 = FUN_0030f3ac(&local_b8,"Unimplemented type: ");
      pppppuVar5 = ppppppuVar6[6];
      if ((pppppuVar5 != (undefined8 *****)0x0) &&
         (local_80 = (undefined8 ******)PTR_LAB_04373a98, local_88 = ppppppuVar6,
         *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
        local_70 = &local_80;
        ppppppuStack_68 = &local_88;
        local_78 = &local_70;
        std::__call_once((ulong *)pppppuVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar3 = FUN_0030f52c(uVar3,*(undefined4 *)
                                  (PTR_DAT_04373ab0 + (ulong)*(uint *)(ppppppuVar6 + 7) * 4));
                    /* try { // try from 003849a4 to 003849ab has its CatchHandler @ 00384ca8 */
      FUN_0030f41c(&local_70,uVar3);
      FUN_0030f658(&local_b8);
    }
  }
  if (iVar1 == 0) {
                    /* try { // try from 003849b8 to 003849c7 has its CatchHandler @ 00384d40 */
    FUN_003862a4(param_1,param_3,param_4);
    goto LAB_003849c8;
  }
  pppppuVar5 = *(undefined8 ******)((long)ppppppuVar4 + 0x30);
  if ((pppppuVar5 != (undefined8 *****)0x0) &&
     (local_80 = ppppppuVar4, local_78 = (undefined8 *******)PTR_LAB_04373a98,
     *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
    local_b8 = &local_78;
    ppppppuStack_b0 = &local_80;
    local_70 = &local_b8;
    std::__call_once((ulong *)pppppuVar5,&local_70,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  puVar2 = PTR_DAT_04373ab0;
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)((long)ppppppuVar4 + 0x38) * 4)) {
  case 1:
    FUN_00384fdc(param_1,param_3,ppppppuVar4,&local_bc);
    break;
  case 2:
    FUN_003851a4(param_1,param_3,ppppppuVar4,&local_c8);
    break;
  case 3:
    FUN_0038536c(param_1,param_3,ppppppuVar4,&local_cc);
    break;
  case 4:
    FUN_00385534(param_1,param_3,ppppppuVar4,&local_d8);
    break;
  case 5:
                    /* try { // try from 00384a44 to 00384aff has its CatchHandler @ 00384d40 */
    FUN_003858c4(param_1,param_3,ppppppuVar4,&local_e8);
    break;
  case 6:
    FUN_003856fc(param_1,param_3,ppppppuVar4,&local_dc);
    break;
  case 7:
    FUN_00385a8c(param_1,param_3,ppppppuVar4,local_ec);
    break;
  case 8:
    FUN_00384fdc(param_1,param_3,ppppppuVar4,&local_f0);
    break;
  case 9:
    local_118 = (undefined8 ******)0x0;
    local_110 = (void *)0x0;
    local_120 = 0;
    if (((ulong)pppppppuVar15 & 1) == 0) {
      local_120 = local_138 | (ulong)pppppppuVar15 & 0xff | local_140;
      local_118 = local_130;
      local_110 = __src;
    }
    else {
      if ((undefined8 ******)0xffffffffffffffef < local_130) {
                    /* try { // try from 00384c9c to 00384ca3 has its CatchHandler @ 00384d40 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (&DAT_00000016 < local_130) {
        uVar14 = (ulong)((long)local_130 + 0x10U) & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
        local_120 = uVar14 | 1;
        local_118 = local_130;
        local_110 = __dest;
LAB_00384c24:
        memcpy(__dest,__src,(size_t)local_130);
      }
      else {
        local_120 = (ulong)(byte)((int)local_130 << 1);
        __dest = (void *)((ulong)&local_120 | 1);
        if (local_130 != (undefined8 ******)0x0) goto LAB_00384c24;
      }
      *(undefined1 *)((long)__dest + (long)local_130) = 0;
    }
                    /* try { // try from 00384c38 to 00384c4b has its CatchHandler @ 00384cac */
    FUN_00385d54(param_1,param_3,ppppppuVar4,&local_120);
    if ((local_120 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_110);
      goto joined_r0x00384b98;
    }
    break;
  case 10:
    FUN_00385c54(param_1,param_3,local_128,ppppppuVar4);
    break;
  default:
                    /* try { // try from 00384b04 to 00384b1b has its CatchHandler @ 00384cc0 */
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x24a);
                    /* try { // try from 00384b1c to 00384b87 has its CatchHandler @ 00384cf8 */
    uVar3 = FUN_0030f3ac(&local_b8,"Unimplemented type: ");
    pppppuVar5 = *(undefined8 ******)((long)ppppppuVar4 + 0x30);
    if ((pppppuVar5 != (undefined8 *****)0x0) &&
       (local_80 = (undefined8 ******)PTR_LAB_04373a98, local_88 = ppppppuVar4,
       *pppppuVar5 != (undefined8 ****)0xffffffffffffffff)) {
      local_70 = &local_80;
      ppppppuStack_68 = &local_88;
      local_78 = &local_70;
      std::__call_once((ulong *)pppppuVar5,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar3 = FUN_0030f52c(uVar3,*(undefined4 *)
                                (puVar2 + (ulong)*(uint *)((long)ppppppuVar4 + 0x38) * 4));
                    /* try { // try from 00384b88 to 00384b8f has its CatchHandler @ 00384ca4 */
    FUN_0030f41c(&local_70,uVar3);
    FUN_0030f658(&local_b8);
joined_r0x00384b98:
    if (((ulong)pppppppuVar15 & 1) == 0) {
      return;
    }
    goto LAB_003849cc;
  }
LAB_003849c8:
  if (((ulong)pppppppuVar15 & 1) != 0) {
LAB_003849cc:
    FUN_002e2ea0(PTR_LAB_04373088,__src);
  }
  return;
}


