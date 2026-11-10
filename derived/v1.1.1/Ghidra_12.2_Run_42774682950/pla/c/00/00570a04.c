/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00570a04; name: FUN_00570a04
 */


/* WARNING: Removing unreachable block (ram,0x00570c28) */
/* WARNING: Removing unreachable block (ram,0x00570bd0) */
/* WARNING: Removing unreachable block (ram,0x00570bc8) */
/* WARNING: Removing unreachable block (ram,0x00571328) */
/* WARNING: Removing unreachable block (ram,0x00570bd8) */
/* WARNING: Removing unreachable block (ram,0x00570c10) */
/* WARNING: Removing unreachable block (ram,0x00570b40) */

undefined8 FUN_00570a04(long param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  byte local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 local_57;
  undefined6 uStack_56;
  undefined8 local_50;
  
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,200);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x13] = puVar4 + 0x14;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  lVar12 = *(long *)(param_1 + 0x90);
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  if (lVar12 != 0) {
    FUN_00523bb8(lVar12);
    FUN_002e2ea0(PTR_LAB_04373088,lVar12);
  }
  uStack_5c = 0;
  uStack_58 = 0;
  local_57 = 0;
  uStack_56 = 0;
  lVar12 = param_2 + 0x20;
  local_60 = 4;
  local_50 = 0;
  uStack_5f = 0x6469;
  uStack_5d = 0;
                    /* try { // try from 00570aac to 00570ab7 has its CatchHandler @ 00571390 */
  lVar5 = FUN_00572e24(lVar12,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  param_2 = param_2 + 0x28;
  if (param_2 != lVar5) {
    if (*(int *)(lVar5 + 0x38) == 4) {
      pbVar15 = *(byte **)(param_1 + 0x90);
      if ((*pbVar15 & 1) == 0) {
        pbVar15[0] = 0;
        pbVar15[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar15 + 0x10) = 0;
        pbVar15[8] = 0;
        pbVar15[9] = 0;
        pbVar15[10] = 0;
        pbVar15[0xb] = 0;
        pbVar15[0xc] = 0;
        pbVar15[0xd] = 0;
        pbVar15[0xe] = 0;
        pbVar15[0xf] = 0;
        if ((*pbVar15 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar15 + 0x10));
          pbVar15[0] = 0;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
        }
      }
      uVar18 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(pbVar15 + 0x10) = *(undefined8 *)(lVar5 + 0x50);
      *(undefined8 *)(pbVar15 + 8) = uVar18;
      *(undefined8 *)pbVar15 = uVar7;
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    else {
                    /* try { // try from 00570b04 to 00570b2f has its CatchHandler @ 00571358 */
      FUN_002f2c60(&local_60,"\"id\" field is not a string");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x105,&local_60,0,0);
      local_78 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,8);
      local_68 = local_78 + 1;
      local_70 = local_78 + 1;
      *local_78 = uVar6;
    }
  }
  uStack_58 = 0;
  local_57 = 0;
  uStack_56 = 0;
  local_60 = 0xe;
  uStack_5f = 0x6c63;
  uStack_5d = 0x75;
  local_50 = 0;
  uStack_5c = 0x72657473;
                    /* try { // try from 00570c5c to 00570c67 has its CatchHandler @ 00571380 */
  lVar5 = FUN_00572e24(lVar12,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 != lVar5) {
    if (*(int *)(lVar5 + 0x38) == 4) {
      lVar17 = *(long *)(param_1 + 0x90);
      pbVar15 = (byte *)(lVar17 + 0x18);
      if ((*pbVar15 & 1) == 0) {
        pbVar15[0] = 0;
        pbVar15[1] = 0;
      }
      else {
        **(undefined1 **)(lVar17 + 0x28) = 0;
        *(undefined8 *)(lVar17 + 0x20) = 0;
        if ((*(byte *)(lVar17 + 0x18) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar17 + 0x28));
          *(undefined8 *)(lVar17 + 0x18) = 0;
        }
      }
      uVar18 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar5 + 0x50);
      *(undefined8 *)(lVar17 + 0x20) = uVar18;
      *(undefined8 *)pbVar15 = uVar7;
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    else {
                    /* try { // try from 00570cb4 to 00570cdf has its CatchHandler @ 00571354 */
      FUN_002f2c60(&local_60,"\"cluster\" field is not a string");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x10e,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = uVar6;
        local_70 = local_70 + 1;
      }
      else {
        lVar5 = (long)local_70 - (long)local_78 >> 3;
        uVar8 = lVar5 + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 00571330 to 00571337 has its CatchHandler @ 00571354 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar10 = (long)local_68 - (long)local_78 >> 2;
          if (uVar8 <= uVar10) {
            uVar8 = uVar10;
          }
          if (uVar8 != 0) goto LAB_00570d8c;
          lVar17 = 0;
        }
        else {
          uVar8 = 0x1fffffffffffffff;
LAB_00570d8c:
          lVar17 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
        }
        puVar1 = (ulong *)(lVar17 + lVar5 * 8);
        local_68 = (ulong *)(lVar17 + uVar8 * 8);
        *puVar1 = uVar6;
        sVar9 = (long)local_70 - (long)local_78;
        puVar13 = (ulong *)((long)puVar1 - sVar9);
        if (0 < (long)sVar9) {
          memcpy(puVar13,local_78,sVar9);
        }
        bVar2 = local_78 != (ulong *)0x0;
        local_78 = puVar13;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
    }
  }
  uStack_56 = 0;
  local_60 = 0x10;
  local_50 = 0;
  uStack_5f = 0x6f6c;
  uStack_5d = 99;
  uStack_5c = 0x74696c61;
  uStack_58 = 0x79;
  local_57 = 0;
                    /* try { // try from 00570e0c to 00570e17 has its CatchHandler @ 00571370 */
  lVar5 = FUN_00572e24(lVar12,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 != lVar5) {
    if (*(int *)(lVar5 + 0x38) == 5) {
                    /* try { // try from 00570e48 to 00570e87 has its CatchHandler @ 00571348 */
      uVar6 = FUN_005724a0(param_1,(int *)(lVar5 + 0x38));
      if (uVar6 != 0) {
        if (local_70 != local_68) goto LAB_00570ec4;
        lVar5 = (long)local_70 - (long)local_78 >> 3;
        uVar8 = lVar5 + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_00570ef0:
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar10 = (long)local_68 - (long)local_78 >> 2;
          if (uVar8 <= uVar10) {
            uVar8 = uVar10;
          }
          if (uVar8 != 0) goto LAB_00570f1c;
          lVar17 = 0;
        }
        else {
          uVar8 = 0x1fffffffffffffff;
LAB_00570f1c:
          lVar17 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
        }
        puVar1 = (ulong *)(lVar17 + lVar5 * 8);
        local_68 = (ulong *)(lVar17 + uVar8 * 8);
        *puVar1 = uVar6;
        sVar9 = (long)local_70 - (long)local_78;
        puVar13 = (ulong *)((long)puVar1 - sVar9);
        if (0 < (long)sVar9) {
          memcpy(puVar13,local_78,sVar9);
        }
        bVar2 = local_78 != (ulong *)0x0;
        local_78 = puVar13;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
    }
    else {
                    /* try { // try from 00570e88 to 00570eb3 has its CatchHandler @ 00571350 */
      FUN_002f2c60(&local_60,"\"locality\" field is not an object");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x117,&local_60,0,0);
      if (local_68 <= local_70) {
        lVar5 = (long)local_70 - (long)local_78 >> 3;
        uVar8 = lVar5 + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 00571338 to 0057133f has its CatchHandler @ 00571350 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_00570ef0;
      }
LAB_00570ec4:
      *local_70 = uVar6;
      local_70 = local_70 + 1;
    }
  }
  uStack_56 = 0;
  local_60 = 0x10;
  local_50 = 0;
  uStack_5f = 0x656d;
  uStack_5d = 0x74;
  uStack_5c = 0x74616461;
  uStack_58 = 0x61;
  local_57 = 0;
                    /* try { // try from 00570f9c to 00570fa7 has its CatchHandler @ 00571360 */
  lVar12 = FUN_00572e24(lVar12,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 == lVar12) {
LAB_0057114c:
    if (local_70 == local_78) {
LAB_00571158:
      uVar7 = 0;
      goto joined_r0x0057115c;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x38) != 5) {
                    /* try { // try from 0057103c to 00571067 has its CatchHandler @ 0057134c */
      FUN_002f2c60(&local_60,"\"metadata\" field is not an object");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0x121,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = uVar6;
        local_70 = local_70 + 1;
        goto joined_r0x00571090;
      }
      lVar12 = (long)local_70 - (long)local_78 >> 3;
      uVar8 = lVar12 + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 00571340 to 00571347 has its CatchHandler @ 0057134c */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar10 = (long)local_68 - (long)local_78 >> 2;
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        if (uVar8 != 0) goto LAB_005710f4;
        lVar5 = 0;
      }
      else {
        uVar8 = 0x1fffffffffffffff;
LAB_005710f4:
        lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
      }
      puVar1 = (ulong *)(lVar5 + lVar12 * 8);
      *puVar1 = uVar6;
      sVar9 = (long)local_70 - (long)local_78;
      puVar13 = (ulong *)((long)puVar1 - sVar9);
      if (0 < (long)sVar9) {
        memcpy(puVar13,local_78,sVar9);
      }
      bVar2 = local_78 != (ulong *)0x0;
      local_78 = puVar13;
      local_70 = puVar1 + 1;
      if (bVar2) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      goto LAB_0057114c;
    }
    lVar5 = *(long *)(param_1 + 0x90);
    *(undefined4 *)(lVar5 + 0x78) = 5;
    *(undefined4 *)(lVar12 + 0x38) = 0;
    iVar3 = *(int *)(lVar5 + 0x78);
    if (iVar3 - 3U < 2) {
      pbVar15 = (byte *)(lVar5 + 0x80);
      if ((*pbVar15 & 1) == 0) {
        pbVar15[0] = 0;
        pbVar15[1] = 0;
      }
      else {
        **(undefined1 **)(lVar5 + 0x90) = 0;
        *(undefined8 *)(lVar5 + 0x88) = 0;
        if ((*(byte *)(lVar5 + 0x80) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar5 + 0x90));
          *(undefined8 *)(lVar5 + 0x80) = 0;
        }
      }
      uVar18 = *(undefined8 *)(lVar12 + 0x48);
      uVar7 = *(undefined8 *)(lVar12 + 0x40);
      *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(lVar5 + 0x88) = uVar18;
      *(undefined8 *)pbVar15 = uVar7;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x40) = 0;
joined_r0x00571090:
      if (local_70 != local_78) goto LAB_00571224;
      goto LAB_00571158;
    }
    if (iVar3 != 5) {
      if (iVar3 != 6) goto LAB_0057114c;
      plVar16 = (long *)(lVar5 + 0xb0);
      lVar17 = *plVar16;
      if (lVar17 != 0) {
        lVar11 = *(long *)(lVar5 + 0xb8);
        if (lVar11 == lVar17) {
          lVar11 = lVar17;
        }
        else {
          do {
            lVar11 = lVar11 + -0x50;
            FUN_003ee5f8(lVar11);
          } while (lVar17 != lVar11);
          lVar11 = *plVar16;
        }
        *(long *)(lVar5 + 0xb8) = lVar17;
        FUN_002e2ea0(PTR_LAB_04373088,lVar11);
        *plVar16 = 0;
        *(undefined8 *)(lVar5 + 0xb8) = 0;
        *(undefined8 *)(lVar5 + 0xc0) = 0;
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x70);
      *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(lVar12 + 0x78);
      *(undefined8 *)(lVar5 + 0xb0) = uVar7;
      *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(lVar12 + 0x80);
      *(undefined8 *)(lVar12 + 0x80) = 0;
      *(undefined8 *)(lVar12 + 0x70) = 0;
      *(undefined8 *)(lVar12 + 0x78) = 0;
      goto joined_r0x00571090;
    }
    plVar14 = (long *)(lVar5 + 0xa0);
    FUN_003e9f80((undefined8 *)(lVar5 + 0x98),*plVar14);
    *(undefined8 *)(lVar5 + 0x98) = *(undefined8 *)(lVar12 + 0x58);
    plVar16 = (long *)(lVar12 + 0x60);
    lVar17 = *plVar16;
    *plVar14 = lVar17;
    lVar11 = *(long *)(lVar12 + 0x68);
    *(long *)(lVar5 + 0xa8) = lVar11;
    if (lVar11 == 0) {
      *(undefined8 *)(lVar5 + 0x98) = plVar14;
      goto joined_r0x00571090;
    }
    *(long **)(lVar17 + 0x10) = plVar14;
    *(long **)(lVar12 + 0x58) = plVar16;
    *plVar16 = 0;
    *(undefined8 *)(lVar12 + 0x68) = 0;
    if (local_70 == local_78) goto LAB_00571158;
  }
LAB_00571224:
                    /* try { // try from 00571224 to 00571253 has its CatchHandler @ 0057135c */
  FUN_002f2c60(&local_60,"errors parsing \"node\" object");
  uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                       ,0x127,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
  if (local_70 != local_78) {
    uVar6 = 0;
    uVar8 = *local_78;
    while( true ) {
      if (4 < uVar8) {
                    /* try { // try from 005712b4 to 005712bf has its CatchHandler @ 005713b8 */
        FUN_002f0430(uVar8,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
      }
      uVar6 = uVar6 + 1;
      if ((ulong)((long)local_70 - (long)local_78 >> 3) <= uVar6) break;
      uVar8 = local_78[uVar6];
    }
  }
joined_r0x0057115c:
  if (local_78 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar7;
}


