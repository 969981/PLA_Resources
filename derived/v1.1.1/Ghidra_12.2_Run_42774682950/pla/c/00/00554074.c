/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00554074; name: FUN_00554074
 */


void FUN_00554074(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  uint *puVar11;
  undefined8 uVar12;
  size_t sVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int *piVar20;
  undefined4 *puVar21;
  long lVar22;
  void *__dest;
  uint *__dest_00;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  int local_100 [2];
  void *local_f8;
  uint local_f0;
  int *local_e8;
  uint local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [40];
  int local_98 [2];
  void *local_90;
  undefined4 *local_80;
  uint local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined1 auStack_58 [40];
  
  if (*(char *)(param_1 + 3) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_00552270(auStack_58,*(undefined4 *)(param_1 + 0x10));
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_70 = (void *)0x0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar22 = (long)*(int *)(param_1 + 0x10) * 4;
    pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,lVar22);
    sVar13 = (long)local_68 - (long)local_70;
    pvVar10 = (void *)((long)pvVar9 + lVar22);
    __dest = (void *)((long)pvVar9 - sVar13);
    if (0 < (long)sVar13) {
      memcpy(__dest,local_70,sVar13);
    }
    bVar3 = local_70 != (void *)0x0;
    local_70 = __dest;
    local_68 = pvVar9;
    local_60 = pvVar10;
    if (bVar3) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
                    /* try { // try from 0055410c to 00554113 has its CatchHandler @ 0055470c */
  FUN_005504c0(local_98,*(undefined4 *)(param_1 + 0x10));
                    /* try { // try from 00554118 to 0055411f has its CatchHandler @ 005546f4 */
  FUN_005504c0(auStack_c0,*(undefined4 *)(param_1 + 0x10));
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_d8 = (long *)0x0;
                    /* try { // try from 00554128 to 00554143 has its CatchHandler @ 005546e4 */
  FUN_00554818(param_1,local_98,auStack_c0,&local_d8,auStack_58,&local_70);
  puVar2 = PTR_FUN_04373078;
  local_100[0] = local_98[0];
  local_f0 = 0;
  if (local_80 != (undefined4 *)0x0) {
    local_f0 = local_78;
  }
  pvVar10 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                 -(ulong)(local_f0 >> 0x1f) & 0xfffffffc00000000 |
                                 (ulong)local_f0 << 2);
  local_e0 = 0;
  if (local_80 != (undefined4 *)0x0) {
    local_e0 = local_78;
  }
  local_f8 = pvVar10;
  local_e8 = (int *)FUN_002e2e80(puVar2,-(ulong)(local_e0 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)local_e0 << 3);
  if ((((local_80 != (undefined4 *)0x0) && (local_78 != 0)) &&
      (memmove(pvVar10,local_90,(long)(int)local_78 << 2), local_80 != (undefined4 *)0x0)) &&
     (local_78 != 0)) {
    memmove(local_e8,local_80,(long)(int)local_78 << 3);
  }
  local_118 = PTR_LAB_04374d08;
                    /* try { // try from 005541f4 to 005541fb has its CatchHandler @ 005546e0 */
  FUN_00556410(local_e8,local_e8 + (long)local_100[0] * 2,&local_118);
  piVar20 = local_e8 + (long)local_100[0] * 2 + -2;
  piVar14 = local_e8;
  if (piVar20 != local_e8) {
    do {
      iVar19 = *piVar20;
      if ((iVar19 != *(int *)(param_1 + 0xc)) && (iVar19 != *(int *)(param_1 + 8))) {
                    /* try { // try from 00554244 to 0055425f has its CatchHandler @ 0055471c */
        FUN_00555100(param_1,iVar19,local_98,auStack_c0,&local_d8,auStack_58,&local_70);
        piVar14 = local_e8;
      }
      piVar20 = piVar20 + -2;
    } while (piVar20 != piVar14);
  }
  local_118 = (undefined *)0x0;
  local_110 = (undefined *)0x0;
  local_108 = (undefined *)0x0;
  if (local_98[0] != 0) {
    if (local_98[0] < 0) {
                    /* try { // try from 00554698 to 0055469f has its CatchHandler @ 005546d0 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    sVar13 = (long)local_98[0] * 4;
    local_118 = (undefined *)FUN_002e2e80(PTR_FUN_04373078,sVar13);
    puVar2 = local_118 + sVar13;
    local_108 = puVar2;
    memset(local_118,0,sVar13);
    local_110 = puVar2;
  }
  local_128 = (uint *)0x0;
  local_120 = (uint *)0x0;
  local_130 = (uint *)0x0;
  iVar19 = *(int *)(param_1 + 0x10);
  if (iVar19 != 0) {
    puVar11 = (uint *)FUN_002e2e80(PTR_FUN_04373078,(long)iVar19 * 8);
    sVar13 = (long)local_128 - (long)local_130;
    __dest_00 = (uint *)((long)puVar11 - sVar13);
    if (0 < (long)sVar13) {
      memcpy(__dest_00,local_130,sVar13);
    }
    bVar3 = local_130 != (uint *)0x0;
    local_130 = __dest_00;
    local_128 = puVar11;
    local_120 = puVar11 + (long)iVar19 * 2;
    if (bVar3) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  if (local_98[0] != 0) {
    puVar21 = local_80;
    do {
      *(int *)(local_118 + (long)(int)puVar21[1] * 4) =
           (int)((ulong)((long)local_128 - (long)local_130) >> 3);
                    /* try { // try from 00554334 to 0055437b has its CatchHandler @ 00554734 */
      uVar12 = FUN_00555648(param_1,*puVar21,local_98,&local_130,auStack_58,&local_70);
      local_128[-2] = local_128[-2] | 8;
      FUN_00555e40(uVar12,&local_130,*(undefined4 *)(local_118 + (long)(int)puVar21[1] * 4),
                   (ulong)((long)local_128 - (long)local_130) >> 3);
      puVar21 = puVar21 + 2;
    } while (puVar21 != local_80 + (long)local_98[0] * 2);
  }
  uVar12 = 0;
  uVar24 = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = (int)((ulong)((long)local_110 - (long)local_118) >> 2);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  uVar16 = (long)local_128 - (long)local_130;
  iVar19 = (int)(uVar16 >> 3);
  if (iVar19 < 1) {
    uVar26 = 0;
    uVar25 = 0;
  }
  else {
    lVar22 = 0;
    uVar6 = *local_130;
    puVar11 = local_130;
    while( true ) {
      if ((uVar6 & 7) != 1) {
        *puVar11 = uVar6 & 0xf | *(int *)(local_118 + ((ulong)(uVar6 >> 2) & 0x3ffffffc)) << 4;
      }
      lVar1 = param_1 + (ulong)(uVar6 & 7) * 4;
      lVar22 = lVar22 + 1;
      puVar11 = puVar11 + 2;
      *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      if ((long)(uVar16 * 0x20000000) >> 0x20 <= lVar22) break;
      uVar6 = *puVar11;
    }
    uVar24 = *(undefined8 *)(param_1 + 0x34);
    uVar12 = *(undefined8 *)(param_1 + 0x2c);
    uVar26 = *(undefined8 *)(param_1 + 0x44);
    uVar25 = *(undefined8 *)(param_1 + 0x3c);
  }
  if ((int)uVar12 + (int)uVar25 + (int)((ulong)uVar12 >> 0x20) + (int)((ulong)uVar25 >> 0x20) +
      (int)uVar24 + (int)uVar26 + (int)((ulong)uVar24 >> 0x20) + (int)((ulong)uVar26 >> 0x20) !=
      iVar19) {
                    /* try { // try from 00554678 to 00554697 has its CatchHandler @ 005546c0 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("(total) == (static_cast<int>(flat.size()))",
                  "external/com_github_google_re2/re2/prog.cc",0x267,"Flatten");
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) != 0) {
                    /* try { // try from 005546a0 to 005546bf has its CatchHandler @ 005546c0 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("(start()) == (0)","external/com_github_google_re2/re2/prog.cc",0x26b,"Flatten")
      ;
    }
  }
  else {
    lVar22 = 4;
    if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
      lVar22 = 8;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_118 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(local_118 + lVar22);
  }
  *(int *)(param_1 + 0x10) = iVar19;
  pvVar10 = (void *)FUN_002e2e80(PTR_FUN_04373078,(long)(uVar16 * 0x20000000) >> 0x1d);
  lVar22 = *(long *)(param_1 + 0x60);
  *(void **)(param_1 + 0x60) = pvVar10;
  if (lVar22 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
    pvVar10 = *(void **)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x68) = iVar19;
  memmove(pvVar10,local_130,(long)*(int *)(param_1 + 0x10) << 3);
  iVar19 = *(int *)(param_1 + 0x10);
  if (iVar19 < 0x201) {
    pvVar10 = (void *)FUN_002e2e80(PTR_FUN_04373078,(long)iVar19 << 1);
    lVar22 = *(long *)(param_1 + 0x50);
    *(void **)(param_1 + 0x50) = pvVar10;
    if (lVar22 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      pvVar10 = *(void **)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x58) = iVar19;
    memset(pvVar10,0xff,(long)*(int *)(param_1 + 0x10) << 1);
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar16 = (ulong)(int)uVar6;
    if (0 < (int)uVar6) {
      lVar22 = *(long *)(param_1 + 0x50);
      if (uVar6 < 4) {
        uVar17 = 0;
      }
      else {
        uVar18 = 0;
        uVar17 = uVar16 & 0xfffffffffffffffc;
        do {
          piVar14 = (int *)(local_118 + uVar18 * 4);
          iVar4 = piVar14[1];
          iVar19 = piVar14[2];
          iVar5 = piVar14[3];
          uVar7 = (ushort)uVar18;
          *(ushort *)(lVar22 + (long)*piVar14 * 2) = uVar7;
          *(ushort *)(lVar22 + (long)iVar4 * 2) = uVar7 | 1;
          *(ushort *)(lVar22 + (long)iVar19 * 2) = uVar7 | 2;
          uVar18 = uVar18 + 4;
          *(ushort *)(lVar22 + (long)iVar5 * 2) = uVar7 | 3;
        } while (uVar17 != uVar18);
        if (uVar17 == uVar16) goto LAB_0055458c;
      }
      do {
        *(short *)(lVar22 + (long)*(int *)(local_118 + uVar17 * 4) * 2) = (short)uVar17;
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)uVar16);
    }
  }
LAB_0055458c:
  if (local_130 != (uint *)0x0) {
    local_128 = local_130;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (local_118 != (undefined *)0x0) {
    local_110 = local_118;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_005505b8(local_100);
  plVar8 = local_d8;
  puVar2 = PTR_LAB_04373088;
  if (local_d8 != (long *)0x0) {
    if (local_d0 != local_d8) {
      plVar23 = local_d0 + -3;
      lVar22 = *plVar23;
      plVar15 = local_d0;
      if (lVar22 != 0) goto LAB_00554600;
      while (plVar15 = plVar23, plVar8 != plVar23) {
        while( true ) {
          plVar23 = plVar15 + -3;
          lVar22 = *plVar23;
          if (lVar22 == 0) break;
LAB_00554600:
          plVar15[-2] = lVar22;
          FUN_002e2ea0(puVar2);
          plVar15 = plVar23;
          if (plVar8 == plVar23) goto LAB_00554624;
        }
      }
    }
LAB_00554624:
    local_d0 = plVar8;
    FUN_002e2ea0(PTR_LAB_04373088,local_d8);
  }
  FUN_005505b8(auStack_c0);
  FUN_005505b8(local_98);
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_00552710(auStack_58);
  return;
}


