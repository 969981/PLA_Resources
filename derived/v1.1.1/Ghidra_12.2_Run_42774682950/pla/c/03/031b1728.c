/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b1728; name: FUN_031b1728
 */


void FUN_031b1728(long param_1,long param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  short sVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  void *__dest;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  float *pfVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  undefined1 *puVar33;
  int iVar34;
  undefined8 uVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar47;
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong in_stack_ffffffffffffdd18;
  long local_2290;
  undefined8 *local_2288;
  undefined8 uStack_2280;
  undefined8 local_2268;
  undefined8 uStack_2260;
  undefined8 local_2250;
  undefined4 local_2248;
  undefined8 local_2240;
  undefined8 uStack_2238;
  undefined8 local_21f8;
  undefined4 local_21f0;
  undefined8 local_2190;
  undefined8 uStack_2188;
  undefined8 local_2180;
  undefined8 uStack_2178;
  undefined4 local_2170;
  undefined4 local_216c;
  undefined8 local_2168;
  undefined8 uStack_2160;
  undefined8 local_2158;
  undefined8 uStack_2150;
  undefined4 local_2140;
  undefined8 local_2138;
  undefined8 uStack_2130;
  undefined8 local_2128;
  undefined4 local_2110;
  undefined8 local_2108;
  undefined8 uStack_2100;
  undefined8 local_20f8;
  undefined8 local_20d0;
  undefined8 local_20c8;
  undefined8 local_20c0;
  long *local_20b8;
  undefined8 local_20b0;
  undefined8 local_20a8;
  undefined8 local_201c;
  uint local_2014;
  long local_2010;
  undefined4 local_2008;
  undefined8 local_2004;
  long *local_1ff0;
  undefined8 local_1fe8;
  long local_1fe0;
  undefined8 local_1fd8;
  long local_1fd0;
  undefined8 local_1fc8;
  undefined1 local_1fc0 [4];
  undefined8 local_1fbc;
  undefined4 local_1fb4;
  undefined8 local_1fb0;
  undefined8 uStack_1fa8;
  int local_1fa0;
  undefined8 *local_1f98;
  undefined8 *local_1f90;
  int local_1f78;
  int local_1f74;
  int iStack_1d30;
  undefined4 local_1d2c;
  long local_1c90;
  undefined4 local_1c88;
  uint local_1c84;
  undefined1 auStack_1ae0 [24];
  long local_1ac8;
  undefined8 local_1ac0;
  long local_1ab8;
  undefined8 local_1ab0;
  undefined8 local_1aa8;
  undefined8 local_1aa0;
  undefined8 local_1a98;
  long local_1a90;
  undefined8 local_1a88;
  long local_1a80;
  undefined8 local_1a78;
  undefined8 local_1a70;
  undefined8 uStack_1a68;
  long local_1a60;
  undefined4 local_1a58;
  undefined8 local_1a50;
  undefined8 local_1a48;
  long local_1a40;
  int local_1a38;
  float local_1a34;
  float local_1a30;
  undefined4 local_1a2c;
  long local_1a28;
  undefined1 auStack_1a20 [3264];
  undefined8 local_d60;
  undefined8 uStack_d58;
  long local_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  long local_cf8;
  undefined4 local_cf0;
  undefined8 local_ce8;
  int local_ce0;
  undefined2 local_cdc;
  undefined1 local_cda;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined4 local_cc0;
  
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x38d490) == 0) {
    auVar45 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = auVar45._0_8_;
    lVar32 = *(long *)(auVar45._0_8_ + 0x10);
    lVar27 = auVar45._8_8_;
  }
  else {
    lVar32 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
    lVar27 = param_2;
  }
  if (lVar32 != 0) {
    puVar28 = *(undefined8 **)(lVar32 + 8);
    uVar25 = (long)puVar28 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar25 <= *(ulong *)(lVar32 + 0x10)) &&
       (*(ulong *)(lVar32 + 8) = uVar25, puVar28 != (undefined8 *)0x0)) {
      *puVar28 = "LtFindMeshPath";
      puVar28[2] = "Stinit";
      auVar45 = nn::os::GetSystemTick();
      lVar27 = auVar45._8_8_;
      puVar28[1] = auVar45._0_8_;
    }
  }
  local_d48 = lVar32;
  uVar25 = FUN_031b3928(param_1,lVar27,*(undefined4 *)(param_2 + 0x40),
                        *(undefined4 *)(param_2 + 0x38));
  if ((uVar25 & 1) == 0) {
    *(undefined8 *)(param_3 + 0x40) = 0xffffffff00000000;
    *(undefined1 *)(param_3 + 0x4c) = 5;
    goto joined_r0x031b1cfc;
  }
  uStack_1a68 = *(undefined8 *)(param_2 + 0x78);
  local_1a70 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  local_1a38 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                           (ulong)(*(uint *)(param_2 + 0x40) >> 0x16) * 0xf0) + 0x20
                                 ) + 0x180);
  local_1a48 = *(undefined8 *)(param_2 + 0x88);
  local_1a2c = *(undefined4 *)(param_2 + 0x60);
  local_1a30 = *(float *)(param_2 + 0xb8);
  uVar35 = *(undefined8 *)(param_2 + 0xa0);
  local_1a60 = *(long *)(param_2 + 0x90);
  local_1a34 = *(float *)(param_2 + 0x5c) * 0.5;
  local_1a58 = *(undefined4 *)(param_2 + 0x98);
  local_1a50 = 0;
  local_1a28 = 0;
  local_1a40 = param_1;
  local_d60 = local_1a70;
  uStack_d58 = uStack_1a68;
  FUN_0316017c();
  pfVar26 = (float *)(local_1a40 + (long)local_1a38 * 4 + 0x60);
  if (*pfVar26 + local_1a30 < local_1a34) {
    if (-1 < local_1a60) {
      uVar35 = *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(local_1a40 + 0x58) + 0x18) +
                          (long)(int)local_1a60 * 0x18) + (local_1a60 >> 0x20) * 0x18);
    }
    local_1a50 = uVar35;
  }
  if ((((local_1a34 <= local_1a30 + *pfVar26) || (-1 < *(int *)(param_2 + 0x94))) ||
      (*(long *)(param_2 + 0xa0) != 0)) || (*(char *)(param_2 + 0xa8) != '\0')) {
    cVar8 = *(char *)(param_2 + 0xb1);
  }
  else {
    FUN_0331fefc(&local_1ff0,&local_d40,0x200);
    FUN_0332448c(&local_1ff0,
                 "A pathfind was requested without a clearance filter or a clearance cache. Failing to use a clearance cache will significantly reduce runtime performance. To force this behavior, set hkaiNavMeshPathSearchParameters::m_forceUncachedUnfilteredClearance to true."
                );
    iVar20 = FUN_03320b30(0x2453518d,&local_d40,
                          "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Utilities/hkaiPathfindingUtil.cpp"
                          ,0x116);
    if (iVar20 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(&local_1ff0);
    cVar8 = *(char *)(param_2 + 0xb1);
  }
  if (cVar8 != '\0') {
    local_1a28 = param_3 + 0x50;
  }
  if (*(char *)(param_2 + 0xab) == '\0') {
    fVar37 = 3.40282e+38;
    bVar16 = false;
    iVar20 = -1;
LAB_031b1d10:
    if (*(long *)(lVar12 + 0x38d490) == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar32;
      lVar32 = *(long *)(lVar32 + 0x10);
    }
    else {
      lVar32 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
    }
    if (lVar32 != 0) {
      puVar28 = *(undefined8 **)(lVar32 + 8);
      uVar25 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
      if ((uVar25 <= *(ulong *)(lVar32 + 0x10)) &&
         (*(ulong *)(lVar32 + 8) = uVar25, puVar28 != (undefined8 *)0x0)) {
        *puVar28 = "StinitSearch";
        uVar35 = nn::os::GetSystemTick();
        puVar28[1] = uVar35;
      }
    }
    local_1a88 = -0x8000000000000000;
    local_1a90 = 0;
    local_1a78 = -0x8000000000000000;
    local_1a80 = 0;
    if (*(char *)(param_2 + 0xad) == '\0') {
      local_1a98 = 0;
      local_1aa0 = 0;
      local_1aa8 = 0;
    }
    else {
      lVar32 = *(long *)(param_2 + 0xd0);
      iVar19 = (int)lVar32;
      if (iVar19 < 1) {
        iVar19 = 0x8000;
      }
      iVar23 = (int)((ulong)lVar32 >> 0x20);
      if (iVar23 == 0 || lVar32 < 0) {
        iVar23 = 0x24200;
      }
      local_d40 = CONCAT44(iVar23,iVar19);
      FUN_031b1548(&local_1aa8,param_2 + 0xf0,&local_d40);
    }
    local_1ac0 = -0x8000000000000000;
    local_1ac8 = 0;
    local_1ab0 = -0x8000000000000000;
    local_1ab8 = 0;
    lVar32 = *(long *)(param_2 + 200);
    iVar19 = (int)lVar32;
    if (iVar19 < 1) {
      iVar19 = 0x20000;
    }
    iVar23 = (int)((ulong)lVar32 >> 0x20);
    if (iVar23 == 0 || lVar32 < 0) {
      iVar23 = 0x90200;
    }
    local_d40 = CONCAT44(iVar23,iVar19);
    FUN_031b1548(auStack_1ae0,param_2 + 0xe0,&local_d40);
    FUN_031b3bc4(&local_1ff0,auStack_1ae0,&local_1aa8);
    local_2248 = 4;
    local_21f0 = 4;
    local_2140 = 0xffffffff;
    local_2110 = 0xffffffff;
    local_2250 = 0xffffffffffffffff;
    local_21f8 = 0xffffffffffffffff;
    local_2128 = 0;
    local_20f8 = 0;
    local_20a8 = 0;
    local_20b0 = 0;
    local_20c8 = 0;
    local_20d0 = 0;
    local_2268 = 0;
    uStack_2260 = 0;
    local_2240 = 0;
    uStack_2238 = 0;
    local_2138 = 0;
    uStack_2130 = 0;
    local_2108 = 0;
    uStack_2100 = 0;
    local_201c = 0xffffffffffffffff;
    local_2010 = 0;
    local_2008 = 0;
    local_2004 = 0x80000000;
    local_2288 = &local_1a70;
    uStack_2188 = uStack_d58;
    local_2190 = local_d60;
    local_20c0 = *(undefined8 *)(param_2 + 0x80);
    uStack_2280 = *(undefined8 *)(param_2 + 0x5c);
    puVar28 = (undefined8 *)(param_2 + 0x20);
    uStack_2178 = *(undefined8 *)(param_2 + 0x28);
    local_2180 = *puVar28;
    local_2170 = *(undefined4 *)(param_2 + 0x40);
    local_216c = *(undefined4 *)(param_2 + 0x38);
    local_2168 = *(undefined8 *)(param_2 + 0x30);
    uStack_2160 = *(undefined8 *)(param_2 + 0x48);
    fVar40 = *(float *)(param_2 + 0xc0);
    fVar44 = *(float *)(param_2 + 0xc4);
    local_2158 = CONCAT44(fVar40,fVar40);
    local_2014 = (uint)(0.0 <= fVar40);
    uStack_2150 = CONCAT44(fVar44,fVar44);
    if (0.0 <= fVar44) {
      local_2014 = local_2014 | 2;
    }
    if (*(char *)(param_2 + 0xae) != '\0') {
      local_2014 = local_2014 | 0x10;
    }
    local_2014 = local_2014 | (uint)(*(char *)(param_2 + 0xaf) != '\0') << 5;
    local_1ff0 = &local_2290;
    local_20b8 = &local_1fe0;
    uStack_d28 = CONCAT44(uStack_d28._4_4_,local_2170);
    local_d18 = CONCAT44(local_d18._4_4_,uVar7);
    fVar40 = *(float *)(param_2 + 0xbc);
    if (fVar37 <= *(float *)(param_2 + 0xbc)) {
      fVar40 = fVar37;
    }
    uStack_1fa8 = CONCAT44(*(undefined4 *)(param_2 + 0xb4),fVar40);
    local_2290 = param_1;
    local_d40 = local_2180;
    uStack_d38 = uStack_2178;
    local_d30 = local_2168;
    local_d20 = uStack_2160;
    FUN_031b3ec4(&local_1ff0,&local_2290,(float *)(param_2 + 0x5c),&local_d40,
                 *(char *)(param_2 + 0xad) != '\0');
    iVar19 = *(int *)(param_2 + 0x58);
    lVar32 = *(long *)(lVar12 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar32;
      lVar27 = *(long *)(lVar32 + 0x10);
    }
    else {
      lVar27 = *(long *)(lVar32 + 0x10);
    }
    if (lVar27 != 0) {
      puVar6 = *(undefined8 **)(lVar27 + 8);
      uVar25 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar25 <= *(ulong *)(lVar27 + 0x10)) &&
         (*(ulong *)(lVar27 + 8) = uVar25, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = "StAStar";
        uVar35 = nn::os::GetSystemTick();
        puVar6[1] = uVar35;
        lVar32 = *(long *)(lVar12 + 0x38d490);
      }
    }
    lVar27 = (long)DAT_0444b53c;
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar32;
    }
    if (*(long *)(lVar32 + lVar27 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    iVar23 = 0;
    do {
      iVar34 = iVar23;
      if (iVar19 <= iVar34) {
        uVar18 = (int)local_1fb0 != -1;
        uVar21 = 2;
        if ((bool)uVar18) {
          uVar21 = 3;
        }
        goto LAB_031b2340;
      }
      uVar21 = FUN_031b42cc(&local_1ff0);
      if (uVar21 == 3) {
        lVar32 = (long)DAT_0444b53c;
        uVar18 = 2;
        if (local_1f78 < local_1f74) {
          uVar18 = 3;
        }
        lVar27 = *(long *)(lVar12 + 0x38d490);
        if (lVar27 == 0) {
          lVar27 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar27;
        }
        if (*(long *)(lVar27 + lVar32 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        uVar21 = 3;
        iVar34 = iVar34 + 1;
        goto LAB_031b2340;
      }
      lVar27 = (long)DAT_0444b53c;
      lVar32 = *(long *)(lVar12 + 0x38d490);
      if (lVar32 == 0) {
        lVar32 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar32;
      }
      if (*(long *)(lVar32 + lVar27 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      iVar23 = iVar34 + 1;
    } while (uVar21 == 0);
    uVar18 = 0;
    iVar34 = iVar34 + 1;
LAB_031b2340:
    lVar32 = *(long *)(lVar12 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar32;
    }
    FUN_03166d64(auStack_1a20,*(undefined8 *)(lVar32 + 0x10));
    FUN_0316017c(&local_d40);
    memcpy(auStack_1a20,&local_d40,0xcc0);
    uVar35 = local_1fc8;
    if ((!bVar16) || (uVar21 == 1)) {
      *(char *)(param_3 + 0x4c) = (char)uVar21;
      *(undefined1 *)(param_3 + 0x4d) = uVar18;
      *(int *)(param_3 + 0x40) = iVar34;
      *(undefined4 *)(param_3 + 0x44) = 0xffffffff;
      if (((uVar21 | 2) == 3) ||
         (((uVar21 == 2 && (*(char *)(param_2 + 0xb0) != '\0')) && ((int)local_1fb0 != -1)))) {
        piVar30 = &iStack_1d30;
        if (uVar21 != 1) {
          piVar30 = (int *)&local_1fb0;
        }
        iVar20 = *piVar30;
        *(undefined4 *)(param_3 + 0x44) = local_1d2c;
        uVar25 = (ulong)((uint)(iVar20 * -0x61c8864f) >> 0x18);
        for (sVar10 = *(short *)(local_1fd0 + uVar25 * 2); -1 < sVar10;
            sVar10 = *(short *)(local_1fd8 + (long)sVar10 * 2)) {
          if (*(int *)(local_1fe0 + (long)sVar10 * 0x10 + 8) == iVar20) {
            local_1f90 = (undefined8 *)(local_1fe0 + (long)sVar10 * 0x10);
            goto LAB_031b2468;
          }
        }
        local_1f90 = (undefined8 *)(local_1fe0 + (long)(int)local_1fc8._4_4_ * 0x10);
        local_1fc8 = CONCAT44(local_1fc8._4_4_ + 1,(undefined4)local_1fc8);
        *local_1f90 = 0x7f7fffee7f7fffee;
        *(int *)(local_1f90 + 1) = iVar20;
        *(undefined4 *)((long)local_1f90 + 0xc) = 0xffff;
        sVar10 = (short)((ulong)uVar35 >> 0x20);
        *(undefined2 *)(local_1fd8 + (long)sVar10 * 2) = *(undefined2 *)(local_1fd0 + uVar25 * 2);
        *(short *)(local_1fd0 + uVar25 * 2) = sVar10;
LAB_031b2468:
        local_1f98 = local_1f90;
        local_1fa0 = ((int)local_1f90 - (int)local_1fe0) * 0x1000 >> 0x10;
        *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)local_1f90;
        if (*(long *)(lVar12 + 0x38d490) == 0) {
          lVar32 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar32;
          lVar32 = *(long *)(lVar32 + 0x10);
        }
        else {
          lVar32 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
        }
        if (lVar32 != 0) {
          puVar6 = *(undefined8 **)(lVar32 + 8);
          uVar29 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
          if ((uVar29 <= *(ulong *)(lVar32 + 0x10)) &&
             (*(ulong *)(lVar32 + 8) = uVar29, puVar6 != (undefined8 *)0x0)) {
            *puVar6 = "Stoutput";
            uVar35 = nn::os::GetSystemTick();
            puVar6[1] = uVar35;
          }
        }
        puVar15 = PTR_PTR_0434a080;
        for (sVar10 = *(short *)(local_1fd0 + uVar25 * 2); -1 < sVar10;
            sVar10 = *(short *)(local_1fd8 + (long)sVar10 * 2)) {
          if (*(int *)(local_1fe0 + (long)sVar10 * 0x10 + 8) == iVar20) {
            puVar33 = (undefined1 *)(local_1fe0 + (long)sVar10 * 0x10);
            goto LAB_031b24e0;
          }
        }
        puVar33 = local_1fc0;
LAB_031b24e0:
        plVar2 = (long *)(param_3 + 0x18);
        if (((byte)puVar33[0xe] >> 2 & 1) == 0) {
          lVar32 = local_1fe0 + (long)*(short *)(puVar33 + 0xc) * 0x10;
          if ((*(byte *)(lVar32 + 0xe) >> 2 & 1) == 0) {
            lVar32 = local_1fe0 + (long)*(short *)(lVar32 + 0xc) * 0x10;
            if ((*(byte *)(lVar32 + 0xe) >> 2 & 1) == 0) {
              lVar32 = local_1fe0 + (long)*(short *)(lVar32 + 0xc) * 0x10;
              if ((*(byte *)(lVar32 + 0xe) >> 2 & 1) == 0) {
                lVar32 = local_1fe0 + (long)*(short *)(lVar32 + 0xc) * 0x10;
                if ((*(byte *)(lVar32 + 0xe) >> 2 & 1) == 0) {
                  lVar32 = (long)*(short *)(lVar32 + 0xc);
                  if ((*(byte *)(local_1fe0 + lVar32 * 0x10 + 0xe) >> 2 & 1) == 0) {
                    uVar36 = 4;
                    do {
                      lVar32 = (long)*(short *)(local_1fe0 + lVar32 * 0x10 + 0xc);
                      uVar36 = uVar36 + 1;
                    } while ((*(byte *)(local_1fe0 + lVar32 * 0x10 + 0xe) >> 2 & 1) == 0);
                  }
                  else {
                    uVar36 = 4;
                  }
                }
                else {
                  uVar36 = 3;
                }
              }
              else {
                uVar36 = 2;
              }
            }
            else {
              uVar36 = 1;
            }
          }
          else {
            uVar36 = 0;
          }
          puVar22 = (uint *)(param_3 + 0x24);
          uVar24 = *puVar22;
          if ((uVar24 & 0x3fffffff) < uVar36) {
            uVar35 = *(undefined8 *)(param_3 + 0x18);
            uVar7 = *(undefined4 *)(param_3 + 0x20);
            if (uVar36 >> 0x1e != 0) {
              FUN_032bd0a8(uVar36);
              uVar24 = *puVar22;
            }
            uVar24 = (uVar24 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar24) {
              uVar24 = 0x3fffffff;
            }
            uVar3 = uVar36;
            if ((int)uVar36 <= (int)uVar24) {
              uVar3 = uVar24;
            }
            lVar32 = FUN_032bd1d4(puVar15,uVar3,4,uVar35,uVar7,puVar22);
            *plVar2 = lVar32;
          }
          if (*(uint *)(param_3 + 0x20) != uVar36) {
            *(uint *)(param_3 + 0x20) = uVar36;
          }
          if (((byte)puVar33[0xe] >> 2 & 1) == 0) {
            lVar32 = (long)(int)uVar36;
            lVar27 = lVar32 + -1;
            uVar25 = (ulong)uVar36;
            if ((long)*(short *)(puVar33 + 0xc) == -1) {
              lVar31 = 0;
            }
            else {
              lVar31 = local_1fe0 + (long)*(short *)(puVar33 + 0xc) * 0x10;
            }
            if ((lVar27 < (long)uVar25) && ((*(byte *)(lVar31 + 0xe) >> 2 & 1) == 0)) {
              *(undefined4 *)(*plVar2 + lVar27 * 4) = *(undefined4 *)(lVar31 + 8);
            }
            if ((*(byte *)(lVar31 + 0xe) >> 2 & 1) == 0) {
              if ((long)*(short *)(lVar31 + 0xc) == -1) {
                lVar31 = 0;
              }
              else {
                lVar31 = local_1fe0 + (long)*(short *)(lVar31 + 0xc) * 0x10;
              }
              if ((lVar27 <= (long)uVar25) && ((*(byte *)(lVar31 + 0xe) >> 2 & 1) == 0)) {
                *(undefined4 *)(*plVar2 + (lVar32 + -2) * 4) = *(undefined4 *)(lVar31 + 8);
              }
              if ((*(byte *)(lVar31 + 0xe) >> 2 & 1) == 0) {
                if ((long)*(short *)(lVar31 + 0xc) == -1) {
                  lVar27 = 0;
                }
                else {
                  lVar27 = local_1fe0 + (long)*(short *)(lVar31 + 0xc) * 0x10;
                }
                if ((lVar32 + -3 < (long)uVar25) && ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0)) {
                  *(undefined4 *)(*plVar2 + (lVar32 + -3) * 4) = *(undefined4 *)(lVar27 + 8);
                }
                if ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0) {
                  if ((long)*(short *)(lVar27 + 0xc) == -1) {
                    lVar27 = 0;
                  }
                  else {
                    lVar27 = local_1fe0 + (long)*(short *)(lVar27 + 0xc) * 0x10;
                  }
                  if ((lVar32 + -4 < (long)uVar25) && ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0)) {
                    *(undefined4 *)(*plVar2 + (lVar32 + -4) * 4) = *(undefined4 *)(lVar27 + 8);
                  }
                  if ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0) {
                    if ((long)*(short *)(lVar27 + 0xc) == -1) {
                      lVar27 = 0;
                    }
                    else {
                      lVar27 = local_1fe0 + (long)*(short *)(lVar27 + 0xc) * 0x10;
                    }
                    if ((lVar32 + -5 < (long)uVar25) && ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0)) {
                      *(undefined4 *)(*plVar2 + (lVar32 + -5) * 4) = *(undefined4 *)(lVar27 + 8);
                    }
                    if ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0) {
                      lVar32 = lVar32 + -6;
                      do {
                        psVar1 = (short *)(lVar27 + 0xc);
                        lVar27 = 0;
                        if ((long)*psVar1 != -1) {
                          lVar27 = local_1fe0 + (long)*psVar1 * 0x10;
                        }
                        if ((lVar32 < (long)uVar25) && ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0)) {
                          *(undefined4 *)(*plVar2 + lVar32 * 4) = *(undefined4 *)(lVar27 + 8);
                        }
                        lVar32 = lVar32 + -1;
                      } while ((*(byte *)(lVar27 + 0xe) >> 2 & 1) == 0);
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar21 == 1) {
          puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_3 + 0x44) * 0x10)
          ;
          uStack_d38 = puVar6[1];
          local_d40 = *puVar6;
        }
        else if (*(int *)(param_3 + 0x20) == 0) {
          uStack_d38 = *(undefined8 *)(param_2 + 0x28);
          local_d40 = *puVar28;
        }
        else {
          uVar21 = *(uint *)(*plVar2 + (long)(*(int *)(param_3 + 0x20) + -1) * 4);
          uVar25 = (ulong)uVar21 & 0x3fffff;
          lVar32 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar21 >> 0x16) * 0xf0);
          lVar27 = *(long *)(lVar32 + 0x20);
          if ((int)uVar25 < *(int *)(lVar27 + 0x30)) {
            if (*(int *)(lVar27 + 0x78) != 0) {
              uVar21 = *(uint *)(*(long *)(lVar27 + 0x70) + uVar25 * 4);
              if (uVar21 == 0xffffffff) {
                piVar30 = (int *)(*(long *)(lVar27 + 0x28) + uVar25 * 0x14);
                goto LAB_031b297c;
              }
              uVar25 = (ulong)uVar21;
            }
            piVar30 = (int *)(*(long *)(lVar27 + 0xc0) + (long)(int)uVar25 * 0x14);
          }
          else {
            piVar30 = (int *)(*(long *)(lVar27 + 0xe0) +
                             (long)((int)uVar25 - *(int *)(lVar27 + 0x30)) * 0x14);
          }
LAB_031b297c:
          iVar23 = *(int *)(lVar27 + 0x40);
          iVar20 = *piVar30;
          iVar19 = piVar30[1];
          plVar5 = (long *)(lVar27 + 0x38);
          if (iVar23 <= iVar20) {
            plVar5 = (long *)(lVar27 + 0xf0);
          }
          iVar34 = 0;
          if (iVar23 <= iVar20) {
            iVar34 = iVar23;
          }
          puVar6 = (undefined8 *)(*plVar5 + (long)(iVar20 - iVar34) * 0x10);
          uVar35 = *puVar6;
          plVar5 = (long *)(lVar27 + 0x38);
          if (iVar23 <= iVar19) {
            plVar5 = (long *)(lVar27 + 0xf0);
          }
          iVar20 = 0;
          if (iVar23 <= iVar19) {
            iVar20 = iVar23;
          }
          puVar11 = (undefined8 *)(*plVar5 + (long)(iVar19 - iVar20) * 0x10);
          fVar43 = (float)puVar11[1];
          uVar14 = *puVar11;
          fVar47 = (float)uVar14;
          fVar41 = (float)((ulong)uVar14 >> 0x20);
          fVar37 = (float)uVar35;
          fVar44 = (float)((ulong)uVar35 >> 0x20);
          fVar42 = (float)puVar6[1];
          fVar48 = (float)*(undefined8 *)(lVar32 + 0x80);
          fVar49 = (float)((ulong)*(undefined8 *)(lVar32 + 0x80) >> 0x20);
          fVar50 = (float)*(undefined8 *)(lVar32 + 0x88);
          fVar51 = (float)((ulong)*(undefined8 *)(lVar32 + 0x88) >> 0x20);
          fVar52 = (float)*(undefined8 *)(lVar32 + 0x90);
          fVar40 = fVar52 + fVar48 * fVar42 +
                            *(float *)(lVar32 + 0x60) * fVar37 + *(float *)(lVar32 + 0x70) * fVar44;
          fVar53 = (float)((ulong)*(undefined8 *)(lVar32 + 0x90) >> 0x20);
          fVar38 = fVar53 + fVar49 * fVar42 +
                            *(float *)(lVar32 + 100) * fVar37 + *(float *)(lVar32 + 0x74) * fVar44;
          fVar54 = (float)*(undefined8 *)(lVar32 + 0x98);
          fVar39 = fVar54 + fVar50 * fVar42 +
                            *(float *)(lVar32 + 0x68) * fVar37 + *(float *)(lVar32 + 0x78) * fVar44;
          fVar55 = (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20);
          fVar37 = fVar55 + fVar51 * fVar42 +
                            *(float *)(lVar32 + 0x6c) * fVar37 + *(float *)(lVar32 + 0x7c) * fVar44;
          local_d40 = CONCAT44(fVar38 + ((fVar53 + fVar49 * fVar43 +
                                                   *(float *)(lVar32 + 100) * fVar47 +
                                                   *(float *)(lVar32 + 0x74) * fVar41) - fVar38) *
                                        0.5,
                               fVar40 + ((fVar52 + fVar48 * fVar43 +
                                                   *(float *)(lVar32 + 0x60) * fVar47 +
                                                   *(float *)(lVar32 + 0x70) * fVar41) - fVar40) *
                                        0.5);
          uStack_d38 = CONCAT44(fVar37 + ((fVar55 + fVar51 * fVar43 +
                                                    *(float *)(lVar32 + 0x6c) * fVar47 +
                                                    *(float *)(lVar32 + 0x7c) * fVar41) - fVar37) *
                                         0.5,
                                fVar39 + ((fVar54 + fVar50 * fVar43 +
                                                    *(float *)(lVar32 + 0x68) * fVar47 +
                                                    *(float *)(lVar32 + 0x78) * fVar41) - fVar39) *
                                         0.5);
        }
        if ((*(byte *)(param_2 + 0xaa) & 1) != 0) {
          lVar27 = (long)DAT_0444b53c;
          lVar32 = *(long *)(lVar12 + 0x38d490);
          if (lVar32 == 0) {
            lVar32 = FUN_0333d16c(0,1);
            *(long *)(lVar12 + 0x38d490) = lVar32;
          }
          if (*(long *)(lVar32 + lVar27 * 8 + 0x18) == 0) {
            if (lVar32 != 0) goto LAB_031b2b30;
LAB_031b2c90:
            lVar32 = FUN_0333d16c(0,1);
            *(long *)(lVar12 + 0x38d490) = lVar32;
            lVar32 = *(long *)(lVar32 + 0x10);
          }
          else {
            FUN_0332a954();
            lVar32 = *(long *)(lVar12 + 0x38d490);
            if (lVar32 == 0) goto LAB_031b2c90;
LAB_031b2b30:
            lVar32 = *(long *)(lVar32 + 0x10);
          }
          if (lVar32 != 0) {
            puVar6 = *(undefined8 **)(lVar32 + 8);
            uVar25 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
            if ((uVar25 <= *(ulong *)(lVar32 + 0x10)) &&
               (*(ulong *)(lVar32 + 8) = uVar25, puVar6 != (undefined8 *)0x0)) {
              *puVar6 = "Ttsmooth";
              uVar35 = nn::os::GetSystemTick();
              puVar6[1] = uVar35;
            }
          }
          bVar9 = *(byte *)(param_2 + 0xaa);
          fVar40 = *(float *)(param_2 + 0xb8);
          fVar37 = *(float *)(param_2 + 0x5c) * 0.5;
          if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < *(int *)(param_3 + 0x20)) {
            uVar35 = FUN_0318a008(PTR_PTR_0434a080,*(int *)(param_3 + 0x20),
                                  *(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30));
            *(undefined8 *)(param_3 + 0x28) = uVar35;
          }
          FUN_031b82e8(fVar37,param_1,&local_1a70,plVar2,*(undefined4 *)(param_2 + 0x40),puVar28,
                       &local_d40,bVar9 & 2,bVar9 & 4,&local_d60,fVar37 <= fVar40,param_3 + 0x28,0,0
                       ,0);
          if (lVar32 != 0) {
            puVar28 = *(undefined8 **)(lVar32 + 8);
            uVar25 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
            if ((uVar25 <= *(ulong *)(lVar32 + 0x10)) &&
               (*(ulong *)(lVar32 + 8) = uVar25, puVar28 != (undefined8 *)0x0)) {
              *puVar28 = &DAT_0390f40e;
              uVar35 = nn::os::GetSystemTick();
              puVar28[1] = uVar35;
            }
          }
        }
      }
      lVar27 = (long)DAT_0444b53c;
      lVar32 = *(long *)(lVar12 + 0x38d490);
      if (lVar32 == 0) {
        lVar32 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar32;
      }
      lVar32 = *(long *)(lVar32 + lVar27 * 8 + 0x18);
    }
    else {
      *(undefined1 *)(param_3 + 0x4c) = 1;
      *(undefined4 *)(param_3 + 0x40) = 0;
      *(int *)(param_3 + 0x44) = iVar20;
      bVar9 = *(byte *)(param_2 + 0xaa);
      if ((bVar9 & 1) != 0) {
        fVar37 = *(float *)(param_2 + 0x5c);
        iVar19 = *(int *)(param_3 + 0x20) + 2;
        if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar19) {
          uVar35 = FUN_0318a008(PTR_PTR_0434a080,iVar19,*(undefined8 *)(param_3 + 0x28),
                                *(undefined4 *)(param_3 + 0x30));
          *(undefined8 *)(param_3 + 0x28) = uVar35;
        }
        FUN_031b9930(fVar37 * 0.5,param_1,&local_1a70,param_3 + 0x18,*(undefined4 *)(param_2 + 0x40)
                     ,puVar28,*(long *)(param_2 + 0x30) + (long)iVar20 * 0x10,bVar9 & 2,bVar9 & 4,
                     &local_d60,param_3 + 0x28,0,in_stack_ffffffffffffdd18 & 0xffffffff00000000);
      }
      lVar27 = (long)DAT_0444b53c;
      lVar32 = *(long *)(lVar12 + 0x38d490);
      if (lVar32 == 0) {
        lVar32 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar32;
      }
      lVar32 = *(long *)(lVar32 + lVar27 * 8 + 0x18);
    }
    if (lVar32 != 0) {
      FUN_0332a954();
    }
    puVar15 = PTR_PTR_0434a080;
    local_2008 = 0;
    if ((-1 < (int)local_2004) && (local_2010 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_2010,(int)local_2004 << 2);
    }
    local_1c88 = 0;
    if ((-1 < (int)local_1c84) && (local_1c90 != 0)) {
      (**(code **)(*(long *)puVar15 + 0x18))
                (puVar15,local_1c90,((ulong)local_1c84 & 0x3fffffff) << 3);
    }
    lVar32 = local_1ab0;
    puVar15 = PTR_PTR_0434a090;
    uVar21 = local_1ab0._4_4_;
    local_1ab0 = (ulong)local_1ab0._4_4_ << 0x20;
    if ((-1 < lVar32) && (local_1ab8 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                (PTR_PTR_0434a090,local_1ab8,uVar21 & 0x3fffffff);
    }
    lVar32 = local_1ac0;
    local_1ab0 = CONCAT44(0x80000000,(undefined4)local_1ab0);
    uVar21 = local_1ac0._4_4_;
    local_1ab8 = 0;
    local_1ac0 = (ulong)local_1ac0._4_4_ << 0x20;
    if ((-1 < lVar32) && (local_1ac8 != 0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_1ac8,uVar21 & 0x3fffffff);
    }
    lVar32 = local_1a78;
    uVar21 = local_1a78._4_4_;
    local_1a78 = (ulong)local_1a78._4_4_ << 0x20;
    if ((-1 < lVar32) && (local_1a80 != 0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_1a80,uVar21 & 0x3fffffff);
    }
    lVar32 = local_1a88;
    local_1a78 = CONCAT44(0x80000000,(undefined4)local_1a78);
    uVar21 = local_1a88._4_4_;
    local_1a80 = 0;
    local_1a88 = (ulong)local_1a88._4_4_ << 0x20;
    if ((-1 < lVar32) && (local_1a90 != 0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_1a90,uVar21 & 0x3fffffff);
    }
    lVar32 = local_d48;
  }
  else {
    if (*(long *)(lVar12 + 0x38d490) == 0) {
      lVar27 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar27;
      lVar27 = *(long *)(lVar27 + 0x10);
    }
    else {
      lVar27 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
    }
    if (lVar27 != 0) {
      puVar28 = *(undefined8 **)(lVar27 + 8);
      uVar25 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
      if ((uVar25 <= *(ulong *)(lVar27 + 0x10)) &&
         (*(ulong *)(lVar27 + 8) = uVar25, puVar28 != (undefined8 *)0x0)) {
        *puVar28 = "StcheckLineOfSight";
        uVar35 = nn::os::GetSystemTick();
        puVar28[1] = uVar35;
      }
    }
    uStack_d38 = *(undefined8 *)(param_2 + 0x28);
    local_d40 = *(undefined8 *)(param_2 + 0x20);
    puVar28 = *(undefined8 **)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x38) < 2) {
      iVar20 = 0;
    }
    else {
      fVar37 = (float)local_d40 - (float)*puVar28;
      fVar40 = (float)((ulong)local_d40 >> 0x20);
      fVar38 = fVar40 - (float)((ulong)*puVar28 >> 0x20);
      fVar42 = (float)uStack_d38 - (float)puVar28[1];
      fVar44 = (float)((ulong)uStack_d38 >> 0x20);
      fVar39 = fVar44 - (float)((ulong)puVar28[1] >> 0x20);
      fVar37 = fVar37 * fVar37;
      fVar38 = fVar38 * fVar38;
      fVar42 = fVar42 * fVar42;
      fVar39 = fVar39 * fVar39;
      auVar45._4_4_ = fVar38;
      auVar45._0_4_ = fVar37;
      auVar45._8_4_ = fVar42;
      auVar45._12_4_ = fVar39;
      auVar13._4_4_ = fVar38;
      auVar13._0_4_ = fVar37;
      auVar13._8_4_ = fVar42;
      auVar13._12_4_ = fVar39;
      auVar45 = NEON_ext(auVar45,auVar13,8,1);
      iVar20 = 0;
      lVar27 = 1;
      fVar37 = fVar37 + fVar38 + auVar45._0_4_;
      do {
        pfVar26 = (float *)(puVar28 + lVar27 * 2);
        fVar38 = (float)local_d40 - *pfVar26;
        fVar42 = fVar40 - pfVar26[1];
        fVar39 = (float)uStack_d38 - pfVar26[2];
        fVar47 = fVar44 - pfVar26[3];
        auVar46._0_4_ = fVar38 * fVar38;
        auVar46._4_4_ = fVar42 * fVar42;
        auVar46._8_4_ = fVar39 * fVar39;
        auVar46._12_4_ = fVar47 * fVar47;
        auVar45 = NEON_ext(auVar46,auVar46,8,1);
        fVar38 = auVar46._0_4_ + auVar46._4_4_ + auVar45._0_4_;
        iVar19 = (int)lVar27;
        if (fVar37 <= fVar38) {
          fVar38 = fVar37;
          iVar19 = iVar20;
        }
        iVar20 = iVar19;
        lVar27 = lVar27 + 1;
        fVar37 = fVar38;
      } while (*(int *)(param_2 + 0x38) != (int)lVar27);
    }
    local_cdc = 0;
    local_cda = 1;
    uStack_cc8 = (puVar28 + (long)iVar20 * 2)[1];
    local_cd0 = puVar28[(long)iVar20 * 2];
    uStack_d28 = *(undefined8 *)(param_2 + 0x78);
    local_d30 = *(undefined8 *)(param_2 + 0x70);
    local_cc0 = *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar20 * 4);
    local_d20 = CONCAT44(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x40));
    local_d18 = *(undefined8 *)(param_2 + 0x5c);
    local_d10 = CONCAT44(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
    local_d08 = *(undefined8 *)(param_2 + 0x80);
    local_d00 = *(undefined8 *)(param_2 + 0x88);
    local_ce8 = *(undefined8 *)(param_2 + 0xa0);
    local_cf8 = *(long *)(param_2 + 0x90);
    local_cf0 = *(undefined4 *)(param_2 + 0x98);
    local_1fe8 = 0x8000000000000000;
    local_1fd8 = -0x8000000000000000;
    local_1fc8 = -0x8000000000000000;
    local_1ff0 = (long *)0x0;
    local_1fe0 = 0;
    local_1fd0 = 0;
    local_1fbc = 0xffffffff00000000;
    local_1fb4 = 0;
    local_ce0 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0xac),*(undefined1 *)(param_2 + 0xae)) << 8
    ;
    uStack_1fa8 = 0x7f7fffee7f7fffee;
    local_1fb0 = 0x7f7fffee7f7fffee;
    local_1fc0[0] = 0;
    iVar19 = FUN_031acf34(param_1,&local_d40,&local_1ff0);
    plVar2 = local_1ff0;
    uVar18 = 1;
    if (iVar19 == 0) {
      uVar18 = 2;
    }
    *(undefined1 *)(param_3 + 0x4c) = uVar18;
    if (&local_1ff0 != (long **)(param_3 + 0x18)) {
      iVar23 = (int)local_1fe8;
      lVar27 = (long)(int)local_1fe8;
      __dest = *(void **)(param_3 + 0x18);
      if ((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < (int)local_1fe8) {
        __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,local_1fe8 & 0xffffffff,4,__dest,
                                      *(undefined4 *)(param_3 + 0x20));
        *(void **)(param_3 + 0x18) = __dest;
      }
      memcpy(__dest,plVar2,lVar27 << 2);
      *(int *)(param_3 + 0x20) = iVar23;
    }
    lVar27 = local_1fc8;
    puVar4 = &local_1fb4;
    if (iVar19 == 0) {
      puVar4 = (undefined4 *)(param_3 + 0x48);
    }
    *(undefined4 *)(param_3 + 0x48) = *puVar4;
    puVar15 = PTR_PTR_0434a080;
    uVar25 = (ulong)local_1fc8._4_4_;
    local_1fc8 = (ulong)local_1fc8._4_4_ << 0x20;
    if ((-1 < lVar27) && (local_1fd0 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_1fd0,(uVar25 & 0x3fffffff) << 4);
    }
    lVar27 = local_1fd8;
    uVar21 = local_1fd8._4_4_;
    local_1fd0 = 0;
    local_1fc8 = CONCAT44(0x80000000,(undefined4)local_1fc8);
    local_1fd8 = (ulong)local_1fd8._4_4_ << 0x20;
    if ((-1 < lVar27) && (local_1fe0 != 0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_1fe0,uVar21 << 2);
    }
    uVar25 = local_1fe8;
    uVar21 = local_1fe8._4_4_;
    local_1fe0 = 0;
    local_1fd8 = CONCAT44(0x80000000,(undefined4)local_1fd8);
    local_1fe8 = (ulong)local_1fe8._4_4_ << 0x20;
    if ((-1 < (long)uVar25) && (local_1ff0 != (long *)0x0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_1ff0,uVar21 << 2);
    }
    bVar16 = iVar19 != 0;
    fVar37 = *(float *)(param_3 + 0x48);
    if (!bVar16) {
      fVar37 = 3.40282e+38;
    }
    if (*(char *)(param_2 + 0xab) != '\x01') {
      if ((*(char *)(param_2 + 0xab) == '\x02') && (bVar17 = true, iVar19 != 0)) goto LAB_031b1ba4;
      goto LAB_031b1d10;
    }
    bVar17 = *(long *)(param_2 + 0x80) == 0;
    if (iVar19 == 0) goto LAB_031b1d10;
LAB_031b1ba4:
    if (!bVar17) goto LAB_031b1d10;
    *(undefined1 *)(param_3 + 0x4c) = 1;
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(int *)(param_3 + 0x44) = iVar20;
    bVar9 = *(byte *)(param_2 + 0xaa);
    if ((bVar9 & 1) != 0) {
      fVar37 = *(float *)(param_2 + 0x5c);
      iVar19 = *(int *)(param_3 + 0x20) + 2;
      if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar19) {
        uVar35 = FUN_0318a008(puVar15,iVar19,*(undefined8 *)(param_3 + 0x28),
                              *(undefined4 *)(param_3 + 0x30));
        *(undefined8 *)(param_3 + 0x28) = uVar35;
      }
      FUN_031b9930(fVar37 * 0.5,param_1,&local_1a70,(long **)(param_3 + 0x18),
                   *(undefined4 *)(param_2 + 0x40),param_2 + 0x20,
                   *(long *)(param_2 + 0x30) + (long)iVar20 * 0x10,bVar9 & 2,bVar9 & 4,&local_d60,
                   param_3 + 0x28,0,in_stack_ffffffffffffdd18 & 0xffffffff00000000);
    }
  }
  lVar27 = *(long *)(lVar12 + 0x38d490);
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar27;
  }
  FUN_03166d64(auStack_1a20,*(undefined8 *)(lVar27 + 0x10));
joined_r0x031b1cfc:
  if (lVar32 != 0) {
    puVar28 = *(undefined8 **)(lVar32 + 8);
    uVar25 = (long)puVar28 + 0x17U & 0xfffffffffffffff8;
    if ((uVar25 <= *(ulong *)(lVar32 + 0x10)) &&
       (*(ulong *)(lVar32 + 8) = uVar25, puVar28 != (undefined8 *)0x0)) {
      *puVar28 = &DAT_03922da5;
      uVar35 = nn::os::GetSystemTick();
      puVar28[1] = uVar35;
    }
  }
  return;
}


