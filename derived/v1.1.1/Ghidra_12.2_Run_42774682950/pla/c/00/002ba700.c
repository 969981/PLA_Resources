/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ba700; name: FUN_002ba700
 */


void FUN_002ba700(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  size_t __n;
  char *pcVar4;
  ulong uVar5;
  char *pcVar7;
  char *pcVar6;
  ulong uVar8;
  uint *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint *puVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte local_a8 [16];
  undefined8 local_98;
  byte local_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 local_88;
  undefined1 uStack_81;
  char *local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  void *pvStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04373140;
  puVar11 = *(undefined4 **)(param_1 + 0x18);
  if (puVar11 == (undefined4 *)0x0) {
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    local_78 = 0;
    uStack_74 = 0;
    local_70 = 0;
    uStack_6f = 0;
    local_90 = 0;
    uStack_8f = 0;
    uStack_89 = 0;
    local_88 = 0;
    *puVar11 = 0;
    if ((*(byte *)(puVar11 + 2) & 1) == 0) {
      *(undefined2 *)(puVar11 + 2) = 0;
    }
    else {
      **(undefined1 **)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      if ((*(byte *)(puVar11 + 2) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(puVar11 + 6));
        *(undefined8 *)(puVar11 + 2) = 0;
      }
    }
    *(undefined1 *)(puVar11 + 2) = 0;
    *(ulong *)(puVar11 + 4) = CONCAT62(uStack_6f,CONCAT11(local_70,uStack_74._3_1_));
    *(undefined8 *)(puVar11 + 6) = 0;
    *(ulong *)((long)puVar11 + 9) = CONCAT44(uStack_74,local_78);
    local_70 = 0;
    uStack_6f = 0;
    local_78 = 0;
    uStack_74 = 0;
    if ((*(byte *)(puVar11 + 8) & 1) == 0) {
      *(undefined2 *)(puVar11 + 8) = 0;
    }
    else {
      **(undefined1 **)(puVar11 + 0xc) = 0;
      *(undefined8 *)(puVar11 + 10) = 0;
      if ((*(byte *)(puVar11 + 8) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(puVar11 + 0xc));
        *(undefined8 *)(puVar11 + 8) = 0;
      }
    }
    *(undefined1 *)(puVar11 + 8) = 0;
    *(ulong *)(puVar11 + 10) = CONCAT71(local_88,uStack_89);
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(ulong *)((long)puVar11 + 0x21) = CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(**(long **)puVar2 + 0x10))
                (*(long **)puVar2,"debug_error_string_ == nullptr",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/call_op_set.h",0x31d);
    }
    goto LAB_002baae8;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar5 = (ulong)(byte)*(ulong *)(param_1 + 0x38);
    if (uVar5 != 0) goto LAB_002ba74c;
LAB_002ba7e8:
    local_88 = 0;
    uStack_81 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    uStack_8f = 0;
    uStack_89 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x38);
    if (uVar5 == 0) goto LAB_002ba7e8;
LAB_002ba74c:
    if (*(long *)(param_1 + 0x30) == 0) {
      pcVar10 = param_1 + 0x39;
      uVar5 = uVar5 & 0xff;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x38);
      pcVar10 = *(char **)(param_1 + 0x40);
    }
    if (0xffffffffffffffef < uVar5) {
      local_80 = (char *)0x0;
      uStack_81 = 0;
      local_88 = 0;
      uStack_89 = 0;
      uStack_8f = 0;
      local_90 = 0;
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uStack_81 = 0;
    local_88 = 0;
    uStack_89 = 0;
    uStack_8f = 0;
    local_90 = 0;
    local_80 = (char *)0x0;
    if (uVar5 < 0x17) {
      local_90 = (byte)((int)uVar5 << 1);
      pcVar3 = (char *)((ulong)&local_90 | 1);
      if (uVar5 == 0) goto LAB_002ba81c;
LAB_002ba780:
      if ((uVar5 < 0x40) || ((pcVar3 < pcVar10 + uVar5 && (pcVar10 < pcVar3 + uVar5)))) {
        pcVar7 = pcVar10;
LAB_002ba7a8:
        do {
          pcVar6 = pcVar7 + 1;
          pcVar4 = pcVar3 + 1;
          *pcVar3 = *pcVar7;
          pcVar3 = pcVar4;
          pcVar7 = pcVar6;
        } while (pcVar10 + uVar5 != pcVar6);
      }
      else {
        uVar8 = uVar5 & 0xffffffffffffffc0;
        pcVar7 = pcVar10 + uVar8;
        pcVar4 = pcVar3 + uVar8;
        pcVar3 = pcVar3 + 0x20;
        pcVar6 = pcVar10 + 0x20;
        uVar12 = uVar8;
        do {
          uVar16 = *(undefined8 *)(pcVar6 + -0x20);
          uVar18 = *(undefined8 *)(pcVar6 + -8);
          uVar17 = *(undefined8 *)(pcVar6 + -0x10);
          uVar12 = uVar12 - 0x40;
          uVar20 = *(undefined8 *)(pcVar6 + 8);
          uVar19 = *(undefined8 *)pcVar6;
          uVar22 = *(undefined8 *)(pcVar6 + 0x18);
          uVar21 = *(undefined8 *)(pcVar6 + 0x10);
          *(undefined8 *)(pcVar3 + -0x18) = *(undefined8 *)(pcVar6 + -0x18);
          *(undefined8 *)(pcVar3 + -0x20) = uVar16;
          *(undefined8 *)(pcVar3 + -8) = uVar18;
          *(undefined8 *)(pcVar3 + -0x10) = uVar17;
          *(undefined8 *)(pcVar3 + 8) = uVar20;
          *(undefined8 *)pcVar3 = uVar19;
          *(undefined8 *)(pcVar3 + 0x18) = uVar22;
          *(undefined8 *)(pcVar3 + 0x10) = uVar21;
          pcVar3 = pcVar3 + 0x40;
          pcVar6 = pcVar6 + 0x40;
        } while (uVar12 != 0);
        pcVar3 = pcVar4;
        if (uVar5 != uVar8) goto LAB_002ba7a8;
      }
    }
    else {
      uVar12 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pcVar3 = (char *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
      local_90 = (byte)uVar12 | 1;
      uStack_8f = (undefined6)(uVar12 >> 8);
      uStack_89 = (undefined1)(uVar12 >> 0x38);
      local_88 = (undefined7)uVar5;
      uStack_81 = (undefined1)(uVar5 >> 0x38);
      local_80 = pcVar3;
      if (uVar5 != 0) goto LAB_002ba780;
LAB_002ba81c:
      pcVar4 = pcVar3;
    }
    *pcVar4 = '\0';
  }
                    /* try { // try from 002ba828 to 002ba82f has its CatchHandler @ 002babe4 */
  FUN_002bb93c(local_a8,*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 002ba830 to 002ba847 has its CatchHandler @ 002babbc */
  FUN_002ba2d0(&local_78,iVar1,&local_90,local_a8);
  puVar9 = *(uint **)(param_1 + 0x18);
  puVar13 = puVar9 + 2;
  *puVar9 = local_78;
  if ((*puVar13 & 1) == 0) {
    *(undefined2 *)puVar13 = 0;
  }
  else {
    **(undefined1 **)(puVar9 + 6) = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    if ((puVar9[2] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(puVar9 + 6));
      puVar9[2] = 0;
      puVar9[3] = 0;
    }
  }
  *(undefined8 *)(puVar9 + 6) = local_60;
  *(void **)(puVar9 + 4) = pvStack_68;
  *(ulong *)puVar13 = CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70));
  pvStack_68 = (void *)0x0;
  local_60 = 0;
  local_70 = 0;
  uStack_6f = 0;
  uStack_69 = 0;
  puVar13 = puVar9 + 8;
  if ((*puVar13 & 1) == 0) {
    *(undefined2 *)puVar13 = 0;
  }
  else {
    **(undefined1 **)(puVar9 + 0xc) = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    if ((puVar9[8] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(puVar9 + 0xc));
      puVar9[8] = 0;
      puVar9[9] = 0;
    }
  }
  *(undefined8 *)(puVar9 + 0xc) = local_48;
  *(undefined8 *)(puVar9 + 10) = uStack_50;
  *(undefined8 *)puVar13 = local_58;
  uStack_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if ((local_70 & 1) == 0) {
    if ((local_a8[0] & 1) != 0) goto LAB_002ba944;
LAB_002ba918:
    if ((local_90 & 1) != 0) goto LAB_002ba95c;
LAB_002ba920:
    pcVar10 = *(char **)(param_1 + 0x20);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
    if ((local_a8[0] & 1) == 0) goto LAB_002ba918;
LAB_002ba944:
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
    if ((local_90 & 1) == 0) goto LAB_002ba920;
LAB_002ba95c:
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
    pcVar10 = *(char **)(param_1 + 0x20);
  }
  if (pcVar10 == (char *)0x0) goto LAB_002baae8;
  lVar15 = *(long *)(param_1 + 8);
  local_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6f = 0;
  uStack_69 = 0;
  pvStack_68 = (void *)0x0;
  __n = strlen(pcVar10);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT31(local_78._1_3_,(char)((int)__n << 1));
    pvVar14 = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_002ba9dc;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_78 = (uint)uVar5 | 1;
    uStack_74 = (undefined4)(uVar5 >> 0x20);
    local_70 = (byte)__n;
    uStack_6f = (undefined6)(__n >> 8);
    uStack_69 = (undefined1)(__n >> 0x38);
    pvStack_68 = pvVar14;
LAB_002ba9dc:
    memcpy(pvVar14,pcVar10,__n);
  }
  *(undefined1 *)((long)pvVar14 + __n) = 0;
  if ((uint *)(lVar15 + 0x138U) != &local_78) {
    uVar5 = (ulong)((byte)local_78 >> 1);
    pvVar14 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      uVar5 = CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70));
      pvVar14 = pvStack_68;
    }
                    /* try { // try from 002baa1c to 002baa1f has its CatchHandler @ 002baba8 */
    FUN_00291910((uint *)(lVar15 + 0x138U),pvVar14,uVar5);
  }
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,pvStack_68);
  }
  (**(code **)(**(long **)puVar2 + 0x58))(*(long **)puVar2,*(undefined8 *)(param_1 + 0x20));
LAB_002baae8:
  uStack_c8 = *(undefined8 *)(param_1 + 0x38);
  local_d0 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_c0 = *(undefined8 *)(param_1 + 0x40);
  (**(code **)(**(long **)puVar2 + 0x148))(*(long **)puVar2,&local_d0);
  return;
}


