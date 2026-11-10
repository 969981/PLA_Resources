/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c68c0; name: FUN_003c68c0
 */


/* WARNING: Removing unreachable block (ram,0x003c6a10) */

void FUN_003c68c0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  undefined8 uVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong local_108;
  size_t local_100;
  void *local_f8;
  byte local_f0 [16];
  undefined8 local_e0;
  undefined1 auStack_d8 [48];
  long local_a8 [10];
  undefined8 local_58;
  undefined1 auStack_48 [8];
  
  local_58 = 0;
  uVar7 = 0;
  iVar4 = 0;
  local_a8[8] = param_11;
  local_a8[9] = param_12;
  local_a8[0] = param_3;
  local_a8[1] = param_4;
  local_a8[2] = param_5;
  local_a8[3] = param_6;
  local_a8[4] = param_7;
  local_a8[5] = param_8;
  local_a8[7] = param_10;
  local_a8[6] = param_9;
  lVar10 = 0;
  bVar9 = *param_2;
  if (bVar9 == 0x24) goto LAB_003c6938;
LAB_003c691c:
  if (bVar9 != 0) {
    do {
      iVar4 = iVar4 + 1;
      while( true ) {
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar5;
        lVar10 = (long)(int)uVar5;
        bVar9 = param_2[lVar10];
        if (bVar9 != 0x24) goto LAB_003c691c;
LAB_003c6938:
        uVar7 = lVar10 + 1;
        uVar5 = param_2[uVar7] - 0x30;
        if (9 < uVar5) break;
        if (*(int *)(local_a8[(int)uVar5] + 8) == -1) {
          FUN_0030f640(auStack_d8,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/substitute.cc"
                       ,0x56);
                    /* try { // try from 003c6a6c to 003c6acb has its CatchHandler @ 003c6e54 */
          uVar2 = FUN_0030f3ac(auStack_d8,"strings::Substitute format string invalid: asked for \"$"
                              );
          uVar2 = FUN_0030f52c(uVar2,uVar5);
          uVar2 = FUN_0030f3ac(uVar2,"\", but only ");
          uVar7 = 0;
          goto LAB_003c6a9c;
        }
        iVar4 = *(int *)(local_a8[(int)uVar5] + 8) + iVar4;
      }
    } while (param_2[uVar7] == 0x24);
    FUN_0030f640(auStack_d8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/substitute.cc"
                 ,99);
                    /* try { // try from 003c6984 to 003c6993 has its CatchHandler @ 003c6e04 */
    uVar2 = FUN_0030f3ac(auStack_d8,"Invalid strings::Substitute() format string: \"");
    local_108 = 0;
    local_100 = 0;
    local_f8 = (void *)0x0;
    sVar3 = strlen((char *)param_2);
    if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 003c6d90 to 003c6d97 has its CatchHandler @ 003c6da4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar3 < 0x17) {
      local_108 = CONCAT71(local_108._1_7_,(char)((int)sVar3 << 1));
      pvVar11 = (void *)((ulong)&local_108 | 1);
      if (sVar3 != 0) goto LAB_003c6c68;
    }
    else {
      uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      local_108 = uVar7 | 1;
      local_100 = sVar3;
      local_f8 = pvVar11;
LAB_003c6c68:
      memcpy(pvVar11,param_2,sVar3);
    }
    *(undefined1 *)((long)pvVar11 + sVar3) = 0;
                    /* try { // try from 003c6c7c to 003c6c87 has its CatchHandler @ 003c6dd8 */
    FUN_003201a0(local_f0,&local_108);
                    /* try { // try from 003c6c88 to 003c6ca3 has its CatchHandler @ 003c6e20 */
    uVar2 = FUN_0030f3e8(uVar2,local_f0);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_038c838e);
                    /* try { // try from 003c6ca4 to 003c6cab has its CatchHandler @ 003c6dc8 */
    FUN_0030f41c(auStack_48,uVar2);
    goto LAB_003c6d1c;
  }
  if (iVar4 == 0) {
    return;
  }
  bVar9 = *param_1;
  if ((bVar9 & 1) == 0) {
    uVar7 = (ulong)(bVar9 >> 1);
    uVar6 = (ulong)(int)((uint)(bVar9 >> 1) + iVar4);
    if (uVar6 <= uVar7) goto LAB_003c69f4;
LAB_003c6a28:
    FUN_002e6bd4(param_1,uVar6 - uVar7,0);
    bVar9 = *param_1;
joined_r0x003c6a3c:
    iVar4 = (int)uVar7;
    uVar7 = (ulong)bVar9;
    if ((bVar9 & 1) == 0) goto LAB_003c6a40;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)((int)uVar7 + iVar4);
    if (uVar7 < uVar6) goto LAB_003c6a28;
LAB_003c69f4:
    iVar4 = (int)uVar7;
    if ((bVar9 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar6) = 0;
      *(ulong *)(param_1 + 8) = uVar6;
      bVar9 = *param_1;
      goto joined_r0x003c6a3c;
    }
    uVar5 = (int)uVar6 << 1;
    param_1[uVar6 + 1] = 0;
    *param_1 = (byte)uVar5;
    uVar7 = (ulong)(uVar5 & 0xff);
LAB_003c6a40:
    uVar6 = uVar7 >> 1;
  }
  pbVar8 = (byte *)0x0;
  if (uVar6 != 0) {
    if ((uVar7 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x10);
    }
  }
  uVar5 = 0;
  lVar10 = 0;
  bVar9 = *param_2;
  pbVar8 = pbVar8 + iVar4;
  while( true ) {
    while (bVar9 == 0x24) {
      uVar7 = lVar10 + 1;
      uVar1 = param_2[uVar7] - 0x30;
      if (uVar1 < 10) {
        if (9 < uVar1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("index < 10",
                        "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/substitute.cc"
                        ,0x77,"SubstituteAndAppend");
        }
        puVar12 = (undefined8 *)local_a8[uVar1];
        memcpy(pbVar8,(void *)*puVar12,(long)*(int *)(puVar12 + 1));
        pbVar8 = pbVar8 + *(int *)(puVar12 + 1);
      }
      else if (param_2[uVar7] == 0x24) {
        *pbVar8 = 0x24;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar7 = (ulong)uVar5;
      }
      uVar5 = (int)uVar7 + 1;
      lVar10 = (long)(int)uVar5;
      bVar9 = param_2[lVar10];
    }
    if (bVar9 == 0) break;
    uVar5 = uVar5 + 1;
    *pbVar8 = bVar9;
    lVar10 = (long)(int)uVar5;
    bVar9 = param_2[lVar10];
    pbVar8 = pbVar8 + 1;
  }
  if ((*param_1 & 1) == 0) {
    if (pbVar8 + ~(ulong)param_1 == (byte *)(ulong)(*param_1 >> 1)) {
      return;
    }
  }
  else if ((long)pbVar8 - *(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  FUN_0030f640(auStack_d8,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/substitute.cc"
               ,0x85);
                    /* try { // try from 003c6c20 to 003c6c33 has its CatchHandler @ 003c6e0c */
  uVar2 = FUN_0030f3ac(auStack_d8,"CHECK failed: (target - output->data()) == (output->size()): ");
                    /* try { // try from 003c6c34 to 003c6c3b has its CatchHandler @ 003c6e08 */
  FUN_0030f41c(local_f0,uVar2);
LAB_003c6d4c:
  FUN_0030f658(auStack_d8);
  return;
  while( true ) {
    param_3 = local_a8[uVar7 + 1];
    uVar7 = uVar7 + 1;
    if (param_3 == 0) break;
LAB_003c6a9c:
    if (*(int *)(param_3 + 8) == -1) goto LAB_003c6abc;
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_003c6abc:
  uVar2 = FUN_0030f52c(uVar2,uVar7);
  uVar2 = FUN_0030f3ac(uVar2," args were given.  Full format string was: \"");
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  sVar3 = strlen((char *)param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 003c6d98 to 003c6d9f has its CatchHandler @ 003c6da0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_108 = CONCAT71(local_108._1_7_,(char)((int)sVar3 << 1));
    pvVar11 = (void *)((ulong)&local_108 | 1);
    if (sVar3 != 0) goto LAB_003c6cd8;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_108 = uVar7 | 1;
    local_100 = sVar3;
    local_f8 = pvVar11;
LAB_003c6cd8:
    memcpy(pvVar11,param_2,sVar3);
  }
  *(undefined1 *)((long)pvVar11 + sVar3) = 0;
                    /* try { // try from 003c6cec to 003c6cf7 has its CatchHandler @ 003c6db8 */
  FUN_003201a0(local_f0,&local_108);
                    /* try { // try from 003c6cf8 to 003c6d13 has its CatchHandler @ 003c6e10 */
  uVar2 = FUN_0030f3e8(uVar2,local_f0);
  uVar2 = FUN_0030f3ac(uVar2,&DAT_038c838e);
                    /* try { // try from 003c6d14 to 003c6d1b has its CatchHandler @ 003c6da8 */
  FUN_0030f41c(auStack_48,uVar2);
LAB_003c6d1c:
  if ((local_f0[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
  }
  if ((local_108 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_f8);
  }
  goto LAB_003c6d4c;
}


