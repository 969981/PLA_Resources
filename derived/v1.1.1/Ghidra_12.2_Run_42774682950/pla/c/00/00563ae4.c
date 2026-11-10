/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00563ae4; name: FUN_00563ae4
 */


void FUN_00563ae4(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  void *__src;
  long lVar6;
  size_t __n;
  uint uVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ushort uVar18;
  char *pcVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  uint uVar23;
  ushort uVar24;
  
  if (param_2 < 0) {
    return;
  }
  uVar22 = 0;
  uVar24 = 0;
  uVar7 = 0;
  pcVar19 = (char *)0x0;
  uVar23 = 0;
  lVar15 = (long)param_2;
  if (0 < lVar15) goto LAB_00563b84;
LAB_00563c34:
  uVar16 = 0;
  pcVar21 = (char *)0x0;
  uVar18 = 0;
LAB_00563c40:
  if (uVar22 == uVar23) goto LAB_00563b5c;
LAB_00563c48:
  if (uVar22 == uVar23 + 1) goto LAB_00563b5c;
  uVar5 = FUN_0055eafc(pcVar19,uVar7,uVar24);
  uVar17 = (ulong)(int)uVar23;
  uVar20 = uVar17;
  if ((long)uVar17 < (long)uVar22) {
    do {
      FUN_00563188(*(undefined8 *)(param_1 + uVar20 * 8),uVar7);
      uVar20 = uVar20 + 1;
    } while (uVar22 != (uVar20 & 0xffffffff));
  }
  puVar10 = (undefined8 *)param_4[1];
  lVar6 = param_1 + uVar17 * 8;
  iVar3 = (int)uVar22 - uVar23;
  if (puVar10 < (undefined8 *)param_4[2]) {
    *puVar10 = uVar5;
    puVar10[1] = lVar6;
    *(int *)(puVar10 + 2) = iVar3;
    *(undefined4 *)((long)puVar10 + 0x14) = 0xffffffff;
    param_4[1] = (long)(puVar10 + 3);
    goto LAB_00563b5c;
  }
  __src = (void *)*param_4;
  lVar11 = (long)puVar10 - (long)__src >> 3;
  uVar17 = 0xaaaaaaaaaaaaaaa;
  uVar20 = lVar11 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar20) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = param_4[2] - (long)__src >> 3;
  if ((ulong)(lVar13 * -0x5555555555555555) < 0x555555555555555) {
    uVar14 = lVar13 * 0x5555555555555556;
    uVar17 = uVar20;
    if (uVar20 <= uVar14) {
      uVar17 = uVar14;
    }
    if (uVar17 != 0) goto LAB_00563d08;
    lVar13 = 0;
  }
  else {
LAB_00563d08:
    lVar13 = FUN_002e2e80(PTR_FUN_04373078,uVar17 * 0x18);
    __src = (void *)*param_4;
    puVar10 = (undefined8 *)param_4[1];
  }
  puVar12 = (undefined8 *)(lVar13 + lVar11 * 8);
  *puVar12 = uVar5;
  puVar12[1] = lVar6;
  __n = (long)puVar10 - (long)__src;
  *(int *)(puVar12 + 2) = iVar3;
  *(undefined4 *)((long)puVar12 + 0x14) = 0xffffffff;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar12 - __n),__src,__n);
  }
  param_4[2] = lVar13 + uVar17 * 0x18;
  lVar6 = *param_4;
  *param_4 = (long)((long)puVar12 - __n);
  param_4[1] = (long)(puVar12 + 3);
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
LAB_00563b5c:
  uVar4 = (uint)uVar22;
  if (lVar15 <= (long)uVar22) {
    uVar16 = uVar7;
    pcVar21 = pcVar19;
    uVar4 = uVar23;
    uVar18 = uVar24;
  }
  uVar23 = uVar4;
  pcVar19 = pcVar21;
  uVar7 = uVar16;
  uVar22 = uVar22 + 1;
  uVar24 = uVar18;
  if (uVar22 == param_2 + 1) {
    return;
  }
  do {
    if (lVar15 <= (long)uVar22) goto LAB_00563c34;
LAB_00563b84:
    pcVar8 = *(char **)(param_1 + uVar22 * 8);
    cVar1 = *pcVar8;
    while (cVar1 == '\x05') {
      if (*(short *)(pcVar8 + 6) == 0) {
        uVar2 = *(ushort *)(pcVar8 + 2);
        uVar16 = 0;
        pcVar21 = (char *)0x0;
        goto joined_r0x00563dac;
      }
      plVar9 = (long *)(pcVar8 + 8);
      if (*(short *)(pcVar8 + 6) != 1) {
        plVar9 = (long *)*plVar9;
      }
      pcVar8 = (char *)*plVar9;
      cVar1 = *pcVar8;
    }
    uVar2 = *(ushort *)(pcVar8 + 2);
    if (cVar1 == '\x04') {
      uVar16 = *(uint *)(pcVar8 + 0x18);
      pcVar21 = *(char **)(pcVar8 + 0x20);
    }
    else {
      uVar16 = (uint)(cVar1 == '\x03');
      pcVar21 = (char *)0x0;
      if (cVar1 == '\x03') {
        pcVar21 = pcVar8 + 0x18;
      }
    }
joined_r0x00563dac:
    uVar18 = uVar2 & 1;
    if ((uVar2 & 1) != uVar24) goto LAB_00563c40;
    uVar18 = uVar24;
    if (((int)uVar7 < 1) || ((int)uVar16 < 1)) break;
    lVar6 = 0;
    while (*(int *)(pcVar19 + lVar6 * 4) == *(int *)(pcVar21 + lVar6 * 4)) {
      lVar6 = lVar6 + 1;
      if (((int)uVar7 <= lVar6) || ((int)uVar16 <= lVar6)) goto LAB_00563de0;
    }
    if ((int)lVar6 == 0) goto LAB_00563c40;
LAB_00563de0:
    uVar7 = (uint)lVar6;
    uVar22 = uVar22 + 1;
    if (uVar22 == param_2 + 1) {
      return;
    }
  } while( true );
  if (uVar22 != uVar23) goto LAB_00563c48;
  goto LAB_00563b5c;
}


