/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079e37c; name: FUN_0079e37c
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0079e37c(undefined *param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  void *__src;
  ulong uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  size_t sVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  long local_70;
  long *plStack_68;
  undefined8 local_60;
  
  pbVar10 = *(byte **)(param_1 + 0x40);
  bVar3 = *pbVar10;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_0079e3c8;
LAB_0079e3b0:
    if ((bVar3 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
      uVar13 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar13,1,"nn.npln.hydro.v1.Content.name");
    pbVar10 = *(byte **)(param_1 + 0x40);
    if ((*pbVar10 & 1) != 0) {
      sVar17 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar17 < 0x80) goto LAB_0079e448;
LAB_0079e9d8:
      param_2 = (byte *)FUN_003112b4(param_3,1,pbVar10,param_2);
      pbVar10 = *(byte **)(param_1 + 0x48);
      bVar3 = *pbVar10;
      goto joined_r0x0079e9f4;
    }
    sVar17 = (size_t)(*pbVar10 >> 1);
LAB_0079e448:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar17) goto LAB_0079e9d8;
    *param_2 = 10;
    param_2[1] = (byte)sVar17;
    pbVar12 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar12 = pbVar10 + 1;
    }
    memcpy(param_2 + 2,pbVar12,sVar17);
    param_2 = param_2 + 2 + sVar17;
    pbVar10 = *(byte **)(param_1 + 0x48);
    uVar13 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) == 0) goto LAB_0079e3d4;
LAB_0079e498:
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0079e3dc;
LAB_0079e4a0:
    uVar15 = *(uint *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0079e3b0;
LAB_0079e3c8:
    pbVar10 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar10;
joined_r0x0079e9f4:
    uVar13 = (ulong)bVar3;
    if ((bVar3 & 1) != 0) goto LAB_0079e498;
LAB_0079e3d4:
    if (uVar13 >> 1 == 0) goto LAB_0079e4a0;
LAB_0079e3dc:
    if ((uVar13 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
      uVar13 = uVar13 >> 1;
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar13,1,"nn.npln.hydro.v1.Content.user");
    pbVar10 = *(byte **)(param_1 + 0x48);
    if ((*pbVar10 & 1) == 0) {
      sVar17 = (size_t)(*pbVar10 >> 1);
LAB_0079e5d4:
      if ((long)sVar17 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (byte)sVar17;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar17);
        param_2 = param_2 + 2 + sVar17;
        uVar15 = *(uint *)(param_1 + 0x20);
        goto joined_r0x0079e620;
      }
    }
    else {
      sVar17 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar17 < 0x80) goto LAB_0079e5d4;
    }
    param_2 = (byte *)FUN_003112b4(param_3,2,pbVar10,param_2);
    uVar15 = *(uint *)(param_1 + 0x20);
  }
joined_r0x0079e620:
  if (0 < (int)uVar15) {
    if (param_2 < (byte *)*param_3) {
      if (param_2 < (byte *)*param_3) goto LAB_0079e4fc;
    }
    else {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
      if (param_2 < (byte *)*param_3) goto LAB_0079e4fc;
    }
    FUN_0030f640(&local_70,3,"external/com_google_protobuf/src\\google/protobuf/io/coded_stream.h",
                 0x35a);
                    /* try { // try from 0079e4d8 to 0079e4eb has its CatchHandler @ 0079eca8 */
    uVar6 = FUN_0030f3ac(&local_70,"CHECK failed: ptr < end_: ");
                    /* try { // try from 0079e4ec to 0079e4f3 has its CatchHandler @ 0079eca4 */
    FUN_0030f41c(&local_90,uVar6);
    FUN_0030f658(&local_70);
LAB_0079e4fc:
    pbVar10 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar15) {
      pbVar12 = pbVar10;
      uVar16 = uVar15;
      do {
        uVar15 = uVar16 >> 7;
        uVar4 = uVar16 >> 0xe;
        pbVar10 = pbVar12 + 1;
        *pbVar12 = (byte)uVar16 | 0x80;
        pbVar12 = pbVar10;
        uVar16 = uVar15;
      } while (uVar4 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar15;
    puVar18 = *(uint **)(param_1 + 0x18);
    puVar1 = puVar18 + *(int *)(param_1 + 0x10);
    if (param_2 < (byte *)*param_3) goto LAB_0079e544;
LAB_0079e5a8:
    param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    puVar19 = puVar18 + 1;
    uVar15 = *puVar18;
    if (uVar15 < 0x80) goto LAB_0079e52c;
    do {
      *param_2 = (byte)uVar15 | 0x80;
      uVar13 = (ulong)(long)(int)uVar15 >> 7;
      puVar18 = puVar19;
      if (((ulong)(long)(int)uVar15 >> 0xe & 0x3ffff) == 0) {
        param_2[1] = (byte)uVar13;
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 2;
        do {
          pbVar10 = param_2;
          uVar9 = uVar13 >> 7;
          pbVar10[-1] = (byte)uVar13 | 0x80;
          param_2 = pbVar10 + 1;
          uVar14 = uVar13 >> 0xe;
          uVar13 = uVar9;
        } while (uVar14 != 0);
        *pbVar10 = (byte)uVar9;
      }
      while( true ) {
        if (puVar1 <= puVar18) goto LAB_0079e624;
        if ((byte *)*param_3 <= param_2) goto LAB_0079e5a8;
LAB_0079e544:
        puVar19 = puVar18 + 1;
        uVar15 = *puVar18;
        if (0x7f < uVar15) break;
LAB_0079e52c:
        *param_2 = (byte)uVar15;
        puVar18 = puVar19;
        param_2 = param_2 + 1;
      }
    } while( true );
  }
LAB_0079e624:
  if (param_1 != PTR_DAT_04376f28) {
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_00310ec4(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x60);
      }
      *param_2 = 0x22;
      uVar15 = *(uint *)(lVar7 + 0x1c);
      if (uVar15 < 0x80) {
        param_2[1] = (byte)uVar15;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar15 | 0x80;
        if (uVar15 >> 0xe == 0) {
          param_2[2] = (byte)(uVar15 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar15 = uVar15 >> 7;
          do {
            pbVar10 = param_2;
            uVar16 = uVar15 >> 7;
            pbVar10[-1] = (byte)uVar15 | 0x80;
            param_2 = pbVar10 + 1;
            uVar4 = uVar15 >> 0xe;
            uVar15 = uVar16;
          } while (uVar4 != 0);
          *pbVar10 = (byte)uVar16;
        }
      }
      param_2 = (byte *)FUN_006025b8(lVar7,param_2,param_3);
    }
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_00310ec4(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x68);
      }
      *param_2 = 0x2a;
      uVar15 = *(uint *)(lVar7 + 0x1c);
      if (uVar15 < 0x80) {
        param_2[1] = (byte)uVar15;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar15 | 0x80;
        if (uVar15 >> 0xe == 0) {
          param_2[2] = (byte)(uVar15 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar15 = uVar15 >> 7;
          do {
            pbVar10 = param_2;
            uVar16 = uVar15 >> 7;
            pbVar10[-1] = (byte)uVar15 | 0x80;
            param_2 = pbVar10 + 1;
            uVar4 = uVar15 >> 0xe;
            uVar15 = uVar16;
          } while (uVar4 != 0);
          *pbVar10 = (byte)uVar16;
        }
      }
      param_2 = (byte *)FUN_006025b8(lVar7,param_2,param_3);
    }
  }
  pbVar10 = *(byte **)(param_1 + 0x50);
  bVar3 = *pbVar10;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_0079e76c;
LAB_0079e758:
    if ((bVar3 & 1) == 0) {
      uVar13 = (ulong)(bVar3 >> 1);
LAB_0079e848:
      if ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x32;
        param_2[1] = (byte)uVar13;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,uVar13);
        param_2 = param_2 + 2 + uVar13;
        lVar7 = **(long **)(param_1 + 0x38);
        plVar5 = *(long **)(param_1 + 0x38);
        plVar21 = plStack_68;
        goto joined_r0x0079ea3c;
      }
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
      if ((long)uVar13 < 0x80) goto LAB_0079e848;
    }
    param_2 = (byte *)FUN_003112b4(param_3,6,pbVar10,param_2);
    lVar7 = **(long **)(param_1 + 0x38);
    plVar5 = *(long **)(param_1 + 0x38);
    plVar21 = plStack_68;
  }
  else {
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0079e758;
LAB_0079e76c:
    lVar7 = **(long **)(param_1 + 0x38);
    plVar5 = *(long **)(param_1 + 0x38);
    plVar21 = plStack_68;
  }
joined_r0x0079ea3c:
  plStack_68 = plVar5;
  if (lVar7 != 0) {
    if ((lVar7 == 1) || (*(char *)((long)param_3 + 0x3a) == '\0')) {
      FUN_0079bf44(&local_70,*(long *)((long)plStack_68 + 0x18));
      local_80 = local_60;
      plStack_88 = plStack_68;
      local_90 = local_70;
      while (plVar21 = plStack_68, local_90 != 0) {
        param_2 = (byte *)FUN_0079ecf4(7,*(long *)(local_90 + 8),*(long *)(local_90 + 8) + 4,param_2
                                       ,param_3);
        FUN_0079c0b4(&local_90);
      }
    }
    else {
      lVar8 = FUN_002e2ec0(PTR_FUN_04373078,lVar7 << 4);
      plStack_68 = *(long **)(param_1 + 0x38);
                    /* try { // try from 0079e7a8 to 0079e7af has its CatchHandler @ 0079ec98 */
      FUN_0079bf44(&local_70,plStack_68[3]);
      lVar7 = 0;
      local_80 = local_60;
      plStack_88 = plStack_68;
      local_90 = local_70;
      if (local_70 != 0) {
        puVar20 = (undefined8 *)(lVar8 + 8);
        do {
          puVar11 = *(undefined4 **)(local_90 + 8);
          *(undefined4 *)(puVar20 + -1) = *puVar11;
          *puVar20 = puVar11;
                    /* try { // try from 0079e7e0 to 0079e7e7 has its CatchHandler @ 0079ecc4 */
          FUN_0079c0b4(&local_90);
          lVar7 = lVar7 + 1;
          puVar20 = puVar20 + 2;
        } while (local_90 != 0);
      }
                    /* try { // try from 0079e7fc to 0079e807 has its CatchHandler @ 0079ec8c */
      FUN_007a10e0(lVar8,lVar8 + lVar7 * 0x10,&local_70);
      if (lVar7 == 0) {
        plVar21 = plStack_68;
        if (lVar8 == 0) goto LAB_0079e910;
      }
      else {
        plVar21 = (long *)(lVar8 + 8);
        do {
                    /* try { // try from 0079e818 to 0079e827 has its CatchHandler @ 0079ecbc */
          param_2 = (byte *)FUN_0079ecf4(7,*plVar21,*plVar21 + 4,param_2,param_3);
          lVar7 = lVar7 + -1;
          plVar21 = plVar21 + 2;
        } while (lVar7 != 0);
      }
      FUN_002e2f10(lVar8);
      FUN_002e2ef0(PTR_LAB_04373088,lVar8);
      plVar21 = plStack_68;
    }
  }
LAB_0079e910:
  plStack_68 = plVar21;
  pbVar10 = *(byte **)(param_1 + 0x58);
  bVar3 = *pbVar10;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0079e924;
  }
  else if (*(long *)(pbVar10 + 8) != 0) {
LAB_0079e924:
    if ((bVar3 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
      uVar13 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar13,1,"nn.npln.hydro.v1.Content.etag");
    pbVar10 = *(byte **)(param_1 + 0x58);
    if ((*pbVar10 & 1) == 0) {
      sVar17 = (size_t)(*pbVar10 >> 1);
LAB_0079e974:
      if ((long)sVar17 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x42;
        param_2[1] = (byte)sVar17;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar17);
        param_2 = param_2 + 2 + sVar17;
        goto LAB_0079e9b8;
      }
    }
    else {
      sVar17 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar17 < 0x80) goto LAB_0079e974;
    }
    param_2 = (byte *)FUN_003112b4(param_3,8,pbVar10,param_2);
    iVar2 = *(int *)(param_1 + 0x7c);
    goto joined_r0x0079e9c0;
  }
LAB_0079e9b8:
  iVar2 = *(int *)(param_1 + 0x7c);
joined_r0x0079e9c0:
  if (iVar2 == 9) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x70);
    *param_2 = 0x4a;
    uVar15 = *(uint *)(lVar7 + 0x1c);
    if (uVar15 < 0x80) {
      param_2[1] = (byte)uVar15;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar15 | 0x80;
      if (uVar15 >> 0xe == 0) {
        param_2[2] = (byte)(uVar15 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar15 = uVar15 >> 7;
        do {
          pbVar10 = param_2;
          uVar16 = uVar15 >> 7;
          pbVar10[-1] = (byte)uVar15 | 0x80;
          param_2 = pbVar10 + 1;
          uVar4 = uVar15 >> 0xe;
          uVar15 = uVar16;
        } while (uVar4 != 0);
        *pbVar10 = (byte)uVar16;
      }
    }
    param_2 = (byte *)FUN_006025b8(lVar7,param_2,param_3);
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (iVar2 == 10) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x70);
    *param_2 = 0x52;
    uVar15 = *(uint *)(lVar7 + 0x1c);
    if (uVar15 < 0x80) {
      param_2[1] = (byte)uVar15;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar15 | 0x80;
      if (uVar15 >> 0xe == 0) {
        param_2[2] = (byte)(uVar15 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar15 = uVar15 >> 7;
        do {
          pbVar10 = param_2;
          uVar16 = uVar15 >> 7;
          pbVar10[-1] = (byte)uVar15 | 0x80;
          param_2 = pbVar10 + 1;
          uVar4 = uVar15 >> 0xe;
          uVar15 = uVar16;
        } while (uVar4 != 0);
        *pbVar10 = (byte)uVar16;
      }
    }
    param_2 = (byte *)FUN_0030c17c(lVar7,param_2,param_3);
    uVar13 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar13 = *(ulong *)(param_1 + 8);
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar13 + 8) & 1) == 0) {
      __src = (void *)(uVar13 + 9);
      uVar9 = (ulong)(*(byte *)(uVar13 + 8) >> 1);
    }
    else {
      uVar9 = *(ulong *)(uVar13 + 0x10);
      __src = *(void **)(uVar13 + 0x18);
    }
    sVar17 = (size_t)(int)uVar9;
    if (*param_3 - (long)param_2 < (long)sVar17) {
      param_2 = (byte *)FUN_00310fe4(param_3,__src,uVar9,param_2);
    }
    else {
      memcpy(param_2,__src,sVar17);
      param_2 = param_2 + sVar17;
    }
  }
  return param_2;
}


