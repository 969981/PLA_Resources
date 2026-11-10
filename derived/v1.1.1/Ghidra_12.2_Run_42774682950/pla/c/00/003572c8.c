/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003572c8; name: FUN_003572c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003572c8(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  size_t sVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  void *pvVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  void *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  
  iVar4 = *(int *)(param_2 + 0x20);
  *param_4 = iVar4;
  iVar5 = *(int *)(param_2 + 0x24);
  param_4[1] = iVar5;
  if (iVar4 < 1) {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_3 + 8),param_2,1,
                 "Extension numbers must be positive integers.");
    if (*param_4 < param_4[1]) goto LAB_00357310;
LAB_003573b8:
    FUN_0034dc2c(param_1,*(undefined8 *)(param_3 + 8),param_2,1,
                 "Extension range end number must be greater than start number.");
    param_4[2] = 0;
    param_4[3] = 0;
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  else {
    if (iVar5 <= iVar4) goto LAB_003573b8;
LAB_00357310:
    param_4[2] = 0;
    param_4[3] = 0;
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar6 & 1) == 0) {
    s_google_protobuf_ExtensionRangeOp_03924c4f[0] = s_google_protobuf_ExtensionRangeOp_03924c4f[0];
    s_google_protobuf_ExtensionRangeOp_03924c4f[1] = s_google_protobuf_ExtensionRangeOp_03924c4f[1];
    s_google_protobuf_ExtensionRangeOp_03924c4f[2] = s_google_protobuf_ExtensionRangeOp_03924c4f[2];
    s_google_protobuf_ExtensionRangeOp_03924c4f[3] = s_google_protobuf_ExtensionRangeOp_03924c4f[3];
    s_google_protobuf_ExtensionRangeOp_03924c4f[4] = s_google_protobuf_ExtensionRangeOp_03924c4f[4];
    s_google_protobuf_ExtensionRangeOp_03924c4f[5] = s_google_protobuf_ExtensionRangeOp_03924c4f[5];
    s_google_protobuf_ExtensionRangeOp_03924c4f[6] = s_google_protobuf_ExtensionRangeOp_03924c4f[6];
    s_google_protobuf_ExtensionRangeOp_03924c4f[7] = s_google_protobuf_ExtensionRangeOp_03924c4f[7];
    s_google_protobuf_ExtensionRangeOp_03924c4f[8] = s_google_protobuf_ExtensionRangeOp_03924c4f[8];
    s_google_protobuf_ExtensionRangeOp_03924c4f[9] = s_google_protobuf_ExtensionRangeOp_03924c4f[9];
    s_google_protobuf_ExtensionRangeOp_03924c4f[10] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[10];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0xb] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0xb];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0xc] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0xc];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0xd] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0xd];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0xe] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0xe];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0xf] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0xf];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x10] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x10];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x11] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x11];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x12] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x12];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x13] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x13];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x14] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x14];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x15] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x15];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x16] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x16];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x17] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x17];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x18] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x18];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x19] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x19];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1a] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1a];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1b] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1b];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1c] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1c];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1d] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1d];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1e] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1e];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x1f] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x1f];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x20] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x20];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x21] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x21];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x22] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x22];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x23] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x23];
    s_google_protobuf_ExtensionRangeOp_03924c4f[0x24] =
         s_google_protobuf_ExtensionRangeOp_03924c4f[0x24];
    return;
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    FUN_0030f640(&local_80,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                 ,0x1e59);
                    /* try { // try from 0035733c to 0035734f has its CatchHandler @ 00357714 */
    uVar10 = FUN_0030f3ac(&local_80,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 00357350 to 00357357 has its CatchHandler @ 00357710 */
    FUN_0030f41c(&local_a0,uVar10);
    FUN_0030f658(&local_80);
  }
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  local_80 = (void *)0x0;
                    /* try { // try from 00357368 to 00357373 has its CatchHandler @ 00357760 */
  FUN_0034c314(param_3,&local_80);
  if (local_78 < local_70) {
    *local_78 = 5;
    local_78 = local_78 + 1;
  }
  else {
    lVar15 = (long)local_78 - (long)local_80 >> 2;
    uVar18 = lVar15 + 1;
    if (uVar18 >> 0x3e != 0) {
                    /* try { // try from 003576c8 to 003576cf has its CatchHandler @ 00357700 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_70 - (long)local_80 >> 2) < 0x1fffffffffffffff) {
      uVar13 = (long)local_70 - (long)local_80 >> 1;
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 != 0) goto LAB_00357428;
      lVar11 = 0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_00357428:
      lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar18 << 2);
    }
    puVar17 = (undefined4 *)(lVar11 + lVar15 * 4);
    sVar12 = (long)local_78 - (long)local_80;
    puVar1 = (undefined4 *)(lVar11 + uVar18 * 4);
    pvVar16 = (void *)((long)puVar17 - sVar12);
    *puVar17 = 5;
    if (0 < (long)sVar12) {
      memcpy(pvVar16,local_80,sVar12);
    }
    bVar2 = local_80 != (void *)0x0;
    local_80 = pvVar16;
    local_78 = puVar17 + 1;
    local_70 = puVar1;
    if (bVar2) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  uVar14 = (undefined4)((ulong)((long)param_4 - *(long *)(param_3 + 0x48)) >> 4);
  if (local_78 == local_70) {
    lVar15 = (long)local_78 - (long)local_80 >> 2;
    uVar18 = lVar15 + 1;
    if (uVar18 >> 0x3e != 0) {
                    /* try { // try from 003576d8 to 003576df has its CatchHandler @ 003576e0 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_70 - (long)local_80 >> 2) < 0x1fffffffffffffff) {
      uVar13 = (long)local_70 - (long)local_80 >> 1;
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 != 0) goto LAB_003574f4;
      lVar11 = 0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_003574f4:
      lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar18 << 2);
    }
    puVar17 = (undefined4 *)(lVar11 + lVar15 * 4);
    sVar12 = (long)local_78 - (long)local_80;
    puVar1 = (undefined4 *)(lVar11 + uVar18 * 4);
    *puVar17 = uVar14;
    pvVar16 = (void *)((long)puVar17 - sVar12);
    if (0 < (long)sVar12) {
      memcpy(pvVar16,local_80,sVar12);
    }
    bVar2 = local_80 != (void *)0x0;
    local_80 = pvVar16;
    local_78 = puVar17 + 1;
    local_70 = puVar1;
    if (bVar2) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    if (local_70 <= local_78) goto LAB_00357568;
  }
  else {
    puVar17 = local_78 + 1;
    *local_78 = uVar14;
    local_78 = puVar17;
    if (local_70 <= puVar17) {
LAB_00357568:
      lVar15 = (long)local_78 - (long)local_80 >> 2;
      uVar18 = lVar15 + 1;
      if (uVar18 >> 0x3e != 0) {
                    /* try { // try from 003576d0 to 003576d7 has its CatchHandler @ 003576f0 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_70 - (long)local_80 >> 2) < 0x1fffffffffffffff) {
        uVar13 = (long)local_70 - (long)local_80 >> 1;
        if (uVar18 <= uVar13) {
          uVar18 = uVar13;
        }
        if (uVar18 != 0) goto LAB_003575ac;
        lVar11 = 0;
      }
      else {
        uVar18 = 0x3fffffffffffffff;
LAB_003575ac:
        lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar18 << 2);
      }
      puVar17 = (undefined4 *)(lVar11 + lVar15 * 4);
      sVar12 = (long)local_78 - (long)local_80;
      puVar1 = (undefined4 *)(lVar11 + uVar18 * 4);
      pvVar16 = (void *)((long)puVar17 - sVar12);
      *puVar17 = 3;
      if (0 < (long)sVar12) {
        memcpy(pvVar16,local_80,sVar12);
      }
      bVar2 = local_80 != (void *)0x0;
      local_80 = pvVar16;
      local_78 = puVar17 + 1;
      local_70 = puVar1;
      if (bVar2) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      goto LAB_00357608;
    }
  }
  *local_78 = 3;
  local_78 = local_78 + 1;
LAB_00357608:
  uVar10 = *(undefined8 *)(param_3 + 8);
  puVar3 = PTR_DAT_04373c18;
  if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0x18);
  }
  local_90 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar9 = s_google_protobuf_ExtensionRangeOp_03924c4f._16_8_;
  uVar8 = s_google_protobuf_ExtensionRangeOp_03924c4f._0_8_;
  uStack_98 = _UNK_03889448;
  local_a0 = _DAT_03889440;
  uVar7 = CONCAT35(s_google_protobuf_ExtensionRangeOp_03924c4f._29_3_,
                   s_google_protobuf_ExtensionRangeOp_03924c4f._24_5_);
  *(undefined8 *)(local_90 + 8) = s_google_protobuf_ExtensionRangeOp_03924c4f._8_8_;
  *(undefined8 *)local_90 = uVar8;
  *(undefined8 *)(local_90 + 0x18) = uVar7;
  *(undefined8 *)(local_90 + 0x10) = uVar9;
  *(ulong *)(local_90 + 0x1d) =
       CONCAT53(s_google_protobuf_ExtensionRangeOp_03924c4f._32_5_,
                s_google_protobuf_ExtensionRangeOp_03924c4f._29_3_);
  local_90[0x25] = '\0';
                    /* try { // try from 0035765c to 0035767b has its CatchHandler @ 00357728 */
  FUN_00359280(param_1,uVar10,uVar10,puVar3,param_4,&local_80,&local_a0);
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


