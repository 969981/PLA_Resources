/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00344354; name: FUN_00344354
 */


void FUN_00344354(ulong *param_1,undefined *param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  void *__dest;
  uint uVar5;
  ulong uVar6;
  undefined **__n;
  char *__src;
  ulong uVar7;
  ulong uVar8;
  undefined ***local_88 [2];
  undefined8 local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined *local_60 [5];
  undefined *local_38;
  undefined *local_28;
  
  if (param_2[0x40] == '\0') {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x7cb);
                    /* try { // try from 00344390 to 003443af has its CatchHandler @ 00344838 */
    uVar2 = FUN_0030f3ac(&local_70,"CHECK failed: has_default_value(): ");
    uVar2 = FUN_0030f3ac(uVar2,"No default value");
                    /* try { // try from 003443b0 to 003443b7 has its CatchHandler @ 00344834 */
    FUN_0030f41c(local_88,uVar2);
    FUN_0030f658(&local_70);
  }
  puVar3 = *(ulong **)(param_2 + 0x30);
  if (puVar3 != (ulong *)0x0) {
    local_28 = PTR_LAB_04373a98;
    local_38 = param_2;
    if (*puVar3 != 0xffffffffffffffff) {
      local_70 = &local_28;
      ppuStack_68 = &local_38;
      local_88[0] = &local_70;
      std::__call_once(puVar3,local_88,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  uVar5 = *(uint *)(param_2 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar5 * 4)) {
  case 1:
    local_70 = local_60;
    lVar4 = FUN_00320570(*(undefined4 *)(param_2 + 0x90),local_70);
    break;
  case 2:
    local_70 = local_60;
    lVar4 = FUN_00320710(*(undefined8 *)(param_2 + 0x90),local_70);
    break;
  case 3:
    local_70 = local_60;
    lVar4 = FUN_003203e0(*(undefined4 *)(param_2 + 0x90),local_70);
    break;
  case 4:
    local_70 = local_60;
    lVar4 = FUN_00320590(*(undefined8 *)(param_2 + 0x90),local_70);
    break;
  case 5:
    FUN_00320730(param_1,*(undefined8 *)(param_2 + 0x90));
    return;
  case 6:
    FUN_00320980(param_1,*(undefined4 *)(param_2 + 0x90));
    return;
  case 7:
    cVar1 = param_2[0x90];
    *param_1 = 0;
    param_1[1] = 0;
    __n = (undefined **)&DAT_00000004;
    if (cVar1 == '\0') {
      __n = (undefined **)0x5;
    }
    param_1[2] = 0;
    __src = "false";
    if (cVar1 != '\0') {
      __src = &DAT_03924305;
    }
    *(char *)param_1 = (char)((int)__n << 1);
    __dest = (void *)((long)param_1 + 1);
    goto LAB_00344714;
  case 8:
    puVar3 = *(ulong **)(param_2 + 0x30);
    if ((puVar3 != (ulong *)0x0) && (local_28 = param_2, *puVar3 != 0xffffffffffffffff)) {
      ppuStack_68 = &local_28;
      local_70 = (undefined **)PTR_LAB_04373a98;
      local_88[0] = &local_70;
      std::__call_once(puVar3,local_88,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    puVar3 = (ulong *)**(undefined8 **)(param_2 + 0x90);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((*puVar3 & 1) == 0) {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      uVar6 = puVar3[2];
LAB_003445d0:
      param_1[2] = uVar6;
      param_1[1] = uVar8;
      *param_1 = uVar7;
      return;
    }
    if ((undefined **)0xffffffffffffffef < (undefined **)puVar3[1]) goto LAB_003447d0;
    __n = (undefined **)puVar3[1];
    __src = (char *)puVar3[2];
    goto joined_r0x003446e0;
  case 9:
    if ((param_3 & 1) != 0) {
      FUN_003201a0(local_88,*(undefined8 *)(param_2 + 0x90));
                    /* try { // try from 0034463c to 00344653 has its CatchHandler @ 00344800 */
      puVar3 = (ulong *)FUN_002e3e88(local_88,0,&DAT_039042e1,1);
      ppuStack_68 = (undefined **)puVar3[1];
      local_70 = (undefined **)*puVar3;
      local_60[0] = (undefined *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
                    /* try { // try from 0034466c to 0034467f has its CatchHandler @ 003447d8 */
      puVar3 = (ulong *)FUN_002e4094(&local_70,&DAT_039042e1,1);
      uVar7 = puVar3[1];
      uVar6 = *puVar3;
      param_1[2] = puVar3[2];
      param_1[1] = uVar7;
      *param_1 = uVar6;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      if (((ulong)local_70 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_60[0]);
      }
      if (((ulong)local_88[0] & 1) == 0) {
        return;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_78);
      return;
    }
    puVar3 = *(ulong **)(param_2 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      local_28 = PTR_LAB_04373a98;
      local_38 = param_2;
      if (*puVar3 != 0xffffffffffffffff) {
        local_70 = &local_28;
        ppuStack_68 = &local_38;
        local_88[0] = &local_70;
        std::__call_once(puVar3,local_88,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar5 = *(uint *)(param_2 + 0x38);
    }
    puVar3 = *(ulong **)(param_2 + 0x90);
    if (uVar5 == 0xc) {
      FUN_003201a0(param_1);
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((*puVar3 & 1) == 0) {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      uVar6 = puVar3[2];
      goto LAB_003445d0;
    }
    __n = (undefined **)puVar3[1];
    if ((undefined **)0xffffffffffffffef < __n) goto LAB_003447d0;
    __src = (char *)puVar3[2];
    if (&DAT_00000016 < __n) goto LAB_003446e4;
    goto LAB_00344560;
  case 10:
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x7f1);
                    /* try { // try from 00344480 to 00344493 has its CatchHandler @ 00344828 */
    uVar2 = FUN_0030f3ac(&local_70,"Messages can\'t have default values!");
                    /* try { // try from 00344494 to 0034449b has its CatchHandler @ 00344824 */
    FUN_0030f41c(local_88,uVar2);
    FUN_0030f658(&local_70);
  default:
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x7f4);
                    /* try { // try from 003444bc to 003444cf has its CatchHandler @ 00344830 */
    uVar2 = FUN_0030f3ac(&local_70,"Can\'t get here: failed to get default value as string");
                    /* try { // try from 003444d0 to 003444d7 has its CatchHandler @ 0034482c */
    FUN_0030f41c(local_88,uVar2);
    FUN_0030f658(&local_70);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  ppuStack_68 = (undefined **)(lVar4 - (long)local_60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = ppuStack_68;
  __src = (char *)local_70;
  if ((undefined **)0xffffffffffffffef < ppuStack_68) {
LAB_003447d0:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
joined_r0x003446e0:
  if (&DAT_00000016 < __n) {
LAB_003446e4:
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(__n + 2) & 0xfffffffffffffff0);
    param_1[1] = (ulong)__n;
    param_1[2] = (ulong)__dest;
    *param_1 = (ulong)(__n + 2) & 0xfffffffffffffff0 | 1;
  }
  else {
LAB_00344560:
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == (undefined **)0x0) goto LAB_0034471c;
  }
LAB_00344714:
  memcpy(__dest,__src,(size_t)__n);
LAB_0034471c:
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  return;
}


