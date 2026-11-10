/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00703874; name: FUN_00703874
 */


void FUN_00703874(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  size_t __n;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  void *__dest;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pbVar5 = *(byte **)(param_2 + 0x28);
  if ((*pbVar5 & 1) == 0) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = *(byte **)(pbVar5 + 0x10);
  }
  FUN_0070f410(&local_a0,pbVar5);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  pbVar5 = *(byte **)(param_2 + 0x38);
  if ((*pbVar5 & 1) == 0) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = *(byte **)(pbVar5 + 0x10);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = (long *)FUN_00612290();
  param_1[7] = plVar4;
  __n = strlen((char *)pbVar5);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00703c48 to 00703c4f has its CatchHandler @ 00703c50 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00703990;
  }
  else {
    uVar15 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar15,1);
    param_1[4] = uVar15 | 1;
    param_1[5] = __n;
    param_1[6] = __dest;
  }
  memcpy(__dest,pbVar5,__n);
LAB_00703990:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_2 + 0x60);
  uVar17 = NEON_rev64(*(undefined8 *)(param_2 + 0x50),4);
  param_1[0xb] = 0;
  param_1[10] = (long)(int)((ulong)uVar17 >> 0x20);
  param_1[9] = (long)(int)uVar17;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar17 = FUN_00612290();
  param_1[0xe] = uVar17;
  puVar14 = (undefined8 *)0x0;
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar14 = (undefined8 *)(*(long *)(param_3 + 0x10) + 8);
  }
  if (*(int *)(param_3 + 8) != 0) {
    puVar1 = puVar14 + *(int *)(param_3 + 8);
    uVar15 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar17 = *puVar14;
    if (uVar7 <= uVar15) goto LAB_00703a48;
LAB_00703a18:
    FUN_00703644(uVar15,uVar17);
    param_1[0xc] = param_1[0xc] + 0xa8;
LAB_00703a2c:
    puVar14 = puVar14 + 1;
    if (puVar14 != puVar1) {
      do {
        uVar15 = param_1[0xc];
        uVar7 = param_1[0xd];
        uVar17 = *puVar14;
        if (uVar15 < uVar7) goto LAB_00703a18;
LAB_00703a48:
        lVar10 = param_1[0xb];
        lVar6 = (long)(uVar15 - lVar10) >> 3;
        uVar15 = lVar6 * -0x30c30c30c30c30c3 + 1;
        if (0x186186186186186 < uVar15) {
                    /* try { // try from 00703c40 to 00703c47 has its CatchHandler @ 00703c60 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)(uVar7 - lVar10) >> 3;
        uVar7 = 0x186186186186186;
        if ((ulong)(lVar10 * -0x30c30c30c30c30c3) < 0xc30c30c30c30c3) {
          uVar8 = lVar10 * -0x6186186186186186;
          uVar7 = uVar15;
          if (uVar15 <= uVar8) {
            uVar7 = uVar8;
          }
          if (uVar7 != 0) goto LAB_00703aa0;
          lVar10 = 0;
        }
        else {
LAB_00703aa0:
          lVar10 = (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],uVar7 * 0xa8,8);
        }
        lVar11 = lVar10 + lVar6 * 8;
        FUN_00703644(lVar11,uVar17);
        lVar12 = param_1[0xb];
        lVar13 = param_1[0xc];
        lVar6 = lVar11 + 0xa8;
        if (lVar13 == lVar12) {
          lVar13 = lVar12;
        }
        else {
          lVar16 = 0;
          do {
            lVar2 = lVar13 + lVar16;
            uVar18 = *(undefined8 *)(lVar2 + -0xa0);
            uVar17 = *(undefined8 *)(lVar2 + -0xa8);
            uVar19 = *(undefined8 *)(lVar2 + -0x98);
            lVar3 = lVar11 + lVar16;
            *(undefined8 *)(lVar3 + -0x90) = *(undefined8 *)(lVar2 + -0x90);
            *(undefined8 *)(lVar3 + -0x98) = uVar19;
            *(undefined8 *)(lVar3 + -0xa0) = uVar18;
            *(undefined8 *)(lVar3 + -0xa8) = uVar17;
            *(undefined8 *)(lVar2 + -0xa8) = 0;
            *(undefined8 *)(lVar2 + -0xa0) = 0;
            *(undefined8 *)(lVar2 + -0x98) = 0;
            FUN_006d9e70(lVar3 + -0x88,lVar2 + -0x88);
            uVar17 = *(undefined8 *)(lVar2 + -0x80);
            uVar19 = *(undefined8 *)(lVar2 + -0x68);
            uVar18 = *(undefined8 *)(lVar2 + -0x70);
            *(undefined8 *)(lVar3 + -0x78) = *(undefined8 *)(lVar2 + -0x78);
            *(undefined8 *)(lVar3 + -0x80) = uVar17;
            *(undefined8 *)(lVar3 + -0x68) = uVar19;
            *(undefined8 *)(lVar3 + -0x70) = uVar18;
            *(undefined8 *)(lVar2 + -0x80) = 0;
            *(undefined8 *)(lVar2 + -0x78) = 0;
            *(undefined8 *)(lVar2 + -0x70) = 0;
            *(undefined8 *)(lVar3 + -0x60) = *(undefined8 *)(lVar2 + -0x60);
            uVar17 = *(undefined8 *)(lVar2 + -0x58);
            *(undefined8 *)(lVar3 + -0x50) = *(undefined8 *)(lVar2 + -0x50);
            *(undefined8 *)(lVar3 + -0x58) = uVar17;
            lVar9 = *(long *)(lVar2 + -0x48);
            *(long *)(lVar3 + -0x48) = lVar9;
            if (lVar9 == 0) {
              *(long *)(lVar3 + -0x60) = lVar3 + -0x58;
            }
            else {
              *(long *)(*(long *)(lVar3 + -0x58) + 0x10) = lVar3 + -0x58;
              *(undefined8 *)(lVar2 + -0x58) = 0;
              *(undefined8 **)(lVar2 + -0x60) = (undefined8 *)(lVar2 + -0x58);
              *(undefined8 *)(lVar2 + -0x48) = 0;
            }
            uVar17 = *(undefined8 *)(lVar2 + -0x40);
            uVar19 = *(undefined8 *)(lVar2 + -0x28);
            uVar18 = *(undefined8 *)(lVar2 + -0x30);
            *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
            *(undefined8 *)(lVar3 + -0x40) = uVar17;
            *(undefined8 *)(lVar3 + -0x28) = uVar19;
            *(undefined8 *)(lVar3 + -0x30) = uVar18;
            lVar16 = lVar16 + -0xa8;
            uVar17 = *(undefined8 *)(lVar2 + -0x20);
            uVar19 = *(undefined8 *)(lVar2 + -8);
            uVar18 = *(undefined8 *)(lVar2 + -0x10);
            *(undefined8 *)(lVar2 + -0x38) = 0;
            *(undefined8 *)(lVar2 + -0x30) = 0;
            *(undefined8 *)(lVar2 + -0x40) = 0;
            *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
            *(undefined8 *)(lVar3 + -0x20) = uVar17;
            *(undefined8 *)(lVar3 + -8) = uVar19;
            *(undefined8 *)(lVar3 + -0x10) = uVar18;
            *(undefined8 *)(lVar2 + -0x20) = 0;
            *(undefined8 *)(lVar2 + -0x18) = 0;
            *(undefined8 *)(lVar2 + -0x10) = 0;
          } while (lVar12 - lVar13 != lVar16);
          lVar12 = param_1[0xc];
          lVar11 = lVar11 + lVar16;
          lVar13 = param_1[0xb];
        }
        lVar16 = param_1[0xd];
        param_1[0xd] = lVar10 + uVar7 * 0xa8;
        param_1[0xb] = lVar11;
        param_1[0xc] = lVar6;
        while (lVar12 != lVar13) {
          lVar12 = lVar12 + -0xa8;
          FUN_00703d20(lVar12);
        }
        if (lVar13 == 0) goto LAB_00703a2c;
        (**(code **)(*(long *)param_1[0xe] + 0x18))((long *)param_1[0xe],lVar13,lVar16 - lVar13,8);
        puVar14 = puVar14 + 1;
        if (puVar14 == puVar1) {
          return;
        }
      } while( true );
    }
  }
  return;
}


