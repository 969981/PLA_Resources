/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334dd84; name: FUN_0334dd84
 */


/* WARNING: Removing unreachable block (ram,0x0334f490) */

void FUN_0334dd84(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  unkbyte9 *pVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  uint uVar30;
  undefined8 uVar31;
  uint uVar32;
  unkbyte9 Var33;
  unkbyte9 Var34;
  undefined *puVar35;
  bool bVar36;
  int iVar37;
  long *plVar38;
  void *pvVar39;
  undefined8 *puVar40;
  void *pvVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  unkbyte9 *pVar48;
  unkbyte9 *pVar49;
  undefined1 (*pauVar50) [16];
  undefined8 *puVar51;
  undefined4 uVar52;
  undefined8 *puVar53;
  unkbyte9 *pVar54;
  long lVar55;
  ulong *puVar56;
  int *piVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  ulong uVar63;
  uint uVar64;
  undefined8 *puVar65;
  int iVar66;
  undefined8 *puVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar71 [16];
  undefined8 uVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar70;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  byte bVar86;
  byte bVar87;
  byte bVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  byte bVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  byte bVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  long local_1b70;
  long local_1b60;
  int local_1b30;
  long local_1b20 [2];
  undefined **local_1b10;
  undefined *puStack_1b08;
  uint *local_1b00;
  ulong uStack_1af8;
  undefined4 local_1af0;
  undefined4 uStack_1aec;
  ulong local_1ae0;
  ulong uStack_1ad8;
  ulong uStack_1ad0;
  ulong uStack_1ac8;
  undefined4 local_1ac0;
  undefined4 uStack_1abc;
  ulong local_1ab0;
  ulong uStack_1aa8;
  ulong uStack_1aa0;
  ulong uStack_1a98;
  undefined4 local_1a90;
  undefined4 local_1a8c;
  ulong local_1a80;
  ulong uStack_1a78;
  undefined1 auStack_1a70 [16];
  undefined4 local_1a60;
  undefined4 local_1a5c;
  undefined **local_1910;
  long *local_1908;
  long *local_1900;
  long local_18f8;
  long local_18f0;
  int *local_18e8;
  undefined8 local_18e0;
  int local_18d8 [16];
  undefined8 *local_1898;
  uint local_1890;
  uint *local_1888;
  uint *local_1880;
  uint local_1878 [2];
  undefined8 local_1870;
  undefined *puStack_1868;
  undefined ***local_1860;
  undefined8 uStack_1858;
  undefined4 local_1850;
  uint local_184c;
  undefined4 local_1848;
  undefined8 local_c70 [384];
  uint local_70 [4];
  
  param_1[8] = (long)param_3;
  param_3[1] = 0;
  if ((int)param_1[1] == 1) {
    if ((char)param_2[2] == '\0') {
      lVar44 = 0;
      if (*param_2 != 0) {
        lVar44 = *param_2 + (long)param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x0334f2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x18))(param_3,lVar44,1,(int)param_2[1] + -1,0);
      return;
    }
    uVar64 = *(uint *)((long)param_1 + 0x3c);
    uVar61 = uVar64 & 0x3fffffff;
    uVar62 = *(uint *)(param_2 + 1);
    if ((int)uVar61 < (int)uVar62) {
      puVar65 = (undefined8 *)param_1[6];
      uVar59 = *(uint *)(param_1 + 7);
      if (0x3fffffff < (int)uVar62) {
        FUN_032bd0a8(uVar62);
        uVar64 = *(uint *)((long)param_1 + 0x3c);
        uVar61 = uVar64 & 0x3fffffff;
      }
      puVar35 = PTR_PTR_0434a080;
      uVar60 = (uVar64 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar60) {
        uVar60 = 0x3fffffff;
      }
      uVar42 = uVar62;
      if ((int)uVar62 <= (int)uVar60) {
        uVar42 = uVar60;
      }
      local_1b10 = (undefined **)((ulong)uVar42 << 5);
      local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar42);
      if (((int)uVar42 < (int)uVar61) || (0x3fffffff < (int)uVar42)) {
        local_1870 = 1;
        local_1860 = &local_1910;
        puStack_1868 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_1870);
        uVar64 = *(uint *)((long)param_1 + 0x3c);
        uVar61 = uVar64 & 0x3fffffff;
      }
      puVar67 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10)
      ;
      if (0 < (int)uVar59) {
        uVar45 = puVar65[3];
        puVar67[1] = puVar65[1];
        puVar67[3] = uVar45;
        uVar45 = *puVar65;
        puVar67[2] = puVar65[2];
        *puVar67 = uVar45;
        if (uVar59 != 1) {
          lVar44 = (ulong)uVar59 - 1;
          puVar40 = puVar67;
          puVar53 = puVar65;
          do {
            uVar45 = puVar53[7];
            lVar44 = lVar44 + -1;
            puVar40[5] = puVar53[5];
            puVar40[7] = uVar45;
            uVar45 = puVar53[4];
            puVar40[6] = puVar53[6];
            puVar40[4] = uVar45;
            puVar40 = puVar40 + 4;
            puVar53 = puVar53 + 4;
          } while (lVar44 != 0);
        }
      }
      if (-1 < (int)uVar64) {
        (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar65,(ulong)uVar61 << 5);
      }
      if (local_1b10 < (undefined **)0x7ffffffe0) {
        uVar52 = (undefined4)((ulong)local_1b10 >> 5);
      }
      else {
        uVar52 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = uVar52;
      param_1[6] = (long)puVar67;
    }
    if (*(uint *)(param_1 + 7) != uVar62) {
      *(uint *)(param_1 + 7) = uVar62;
    }
    param_3[1] = param_1[6];
    lVar44 = 0;
    if (*param_2 != 0) {
      lVar44 = *param_2 + (long)param_2;
    }
    (**(code **)(*param_3 + 0x18))(param_3,lVar44,1,(int)param_2[1] + -1,(char)param_2[2]);
    return;
  }
  puVar65 = (undefined8 *)(*param_2 + (long)param_2);
  uVar61 = *(uint *)(param_2 + 1);
  auVar85 = *(undefined1 (*) [16])(puVar65 + 0x10);
  auVar78 = *(undefined1 (*) [16])(puVar65 + 0x12);
  auVar80 = *(undefined1 (*) [16])(puVar65 + 0x14);
  uVar31 = puVar65[0x17];
  Var33 = *(unkbyte9 *)(puVar65 + 0x16);
  auVar73 = *(undefined1 (*) [16])(puVar65 + 0x18);
  uVar45 = puVar65[0x1b];
  Var34 = *(unkbyte9 *)(puVar65 + 0x1a);
  if (uVar61 != 2) {
    uVar64 = *(uint *)((long)param_2 + 0xc);
    if (uVar64 == 0) {
      *(uint *)((long)param_2 + 0xc) = uVar61;
      uVar64 = uVar61;
    }
    if ((int)uVar61 < 2) {
      uVar62 = uVar64 & 0x7fffffff;
      if ((int)(uVar64 & 0x7fffffff) <= (int)uVar61) {
        uVar62 = uVar61;
      }
      if ((int)uVar62 < 2) {
        lVar44 = tpidr_el0;
        lVar46 = *(long *)(lVar44 + 0x38d490);
        if (lVar46 == 0) {
          lVar46 = FUN_0333d16c(0,1);
          *(long *)(lVar44 + 0x38d490) = lVar46;
        }
        plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
        pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))(plVar38,0x100,0);
        if (*param_2 == 0) {
          pvVar41 = (void *)0x0;
        }
        else {
          pvVar41 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
        if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
          uVar61 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          if ((int)uVar61 <= (int)*(uint *)(param_2 + 1)) {
            uVar61 = *(uint *)(param_2 + 1);
          }
          if (*param_2 == 0) {
            lVar46 = 0;
          }
          else {
            lVar46 = *param_2 + (long)param_2;
          }
          lVar47 = *(long *)(lVar44 + 0x38d490);
          if (lVar47 == 0) {
            lVar47 = FUN_0333d16c(0,1);
            *(long *)(lVar44 + 0x38d490) = lVar47;
          }
          plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
          (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar61 << 7);
        }
        if (pvVar39 == (void *)0x0) {
          lVar44 = 0;
        }
        else {
          lVar44 = (long)pvVar39 - (long)param_2;
        }
        *(undefined4 *)((long)param_2 + 0xc) = 0x80000002;
        puVar65 = (undefined8 *)(lVar44 + (long)param_2);
        *param_2 = lVar44;
      }
    }
    *(undefined4 *)(param_2 + 1) = 2;
  }
  *(undefined2 *)(puVar65 + 0xe) = 0;
  auVar71._8_4_ = 0x7f7fffee;
  auVar71._0_8_ = 0x7f7fffee7f7fffee;
  auVar71._12_4_ = 0x7f7fffee;
  puVar65[0xc] = 0;
  puVar65[0xd] = 0;
  uVar79 = auVar71._8_8_;
  puVar65[1] = uVar79;
  *puVar65 = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar65 + 3) = 0xff7fffee;
  *(undefined4 *)((long)puVar65 + 0x1c) = 0xff7fffee;
  puVar65[2] = 0xff7fffeeff7fffee;
  puVar65[5] = uVar79;
  puVar65[4] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar65 + 7) = 0xff7fffee;
  *(undefined4 *)((long)puVar65 + 0x3c) = 0xff7fffee;
  puVar65[6] = 0xff7fffeeff7fffee;
  puVar65[9] = uVar79;
  puVar65[8] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar65 + 0xb) = 0xff7fffee;
  *(undefined4 *)((long)puVar65 + 0x5c) = 0xff7fffee;
  puVar65[10] = 0xff7fffeeff7fffee;
  lVar44 = *param_2;
  *(undefined8 *)((long)param_2 + lVar44 + 0xe0) = 0;
  *(undefined8 *)((long)param_2 + lVar44 + 0xe8) = 0;
  *(undefined2 *)((long)param_2 + lVar44 + 0xf0) = 0;
  *(undefined8 *)((long)param_2 + lVar44 + 0x88) = uVar79;
  *(undefined8 *)((long)param_2 + lVar44 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0x98) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0x9c) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar44 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)param_2 + lVar44 + 0xa8) = uVar79;
  *(undefined8 *)((long)param_2 + lVar44 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0xb8) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0xbc) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar44 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)param_2 + lVar44 + 200) = uVar79;
  *(undefined8 *)((long)param_2 + lVar44 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0xd8) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar44 + 0xdc) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar44 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_2 + 2) = 1;
  puVar35 = PTR_PTR_0434a080;
  uVar61 = *(uint *)(param_1 + 5);
  if (uVar61 == 0) {
    return;
  }
  fVar68 = (float)NEON_fminnmv(auVar85,4);
  fVar110 = (float)NEON_fminnmv(auVar80,4);
  fVar69 = (float)NEON_fmaxnmv(auVar78,4);
  fVar108 = (float)NEON_fminnmv(auVar73,4);
  auVar85[9] = (char)((ulong)uVar31 >> 8);
  auVar85._0_9_ = Var33;
  auVar85[10] = (char)((ulong)uVar31 >> 0x10);
  auVar85[0xb] = (char)((ulong)uVar31 >> 0x18);
  auVar85[0xc] = (char)((ulong)uVar31 >> 0x20);
  auVar85[0xd] = (char)((ulong)uVar31 >> 0x28);
  auVar85[0xe] = (char)((ulong)uVar31 >> 0x30);
  auVar85[0xf] = (char)((ulong)uVar31 >> 0x38);
  fVar29 = (float)NEON_fmaxnmv(auVar85,4);
  auVar78[9] = (char)((ulong)uVar45 >> 8);
  auVar78._0_9_ = Var34;
  auVar78[10] = (char)((ulong)uVar45 >> 0x10);
  auVar78[0xb] = (char)((ulong)uVar45 >> 0x18);
  auVar78[0xc] = (char)((ulong)uVar45 >> 0x20);
  auVar78[0xd] = (char)((ulong)uVar45 >> 0x28);
  auVar78[0xe] = (char)((ulong)uVar45 >> 0x30);
  auVar78[0xf] = (char)((ulong)uVar45 >> 0x38);
  fVar109 = (float)NEON_fmaxnmv(auVar78,4);
  uVar59 = *(uint *)((long)param_1 + 0x2c);
  puVar65 = (undefined8 *)param_1[4];
  uVar62 = uVar59 & 0x3fffffff;
  uVar64 = uVar61 + 1;
  if ((int)uVar61 < (int)uVar62) {
    puVar67 = puVar65;
    uVar62 = uVar61;
  }
  else {
    if (0x3ffffffe < (int)uVar61) {
      FUN_032bd0a8(uVar64);
      uVar59 = *(uint *)((long)param_1 + 0x2c);
      uVar62 = uVar59 & 0x3fffffff;
    }
    uVar60 = (uVar59 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar60) {
      uVar60 = 0x3fffffff;
    }
    uVar42 = uVar64;
    if ((int)uVar64 <= (int)uVar60) {
      uVar42 = uVar60;
    }
    local_1b10 = (undefined **)((ulong)uVar42 << 4);
    local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar42);
    if (((int)uVar42 < (int)uVar62) || (0x3fffffff < (int)uVar42)) {
      local_1870 = 1;
      local_1860 = &local_1910;
      puStack_1868 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1870);
      uVar59 = *(uint *)((long)param_1 + 0x2c);
      uVar62 = uVar59 & 0x3fffffff;
    }
    puVar67 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10);
    if (0 < (int)uVar61) {
      puVar67[1] = puVar65[1];
      *puVar67 = *puVar65;
      if (uVar61 != 1) {
        puVar67[3] = puVar65[3];
        puVar67[2] = puVar65[2];
        if (uVar61 != 2) {
          puVar67[5] = puVar65[5];
          puVar67[4] = puVar65[4];
          if (uVar61 != 3) {
            lVar44 = (ulong)uVar61 - 3;
            puVar40 = puVar65 + 6;
            puVar53 = puVar67 + 6;
            do {
              puVar53[1] = puVar40[1];
              lVar44 = lVar44 + -1;
              *puVar53 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar53 = puVar53 + 2;
            } while (lVar44 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar59) {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar65,(ulong)uVar62 << 4);
    }
    if (local_1b10 < (undefined **)0x3fffffff0) {
      uVar52 = (undefined4)((ulong)local_1b10 >> 4);
    }
    else {
      uVar52 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar52;
    param_1[4] = (long)puVar67;
    uVar62 = *(uint *)(param_1 + 5);
  }
  auVar80._4_12_ = SUB1612(ZEXT816(0),4);
  auVar80._0_4_ = fVar109;
  uVar59 = uVar61 + 2;
  puVar67[(long)(int)uVar62 * 2] = 0;
  (puVar67 + (long)(int)uVar62 * 2)[1] = 0;
  uVar60 = *(uint *)((long)param_1 + 0x2c);
  puVar67 = (undefined8 *)param_1[4];
  uVar62 = uVar60 & 0x3fffffff;
  *(uint *)(param_1 + 5) = uVar64;
  puVar65 = puVar67;
  if ((int)uVar62 <= (int)uVar64) {
    if (0x3ffffffd < (int)uVar61) {
      FUN_032bd0a8(uVar59);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar62 = uVar60 & 0x3fffffff;
    }
    uVar42 = (uVar60 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar42) {
      uVar42 = 0x3fffffff;
    }
    uVar43 = uVar59;
    if ((int)uVar59 <= (int)uVar42) {
      uVar43 = uVar42;
    }
    local_1b10 = (undefined **)((ulong)uVar43 << 4);
    local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar43);
    if (((int)uVar43 < (int)uVar62) || (0x3fffffff < (int)uVar43)) {
      local_1870 = 1;
      local_1860 = &local_1910;
      puStack_1868 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1870);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar62 = uVar60 & 0x3fffffff;
    }
    puVar65 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10);
    if (-1 < (int)uVar61) {
      puVar65[1] = puVar67[1];
      *puVar65 = *puVar67;
      if (uVar61 != 0) {
        puVar65[3] = puVar67[3];
        puVar65[2] = puVar67[2];
        if (uVar64 != 2) {
          puVar65[5] = puVar67[5];
          puVar65[4] = puVar67[4];
          if (uVar64 != 3) {
            lVar44 = (ulong)uVar64 - 3;
            puVar40 = puVar67 + 6;
            puVar53 = puVar65 + 6;
            do {
              puVar53[1] = puVar40[1];
              lVar44 = lVar44 + -1;
              *puVar53 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar53 = puVar53 + 2;
            } while (lVar44 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar60) {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar67,(ulong)uVar62 << 4);
    }
    if (local_1b10 < (undefined **)0x3fffffff0) {
      uVar52 = (undefined4)((ulong)local_1b10 >> 4);
    }
    else {
      uVar52 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar52;
    param_1[4] = (long)puVar65;
    uVar64 = *(uint *)(param_1 + 5);
  }
  uVar62 = uVar61 + 3;
  puVar65[(long)(int)uVar64 * 2] = 0;
  (puVar65 + (long)(int)uVar64 * 2)[1] = 0;
  uVar60 = *(uint *)((long)param_1 + 0x2c);
  puVar67 = (undefined8 *)param_1[4];
  uVar64 = uVar60 & 0x3fffffff;
  *(uint *)(param_1 + 5) = uVar59;
  puVar65 = puVar67;
  if ((int)uVar64 <= (int)uVar59) {
    if (0x3ffffffe < (int)uVar59) {
      FUN_032bd0a8(uVar62);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar64 = uVar60 & 0x3fffffff;
    }
    uVar42 = (uVar60 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar42) {
      uVar42 = 0x3fffffff;
    }
    uVar43 = uVar62;
    if ((int)uVar62 <= (int)uVar42) {
      uVar43 = uVar42;
    }
    local_1b10 = (undefined **)((ulong)uVar43 << 4);
    local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar43);
    if (((int)uVar43 < (int)uVar64) || (0x3fffffff < (int)uVar43)) {
      local_1870 = 1;
      local_1860 = &local_1910;
      puStack_1868 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1870);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar64 = uVar60 & 0x3fffffff;
    }
    puVar65 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10);
    if (0 < (int)uVar59) {
      puVar65[1] = puVar67[1];
      *puVar65 = *puVar67;
      if (uVar59 != 1) {
        puVar65[3] = puVar67[3];
        puVar65[2] = puVar67[2];
        if (uVar61 != 0) {
          puVar65[5] = puVar67[5];
          puVar65[4] = puVar67[4];
          if (uVar59 != 3) {
            lVar44 = (ulong)uVar59 - 3;
            puVar40 = puVar67 + 6;
            puVar53 = puVar65 + 6;
            do {
              puVar53[1] = puVar40[1];
              lVar44 = lVar44 + -1;
              *puVar53 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar53 = puVar53 + 2;
            } while (lVar44 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar60) {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar67,(ulong)uVar64 << 4);
    }
    if (local_1b10 < (undefined **)0x3fffffff0) {
      uVar52 = (undefined4)((ulong)local_1b10 >> 4);
    }
    else {
      uVar52 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar52;
    param_1[4] = (long)puVar65;
    uVar59 = *(uint *)(param_1 + 5);
  }
  uVar64 = uVar61 + 4;
  puVar65[(long)(int)uVar59 * 2] = 0;
  (puVar65 + (long)(int)uVar59 * 2)[1] = 0;
  uVar60 = *(uint *)((long)param_1 + 0x2c);
  puVar67 = (undefined8 *)param_1[4];
  uVar59 = uVar60 & 0x3fffffff;
  *(uint *)(param_1 + 5) = uVar62;
  puVar65 = puVar67;
  if ((int)uVar59 <= (int)uVar62) {
    if (0x3ffffffe < (int)uVar62) {
      FUN_032bd0a8(uVar64);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar59 = uVar60 & 0x3fffffff;
    }
    uVar42 = (uVar60 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar42) {
      uVar42 = 0x3fffffff;
    }
    uVar43 = uVar64;
    if ((int)uVar64 <= (int)uVar42) {
      uVar43 = uVar42;
    }
    local_1b10 = (undefined **)((ulong)uVar43 << 4);
    local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar43);
    if (((int)uVar43 < (int)uVar59) || (0x3fffffff < (int)uVar43)) {
      local_1870 = 1;
      local_1860 = &local_1910;
      puStack_1868 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1870);
      uVar60 = *(uint *)((long)param_1 + 0x2c);
      uVar59 = uVar60 & 0x3fffffff;
    }
    puVar65 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10);
    if (0 < (int)uVar62) {
      puVar65[1] = puVar67[1];
      *puVar65 = *puVar67;
      if (uVar62 != 1) {
        puVar65[3] = puVar67[3];
        puVar65[2] = puVar67[2];
        if (uVar62 != 2) {
          puVar65[5] = puVar67[5];
          puVar65[4] = puVar67[4];
          if (uVar61 != 0) {
            lVar44 = (ulong)uVar62 - 3;
            puVar40 = puVar67 + 6;
            puVar53 = puVar65 + 6;
            do {
              puVar53[1] = puVar40[1];
              lVar44 = lVar44 + -1;
              *puVar53 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar53 = puVar53 + 2;
            } while (lVar44 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar60) {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar67,(ulong)uVar59 << 4);
    }
    if (local_1b10 < (undefined **)0x3fffffff0) {
      uVar52 = (undefined4)((ulong)local_1b10 >> 4);
    }
    else {
      uVar52 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar52;
    param_1[4] = (long)puVar65;
    uVar62 = *(uint *)(param_1 + 5);
  }
  (puVar65 + (long)(int)uVar62 * 2)[1] = 0;
  puVar65[(long)(int)uVar62 * 2] = 0;
  *(uint *)(param_1 + 5) = uVar64;
  if (((int)uVar61 < 0x81) || (param_1[2] == 0)) {
    uVar64 = uVar61;
    if ((int)uVar61 < 0) {
      uVar64 = uVar61 + 1;
    }
    uVar64 = ((int)uVar64 >> 1) + 0x43U & 0xfffffffc;
    uVar62 = *(uint *)(param_2 + 1);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((int)uVar64 < 1) {
      local_1b20[0] = 0;
    }
    else {
      uVar64 = uVar62 + uVar64;
      uVar59 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar62;
        uVar59 = uVar62;
      }
      uVar60 = uVar59 & 0x7fffffff;
      if ((int)(uVar59 & 0x7fffffff) <= (int)uVar62) {
        uVar60 = uVar62;
      }
      if ((int)uVar60 < (int)uVar64) {
        uVar59 = uVar64 - 1 | (int)(uVar64 - 1) >> 0x10;
        uVar59 = uVar59 | (int)uVar59 >> 8;
        uVar59 = uVar59 | (int)uVar59 >> 4;
        uVar59 = uVar59 | (int)uVar59 >> 2;
        uVar59 = (uVar59 | (int)uVar59 >> 1) + 1;
        if ((int)uVar59 < (int)uVar64) {
          local_1870 = 0;
          local_1860 = (undefined ***)0x0;
          puStack_1868 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_1870);
        }
        lVar44 = tpidr_el0;
        lVar46 = *(long *)(lVar44 + 0x38d490);
        if (lVar46 == 0) {
          lVar46 = FUN_0333d16c(0,1);
          *(long *)(lVar44 + 0x38d490) = lVar46;
        }
        plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
        pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))
                                    (plVar38,-(ulong)(uVar59 >> 0x1f) & 0xffffff8000000000 |
                                             (ulong)uVar59 << 7,0);
        if (*param_2 == 0) {
          pvVar41 = (void *)0x0;
        }
        else {
          pvVar41 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
        if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
          uVar60 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          if ((int)uVar60 <= (int)*(uint *)(param_2 + 1)) {
            uVar60 = *(uint *)(param_2 + 1);
          }
          if (*param_2 == 0) {
            lVar46 = 0;
          }
          else {
            lVar46 = *param_2 + (long)param_2;
          }
          lVar47 = *(long *)(lVar44 + 0x38d490);
          if (lVar47 == 0) {
            lVar47 = FUN_0333d16c(0,1);
            *(long *)(lVar44 + 0x38d490) = lVar47;
          }
          plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
          (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar60 << 7);
        }
        if (pvVar39 == (void *)0x0) {
          lVar44 = 0;
        }
        else {
          lVar44 = (long)pvVar39 - (long)param_2;
        }
        *param_2 = lVar44;
        *(uint *)((long)param_2 + 0xc) = uVar59 | 0x80000000;
      }
      else {
        lVar44 = *param_2;
      }
      local_1b20[0] = (long)param_2 + (long)(int)uVar62 * 0x80 + lVar44;
      *(uint *)(param_2 + 1) = uVar64;
      uVar62 = uVar64;
    }
    (**(code **)(*param_1 + 0x18))(param_1,0,1,uVar62);
    local_1850 = 0;
    local_1848 = 1;
    if ((*(char *)((long)param_1 + 0x1d) == '\0') ||
       ((fVar69 < fVar68 || fVar29 < fVar110) || fVar109 < fVar108)) {
      iVar37 = (int)param_1[5];
      if (iVar37 == 0) {
        auVar73._8_4_ = 0x7f800000;
        auVar73._0_8_ = 0x7f8000007f800000;
        auVar73._12_4_ = 0x7f800000;
        auVar81._8_4_ = 0x807fffff;
        auVar81._0_8_ = 0x807fffff807fffff;
        auVar81._12_4_ = 0x807fffff;
      }
      else {
        pauVar50 = (undefined1 (*) [16])param_1[4];
        auVar72._8_4_ = 0x7f800000;
        auVar72._0_8_ = 0x7f8000007f800000;
        auVar72._12_4_ = 0x7f800000;
        auVar73 = NEON_smin(auVar72,*pauVar50,4);
        auVar6[8] = 0xff;
        auVar6._0_8_ = 0x807fffff807fffff;
        auVar6[9] = 0xff;
        auVar6[10] = 0x7f;
        auVar6[0xb] = 0x80;
        auVar6[0xc] = 0xff;
        auVar6[0xd] = 0xff;
        auVar6[0xe] = 0x7f;
        auVar6[0xf] = 0x80;
        auVar81 = NEON_smax(auVar6,*pauVar50,4);
        if (iVar37 != 1) {
          uVar45 = *(undefined8 *)(pauVar50[1] + 8);
          uVar89 = (undefined1)((ulong)uVar45 >> 8);
          uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
          uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
          uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
          uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
          uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
          uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
          auVar7[9] = uVar89;
          auVar7._0_9_ = *(unkbyte9 *)pauVar50[1];
          auVar7[10] = uVar90;
          auVar7[0xb] = uVar91;
          auVar7[0xc] = uVar92;
          auVar7[0xd] = uVar94;
          auVar7[0xe] = uVar95;
          auVar7[0xf] = uVar96;
          auVar73 = NEON_smin(auVar73,auVar7,4);
          auVar8[9] = uVar89;
          auVar8._0_9_ = *(unkbyte9 *)pauVar50[1];
          auVar8[10] = uVar90;
          auVar8[0xb] = uVar91;
          auVar8[0xc] = uVar92;
          auVar8[0xd] = uVar94;
          auVar8[0xe] = uVar95;
          auVar8[0xf] = uVar96;
          auVar81 = NEON_smax(auVar81,auVar8,4);
          if (iVar37 != 2) {
            uVar45 = *(undefined8 *)(pauVar50[2] + 8);
            uVar89 = (undefined1)((ulong)uVar45 >> 8);
            uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
            auVar9[9] = uVar89;
            auVar9._0_9_ = *(unkbyte9 *)pauVar50[2];
            auVar9[10] = uVar90;
            auVar9[0xb] = uVar91;
            auVar9[0xc] = uVar92;
            auVar9[0xd] = uVar94;
            auVar9[0xe] = uVar95;
            auVar9[0xf] = uVar96;
            auVar73 = NEON_smin(auVar73,auVar9,4);
            auVar10[9] = uVar89;
            auVar10._0_9_ = *(unkbyte9 *)pauVar50[2];
            auVar10[10] = uVar90;
            auVar10[0xb] = uVar91;
            auVar10[0xc] = uVar92;
            auVar10[0xd] = uVar94;
            auVar10[0xe] = uVar95;
            auVar10[0xf] = uVar96;
            auVar81 = NEON_smax(auVar81,auVar10,4);
            if (iVar37 != 3) {
              uVar45 = *(undefined8 *)(pauVar50[3] + 8);
              uVar89 = (undefined1)((ulong)uVar45 >> 8);
              uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
              uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
              uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
              uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
              uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
              uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
              auVar11[9] = uVar89;
              auVar11._0_9_ = *(unkbyte9 *)pauVar50[3];
              auVar11[10] = uVar90;
              auVar11[0xb] = uVar91;
              auVar11[0xc] = uVar92;
              auVar11[0xd] = uVar94;
              auVar11[0xe] = uVar95;
              auVar11[0xf] = uVar96;
              auVar73 = NEON_smin(auVar73,auVar11,4);
              auVar12[9] = uVar89;
              auVar12._0_9_ = *(unkbyte9 *)pauVar50[3];
              auVar12[10] = uVar90;
              auVar12[0xb] = uVar91;
              auVar12[0xc] = uVar92;
              auVar12[0xd] = uVar94;
              auVar12[0xe] = uVar95;
              auVar12[0xf] = uVar96;
              auVar81 = NEON_smax(auVar81,auVar12,4);
              if (iVar37 != 4) {
                uVar45 = *(undefined8 *)(pauVar50[4] + 8);
                uVar89 = (undefined1)((ulong)uVar45 >> 8);
                uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
                uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
                uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
                uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
                uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
                uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
                auVar13[9] = uVar89;
                auVar13._0_9_ = *(unkbyte9 *)pauVar50[4];
                auVar13[10] = uVar90;
                auVar13[0xb] = uVar91;
                auVar13[0xc] = uVar92;
                auVar13[0xd] = uVar94;
                auVar13[0xe] = uVar95;
                auVar13[0xf] = uVar96;
                auVar73 = NEON_smin(auVar73,auVar13,4);
                auVar14[9] = uVar89;
                auVar14._0_9_ = *(unkbyte9 *)pauVar50[4];
                auVar14[10] = uVar90;
                auVar14[0xb] = uVar91;
                auVar14[0xc] = uVar92;
                auVar14[0xd] = uVar94;
                auVar14[0xe] = uVar95;
                auVar14[0xf] = uVar96;
                auVar81 = NEON_smax(auVar81,auVar14,4);
                if (iVar37 != 5) {
                  uVar45 = *(undefined8 *)(pauVar50[5] + 8);
                  uVar89 = (undefined1)((ulong)uVar45 >> 8);
                  uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
                  uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
                  uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
                  uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
                  uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
                  uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
                  auVar15[9] = uVar89;
                  auVar15._0_9_ = *(unkbyte9 *)pauVar50[5];
                  auVar15[10] = uVar90;
                  auVar15[0xb] = uVar91;
                  auVar15[0xc] = uVar92;
                  auVar15[0xd] = uVar94;
                  auVar15[0xe] = uVar95;
                  auVar15[0xf] = uVar96;
                  auVar73 = NEON_smin(auVar73,auVar15,4);
                  auVar16[9] = uVar89;
                  auVar16._0_9_ = *(unkbyte9 *)pauVar50[5];
                  auVar16[10] = uVar90;
                  auVar16[0xb] = uVar91;
                  auVar16[0xc] = uVar92;
                  auVar16[0xd] = uVar94;
                  auVar16[0xe] = uVar95;
                  auVar16[0xf] = uVar96;
                  auVar81 = NEON_smax(auVar81,auVar16,4);
                  if (iVar37 != 6) {
                    lVar44 = (long)iVar37 * 0x10 + -0x60;
                    pauVar50 = pauVar50 + 6;
                    do {
                      uVar45 = *(undefined8 *)(*pauVar50 + 8);
                      uVar89 = (undefined1)((ulong)uVar45 >> 8);
                      uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
                      uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
                      uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
                      uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
                      uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
                      uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
                      auVar17[9] = uVar89;
                      auVar17._0_9_ = *(unkbyte9 *)*pauVar50;
                      auVar17[10] = uVar90;
                      auVar17[0xb] = uVar91;
                      auVar17[0xc] = uVar92;
                      auVar17[0xd] = uVar94;
                      auVar17[0xe] = uVar95;
                      auVar17[0xf] = uVar96;
                      auVar73 = NEON_smin(auVar73,auVar17,4);
                      auVar18[9] = uVar89;
                      auVar18._0_9_ = *(unkbyte9 *)*pauVar50;
                      auVar18[10] = uVar90;
                      auVar18[0xb] = uVar91;
                      auVar18[0xc] = uVar92;
                      auVar18[0xd] = uVar94;
                      auVar18[0xe] = uVar95;
                      auVar18[0xf] = uVar96;
                      auVar81 = NEON_smax(auVar81,auVar18,4);
                      lVar44 = lVar44 + -0x10;
                      pauVar50 = pauVar50 + 1;
                    } while (lVar44 != 0);
                  }
                }
              }
            }
          }
        }
      }
      bVar86 = (char)auVar73[3] >> 7;
      bVar87 = (char)auVar73[7] >> 7;
      bVar88 = (char)auVar73[0xb] >> 7;
      bVar93 = (char)auVar73[0xf] >> 7;
      bVar97 = (char)auVar81[3] >> 7;
      bVar98 = (char)auVar81[7] >> 7;
      bVar99 = (char)auVar81[0xb] >> 7;
      bVar103 = (char)auVar81[0xf] >> 7;
      uVar64 = CONCAT13(bVar86,CONCAT12(bVar86,CONCAT11(bVar86,bVar86))) >> 1;
      uVar62 = CONCAT13(bVar87,CONCAT12(bVar87,CONCAT11(bVar87,bVar87))) >> 1;
      uVar59 = CONCAT13(bVar88,CONCAT12(bVar88,CONCAT11(bVar88,bVar88))) >> 1;
      uVar60 = CONCAT13(bVar93,CONCAT12(bVar93,CONCAT11(bVar93,bVar93))) >> 1;
      uVar42 = CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))) >> 1;
      uVar43 = CONCAT13(bVar98,CONCAT12(bVar98,CONCAT11(bVar98,bVar98))) >> 1;
      uVar30 = CONCAT13(bVar99,CONCAT12(bVar99,CONCAT11(bVar99,bVar99))) >> 1;
      uVar32 = CONCAT13(bVar103,CONCAT12(bVar103,CONCAT11(bVar103,bVar103))) >> 1;
      auVar74[0] = (byte)uVar64 ^ auVar73[0];
      auVar74[1] = (byte)(uVar64 >> 8) ^ auVar73[1];
      auVar74[2] = (byte)(uVar64 >> 0x10) ^ auVar73[2];
      auVar74[3] = bVar86 >> 1 ^ auVar73[3];
      auVar74[4] = (byte)uVar62 ^ auVar73[4];
      auVar74[5] = (byte)(uVar62 >> 8) ^ auVar73[5];
      auVar74[6] = (byte)(uVar62 >> 0x10) ^ auVar73[6];
      auVar74[7] = bVar87 >> 1 ^ auVar73[7];
      auVar74[8] = (byte)uVar59 ^ auVar73[8];
      auVar74[9] = (byte)(uVar59 >> 8) ^ auVar73[9];
      auVar74[10] = (byte)(uVar59 >> 0x10) ^ auVar73[10];
      auVar74[0xb] = bVar88 >> 1 ^ auVar73[0xb];
      auVar74[0xc] = (byte)uVar60 ^ auVar73[0xc];
      auVar74[0xd] = (byte)(uVar60 >> 8) ^ auVar73[0xd];
      auVar74[0xe] = (byte)(uVar60 >> 0x10) ^ auVar73[0xe];
      auVar74[0xf] = bVar93 >> 1 ^ auVar73[0xf];
      auVar82._0_8_ =
           (undefined ***)
           CONCAT17(bVar98 >> 1 ^ auVar81[7],
                    CONCAT16((byte)(uVar43 >> 0x10) ^ auVar81[6],
                             CONCAT15((byte)(uVar43 >> 8) ^ auVar81[5],
                                      CONCAT14((byte)uVar43 ^ auVar81[4],
                                               CONCAT13(bVar97 >> 1 ^ auVar81[3],
                                                        CONCAT12((byte)(uVar42 >> 0x10) ^ auVar81[2]
                                                                 ,CONCAT11((byte)(uVar42 >> 8) ^
                                                                           auVar81[1],
                                                                           (byte)uVar42 ^ auVar81[0]
                                                                          )))))));
      auVar82[8] = (byte)uVar30 ^ auVar81[8];
      auVar82[9] = (byte)(uVar30 >> 8) ^ auVar81[9];
      auVar82[10] = (byte)(uVar30 >> 0x10) ^ auVar81[10];
      auVar82[0xb] = bVar99 >> 1 ^ auVar81[0xb];
      auVar82[0xc] = (byte)uVar32 ^ auVar81[0xc];
      auVar82[0xd] = (byte)(uVar32 >> 8) ^ auVar81[0xd];
      auVar82[0xe] = (byte)(uVar32 >> 0x10) ^ auVar81[0xe];
      auVar82[0xf] = bVar103 >> 1 ^ auVar81[0xf];
      uStack_1858 = auVar82._8_8_;
      local_1860 = auVar82._0_8_;
    }
    else {
      auVar74._4_4_ = fVar110;
      auVar74._0_4_ = fVar68;
      auVar74._8_4_ = fVar108;
      auVar74._12_4_ = 0;
      local_1860 = (undefined ***)CONCAT44(fVar29,fVar69);
      uStack_1858 = auVar80._0_8_;
    }
    puStack_1868 = auVar74._8_8_;
    local_1870 = auVar74._0_8_;
    if (*param_2 == 0) {
      lVar44 = 0;
    }
    else {
      lVar44 = *param_2 + (long)param_2;
    }
    local_184c = uVar61;
    FUN_0335152c(param_1,&local_1870,lVar44,local_1b20);
    lVar44 = *param_2;
    if (lVar44 != 0) {
      lVar44 = lVar44 + (long)param_2;
    }
    uVar63 = (ulong)(local_1b20[0] - lVar44) >> 7;
    uVar64 = *(uint *)(param_2 + 1);
    uVar62 = (uint)uVar63;
    if (uVar64 != uVar62) {
      uVar59 = *(uint *)((long)param_2 + 0xc);
      if (uVar59 == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar64;
        uVar59 = uVar64;
      }
      if ((int)uVar64 < (int)uVar62) {
        uVar60 = uVar59 & 0x7fffffff;
        if ((int)(uVar59 & 0x7fffffff) <= (int)uVar64) {
          uVar60 = uVar64;
        }
        if ((int)uVar60 < (int)uVar62) {
          uVar64 = uVar62 - 1 | (int)(uVar62 - 1) >> 0x10;
          uVar64 = uVar64 | (int)uVar64 >> 8;
          uVar64 = uVar64 | (int)uVar64 >> 4;
          uVar64 = uVar64 | (int)uVar64 >> 2;
          uVar64 = (uVar64 | (int)uVar64 >> 1) + 1;
          if ((int)uVar64 < (int)uVar62) {
            local_1b00 = (uint *)0x0;
            local_1b10 = (undefined **)0x0;
            puStack_1b08 = PTR_DAT_04372528;
            FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow",&local_1b10);
          }
          lVar44 = tpidr_el0;
          lVar46 = *(long *)(lVar44 + 0x38d490);
          if (lVar46 == 0) {
            lVar46 = FUN_0333d16c(0,1);
            *(long *)(lVar44 + 0x38d490) = lVar46;
          }
          plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
          pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))
                                      (plVar38,-(ulong)(uVar64 >> 0x1f) & 0xffffff8000000000 |
                                               (ulong)uVar64 << 7,0);
          if (*param_2 == 0) {
            pvVar41 = (void *)0x0;
          }
          else {
            pvVar41 = (void *)(*param_2 + (long)param_2);
          }
          memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
          if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
            uVar59 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
            if ((int)uVar59 <= (int)*(uint *)(param_2 + 1)) {
              uVar59 = *(uint *)(param_2 + 1);
            }
            if (*param_2 == 0) {
              lVar46 = 0;
            }
            else {
              lVar46 = *param_2 + (long)param_2;
            }
            lVar47 = *(long *)(lVar44 + 0x38d490);
            if (lVar47 == 0) {
              lVar47 = FUN_0333d16c(0,1);
              *(long *)(lVar44 + 0x38d490) = lVar47;
            }
            plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
            (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar59 << 7);
          }
          if (pvVar39 == (void *)0x0) {
            lVar44 = 0;
          }
          else {
            lVar44 = (long)pvVar39 - (long)param_2;
          }
          *param_2 = lVar44;
          *(uint *)((long)param_2 + 0xc) = uVar64 | 0x80000000;
        }
      }
      *(uint *)(param_2 + 1) = uVar62;
    }
    uVar59 = *(uint *)((long)param_1 + 0x3c);
    uVar64 = uVar59 & 0x3fffffff;
    if ((int)uVar64 < (int)uVar62) {
      puVar65 = (undefined8 *)param_1[6];
      uVar60 = *(uint *)(param_1 + 7);
      if (0x3fffffff < (int)uVar62) {
        FUN_032bd0a8(uVar63 & 0xffffffff);
        uVar59 = *(uint *)((long)param_1 + 0x3c);
        uVar64 = uVar59 & 0x3fffffff;
      }
      uVar42 = (uVar59 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar42) {
        uVar42 = 0x3fffffff;
      }
      local_70[0] = uVar62;
      if ((int)uVar62 <= (int)uVar42) {
        local_70[0] = uVar42;
      }
      local_1910 = (undefined **)((ulong)local_70[0] << 5);
      if (((int)local_70[0] < (int)uVar64) || (0x3fffffff < (int)local_70[0])) {
        local_1b10 = (undefined **)0x1;
        local_1b00 = local_70;
        puStack_1b08 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_1b10);
        uVar59 = *(uint *)((long)param_1 + 0x3c);
        uVar64 = uVar59 & 0x3fffffff;
      }
      puVar67 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1910,&local_1910)
      ;
      if (0 < (int)uVar60) {
        uVar45 = puVar65[3];
        puVar67[1] = puVar65[1];
        puVar67[3] = uVar45;
        uVar45 = *puVar65;
        puVar67[2] = puVar65[2];
        *puVar67 = uVar45;
        if (uVar60 != 1) {
          lVar44 = (ulong)uVar60 - 1;
          puVar40 = puVar67;
          puVar53 = puVar65;
          do {
            uVar45 = puVar53[7];
            lVar44 = lVar44 + -1;
            puVar40[5] = puVar53[5];
            puVar40[7] = uVar45;
            uVar45 = puVar53[4];
            puVar40[6] = puVar53[6];
            puVar40[4] = uVar45;
            puVar40 = puVar40 + 4;
            puVar53 = puVar53 + 4;
          } while (lVar44 != 0);
        }
      }
      if (-1 < (int)uVar59) {
        (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar65,(ulong)uVar64 << 5);
      }
      if (local_1910 < (undefined **)0x7ffffffe0) {
        uVar52 = (undefined4)((ulong)local_1910 >> 5);
      }
      else {
        uVar52 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = uVar52;
      param_1[6] = (long)puVar67;
    }
    if (*(uint *)(param_1 + 7) != uVar62) {
      *(uint *)(param_1 + 7) = uVar62;
    }
    param_3[1] = param_1[6];
    if (*param_2 == 0) {
      lVar44 = 0;
    }
    else {
      lVar44 = *param_2 + (long)param_2;
    }
    (**(code **)(*param_3 + 0x18))(param_3,lVar44,1,(int)param_2[1] + -1,1);
    plVar38 = (long *)param_1[2];
    if (plVar38 == (long *)0x0) goto LAB_0334e100;
    local_1b10 = &PTR_LAB_04363ab0;
    (**(code **)(*plVar38 + 0x10))(plVar38,&local_1b10,1);
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],0,1,0,uVar61);
    (**(code **)(*(long *)param_1[2] + 0x20))();
    cVar3 = *(char *)((long)param_1 + 0x1c);
  }
  else {
    iVar37 = (int)param_1[3];
    if (1 < iVar37) {
      FUN_0331fefc(&local_1b10,&local_1870,0x200);
      FUN_0332448c(&local_1b10,"hkcdSimdTree does not implements m_numLevelToUnfold > 1 yet.");
      iVar37 = FUN_03320b30(0x2f9cba3c,&local_1870,
                            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                            ,0x48c);
      if (iVar37 != 0) {
        CallSupervisor(0x26);
      }
      FUN_0331ff7c(&local_1b10);
      iVar37 = (int)param_1[3];
    }
    fVar70 = powf(4.0,(float)iVar37);
    if ((int)fVar70 < 1) {
      local_1b60 = 0;
    }
    else {
      uVar64 = *(uint *)(param_2 + 1);
      iVar37 = uVar64 + (int)fVar70;
      uVar62 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar64;
        uVar62 = uVar64;
      }
      uVar59 = uVar62 & 0x7fffffff;
      if ((int)(uVar62 & 0x7fffffff) <= (int)uVar64) {
        uVar59 = uVar64;
      }
      if ((int)uVar59 < iVar37) {
        uVar62 = iVar37 - 1U | (int)(iVar37 - 1U) >> 0x10;
        uVar62 = uVar62 | (int)uVar62 >> 8;
        uVar62 = uVar62 | (int)uVar62 >> 4;
        uVar62 = uVar62 | (int)uVar62 >> 2;
        uVar62 = (uVar62 | (int)uVar62 >> 1) + 1;
        if ((int)uVar62 < iVar37) {
          local_1870 = 0;
          local_1860 = (undefined ***)0x0;
          puStack_1868 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_1870);
        }
        lVar44 = tpidr_el0;
        lVar46 = *(long *)(lVar44 + 0x38d490);
        if (lVar46 == 0) {
          lVar46 = FUN_0333d16c(0,1);
          *(long *)(lVar44 + 0x38d490) = lVar46;
        }
        plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
        pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))
                                    (plVar38,-(ulong)(uVar62 >> 0x1f) & 0xffffff8000000000 |
                                             (ulong)uVar62 << 7,0);
        if (*param_2 == 0) {
          pvVar41 = (void *)0x0;
        }
        else {
          pvVar41 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
        if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
          uVar59 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          if ((int)uVar59 <= (int)*(uint *)(param_2 + 1)) {
            uVar59 = *(uint *)(param_2 + 1);
          }
          if (*param_2 == 0) {
            lVar46 = 0;
          }
          else {
            lVar46 = *param_2 + (long)param_2;
          }
          lVar47 = *(long *)(lVar44 + 0x38d490);
          if (lVar47 == 0) {
            lVar47 = FUN_0333d16c(0,1);
            *(long *)(lVar44 + 0x38d490) = lVar47;
          }
          plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
          (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar59 << 7);
        }
        lVar44 = 0;
        if (pvVar39 != (void *)0x0) {
          lVar44 = (long)pvVar39 - (long)param_2;
        }
        *(uint *)((long)param_2 + 0xc) = uVar62 | 0x80000000;
        *param_2 = lVar44;
      }
      else {
        lVar44 = *param_2;
      }
      local_1b60 = (long)param_2 + (long)(int)uVar64 * 0x80 + lVar44;
      *(int *)(param_2 + 1) = iVar37;
    }
    local_1850 = 0;
    local_184c = uVar61;
    local_1848 = 1;
    if ((*(char *)((long)param_1 + 0x1d) == '\0') ||
       ((fVar69 < fVar68 || fVar29 < fVar110) || fVar109 < fVar108)) {
      iVar37 = (int)param_1[5];
      if (iVar37 == 0) {
        auVar83._8_4_ = 0x807fffff;
        auVar83._0_8_ = 0x807fffff807fffff;
        auVar83._12_4_ = 0x807fffff;
        auVar75._8_4_ = 0x7f800000;
        auVar75._0_8_ = 0x7f8000007f800000;
        auVar75._12_4_ = 0x7f800000;
      }
      else {
        pVar54 = (unkbyte9 *)param_1[4];
        uVar63 = (long)iVar37 * 0x10 - 0x10;
        uVar61 = ((uint)(uVar63 >> 4) & 0xfffffff) + 1;
        if ((uVar61 & 3) == 0) {
          auVar75._8_4_ = 0x7f800000;
          auVar75._0_8_ = 0x7f8000007f800000;
          auVar75._12_4_ = 0x7f800000;
          auVar83._8_4_ = 0x807fffff;
          auVar83._0_8_ = 0x807fffff807fffff;
          auVar83._12_4_ = 0x807fffff;
          pVar49 = pVar54;
        }
        else {
          auVar75._8_4_ = 0x7f800000;
          auVar75._0_8_ = 0x7f8000007f800000;
          auVar75._12_4_ = 0x7f800000;
          auVar83._8_4_ = 0x807fffff;
          auVar83._0_8_ = 0x807fffff807fffff;
          auVar83._12_4_ = 0x807fffff;
          lVar44 = -((ulong)uVar61 & 3);
          pVar48 = pVar54;
          do {
            pVar49 = pVar48 + 1;
            uVar45 = *(undefined8 *)((long)pVar48 + 8);
            uVar89 = (undefined1)((ulong)uVar45 >> 8);
            uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
            auVar19[9] = uVar89;
            auVar19._0_9_ = *pVar48;
            auVar19[10] = uVar90;
            auVar19[0xb] = uVar91;
            auVar19[0xc] = uVar92;
            auVar19[0xd] = uVar94;
            auVar19[0xe] = uVar95;
            auVar19[0xf] = uVar96;
            auVar75 = NEON_smin(auVar75,auVar19,4);
            auVar20[9] = uVar89;
            auVar20._0_9_ = *pVar48;
            auVar20[10] = uVar90;
            auVar20[0xb] = uVar91;
            auVar20[0xc] = uVar92;
            auVar20[0xd] = uVar94;
            auVar20[0xe] = uVar95;
            auVar20[0xf] = uVar96;
            auVar83 = NEON_smax(auVar83,auVar20,4);
            bVar36 = lVar44 != -1;
            lVar44 = lVar44 + 1;
            pVar48 = pVar49;
          } while (bVar36);
        }
        if (0x2f < uVar63) {
          do {
            uVar45 = *(undefined8 *)((long)pVar49 + 8);
            uVar89 = (undefined1)((ulong)uVar45 >> 8);
            uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
            uVar45 = *(undefined8 *)((long)pVar49 + 0x18);
            uVar100 = (undefined1)((ulong)uVar45 >> 8);
            uVar101 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar102 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar104 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar105 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar106 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar107 = (undefined1)((ulong)uVar45 >> 0x38);
            auVar21[9] = uVar89;
            auVar21._0_9_ = *pVar49;
            auVar21[10] = uVar90;
            auVar21[0xb] = uVar91;
            auVar21[0xc] = uVar92;
            auVar21[0xd] = uVar94;
            auVar21[0xe] = uVar95;
            auVar21[0xf] = uVar96;
            auVar78 = NEON_smin(auVar75,auVar21,4);
            auVar22[9] = uVar89;
            auVar22._0_9_ = *pVar49;
            auVar22[10] = uVar90;
            auVar22[0xb] = uVar91;
            auVar22[0xc] = uVar92;
            auVar22[0xd] = uVar94;
            auVar22[0xe] = uVar95;
            auVar22[0xf] = uVar96;
            auVar85 = NEON_smax(auVar83,auVar22,4);
            auVar25[9] = uVar100;
            auVar25._0_9_ = pVar49[1];
            auVar25[10] = uVar101;
            auVar25[0xb] = uVar102;
            auVar25[0xc] = uVar104;
            auVar25[0xd] = uVar105;
            auVar25[0xe] = uVar106;
            auVar25[0xf] = uVar107;
            auVar78 = NEON_smin(auVar78,auVar25,4);
            auVar26[9] = uVar100;
            auVar26._0_9_ = pVar49[1];
            auVar26[10] = uVar101;
            auVar26[0xb] = uVar102;
            auVar26[0xc] = uVar104;
            auVar26[0xd] = uVar105;
            auVar26[0xe] = uVar106;
            auVar26[0xf] = uVar107;
            auVar85 = NEON_smax(auVar85,auVar26,4);
            pVar48 = pVar49 + 2;
            uVar45 = *(undefined8 *)((long)pVar49 + 0x28);
            uVar89 = (undefined1)((ulong)uVar45 >> 8);
            uVar90 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar91 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar92 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar94 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar95 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar96 = (undefined1)((ulong)uVar45 >> 0x38);
            pVar5 = pVar49 + 3;
            uVar45 = *(undefined8 *)((long)pVar49 + 0x38);
            uVar100 = (undefined1)((ulong)uVar45 >> 8);
            uVar101 = (undefined1)((ulong)uVar45 >> 0x10);
            uVar102 = (undefined1)((ulong)uVar45 >> 0x18);
            uVar104 = (undefined1)((ulong)uVar45 >> 0x20);
            uVar105 = (undefined1)((ulong)uVar45 >> 0x28);
            uVar106 = (undefined1)((ulong)uVar45 >> 0x30);
            uVar107 = (undefined1)((ulong)uVar45 >> 0x38);
            pVar49 = pVar49 + 4;
            auVar23[9] = uVar89;
            auVar23._0_9_ = *pVar48;
            auVar23[10] = uVar90;
            auVar23[0xb] = uVar91;
            auVar23[0xc] = uVar92;
            auVar23[0xd] = uVar94;
            auVar23[0xe] = uVar95;
            auVar23[0xf] = uVar96;
            auVar78 = NEON_smin(auVar78,auVar23,4);
            auVar24[9] = uVar89;
            auVar24._0_9_ = *pVar48;
            auVar24[10] = uVar90;
            auVar24[0xb] = uVar91;
            auVar24[0xc] = uVar92;
            auVar24[0xd] = uVar94;
            auVar24[0xe] = uVar95;
            auVar24[0xf] = uVar96;
            auVar85 = NEON_smax(auVar85,auVar24,4);
            auVar27[9] = uVar100;
            auVar27._0_9_ = *pVar5;
            auVar27[10] = uVar101;
            auVar27[0xb] = uVar102;
            auVar27[0xc] = uVar104;
            auVar27[0xd] = uVar105;
            auVar27[0xe] = uVar106;
            auVar27[0xf] = uVar107;
            auVar75 = NEON_smin(auVar78,auVar27,4);
            auVar28[9] = uVar100;
            auVar28._0_9_ = *pVar5;
            auVar28[10] = uVar101;
            auVar28[0xb] = uVar102;
            auVar28[0xc] = uVar104;
            auVar28[0xd] = uVar105;
            auVar28[0xe] = uVar106;
            auVar28[0xf] = uVar107;
            auVar83 = NEON_smax(auVar85,auVar28,4);
          } while (pVar49 != pVar54 + iVar37);
        }
      }
      bVar86 = (char)auVar75[3] >> 7;
      bVar87 = (char)auVar75[7] >> 7;
      bVar88 = (char)auVar75[0xb] >> 7;
      bVar93 = (char)auVar75[0xf] >> 7;
      bVar97 = (char)auVar83[3] >> 7;
      bVar98 = (char)auVar83[7] >> 7;
      bVar99 = (char)auVar83[0xb] >> 7;
      bVar103 = (char)auVar83[0xf] >> 7;
      uVar61 = CONCAT13(bVar86,CONCAT12(bVar86,CONCAT11(bVar86,bVar86))) >> 1;
      uVar64 = CONCAT13(bVar87,CONCAT12(bVar87,CONCAT11(bVar87,bVar87))) >> 1;
      uVar62 = CONCAT13(bVar88,CONCAT12(bVar88,CONCAT11(bVar88,bVar88))) >> 1;
      uVar59 = CONCAT13(bVar93,CONCAT12(bVar93,CONCAT11(bVar93,bVar93))) >> 1;
      uVar60 = CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))) >> 1;
      uVar42 = CONCAT13(bVar98,CONCAT12(bVar98,CONCAT11(bVar98,bVar98))) >> 1;
      uVar43 = CONCAT13(bVar99,CONCAT12(bVar99,CONCAT11(bVar99,bVar99))) >> 1;
      uVar30 = CONCAT13(bVar103,CONCAT12(bVar103,CONCAT11(bVar103,bVar103))) >> 1;
      auVar76[0] = (byte)uVar61 ^ auVar75[0];
      auVar76[1] = (byte)(uVar61 >> 8) ^ auVar75[1];
      auVar76[2] = (byte)(uVar61 >> 0x10) ^ auVar75[2];
      auVar76[3] = bVar86 >> 1 ^ auVar75[3];
      auVar76[4] = (byte)uVar64 ^ auVar75[4];
      auVar76[5] = (byte)(uVar64 >> 8) ^ auVar75[5];
      auVar76[6] = (byte)(uVar64 >> 0x10) ^ auVar75[6];
      auVar76[7] = bVar87 >> 1 ^ auVar75[7];
      auVar76[8] = (byte)uVar62 ^ auVar75[8];
      auVar76[9] = (byte)(uVar62 >> 8) ^ auVar75[9];
      auVar76[10] = (byte)(uVar62 >> 0x10) ^ auVar75[10];
      auVar76[0xb] = bVar88 >> 1 ^ auVar75[0xb];
      auVar76[0xc] = (byte)uVar59 ^ auVar75[0xc];
      auVar76[0xd] = (byte)(uVar59 >> 8) ^ auVar75[0xd];
      auVar76[0xe] = (byte)(uVar59 >> 0x10) ^ auVar75[0xe];
      auVar76[0xf] = bVar93 >> 1 ^ auVar75[0xf];
      auVar84._0_8_ =
           (undefined ***)
           CONCAT17(bVar98 >> 1 ^ auVar83[7],
                    CONCAT16((byte)(uVar42 >> 0x10) ^ auVar83[6],
                             CONCAT15((byte)(uVar42 >> 8) ^ auVar83[5],
                                      CONCAT14((byte)uVar42 ^ auVar83[4],
                                               CONCAT13(bVar97 >> 1 ^ auVar83[3],
                                                        CONCAT12((byte)(uVar60 >> 0x10) ^ auVar83[2]
                                                                 ,CONCAT11((byte)(uVar60 >> 8) ^
                                                                           auVar83[1],
                                                                           (byte)uVar60 ^ auVar83[0]
                                                                          )))))));
      auVar84[8] = (byte)uVar43 ^ auVar83[8];
      auVar84[9] = (byte)(uVar43 >> 8) ^ auVar83[9];
      auVar84[10] = (byte)(uVar43 >> 0x10) ^ auVar83[10];
      auVar84[0xb] = bVar99 >> 1 ^ auVar83[0xb];
      auVar84[0xc] = (byte)uVar30 ^ auVar83[0xc];
      auVar84[0xd] = (byte)(uVar30 >> 8) ^ auVar83[0xd];
      auVar84[0xe] = (byte)(uVar30 >> 0x10) ^ auVar83[0xe];
      auVar84[0xf] = bVar103 >> 1 ^ auVar83[0xf];
      uStack_1858 = auVar84._8_8_;
      local_1860 = auVar84._0_8_;
    }
    else {
      uStack_1858 = auVar80._0_8_;
      local_1860 = (undefined ***)CONCAT44(fVar29,fVar69);
      auVar76._4_4_ = fVar110;
      auVar76._0_4_ = fVar68;
      auVar76._8_4_ = fVar108;
      auVar76._12_4_ = 0;
    }
    puStack_1868 = auVar76._8_8_;
    local_1870 = auVar76._0_8_;
    iVar37 = (int)param_1[3];
    if (iVar37 < 1) {
      puVar65 = &local_1870;
      local_1b30 = 1;
      uVar61 = 1;
LAB_0334f474:
      if (uVar61 == 1) {
        lVar44 = 0;
        iVar37 = 0;
      }
      else {
        lVar44 = 0;
        iVar37 = 0;
        piVar57 = (int *)((long)puVar65 + 0x54);
        do {
          if (iVar37 <= piVar57[-0xc]) {
            iVar37 = piVar57[-0xc];
          }
          lVar44 = lVar44 + 2;
          if (iVar37 <= *piVar57) {
            iVar37 = *piVar57;
          }
          piVar57 = piVar57 + 0x18;
        } while ((ulong)uVar61 - ((ulong)uVar61 & 1) != lVar44);
        if ((uVar61 & 1) == 0) goto LAB_0334f4e0;
      }
      iVar66 = *(int *)((long)puVar65 + lVar44 * 0x30 + 0x24);
      if (iVar37 <= iVar66) {
        iVar37 = iVar66;
      }
    }
    else {
      iVar66 = 0;
      uVar61 = 1;
      puVar67 = &local_1870;
      lVar44 = local_1b60;
      puVar40 = local_c70;
      do {
        puVar65 = puVar40;
        puVar40 = puVar67;
        if ((int)uVar61 < 1) {
          uVar61 = 0;
        }
        else {
          lVar46 = (long)(int)uVar61;
          uVar61 = 0;
          puVar67 = puVar40;
          do {
            if (*(int *)((long)puVar67 + 0x24) < 0x21) {
              uVar45 = *puVar67;
              puVar53 = puVar65 + (long)(int)uVar61 * 6;
              uVar61 = uVar61 + 1;
              puVar53[1] = puVar67[1];
              *puVar53 = uVar45;
              auVar78 = *(undefined1 (*) [16])(puVar67 + 2);
              puVar53[3] = auVar78._8_8_;
              puVar53[2] = auVar78._0_8_;
              uVar45 = puVar67[4];
              *(undefined4 *)(puVar53 + 5) = *(undefined4 *)(puVar67 + 5);
              puVar53[4] = uVar45;
            }
            else {
              (**(code **)(*param_1 + 0x20))(param_1,puVar67,&local_1b10);
              lVar55 = *param_2;
              iVar37 = *(int *)(puVar67 + 5);
              lVar47 = lVar55;
              if (lVar55 != 0) {
                lVar47 = lVar55 + (long)param_2;
              }
              puVar56 = puVar65 + (long)(int)uVar61 * 6;
              uVar63 = lVar44 - lVar47;
              uVar52 = (undefined4)(uVar63 >> 7);
              *(undefined4 *)((long)puVar56 + 0x24) = uStack_1aec;
              *(undefined4 *)(puVar56 + 5) = uVar52;
              puVar56[1] = (ulong)puStack_1b08;
              *puVar56 = (ulong)local_1b10;
              puVar56[3] = uStack_1af8;
              puVar56[2] = (ulong)local_1b00;
              *(undefined4 *)(puVar56 + 4) = local_1af0;
              uVar58 = (undefined4)(uVar63 + 0x80 >> 7);
              *(undefined4 *)((long)puVar56 + 0x54) = uStack_1abc;
              *(undefined4 *)(puVar56 + 0xb) = uVar58;
              *(undefined4 *)(puVar56 + 10) = local_1ac0;
              puVar56[7] = uStack_1ad8;
              puVar56[6] = local_1ae0;
              puVar56[9] = uStack_1ac8;
              puVar56[8] = uStack_1ad0;
              puVar56[0xd] = uStack_1aa8;
              puVar56[0xc] = local_1ab0;
              puVar56[0xf] = uStack_1a98;
              puVar56[0xe] = uStack_1aa0;
              auVar77._0_8_ = CONCAT44(uVar58,uVar52);
              uVar58 = (undefined4)(uVar63 + 0x100 >> 7);
              auVar77._8_4_ = uVar58;
              uVar52 = (undefined4)(uVar63 + 0x180 >> 7);
              auVar77._12_4_ = uVar52;
              *(undefined4 *)(puVar56 + 0x10) = local_1a90;
              *(undefined4 *)((long)puVar56 + 0x84) = local_1a8c;
              *(undefined4 *)(puVar56 + 0x11) = uVar58;
              lVar47 = lVar55 + (long)param_2 + (long)iVar37 * 0x80;
              uVar61 = uVar61 + 4;
              *(undefined4 *)(puVar56 + 0x16) = local_1a60;
              *(undefined4 *)((long)puVar56 + 0xb4) = local_1a5c;
              puVar56[0x13] = uStack_1a78;
              puVar56[0x12] = local_1a80;
              puVar56[0x15] = auStack_1a70._8_8_;
              puVar56[0x14] = auStack_1a70._0_8_;
              *(undefined4 *)(puVar56 + 0x17) = uVar52;
              lVar44 = lVar44 + 0x200;
              *(undefined1 *)(lVar47 + 0x70) = 0;
              *(long *)(lVar47 + 0x68) = auVar77._8_8_;
              *(undefined8 *)(lVar47 + 0x60) = auVar77._0_8_;
            }
            puVar67 = puVar67 + 6;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
          iVar37 = (int)param_1[3];
        }
        iVar66 = iVar66 + 1;
        puVar67 = puVar65;
      } while (iVar66 < iVar37);
      local_1b30 = (int)((ulong)(lVar44 - local_1b60) >> 7) + 1;
      if (0 < (int)uVar61) goto LAB_0334f474;
      iVar37 = 0;
    }
LAB_0334f4e0:
    uVar64 = iVar37 + 0x43U & 0xfffffffc;
    uVar62 = *(uint *)(param_2 + 1);
    if ((int)(uVar64 * uVar61) < 1) {
      lVar44 = 0;
    }
    else {
      uVar59 = uVar64 * uVar61 + uVar62;
      uVar60 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar62;
        uVar60 = uVar62;
      }
      uVar42 = uVar60 & 0x7fffffff;
      if ((int)(uVar60 & 0x7fffffff) <= (int)uVar62) {
        uVar42 = uVar62;
      }
      if ((int)uVar42 < (int)uVar59) {
        uVar60 = uVar59 - 1 | (int)(uVar59 - 1) >> 0x10;
        uVar60 = uVar60 | (int)uVar60 >> 8;
        uVar60 = uVar60 | (int)uVar60 >> 4;
        uVar60 = uVar60 | (int)uVar60 >> 2;
        uVar60 = (uVar60 | (int)uVar60 >> 1) + 1;
        if ((int)uVar60 < (int)uVar59) {
          local_1b00 = (uint *)0x0;
          local_1b10 = (undefined **)0x0;
          puStack_1b08 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_1b10);
        }
        lVar44 = tpidr_el0;
        lVar46 = *(long *)(lVar44 + 0x38d490);
        if (lVar46 == 0) {
          lVar46 = FUN_0333d16c(0,1);
          *(long *)(lVar44 + 0x38d490) = lVar46;
        }
        plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
        pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))
                                    (plVar38,-(ulong)(uVar60 >> 0x1f) & 0xffffff8000000000 |
                                             (ulong)uVar60 << 7,0);
        if (*param_2 == 0) {
          pvVar41 = (void *)0x0;
        }
        else {
          pvVar41 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
        if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
          uVar42 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          if ((int)uVar42 <= (int)*(uint *)(param_2 + 1)) {
            uVar42 = *(uint *)(param_2 + 1);
          }
          if (*param_2 == 0) {
            local_1b70 = 0;
          }
          else {
            local_1b70 = *param_2 + (long)param_2;
          }
          lVar46 = *(long *)(lVar44 + 0x38d490);
          if (lVar46 == 0) {
            lVar46 = FUN_0333d16c(0,1);
            *(long *)(lVar44 + 0x38d490) = lVar46;
          }
          plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
          (**(code **)(*plVar38 + 0x18))(plVar38,local_1b70,(ulong)uVar42 << 7);
        }
        if (pvVar39 == (void *)0x0) {
          lVar44 = 0;
        }
        else {
          lVar44 = (long)pvVar39 - (long)param_2;
        }
        *param_2 = lVar44;
        *(uint *)((long)param_2 + 0xc) = uVar60 | 0x80000000;
      }
      else {
        lVar44 = *param_2;
      }
      lVar44 = (long)param_2 + (long)(int)uVar62 * 0x80 + lVar44;
      *(uint *)(param_2 + 1) = uVar59;
      uVar62 = uVar59;
    }
    uVar60 = *(uint *)((long)param_1 + 0x3c);
    uVar59 = uVar60 & 0x3fffffff;
    if ((int)uVar59 < (int)uVar62) {
      puVar67 = (undefined8 *)param_1[6];
      uVar42 = *(uint *)(param_1 + 7);
      if (0x3fffffff < (int)uVar62) {
        FUN_032bd0a8(uVar62);
        uVar60 = *(uint *)((long)param_1 + 0x3c);
        uVar59 = uVar60 & 0x3fffffff;
      }
      uVar43 = (uVar60 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar43) {
        uVar43 = 0x3fffffff;
      }
      uVar30 = uVar62;
      if ((int)uVar62 <= (int)uVar43) {
        uVar30 = uVar43;
      }
      local_1910 = (undefined **)((ulong)uVar30 << 5);
      local_1b20[0] = CONCAT44(local_1b20[0]._4_4_,uVar30);
      if (((int)uVar30 < (int)uVar59) || (0x3fffffff < (int)uVar30)) {
        local_1b10 = (undefined **)0x1;
        local_1b00 = (uint *)local_1b20;
        puStack_1b08 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_1b10);
        uVar60 = *(uint *)((long)param_1 + 0x3c);
        uVar59 = uVar60 & 0x3fffffff;
      }
      puVar40 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1910,&local_1910)
      ;
      if (0 < (int)uVar42) {
        uVar45 = puVar67[3];
        puVar40[1] = puVar67[1];
        puVar40[3] = uVar45;
        uVar45 = puVar67[2];
        *puVar40 = *puVar67;
        puVar40[2] = uVar45;
        if (uVar42 != 1) {
          lVar46 = (ulong)uVar42 - 1;
          puVar53 = puVar40;
          puVar51 = puVar67;
          do {
            uVar45 = puVar51[7];
            lVar46 = lVar46 + -1;
            puVar53[5] = puVar51[5];
            puVar53[7] = uVar45;
            uVar45 = puVar51[4];
            puVar53[6] = puVar51[6];
            puVar53[4] = uVar45;
            puVar53 = puVar53 + 4;
            puVar51 = puVar51 + 4;
          } while (lVar46 != 0);
        }
      }
      if (-1 < (int)uVar60) {
        (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar67,(ulong)uVar59 << 5);
      }
      if (local_1910 < (undefined **)0x7ffffffe0) {
        uVar52 = (undefined4)((ulong)local_1910 >> 5);
      }
      else {
        uVar52 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = uVar52;
      param_1[6] = (long)puVar40;
    }
    if (*(uint *)(param_1 + 7) != uVar62) {
      *(uint *)(param_1 + 7) = uVar62;
    }
    param_3[1] = param_1[6];
    local_70[0] = 0;
    local_1878[0] = 0;
    local_1910 = &PTR_LAB_04363a60;
    local_18e0 = -0x7ffffff000000000;
    local_18f8 = *param_2;
    if (local_18f8 != 0) {
      local_18f8 = local_18f8 + (long)param_2;
    }
    local_1888 = local_70;
    local_1880 = local_1878;
    local_1908 = param_3;
    local_1900 = param_1;
    local_18f0 = lVar44;
    local_18e8 = local_18d8;
    local_1898 = puVar65;
    local_1890 = uVar64;
    if ((int)uVar61 < 0x11) {
      local_18e0._0_4_ = 0;
      bVar36 = false;
      uVar62 = uVar61;
      if (0 < (int)uVar61) goto LAB_0334f5c8;
LAB_0334f97c:
      if ((int)uVar62 < 0 != bVar36) {
        local_18e0 = CONCAT44(local_18e0._4_4_,uVar61);
      }
    }
    else {
      if ((int)uVar61 < 0x40000000) {
        local_18e0._4_4_ = 0x80000010;
      }
      else {
        FUN_032bd0a8(uVar61);
      }
      uVar62 = (local_18e0._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar62) {
        uVar62 = 0x3fffffff;
      }
      uVar59 = uVar61;
      if ((int)uVar61 <= (int)uVar62) {
        uVar59 = uVar62;
      }
      local_18e8 = (int *)FUN_032bd1d4(puVar35,uVar59,4,local_18d8,0,(long)&local_18e0 + 4);
      bVar36 = SBORROW4(uVar61,(uint)local_18e0);
      uVar62 = uVar61 - (uint)local_18e0;
      if ((int)uVar61 <= (int)(uint)local_18e0) goto LAB_0334f97c;
LAB_0334f5c8:
      lVar44 = (long)(int)(uint)local_18e0;
      uVar62 = ~(uint)local_18e0;
      local_18e0 = CONCAT44(local_18e0._4_4_,uVar61);
      memset(local_18e8 + lVar44,0xff,(ulong)(uVar61 + uVar62) * 4 + 4);
    }
    (**(code **)(*param_1 + 0x18))(param_1,1,uVar61,(int)param_2[1]);
    (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],&local_1910,uVar61);
    (**(code **)(*(long *)param_1[2] + 0x20))();
    if (local_1878[0] != uVar61) {
      FUN_0331fefc(local_1b20,&local_1b10,0x200);
      FUN_0332448c(local_1b20,
                   "Incorrect handling of task mutiplicity, invalid number of completed branches.\nPlease review your implementation of hkcdSimdTree::IParallelBuild."
                  );
      iVar37 = FUN_03320b30(0x667a298d,&local_1b10,
                            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                            ,0x4e9);
      if (iVar37 != 0) {
        CallSupervisor(0x26);
      }
      FUN_0331ff7c(local_1b20);
    }
    if (*param_2 == 0) {
      lVar44 = 0;
    }
    else {
      lVar44 = *param_2 + (long)param_2;
    }
    (**(code **)(*param_3 + 0x18))(param_3,lVar44,1,local_1b30,1);
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)((long)param_1 + 0x1c);
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      if ((int)param_1[3] < 2) {
        puVar67 = (undefined8 *)(local_18f0 + (long)*local_18e8 * 0x80);
        if (1 < (int)uVar61) {
          uVar63 = 1;
          do {
            iVar37 = local_18e8[uVar63];
            lVar44 = 0;
            if (*param_2 != 0) {
              lVar44 = *param_2 + (long)param_2;
            }
            lVar44 = lVar44 + (long)*(int *)(puVar65 + uVar63 * 6 + 5) * 0x80;
            puVar40 = (undefined8 *)(local_18f0 + uVar63 * (long)(int)uVar64 * 0x80);
            iVar4 = -(int)((ulong)((long)puVar40 - (long)puVar67) >> 7);
            iVar66 = iVar4;
            if (*(char *)(lVar44 + 0x70) != '\0') {
              iVar66 = 0;
            }
            iVar2 = 0;
            if (*(int *)(lVar44 + 0x60) != 0) {
              iVar2 = iVar66 + *(int *)(lVar44 + 0x60);
            }
            *(int *)(lVar44 + 0x60) = iVar2;
            iVar2 = 0;
            if (*(int *)(lVar44 + 100) != 0) {
              iVar2 = *(int *)(lVar44 + 100) + iVar66;
            }
            *(int *)(lVar44 + 100) = iVar2;
            iVar2 = 0;
            if (*(int *)(lVar44 + 0x68) != 0) {
              iVar2 = *(int *)(lVar44 + 0x68) + iVar66;
            }
            iVar1 = 0;
            if (*(int *)(lVar44 + 0x6c) != 0) {
              iVar1 = *(int *)(lVar44 + 0x6c) + iVar66;
            }
            *(int *)(lVar44 + 0x68) = iVar2;
            *(int *)(lVar44 + 0x6c) = iVar1;
            if (0 < iVar37) {
              do {
                uVar45 = *puVar40;
                puVar67[1] = puVar40[1];
                *puVar67 = uVar45;
                uVar45 = puVar40[2];
                puVar67[3] = puVar40[3];
                puVar67[2] = uVar45;
                uVar45 = puVar40[4];
                puVar67[5] = puVar40[5];
                puVar67[4] = uVar45;
                uVar45 = puVar40[6];
                puVar67[7] = puVar40[7];
                puVar67[6] = uVar45;
                uVar45 = puVar40[8];
                puVar67[9] = puVar40[9];
                puVar67[8] = uVar45;
                auVar78 = *(undefined1 (*) [16])(puVar40 + 10);
                puVar67[0xb] = auVar78._8_8_;
                puVar67[10] = auVar78._0_8_;
                iVar66 = iVar4;
                if (*(char *)(puVar40 + 0xe) != '\0') {
                  iVar66 = 0;
                }
                iVar2 = 0;
                if (*(int *)(puVar40 + 0xc) != 0) {
                  iVar2 = iVar66 + *(int *)(puVar40 + 0xc);
                }
                *(int *)(puVar67 + 0xc) = iVar2;
                iVar2 = 0;
                if (*(int *)((long)puVar40 + 100) != 0) {
                  iVar2 = *(int *)((long)puVar40 + 100) + iVar66;
                }
                *(int *)((long)puVar67 + 100) = iVar2;
                iVar2 = 0;
                if (*(int *)(puVar40 + 0xd) != 0) {
                  iVar2 = *(int *)(puVar40 + 0xd) + iVar66;
                }
                *(int *)(puVar67 + 0xd) = iVar2;
                iVar2 = 0;
                if (*(int *)((long)puVar40 + 0x6c) != 0) {
                  iVar2 = *(int *)((long)puVar40 + 0x6c) + iVar66;
                }
                iVar37 = iVar37 + -1;
                *(int *)((long)puVar67 + 0x6c) = iVar2;
                *(undefined1 *)(puVar67 + 0xe) = *(undefined1 *)(puVar40 + 0xe);
                puVar67 = puVar67 + 0x10;
                puVar40 = puVar40 + 0x10;
              } while (iVar37 != 0);
            }
            uVar63 = uVar63 + 1;
          } while (uVar63 != uVar61);
        }
        lVar44 = *param_2;
        if (lVar44 != 0) {
          lVar44 = lVar44 + (long)param_2;
        }
        uVar61 = *(uint *)(param_2 + 1);
        uVar64 = (uint)((ulong)((long)puVar67 - lVar44) >> 7);
        if (uVar61 != uVar64) {
          uVar62 = *(uint *)((long)param_2 + 0xc);
          if (uVar62 == 0) {
            *(uint *)((long)param_2 + 0xc) = uVar61;
            uVar62 = uVar61;
          }
          if ((int)uVar61 < (int)uVar64) {
            uVar59 = uVar62 & 0x7fffffff;
            if ((int)(uVar62 & 0x7fffffff) <= (int)uVar61) {
              uVar59 = uVar61;
            }
            if ((int)uVar59 < (int)uVar64) {
              uVar61 = uVar64 - 1 | (int)(uVar64 - 1) >> 0x10;
              uVar61 = uVar61 | (int)uVar61 >> 8;
              uVar61 = uVar61 | (int)uVar61 >> 4;
              uVar61 = uVar61 | (int)uVar61 >> 2;
              uVar61 = (uVar61 | (int)uVar61 >> 1) + 1;
              if ((int)uVar61 < (int)uVar64) {
                local_1b00 = (uint *)0x0;
                local_1b10 = (undefined **)0x0;
                puStack_1b08 = PTR_DAT_04372528;
                FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8
                             ,"Capacity reservation overflow",&local_1b10);
              }
              lVar44 = tpidr_el0;
              lVar46 = *(long *)(lVar44 + 0x38d490);
              if (lVar46 == 0) {
                lVar46 = FUN_0333d16c(0,1);
                *(long *)(lVar44 + 0x38d490) = lVar46;
              }
              plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
              pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))
                                          (plVar38,-(ulong)(uVar61 >> 0x1f) & 0xffffff8000000000 |
                                                   (ulong)uVar61 << 7,0);
              if (*param_2 == 0) {
                pvVar41 = (void *)0x0;
              }
              else {
                pvVar41 = (void *)(*param_2 + (long)param_2);
              }
              memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
              if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
                uVar62 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                if ((int)uVar62 <= (int)*(uint *)(param_2 + 1)) {
                  uVar62 = *(uint *)(param_2 + 1);
                }
                if (*param_2 == 0) {
                  lVar46 = 0;
                }
                else {
                  lVar46 = *param_2 + (long)param_2;
                }
                lVar47 = *(long *)(lVar44 + 0x38d490);
                if (lVar47 == 0) {
                  lVar47 = FUN_0333d16c(0,1);
                  *(long *)(lVar44 + 0x38d490) = lVar47;
                }
                plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
                (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar62 << 7);
              }
              if (pvVar39 == (void *)0x0) {
                lVar44 = 0;
              }
              else {
                lVar44 = (long)pvVar39 - (long)param_2;
              }
              *param_2 = lVar44;
              *(uint *)((long)param_2 + 0xc) = uVar61 | 0x80000000;
            }
          }
          *(uint *)(param_2 + 1) = uVar64;
        }
      }
      else {
        FUN_0331fefc(local_1b20,&local_1b10,0x200);
        FUN_0332448c(local_1b20,
                     "hkcdSimdTree compaction not implemented for cases where m_numLevelToUnfold is greater than 1."
                    );
        iVar37 = FUN_03320b30(0xdd2e330b,&local_1b10,
                              "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                              ,0x50c);
        if (iVar37 != 0) {
          CallSupervisor(0x26);
        }
        FUN_0331ff7c(local_1b20);
      }
    }
    lVar44 = local_18e0;
    uVar61 = local_18e0._4_4_;
    local_1910 = &PTR_LAB_04363a60;
    local_18e0 = (ulong)local_18e0._4_4_ << 0x20;
    if ((lVar44 < 0) || (local_18e8 == (int *)0x0)) {
LAB_0334e100:
      cVar3 = *(char *)((long)param_1 + 0x1c);
    }
    else {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,local_18e8,uVar61 << 2);
      cVar3 = *(char *)((long)param_1 + 0x1c);
    }
  }
  if (cVar3 != '\0') {
    uVar61 = *(uint *)(param_2 + 1);
    if ((int)uVar61 < (int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
      lVar44 = tpidr_el0;
      lVar46 = *(long *)(lVar44 + 0x38d490);
      if (lVar46 == 0) {
        lVar46 = FUN_0333d16c(0,1);
        *(long *)(lVar44 + 0x38d490) = lVar46;
      }
      plVar38 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
      pvVar39 = (void *)(**(code **)(*plVar38 + 0x10))(plVar38,(long)(int)uVar61 << 7,0);
      if (*param_2 == 0) {
        pvVar41 = (void *)0x0;
      }
      else {
        pvVar41 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(pvVar39,pvVar41,(long)(int)param_2[1] << 7);
      if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
        uVar64 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        if ((int)uVar64 <= (int)*(uint *)(param_2 + 1)) {
          uVar64 = *(uint *)(param_2 + 1);
        }
        if (*param_2 == 0) {
          lVar46 = 0;
        }
        else {
          lVar46 = *param_2 + (long)param_2;
        }
        lVar47 = *(long *)(lVar44 + 0x38d490);
        if (lVar47 == 0) {
          lVar47 = FUN_0333d16c(0,1);
          *(long *)(lVar44 + 0x38d490) = lVar47;
        }
        plVar38 = *(long **)(*(long *)(lVar47 + 8) + 0x58);
        (**(code **)(*plVar38 + 0x18))(plVar38,lVar46,(ulong)uVar64 << 7);
      }
      if (pvVar39 == (void *)0x0) {
        lVar44 = 0;
      }
      else {
        lVar44 = (long)pvVar39 - (long)param_2;
      }
      *param_2 = lVar44;
      *(uint *)((long)param_2 + 0xc) = uVar61 | 0x80000000;
      cVar3 = *(char *)((long)param_1 + 0x1e);
      goto joined_r0x0334f0ec;
    }
  }
  cVar3 = *(char *)((long)param_1 + 0x1e);
joined_r0x0334f0ec:
  if (cVar3 != '\0') {
    FUN_0335cd2c(param_2);
  }
  uVar64 = *(uint *)(param_1 + 5);
  uVar62 = *(uint *)((long)param_1 + 0x2c);
  uVar59 = uVar64 - 4;
  uVar61 = uVar62 & 0x3fffffff;
  if ((int)uVar61 < (int)uVar59) {
    puVar65 = (undefined8 *)param_1[4];
    if (0x3fffffff < (int)uVar59) {
      FUN_032bd0a8(uVar59);
      uVar62 = *(uint *)((long)param_1 + 0x2c);
      uVar61 = uVar62 & 0x3fffffff;
    }
    uVar60 = (uVar62 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar60) {
      uVar60 = 0x3fffffff;
    }
    uVar42 = uVar59;
    if ((int)uVar59 <= (int)uVar60) {
      uVar42 = uVar60;
    }
    local_1b10 = (undefined **)((ulong)uVar42 << 4);
    local_1910 = (undefined **)CONCAT44(local_1910._4_4_,uVar42);
    if (((int)uVar42 < (int)uVar61) || (0x3fffffff < (int)uVar42)) {
      local_1870 = 1;
      local_1860 = &local_1910;
      puStack_1868 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1870);
      uVar62 = *(uint *)((long)param_1 + 0x2c);
      uVar61 = uVar62 & 0x3fffffff;
    }
    puVar67 = (undefined8 *)(**(code **)(*(long *)puVar35 + 0x10))(puVar35,local_1b10,&local_1b10);
    if (0 < (int)uVar64) {
      puVar67[1] = puVar65[1];
      *puVar67 = *puVar65;
      if (uVar64 != 1) {
        puVar67[3] = puVar65[3];
        puVar67[2] = puVar65[2];
        if (uVar64 != 2) {
          puVar67[5] = puVar65[5];
          puVar67[4] = puVar65[4];
          if (uVar64 != 3) {
            lVar44 = (ulong)uVar64 - 3;
            puVar40 = puVar65 + 6;
            puVar53 = puVar67 + 6;
            do {
              puVar53[1] = puVar40[1];
              lVar44 = lVar44 + -1;
              *puVar53 = *puVar40;
              puVar40 = puVar40 + 2;
              puVar53 = puVar53 + 2;
            } while (lVar44 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar62) {
      (**(code **)(*(long *)puVar35 + 0x18))(puVar35,puVar65,(ulong)uVar61 << 4);
    }
    if (local_1b10 < (undefined **)0x3fffffff0) {
      uVar52 = (undefined4)((ulong)local_1b10 >> 4);
    }
    else {
      uVar52 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar52;
    param_1[4] = (long)puVar67;
    if (((int)uVar59 <= (int)param_1[5]) && ((int)param_1[5] <= (int)uVar59)) {
      return;
    }
  }
  *(uint *)(param_1 + 5) = uVar59;
  return;
}


