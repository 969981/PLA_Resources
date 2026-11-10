/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00361ff0; name: FUN_00361ff0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00361ff0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  byte *pbVar7;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  void *__src;
  void *__dest;
  float fVar18;
  double dVar19;
  undefined *local_148;
  undefined8 **ppuStack_140;
  undefined8 local_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_90;
  undefined8 **ppuStack_88;
  void *local_80;
  undefined8 *local_70;
  undefined **local_68;
  
  puVar6 = (ulong *)param_2[6];
  if (puVar6 != (ulong *)0x0) {
    local_d0 = (undefined8 *)PTR_LAB_04373a98;
    local_f0 = param_2;
    if (*puVar6 != 0xffffffffffffffff) {
      local_90 = &local_d0;
      ppuStack_88 = &local_f0;
      local_b0 = &local_90;
      std::__call_once(puVar6,&local_b0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  uVar8 = (ulong)*(uint *)(param_2 + 7);
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + uVar8 * 4)) {
  case 1:
    lVar9 = param_1[2];
    if ((*(uint *)(lVar9 + 0x10) >> 3 & 1) == 0) {
      if ((*(uint *)(lVar9 + 0x10) >> 4 & 1) == 0) {
        FUN_0034b2f0(&local_b0,"Value must be integer for int32 option \"",param_2[1]);
                    /* try { // try from 003620bc to 003620cf has its CatchHandler @ 00363334 */
        puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
        ppuStack_88 = (undefined8 **)puVar6[1];
        local_90 = (undefined8 **)*puVar6;
        local_80 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 003620f4 to 003620ff has its CatchHandler @ 00363324 */
        FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
      }
      else {
        uVar14 = *(ulong *)(lVar9 + 0x50);
        if (-0x80000001 < (long)uVar14) goto LAB_003627e0;
        FUN_0034b2f0(&local_b0,"Value out of range for int32 option \"",param_2[1]);
                    /* try { // try from 00362798 to 003627ab has its CatchHandler @ 0036314c */
        puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
        ppuStack_88 = (undefined8 **)puVar6[1];
        local_90 = (undefined8 **)*puVar6;
        local_80 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 003627d0 to 003627db has its CatchHandler @ 0036313c */
        FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
      }
    }
    else {
      uVar14 = *(ulong *)(lVar9 + 0x48);
      if (uVar14 >> 0x1f == 0) {
LAB_003627e0:
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        puVar6 = (ulong *)param_2[6];
        if (puVar6 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_04373a98;
          local_f0 = param_2;
          if (*puVar6 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            puVar6 = (ulong *)std::__call_once(puVar6,&local_b0,
                                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          uVar8 = (ulong)*(uint *)(param_2 + 7);
        }
        FUN_00363454(puVar6,uVar2,uVar14 & 0xffffffff,uVar8,param_3);
        return 1;
      }
      FUN_0034b2f0(&local_b0,"Value out of range for int32 option \"",param_2[1]);
                    /* try { // try from 00362608 to 0036261b has its CatchHandler @ 003632d4 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 00362640 to 0036264b has its CatchHandler @ 003632c4 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 2:
    lVar9 = param_1[2];
    if ((*(uint *)(lVar9 + 0x10) >> 3 & 1) == 0) {
      if ((*(uint *)(lVar9 + 0x10) >> 4 & 1) != 0) {
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        lVar9 = *(long *)(lVar9 + 0x50);
        puVar6 = (ulong *)param_2[6];
        goto joined_r0x00362660;
      }
      FUN_0034b2f0(&local_b0,"Value must be integer for int64 option \"",param_2[1]);
                    /* try { // try from 003622e8 to 003622fb has its CatchHandler @ 00363314 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 00362320 to 0036232b has its CatchHandler @ 00363304 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x48);
      if (-1 < lVar9) {
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        puVar6 = (ulong *)param_2[6];
joined_r0x00362660:
        if (puVar6 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_04373a98;
          local_f0 = param_2;
          if (*puVar6 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            puVar6 = (ulong *)std::__call_once(puVar6,&local_b0,
                                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          uVar8 = (ulong)*(uint *)(param_2 + 7);
        }
        FUN_0036351c(puVar6,uVar2,lVar9,uVar8,param_3);
        return 1;
      }
      FUN_0034b2f0(&local_b0,"Value out of range for int64 option \"",param_2[1]);
                    /* try { // try from 00362900 to 00362913 has its CatchHandler @ 003632b4 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 00362938 to 00362943 has its CatchHandler @ 003632a4 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 3:
    if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) == 0) {
      FUN_0034b2f0(&local_b0,"Value must be non-negative integer for uint32 option \"",param_2[1]);
                    /* try { // try from 003621ac to 003621bf has its CatchHandler @ 00363444 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 003621e4 to 003621ef has its CatchHandler @ 00363408 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    else {
      uVar14 = *(ulong *)(param_1[2] + 0x48);
      if (uVar14 >> 0x20 == 0) {
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        puVar6 = (ulong *)param_2[6];
        if (puVar6 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_04373a98;
          local_f0 = param_2;
          if (*puVar6 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            puVar6 = (ulong *)std::__call_once(puVar6,&local_b0,
                                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          uVar8 = (ulong)*(uint *)(param_2 + 7);
        }
        FUN_003635d0(puVar6,uVar2,uVar14 & 0xffffffff,uVar8,param_3);
        return 1;
      }
      FUN_0034b2f0(&local_b0,"Value out of range for uint32 option \"",*param_2);
                    /* try { // try from 00362498 to 003624ab has its CatchHandler @ 003632f4 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 003624d0 to 003624db has its CatchHandler @ 003632e4 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 4:
    if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x44);
      uVar15 = *(undefined8 *)(param_1[2] + 0x48);
      puVar6 = (ulong *)param_2[6];
      if (puVar6 != (ulong *)0x0) {
        local_d0 = (undefined8 *)PTR_LAB_04373a98;
        local_f0 = param_2;
        if (*puVar6 != 0xffffffffffffffff) {
          local_90 = &local_d0;
          ppuStack_88 = &local_f0;
          local_b0 = &local_90;
          puVar6 = (ulong *)std::__call_once(puVar6,&local_b0,
                                             (_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        uVar8 = (ulong)*(uint *)(param_2 + 7);
      }
      FUN_00363678(puVar6,uVar2,uVar15,uVar8,param_3);
      return 1;
    }
    FUN_0034b2f0(&local_b0,"Value must be non-negative integer for uint64 option \"",param_2[1]);
                    /* try { // try from 00362214 to 00362227 has its CatchHandler @ 003633f8 */
    puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
    ppuStack_88 = (undefined8 **)puVar6[1];
    local_90 = (undefined8 **)*puVar6;
    local_80 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 0036224c to 00362257 has its CatchHandler @ 003633e8 */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    break;
  case 5:
    lVar9 = param_1[2];
    uVar1 = *(uint *)(lVar9 + 0x10);
    if ((uVar1 >> 5 & 1) != 0) {
      dVar19 = *(double *)(lVar9 + 0x58);
LAB_00362a5c:
      FUN_0030d7b0(param_3,*(undefined4 *)((long)param_2 + 0x44),dVar19);
      return 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      dVar19 = (double)NEON_ucvtf(*(undefined8 *)(lVar9 + 0x48));
      goto LAB_00362a5c;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      dVar19 = (double)*(long *)(lVar9 + 0x50);
      goto LAB_00362a5c;
    }
    FUN_0034b2f0(&local_b0,"Value must be number for double option \"",param_2[1]);
                    /* try { // try from 0036212c to 0036213f has its CatchHandler @ 0036318c */
    puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
    ppuStack_88 = (undefined8 **)puVar6[1];
    local_90 = (undefined8 **)*puVar6;
    local_80 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00362164 to 0036216f has its CatchHandler @ 0036317c */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    break;
  case 6:
    lVar9 = param_1[2];
    uVar1 = *(uint *)(lVar9 + 0x10);
    if ((uVar1 >> 5 & 1) != 0) {
      fVar18 = (float)*(double *)(lVar9 + 0x58);
LAB_00362a7c:
      FUN_0030d6ac(param_3,*(undefined4 *)((long)param_2 + 0x44),fVar18);
      return 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      fVar18 = (float)*(ulong *)(lVar9 + 0x48);
      goto LAB_00362a7c;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      fVar18 = (float)*(long *)(lVar9 + 0x50);
      goto LAB_00362a7c;
    }
    FUN_0034b2f0(&local_b0,"Value must be number for float option \"",param_2[1]);
                    /* try { // try from 00362358 to 0036236b has its CatchHandler @ 0036316c */
    puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
    ppuStack_88 = (undefined8 **)puVar6[1];
    local_90 = (undefined8 **)*puVar6;
    local_80 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00362390 to 0036239b has its CatchHandler @ 0036315c */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    break;
  case 7:
    if ((*(byte *)(param_1[2] + 0x10) & 1) == 0) {
      FUN_0034b2f0(&local_b0,"Value must be identifier for boolean option \"",param_2[1]);
                    /* try { // try from 003623c0 to 003623d3 has its CatchHandler @ 003633b8 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 003623f8 to 00362403 has its CatchHandler @ 003633a8 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    else {
      pbVar7 = *(byte **)(param_1[2] + 0x30);
      bVar3 = *pbVar7;
      uVar8 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      if (uVar8 == 5) {
        pbVar13 = *(byte **)(pbVar7 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar13 = pbVar7 + 1;
        }
        if (*(int *)pbVar13 == 0x736c6166 && pbVar13[4] == 0x65) {
          lVar9 = 0;
LAB_00362d24:
          uVar2 = *(undefined4 *)((long)param_2 + 0x44);
          goto LAB_00362d58;
        }
      }
      else if (uVar8 == 4) {
        pbVar13 = *(byte **)(pbVar7 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar13 = pbVar7 + 1;
        }
        if (*(int *)pbVar13 == 0x65757274) {
          lVar9 = 1;
          goto LAB_00362d24;
        }
      }
      FUN_0034b2f0(&local_b0,"Value must be \"true\" or \"false\" for boolean option \"",param_2[1])
      ;
                    /* try { // try from 0036298c to 0036299f has its CatchHandler @ 00363364 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 003629c4 to 003629cf has its CatchHandler @ 00363354 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 8:
    lVar9 = param_1[2];
    if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
      FUN_0034b2f0(&local_b0,"Value must be identifier for enum-valued option \"",param_2[1]);
                    /* try { // try from 0036227c to 0036228f has its CatchHandler @ 003633d8 */
      puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      ppuStack_88 = (undefined8 **)puVar6[1];
      local_90 = (undefined8 **)*puVar6;
      local_80 = (void *)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 003622b4 to 003622bf has its CatchHandler @ 003633c8 */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
      break;
    }
    puVar6 = (ulong *)param_2[6];
    if (puVar6 != (ulong *)0x0) {
      local_d0 = param_2;
      if (*puVar6 != 0xffffffffffffffff) {
        ppuStack_88 = &local_d0;
        local_90 = (undefined8 **)PTR_LAB_04373a98;
        local_b0 = &local_90;
        std::__call_once(puVar6,&local_b0,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      lVar9 = param_1[2];
    }
    puVar16 = (undefined8 *)param_2[0xe];
    pbVar7 = *(byte **)(lVar9 + 0x30);
    lVar17 = *(long *)(puVar16[2] + 0x10);
    lVar9 = FUN_00341fc0();
    FUN_0038e9d0(PTR_DAT_04373b78,0);
    if (lVar17 == lVar9) {
      iVar5 = FUN_00364cf4(*(undefined8 *)(puVar16[2] + 0x90),puVar16,pbVar7);
      lVar9 = extraout_x1;
      if (iVar5 != 5) {
        lVar9 = 0;
      }
      if ((iVar5 != 0) && (iVar5 == 5)) goto LAB_00362d4c;
    }
    else {
      pbVar13 = (byte *)puVar16[1];
      ppuStack_88 = (undefined8 **)0x0;
      local_80 = (void *)0x0;
      local_90 = (undefined8 **)0x0;
      if ((*pbVar13 & 1) == 0) {
        ppuStack_88 = *(undefined8 ***)(pbVar13 + 8);
        local_90 = *(undefined8 ***)pbVar13;
        local_80 = *(void **)(pbVar13 + 0x10);
      }
      else {
        ppuVar11 = *(undefined8 ***)(pbVar13 + 8);
        if ((undefined8 **)0xffffffffffffffef < ppuVar11) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        __src = *(void **)(pbVar13 + 0x10);
        if (&DAT_00000016 < ppuVar11) {
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppuVar11 + 2) & 0xfffffffffffffff0)
          ;
          local_90 = (undefined8 **)((ulong)(ppuVar11 + 2) & 0xfffffffffffffff0 | 1);
          ppuStack_88 = ppuVar11;
          local_80 = __dest;
LAB_00362abc:
          memcpy(__dest,__src,(size_t)ppuVar11);
        }
        else {
          local_90 = (undefined8 **)(ulong)(byte)((int)ppuVar11 << 1);
          __dest = (void *)((ulong)&local_90 | 1);
          if (ppuVar11 != (undefined8 **)0x0) goto LAB_00362abc;
        }
        *(undefined1 *)((long)__dest + (long)ppuVar11) = 0;
      }
      ppuVar11 = (undefined8 **)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        ppuVar11 = ppuStack_88;
      }
      bVar3 = *(byte *)*puVar16;
      if ((bVar3 & 1) == 0) {
        ppuVar12 = (undefined8 **)(ulong)(bVar3 >> 1);
        if (ppuVar12 <= ppuVar11) goto LAB_00362b20;
LAB_00362b0c:
                    /* try { // try from 00362b10 to 00362b67 has its CatchHandler @ 00363374 */
        FUN_002e6bd4(&local_90,-(long)ppuVar12,0);
      }
      else {
        ppuVar12 = *(undefined8 ***)((byte *)*puVar16 + 8);
        if (ppuVar11 < ppuVar12) goto LAB_00362b0c;
LAB_00362b20:
        ppuVar11 = (undefined8 **)((long)ppuVar11 - (long)ppuVar12);
        if (((ulong)local_90 & 1) == 0) {
          *(undefined1 *)((long)&local_90 + 1 + (long)ppuVar11) = 0;
          local_90 = (undefined8 **)CONCAT71(local_90._1_7_,(char)((int)ppuVar11 << 1));
        }
        else {
          *(undefined1 *)((long)local_80 + (long)ppuVar11) = 0;
          ppuStack_88 = ppuVar11;
        }
      }
      uVar8 = *(ulong *)(pbVar7 + 8);
      pbVar13 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar13 = pbVar7 + 1;
        uVar8 = (ulong)(*pbVar7 >> 1);
      }
      FUN_002e4094(&local_90,pbVar13,uVar8);
                    /* try { // try from 00362b6c to 00362b77 has its CatchHandler @ 00363344 */
      iVar5 = FUN_0034e7dc(*param_1,&local_90,1);
      if (iVar5 == 5) {
        if (*(undefined8 **)(extraout_x1_00 + 0x18) == puVar16) {
          bVar4 = false;
          lVar9 = extraout_x1_00;
        }
        else {
                    /* try { // try from 00362b94 to 00362ba3 has its CatchHandler @ 0036312c */
          FUN_0034b2f0(&local_148,"Enum type \"",puVar16[1]);
                    /* try { // try from 00362ba4 to 00362bb7 has its CatchHandler @ 00363104 */
          puVar6 = (ulong *)FUN_002e4094(&local_148,"\" has no value named \"",0x16);
          uStack_128 = puVar6[1];
          local_130 = *puVar6;
          local_120 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uVar8 = (ulong)(*pbVar7 >> 1);
          pbVar13 = pbVar7 + 1;
          if ((*pbVar7 & 1) != 0) {
            uVar8 = *(ulong *)(pbVar7 + 8);
            pbVar13 = *(byte **)(pbVar7 + 0x10);
          }
                    /* try { // try from 00362bec to 00362bf3 has its CatchHandler @ 003630dc */
          puVar6 = (ulong *)FUN_002e4094(&local_130,pbVar13,uVar8);
          uStack_108 = puVar6[1];
          local_110 = *puVar6;
          local_100 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
                    /* try { // try from 00362c0c to 00362c1f has its CatchHandler @ 003630b4 */
          puVar16 = (undefined8 *)FUN_002e4094(&local_110,"\" for option \"",0xe);
          uStack_e8 = puVar16[1];
          local_f0 = (undefined8 *)*puVar16;
          local_e0 = puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          pbVar10 = (byte *)param_2[1];
          uVar8 = *(ulong *)(pbVar10 + 8);
          pbVar13 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            pbVar13 = pbVar10 + 1;
            uVar8 = (ulong)(*pbVar10 >> 1);
          }
                    /* try { // try from 00362c54 to 00362c5b has its CatchHandler @ 0036308c */
          puVar16 = (undefined8 *)FUN_002e4094(&local_f0,pbVar13,uVar8);
          uStack_c8 = puVar16[1];
          local_d0 = (undefined8 *)*puVar16;
          local_c0 = puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
                    /* try { // try from 00362c74 to 00362c87 has its CatchHandler @ 00363064 */
          puVar16 = (undefined8 *)
                    FUN_002e4094(&local_d0,"\". This appears to be a value from a sibling type.",
                                 0x32);
          uStack_a8 = puVar16[1];
          local_b0 = (undefined8 *)*puVar16;
          local_a0 = puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
                    /* try { // try from 00362cac to 00362cb7 has its CatchHandler @ 00363008 */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_b0);
          if (((ulong)local_b0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_a0);
          }
          if (((ulong)local_d0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_c0);
          }
          if (((ulong)local_f0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_e0);
          }
          if ((local_110 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_100);
          }
          if ((local_130 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_120);
          }
          if (((ulong)local_148 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_138);
          }
          lVar9 = 0;
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
        lVar9 = 0;
      }
      if (((ulong)local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_80);
      }
      if (bVar4) {
        return 0;
      }
LAB_00362d4c:
      if (lVar9 != 0) {
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        lVar9 = (long)*(int *)(lVar9 + 0x10);
LAB_00362d58:
        FUN_0030d5b0(param_3,uVar2,lVar9);
        return 1;
      }
    }
    puVar6 = (ulong *)param_2[6];
    if ((puVar6 != (ulong *)0x0) && (local_70 = param_2, *puVar6 != 0xffffffffffffffff)) {
      ppuStack_140 = &local_70;
      local_148 = PTR_LAB_04373a98;
      local_68 = &local_148;
      std::__call_once(puVar6,&local_68,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    FUN_0034b2f0(&local_130,"Enum type \"",*(undefined8 *)(param_2[0xe] + 8));
                    /* try { // try from 00362dc0 to 00362dd3 has its CatchHandler @ 00363290 */
    puVar6 = (ulong *)FUN_002e4094(&local_130,"\" has no value named \"",0x16);
    uStack_108 = puVar6[1];
    local_110 = *puVar6;
    local_100 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = *(ulong *)(pbVar7 + 8);
    pbVar13 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar13 = pbVar7 + 1;
      uVar8 = (ulong)(*pbVar7 >> 1);
    }
                    /* try { // try from 00362e04 to 00362e0b has its CatchHandler @ 00363268 */
    puVar16 = (undefined8 *)FUN_002e4094(&local_110,pbVar13,uVar8);
    uStack_e8 = puVar16[1];
    local_f0 = (undefined8 *)*puVar16;
    local_e0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 00362e24 to 00362e37 has its CatchHandler @ 00363240 */
    puVar16 = (undefined8 *)FUN_002e4094(&local_f0,"\" for option \"",0xe);
    uStack_c8 = puVar16[1];
    local_d0 = (undefined8 *)*puVar16;
    local_c0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    pbVar13 = (byte *)param_2[1];
    uVar8 = *(ulong *)(pbVar13 + 8);
    pbVar7 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar7 = pbVar13 + 1;
      uVar8 = (ulong)(*pbVar13 >> 1);
    }
                    /* try { // try from 00362e6c to 00362e73 has its CatchHandler @ 00363218 */
    puVar16 = (undefined8 *)FUN_002e4094(&local_d0,pbVar7,uVar8);
    uStack_a8 = puVar16[1];
    local_b0 = (undefined8 *)*puVar16;
    local_a0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 00362e8c to 00362e9f has its CatchHandler @ 003631f0 */
    puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
    ppuStack_88 = (undefined8 **)puVar6[1];
    local_90 = (undefined8 **)*puVar6;
    local_80 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00362ec4 to 00362ecf has its CatchHandler @ 0036319c */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    if (((ulong)local_b0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
    if (((ulong)local_d0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_c0);
    }
    if (((ulong)local_f0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_e0);
    }
    uVar8 = local_120;
    if ((local_110 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_100);
      uVar8 = local_120;
    }
    if ((local_130 & 1) == 0) {
      return 0;
    }
    local_120 = uVar8;
    goto LAB_003629f4;
  case 9:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) != 0) {
      pbVar13 = *(byte **)(param_1[2] + 0x38);
      pbVar7 = (byte *)FUN_0030d8b4(param_3,*(undefined4 *)((long)param_2 + 0x44));
      if (pbVar7 == pbVar13) {
        return 1;
      }
      uVar8 = *(ulong *)(pbVar13 + 8);
      pbVar10 = *(byte **)(pbVar13 + 0x10);
      if ((*pbVar13 & 1) == 0) {
        pbVar10 = pbVar13 + 1;
        uVar8 = (ulong)(*pbVar13 >> 1);
      }
      FUN_00291910(pbVar7,pbVar10,uVar8);
      return 1;
    }
    FUN_0034b2f0(&local_b0,"Value must be quoted string for string option \"",param_2[1]);
                    /* try { // try from 00362428 to 0036243b has its CatchHandler @ 00363398 */
    puVar6 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
    ppuStack_88 = (undefined8 **)puVar6[1];
    local_90 = (undefined8 **)*puVar6;
    local_80 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00362460 to 0036246b has its CatchHandler @ 00363388 */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
    break;
  case 10:
    uVar8 = FUN_0036371c(param_1,param_2,param_3);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  default:
    return 1;
  }
  if (((ulong)local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if (((ulong)local_b0 & 1) != 0) {
    uVar8 = local_a0;
LAB_003629f4:
    FUN_002e2ea0(PTR_LAB_04373088,uVar8);
  }
  return 0;
}


