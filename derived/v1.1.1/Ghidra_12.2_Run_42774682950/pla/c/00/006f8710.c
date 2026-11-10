/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f8710; name: FUN_006f8710
 */


void FUN_006f8710(long param_1,uint param_2)

{
  uint uVar1;
  char *__s;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  ulong *puVar5;
  bool bVar6;
  ulong *puVar7;
  long *plVar8;
  size_t __n;
  byte *pbVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  void *__dest;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte local_e0;
  undefined7 uStack_df;
  char *local_d0;
  long *plStack_c8;
  ulong local_c0;
  size_t sStack_b8;
  void *local_b0;
  long *local_a8;
  ulong *local_a0;
  ulong *puStack_98;
  ulong *local_90;
  long *local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  long *local_68;
  
  local_88 = (long *)FUN_00612290();
  local_90 = (void *)0x0;
  local_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    puStack_98 = *(ulong **)(param_1 + 0x38);
    local_a0 = *(ulong **)(param_1 + 0x30);
    local_90 = *(ulong **)(param_1 + 0x40);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x38);
    if (0xffffffffffffffef < uVar15) {
                    /* try { // try from 006f8eac to 006f8eb3 has its CatchHandler @ 006f8f60 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_1 + 0x40);
    if (uVar15 < 0x17) {
      local_a0 = (ulong *)(ulong)(byte)((int)uVar15 << 1);
      __dest = (void *)((ulong)&local_a0 | 1);
      if (uVar15 != 0) goto LAB_006f87bc;
    }
    else {
      uVar18 = uVar15 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*local_88 + 0x10))(local_88,uVar18,1);
      local_a0 = (ulong *)(uVar18 | 1);
      puStack_98 = (ulong *)uVar15;
      local_90 = __dest;
LAB_006f87bc:
      memcpy(__dest,pvVar17,uVar15);
    }
    *(undefined1 *)((long)__dest + uVar15) = 0;
  }
  local_70 = (ulong *)0x0;
  local_68 = (long *)FUN_00612290();
  puVar7 = (ulong *)(**(code **)(*local_68 + 0x10))(local_68,0x20,8);
  local_70 = puVar7 + 4;
  local_80 = puVar7;
  local_78 = puVar7;
  plVar8 = (long *)FUN_00612290();
  puVar5 = local_90;
  puVar14 = puStack_98;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = (ulong)plVar8;
  if (((ulong)local_a0 & 1) == 0) {
    puVar7[2] = (ulong)local_90;
    puVar7[1] = (ulong)puStack_98;
    *puVar7 = (ulong)local_a0;
    local_78 = local_78 + 4;
    goto LAB_006f88d0;
  }
  if (0xffffffffffffffef < puStack_98) {
                    /* try { // try from 006f8eb4 to 006f8ebb has its CatchHandler @ 006f8ebc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (puStack_98 < 0x17) {
    pbVar9 = (byte *)((long)puVar7 + 1);
    *(byte *)puVar7 = (byte)((int)puStack_98 << 1);
    if (puStack_98 != (ulong *)0x0) goto LAB_006f888c;
  }
  else {
    uVar15 = (long)puStack_98 + 0x10U & 0xfffffffffffffff0;
    pbVar9 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar15,1);
    puVar7[1] = (ulong)puVar14;
    puVar7[2] = (ulong)pbVar9;
    *puVar7 = uVar15 | 1;
LAB_006f888c:
    memcpy(pbVar9,puVar5,(size_t)puVar14);
  }
  pbVar9[(long)puVar14] = 0;
  local_78 = local_78 + 4;
  if (((ulong)local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))(local_88,local_90,(ulong)local_a0 & 0xfffffffffffffffe,1);
  }
LAB_006f88d0:
  puStack_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  local_a0 = (ulong *)0x0;
  local_88 = (long *)FUN_00612290();
  lVar12 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar12 == lVar2) {
LAB_006f8d4c:
    FUN_006f92f0(param_1,param_2 & 1,&local_80,&local_a0);
    puVar14 = local_a0;
    if (local_a0 != (ulong *)0x0) {
      if (puStack_98 != local_a0) {
        bVar3 = (byte)puStack_98[-4];
        puVar7 = puStack_98 + -4;
        puVar5 = puStack_98;
        while( true ) {
          puVar4 = puVar7;
          if ((bVar3 & 1) != 0) {
            (**(code **)(*(long *)puVar5[-1] + 0x18))
                      ((long *)puVar5[-1],puVar5[-2],puVar5[-4] & 0xfffffffffffffffe,1);
          }
          if (puVar14 == puVar4) break;
          bVar3 = (byte)puVar4[-4];
          puVar7 = puVar4 + -4;
          puVar5 = puVar4;
        }
      }
      puStack_98 = puVar14;
      (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - (long)local_a0,8);
    }
    puVar14 = local_80;
    if (local_80 != (ulong *)0x0) {
      if (local_78 != local_80) {
        bVar3 = (byte)local_78[-4];
        puVar7 = local_78 + -4;
        puVar5 = local_78;
        while( true ) {
          puVar4 = puVar7;
          if ((bVar3 & 1) != 0) {
            (**(code **)(*(long *)puVar5[-1] + 0x18))
                      ((long *)puVar5[-1],puVar5[-2],puVar5[-4] & 0xfffffffffffffffe,1);
          }
          if (puVar14 == puVar4) break;
          bVar3 = (byte)puVar4[-4];
          puVar7 = puVar4 + -4;
          puVar5 = puVar4;
        }
      }
      local_78 = puVar14;
      (**(code **)(*local_68 + 0x18))(local_68,local_80,(long)local_70 - (long)local_80,8);
    }
    return;
  }
  pbVar9 = (byte *)(lVar12 + 0x50);
  if ((*pbVar9 & 1) == 0) goto LAB_006f8948;
LAB_006f8950:
  pbVar9 = *(byte **)(lVar12 + 0x60);
  lVar20 = lVar12;
  do {
    FUN_002a8590(&local_e0,pbVar9,0);
    local_c0 = 0;
    sStack_b8 = 0;
    __s = (char *)((ulong)&local_e0 | 1);
    if ((local_e0 & 1) != 0) {
      __s = local_d0;
    }
    local_b0 = (void *)0x0;
    plVar8 = (long *)FUN_00612290();
    local_a8 = plVar8;
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 006f8e8c to 006f8e93 has its CatchHandler @ 006f8fa4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_c0 = CONCAT71(local_c0._1_7_,(char)((int)__n << 1));
      pvVar17 = (void *)((ulong)&local_c0 | 1);
      if (__n != 0) goto LAB_006f89e4;
    }
    else {
      uVar15 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar15,1);
      local_c0 = uVar15 | 1;
      sStack_b8 = __n;
      local_b0 = pvVar17;
LAB_006f89e4:
      memcpy(pvVar17,__s,__n);
    }
    *(undefined1 *)((long)pvVar17 + __n) = 0;
                    /* try { // try from 006f89f8 to 006f8a03 has its CatchHandler @ 006f8fb4 */
    FUN_006f9110(&local_80,&local_c0);
    if ((local_c0 & 1) == 0) {
      if ((local_e0 & 1) == 0) goto LAB_006f8a14;
LAB_006f8a84:
      (**(code **)(*plStack_c8 + 0x18))
                (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
      if (puStack_98 == local_90) goto LAB_006f8ab0;
LAB_006f8a24:
      puVar14 = puStack_98;
      plVar8 = (long *)FUN_00612290();
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = (ulong)plVar8;
      if ((*(byte *)(lVar20 + 0x98) & 1) == 0) {
        uVar18 = *(ulong *)(lVar20 + 0xa0);
        uVar15 = *(ulong *)(lVar20 + 0x98);
        puVar14[2] = *(ulong *)(lVar20 + 0xa8);
        puVar14[1] = uVar18;
        *puVar14 = uVar15;
      }
      else {
        uVar15 = *(ulong *)(lVar20 + 0xa0);
        if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar17 = *(void **)(lVar20 + 0xa8);
        if (uVar15 < 0x17) {
          pbVar9 = (byte *)((long)puVar14 + 1);
          *(byte *)puVar14 = (byte)((int)uVar15 << 1);
          if (uVar15 != 0) goto LAB_006f8b90;
        }
        else {
          uVar18 = uVar15 + 0x10 & 0xfffffffffffffff0;
          pbVar9 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar18,1);
          puVar14[1] = uVar15;
          puVar14[2] = (ulong)pbVar9;
          *puVar14 = uVar18 | 1;
LAB_006f8b90:
          memcpy(pbVar9,pvVar17,uVar15);
        }
        pbVar9[uVar15] = 0;
      }
      puStack_98 = puStack_98 + 4;
    }
    else {
      (**(code **)(*local_a8 + 0x18))(local_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
      if ((local_e0 & 1) != 0) goto LAB_006f8a84;
LAB_006f8a14:
      if (puStack_98 != local_90) goto LAB_006f8a24;
LAB_006f8ab0:
      lVar12 = (long)puStack_98 - (long)local_a0 >> 5;
      uVar15 = lVar12 + 1;
      if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 006f8e94 to 006f8ea3 has its CatchHandler @ 006f8f94 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_90 - (long)local_a0 >> 5) < 0x3ffffffffffffff) {
        uVar18 = (long)local_90 - (long)local_a0 >> 4;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (uVar15 != 0) goto LAB_006f8af0;
        lVar16 = 0;
      }
      else {
        uVar15 = 0x7ffffffffffffff;
LAB_006f8af0:
        lVar16 = (**(code **)(*local_88 + 0x10))(local_88,uVar15 << 5,8);
      }
      puVar14 = (ulong *)(lVar16 + lVar12 * 0x20);
      plVar8 = (long *)FUN_00612290();
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = (ulong)plVar8;
      if ((*(byte *)(lVar20 + 0x98) & 1) == 0) {
        uVar19 = *(ulong *)(lVar20 + 0xa0);
        uVar18 = *(ulong *)(lVar20 + 0x98);
        puVar14[2] = *(ulong *)(lVar20 + 0xa8);
        puVar14[1] = uVar19;
        *puVar14 = uVar18;
      }
      else {
        uVar18 = *(ulong *)(lVar20 + 0xa0);
        if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 006f8ea4 to 006f8eab has its CatchHandler @ 006f8f64 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar17 = *(void **)(lVar20 + 0xa8);
        if (uVar18 < 0x17) {
          pbVar9 = (byte *)((long)puVar14 + 1);
          *(byte *)puVar14 = (byte)((int)uVar18 << 1);
          if (uVar18 != 0) goto LAB_006f8bd8;
        }
        else {
          uVar19 = uVar18 + 0x10 & 0xfffffffffffffff0;
          pbVar9 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar19,1);
          *puVar14 = uVar19 | 1;
          puVar14[1] = uVar18;
          puVar14[2] = (ulong)pbVar9;
LAB_006f8bd8:
          memcpy(pbVar9,pvVar17,uVar18);
        }
        pbVar9[uVar18] = 0;
      }
      puVar4 = local_90;
      puVar7 = local_a0;
      local_90 = (ulong *)(lVar16 + uVar15 * 0x20);
      puVar5 = puVar14 + 4;
      if ((long)puStack_98 - (long)local_a0 == 0) {
        puStack_98 = local_a0;
      }
      else {
        uVar15 = ((long)puStack_98 - (long)local_a0) - 0x20;
        uVar1 = ((uint)(uVar15 >> 5) & 0x7ffffff) + 1;
        puVar11 = puStack_98;
        if ((uVar1 & 3) != 0) {
          lVar12 = -((ulong)uVar1 & 3);
          puVar10 = puStack_98;
          puVar13 = puVar14;
          do {
            uVar18 = puVar10[-4];
            uVar21 = puVar10[-1];
            uVar19 = puVar10[-2];
            puVar14 = puVar13 + -4;
            puVar11 = puVar10 + -4;
            bVar6 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            puVar13[-3] = puVar10[-3];
            puVar13[-4] = uVar18;
            puVar13[-1] = uVar21;
            puVar13[-2] = uVar19;
            puVar10[-3] = 0;
            puVar10[-2] = 0;
            puVar10[-4] = 0;
            puVar10 = puVar11;
            puVar13 = puVar14;
          } while (bVar6);
        }
        puVar10 = puVar14;
        if (0x5f < uVar15) {
          do {
            uVar15 = puVar11[-4];
            uVar19 = puVar11[-1];
            uVar18 = puVar11[-2];
            puVar10[-3] = puVar11[-3];
            puVar10[-4] = uVar15;
            puVar10[-1] = uVar19;
            puVar10[-2] = uVar18;
            puVar11[-4] = 0;
            uVar15 = puVar11[-8];
            uVar19 = puVar11[-5];
            uVar18 = puVar11[-6];
            puVar11[-3] = 0;
            puVar11[-2] = 0;
            puVar14 = puVar10 + -0x10;
            puVar10[-7] = puVar11[-7];
            puVar10[-8] = uVar15;
            puVar10[-5] = uVar19;
            puVar10[-6] = uVar18;
            puVar11[-8] = 0;
            uVar15 = puVar11[-0xc];
            uVar19 = puVar11[-9];
            uVar18 = puVar11[-10];
            puVar11[-7] = 0;
            puVar11[-6] = 0;
            puVar10[-0xb] = puVar11[-0xb];
            puVar10[-0xc] = uVar15;
            puVar10[-9] = uVar19;
            puVar10[-10] = uVar18;
            puVar11[-0xc] = 0;
            uVar15 = puVar11[-0x10];
            uVar19 = puVar11[-0xd];
            uVar18 = puVar11[-0xe];
            puVar11[-0xb] = 0;
            puVar11[-10] = 0;
            puVar10[-0xf] = puVar11[-0xf];
            puVar10[-0x10] = uVar15;
            puVar10[-0xd] = uVar19;
            puVar10[-0xe] = uVar18;
            puVar11[-0xe] = 0;
            puVar13 = puVar11 + -0x10;
            *puVar13 = 0;
            puVar11[-0xf] = 0;
            puVar10 = puVar14;
            puVar11 = puVar13;
          } while (local_a0 != puVar13);
        }
      }
      bVar6 = puStack_98 != local_a0;
      local_a0 = puVar14;
      if (bVar6) {
        bVar3 = (byte)puStack_98[-4];
        puVar11 = puStack_98 + -4;
        puVar14 = puStack_98;
        while( true ) {
          puVar10 = puVar11;
          puStack_98 = puVar5;
          if ((bVar3 & 1) != 0) {
            (**(code **)(*(long *)puVar14[-1] + 0x18))
                      ((long *)puVar14[-1],puVar14[-2],puVar14[-4] & 0xfffffffffffffffe,1);
          }
          puVar5 = puStack_98;
          if (puVar7 == puVar10) break;
          bVar3 = (byte)puVar10[-4];
          puVar11 = puVar10 + -4;
          puVar14 = puVar10;
        }
      }
      puStack_98 = puVar5;
      if (puVar7 != (ulong *)0x0) {
        (**(code **)(*local_88 + 0x18))(local_88,puVar7,(long)puVar4 - (long)puVar7,8);
      }
    }
    if (lVar20 + 0xe0 == lVar2) goto LAB_006f8d4c;
    lVar12 = lVar20 + 0xe0;
    pbVar9 = (byte *)(lVar20 + 0x130);
    if ((*pbVar9 & 1) != 0) goto LAB_006f8950;
LAB_006f8948:
    pbVar9 = pbVar9 + 1;
    lVar20 = lVar12;
  } while( true );
}


