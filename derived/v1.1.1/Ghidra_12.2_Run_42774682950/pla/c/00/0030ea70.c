/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030ea70; name: FUN_0030ea70
 */


void FUN_0030ea70(int param_1,uint param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_130;
  size_t local_128;
  void *local_120;
  undefined8 local_118;
  size_t local_110;
  void *local_108;
  int local_100;
  char *local_f8;
  undefined4 local_f0;
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  char acStack_d0 [127];
  undefined1 local_51;
  
  if (0x2df5a2 < (int)param_2) {
    local_100 = 3;
    local_f0 = 0x4c;
    local_f8 = 
    "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/common.cc";
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = (void *)0x0;
                    /* try { // try from 0030ead4 to 0030eae7 has its CatchHandler @ 0030f308 */
    FUN_002e4094(&local_e8,"This program requires version ",0x1e);
    snprintf(acStack_d0,0x80,"%d.%d.%d",param_2 / 1000000,
             param_2 / 1000 + (int)(((ulong)param_2 * 0x10624dd3) / 0xfa0000000000) * -1000,
             param_2 % 1000);
    local_51 = 0;
    local_108 = (void *)0x0;
    local_118 = 0;
    local_110 = 0;
    sVar2 = strlen(acStack_d0);
    if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0030f0b4 to 0030f0bb has its CatchHandler @ 0030f2c8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar2 << 1));
      pvVar5 = (void *)((ulong)&local_118 | 1);
      if (sVar2 != 0) goto LAB_0030eb9c;
    }
    else {
      uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_118 = uVar6 | 1;
      local_110 = sVar2;
      local_108 = pvVar5;
LAB_0030eb9c:
      memcpy(pvVar5,acStack_d0,sVar2);
    }
    *(undefined1 *)((long)pvVar5 + sVar2) = 0;
    if ((local_118 & 1) == 0) {
      sVar2 = local_118 >> 1 & 0x7f;
      pvVar5 = (void *)((long)&local_118 + 1);
    }
    else {
      sVar2 = local_110;
      pvVar5 = local_108;
    }
                    /* try { // try from 0030ebc8 to 0030ebe3 has its CatchHandler @ 0030f328 */
    FUN_002e4094(&local_e8,pvVar5,sVar2);
    FUN_002e4094(&local_e8," of the Protocol Buffer runtime library, but the installed version is ",
                 0x46);
    snprintf(acStack_d0,0x80,"%d.%d.%d",3,0xc,2);
    local_51 = 0;
    local_120 = (void *)0x0;
    local_130 = 0;
    local_128 = 0;
    sVar2 = strlen(acStack_d0);
    if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0030f0bc to 0030f0c3 has its CatchHandler @ 0030f2b8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar2 << 1));
      pvVar5 = (void *)((ulong)&local_130 | 1);
      if (sVar2 != 0) goto LAB_0030ec70;
    }
    else {
      uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_130 = uVar6 | 1;
      local_128 = sVar2;
      local_120 = pvVar5;
LAB_0030ec70:
      memcpy(pvVar5,acStack_d0,sVar2);
    }
    *(undefined1 *)((long)pvVar5 + sVar2) = 0;
    if ((local_130 & 1) == 0) {
      sVar2 = local_130 >> 1 & 0x7f;
      pvVar5 = (void *)((long)&local_130 + 1);
    }
    else {
      sVar2 = local_128;
      pvVar5 = local_120;
    }
                    /* try { // try from 0030ec9c to 0030ece3 has its CatchHandler @ 0030f348 */
    FUN_002e4094(&local_e8,pvVar5,sVar2);
    FUN_002e4094(&local_e8,
                 ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
                 ,0xcd);
    sVar2 = strlen(param_3);
    FUN_002e4094(&local_e8,param_3,sVar2);
    FUN_002e4094(&local_e8,&DAT_038aa9a6,3);
    if (local_100 == 3) {
      iVar1 = 3;
LAB_0030ed10:
                    /* try { // try from 0030ed20 to 0030ed27 has its CatchHandler @ 0030f2e8 */
      (*(code *)PTR_FUN_04153878)(iVar1,local_f8,local_f0,&local_e8);
    }
    else if (DAT_043999b8 < 1) {
      iVar1 = local_100;
      goto LAB_0030ed10;
    }
    if (local_100 == 3) {
      plVar3 = (long *)__cxa_allocate_exception(0x30);
      pvVar5 = local_d8;
      uVar6 = uStack_e0;
      *plVar3 = (long)(PTR_DAT_04373a58 + 0x10);
      plVar3[1] = (long)local_f8;
      *(undefined4 *)(plVar3 + 2) = local_f0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      if ((local_e8 & 1) == 0) {
        plVar3[5] = (long)local_d8;
        plVar3[4] = uStack_e0;
        plVar3[3] = local_e8;
        goto LAB_0030f208;
      }
      if (0xffffffffffffffef < uStack_e0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0030f178 to 0030f17b has its CatchHandler @ 0030f278 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_e0 < 0x17) {
        pvVar4 = (void *)((long)plVar3 + 0x19);
        *(char *)(plVar3 + 3) = (char)((int)uStack_e0 << 1);
        if (uStack_e0 != 0) goto LAB_0030f1f4;
      }
      else {
        uVar7 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
        pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
        plVar3[3] = uVar7 | 1;
        plVar3[4] = uVar6;
        plVar3[5] = (long)pvVar4;
LAB_0030f1f4:
        memcpy(pvVar4,pvVar5,uVar6);
      }
      *(undefined1 *)((long)pvVar4 + uVar6) = 0;
LAB_0030f208:
                    /* try { // try from 0030f208 to 0030f21f has its CatchHandler @ 0030f2e8 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar3,PTR_PTR_04373a60,PTR_FUN_04373a68);
    }
    if ((local_130 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_120);
    }
    if ((local_118 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_108);
    }
    if ((local_e8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_d8);
    }
  }
  if (0x2df59f < param_1) {
    return;
  }
  local_100 = 3;
  local_f0 = 0x57;
  local_f8 = 
  "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/common.cc";
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (void *)0x0;
                    /* try { // try from 0030ed90 to 0030eda3 has its CatchHandler @ 0030f2f8 */
  FUN_002e4094(&local_e8,"This program was compiled against version ",0x2a);
  snprintf(acStack_d0,0x80,"%d.%d.%d",param_1 / 1000000,(param_1 / 1000) % 1000,param_1 % 1000);
  local_51 = 0;
  local_108 = (void *)0x0;
  local_118 = 0;
  local_110 = 0;
  sVar2 = strlen(acStack_d0);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0030f0c4 to 0030f0cb has its CatchHandler @ 0030f2a8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_118 | 1);
    if (sVar2 != 0) goto LAB_0030ee70;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_118 = uVar6 | 1;
    local_110 = sVar2;
    local_108 = pvVar5;
LAB_0030ee70:
    memcpy(pvVar5,acStack_d0,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  if ((local_118 & 1) == 0) {
    sVar2 = local_118 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_118 + 1);
  }
  else {
    sVar2 = local_110;
    pvVar5 = local_108;
  }
                    /* try { // try from 0030ee9c to 0030eeb7 has its CatchHandler @ 0030f318 */
  FUN_002e4094(&local_e8,pvVar5,sVar2);
  FUN_002e4094(&local_e8,
               " of the Protocol Buffer runtime library, which is not compatible with the installed version ("
               ,0x5d);
  snprintf(acStack_d0,0x80,"%d.%d.%d",3,0xc,2);
  local_51 = 0;
  local_120 = (void *)0x0;
  local_130 = 0;
  local_128 = 0;
  sVar2 = strlen(acStack_d0);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0030f0cc to 0030f0d3 has its CatchHandler @ 0030f298 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_130 | 1);
    if (sVar2 != 0) goto LAB_0030ef44;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_130 = uVar6 | 1;
    local_128 = sVar2;
    local_120 = pvVar5;
LAB_0030ef44:
    memcpy(pvVar5,acStack_d0,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  if ((local_130 & 1) == 0) {
    sVar2 = local_130 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_130 + 1);
  }
  else {
    sVar2 = local_128;
    pvVar5 = local_120;
  }
                    /* try { // try from 0030ef70 to 0030efb7 has its CatchHandler @ 0030f338 */
  FUN_002e4094(&local_e8,pvVar5,sVar2);
  FUN_002e4094(&local_e8,
               ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
               ,0xdc);
  sVar2 = strlen(param_3);
  FUN_002e4094(&local_e8,param_3,sVar2);
  FUN_002e4094(&local_e8,&DAT_038aa9a6,3);
  if (local_100 == 3) {
    iVar1 = 3;
LAB_0030f018:
                    /* try { // try from 0030f028 to 0030f02f has its CatchHandler @ 0030f2d8 */
    (*(code *)PTR_FUN_04153878)(iVar1,local_f8,local_f0,&local_e8);
  }
  else if (DAT_043999b8 < 1) {
    iVar1 = local_100;
    goto LAB_0030f018;
  }
  if (local_100 != 3) {
    if ((local_130 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_120);
    }
    if ((local_118 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_108);
    }
    if ((local_e8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_d8);
    }
    return;
  }
  plVar3 = (long *)__cxa_allocate_exception(0x30);
  pvVar5 = local_d8;
  uVar6 = uStack_e0;
  *plVar3 = (long)(PTR_DAT_04373a58 + 0x10);
  plVar3[1] = (long)local_f8;
  *(undefined4 *)(plVar3 + 2) = local_f0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  if ((local_e8 & 1) == 0) {
    plVar3[5] = (long)local_d8;
    plVar3[4] = uStack_e0;
    plVar3[3] = local_e8;
    goto LAB_0030f25c;
  }
  if (0xffffffffffffffef < uStack_e0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0030f188 to 0030f18b has its CatchHandler @ 0030f274 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_e0 < 0x17) {
    pvVar4 = (void *)((long)plVar3 + 0x19);
    *(char *)(plVar3 + 3) = (char)((int)uStack_e0 << 1);
    if (uStack_e0 != 0) goto LAB_0030f248;
  }
  else {
    uVar7 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    plVar3[3] = uVar7 | 1;
    plVar3[4] = uVar6;
    plVar3[5] = (long)pvVar4;
LAB_0030f248:
    memcpy(pvVar4,pvVar5,uVar6);
  }
  *(undefined1 *)((long)pvVar4 + uVar6) = 0;
LAB_0030f25c:
                    /* try { // try from 0030f25c to 0030f273 has its CatchHandler @ 0030f2d8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar3,PTR_PTR_04373a60,PTR_FUN_04373a68);
}


