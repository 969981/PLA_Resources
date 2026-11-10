/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316a4d0; name: FUN_0316a4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0316a4d0(long param_1,long *param_2,ulong param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 *param_7,undefined8 *param_8,long *param_9,long *param_10,
            long *param_11,long param_12)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  long lVar19;
  long lVar20;
  undefined4 *puVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ushort *puVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *puVar38;
  bool bVar39;
  long lVar40;
  uint uVar41;
  int iVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar55;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar56;
  undefined1 auVar52 [16];
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar60 [16];
  undefined8 uVar59;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  int iVar65;
  float fVar67;
  int iVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  float fVar71;
  undefined8 uVar72;
  float fVar78;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar94;
  float fVar95;
  float fVar96;
  ulong uVar97;
  float fVar100;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar110;
  undefined1 auVar109 [16];
  byte bVar113;
  float fVar111;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  ulong uVar116;
  ulong uVar117;
  undefined1 auVar118 [16];
  float fVar119;
  float fVar123;
  undefined1 auVar120 [16];
  float fVar124;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar125;
  float fVar126;
  float fVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  int iVar131;
  undefined1 auVar130 [16];
  int iVar132;
  undefined8 uVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  long *plVar136;
  undefined1 *puVar137;
  float local_230;
  float fStack_22c;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_170;
  undefined1 local_150 [16];
  long local_140;
  ulong local_138;
  long local_130;
  int local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  int local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  uint local_d0;
  int local_cc;
  int *local_c8;
  undefined8 local_c0;
  int *local_b8;
  uint *local_b0;
  
  local_d8[0] = (undefined4)param_3;
  lVar19 = nn::os::GetSystemTick();
  uVar47 = param_3 >> 0x16 & 0x3ff;
  uVar48 = *(undefined4 *)
            (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + uVar47 * 0xf0) + 0x20) + 0x68
                      ) + 0xb0);
  local_e0 = CONCAT44(uVar48,uVar48);
  FUN_0316c0bc(&local_f0,param_1,local_d8);
  iVar12 = param_4[2];
  sVar5 = *(short *)((long)param_4 + 10);
  *(int *)(param_9 + 1) = (int)(short)iVar12;
  if (0 < (long)(short)param_4[2]) {
    lVar35 = (long)*param_4;
    lVar30 = 0;
    lVar33 = 0;
    lVar37 = *(long *)(*(long *)(param_1 + 0x38) + uVar47 * 0xf0);
    uVar47 = (long)(short)param_4[2] & 0xffffffff;
    lVar40 = lVar35 * 0x14;
    lVar43 = lVar35;
    do {
      lVar20 = *(long *)(lVar37 + 0x20);
      if (lVar43 < *(int *)(lVar20 + 0x30)) {
        if (*(int *)(lVar20 + 0x78) == 0) {
          iVar42 = (int)lVar43;
        }
        else {
          iVar42 = *(int *)(*(long *)(lVar20 + 0x70) + lVar43 * 4);
        }
        if (iVar42 == -1) {
          puVar21 = (undefined4 *)(*(long *)(lVar20 + 0x28) + (lVar33 + lVar35) * 0x14);
        }
        else {
          puVar21 = (undefined4 *)(*(long *)(lVar20 + 0xc0) + (long)iVar42 * 0x14);
        }
      }
      else {
        puVar21 = (undefined4 *)
                  (*(long *)(lVar20 + 0xe0) + (long)*(int *)(lVar20 + 0x30) * -0x14 + lVar40);
      }
      lVar33 = lVar33 + 1;
      lVar40 = lVar40 + 0x14;
      *(undefined4 *)(*param_9 + lVar30) = *puVar21;
      lVar20 = *param_9 + lVar30;
      lVar43 = lVar43 + 1;
      uVar47 = uVar47 - 1;
      lVar30 = lVar30 + 8;
      *(undefined4 *)(lVar20 + 4) = uVar48;
    } while (uVar47 != 0);
  }
  iVar12 = (int)sVar5 + (int)(short)iVar12;
  *(undefined4 *)(param_10 + 1) = 0;
  if (iVar12 < 1) {
    if (iVar12 < 0) {
      *(int *)(param_10 + 1) = iVar12;
    }
  }
  else {
    puVar21 = (undefined4 *)*param_10;
    *(int *)(param_10 + 1) = iVar12;
    *puVar21 = 0;
    puVar21[1] = uVar48;
    if (iVar12 != 1) {
      puVar21[2] = 0;
      puVar21[3] = uVar48;
      if (iVar12 != 2) {
        puVar21[4] = 0;
        puVar21[5] = uVar48;
        if (iVar12 != 3) {
          iVar42 = iVar12 + -4;
          puVar21[6] = 0;
          puVar21[7] = uVar48;
          if (iVar42 != 0) {
            puVar21 = puVar21 + 8;
            do {
              *puVar21 = 0;
              iVar42 = iVar42 + -1;
              puVar21[1] = uVar48;
              puVar21 = puVar21 + 2;
            } while (iVar42 != 0);
          }
        }
      }
    }
  }
  lVar43 = (long)DAT_0444b53c;
  lVar33 = tpidr_el0;
  lVar40 = *(long *)(lVar33 + 0x38d490);
  if (lVar40 == 0) {
    lVar40 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar40;
  }
  param_3 = param_3 & 0xffffffff;
  if (*(long *)(lVar40 + lVar43 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (param_2 != (long *)0x0) {
    lVar40 = nn::os::GetSystemTick();
    lVar43 = nn::os::GetSystemTick();
    uVar47 = (**(code **)(*param_2 + 0x20))(param_2,param_1,param_3,param_4,param_5,param_6);
    lVar30 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x38) = (lVar30 - lVar43) + *(long *)(param_12 + 0x38);
    *(int *)(param_12 + 0x40) = *(int *)(param_12 + 0x40) + 1;
    lVar43 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x20) = (lVar43 - lVar40) + *(long *)(param_12 + 0x20);
    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
    if ((uVar47 & 1) == 0) {
      uVar90 = 0;
      goto joined_r0x0316b6ec;
    }
  }
  uStack_f8 = param_7[1];
  local_100 = *param_7;
  local_120 = 0;
  local_118 = 0x8000000000000000;
  local_108 = 0x80;
  lVar40 = *(long *)(lVar33 + 0x38d490);
  if (lVar40 == 0) {
    lVar40 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar40;
  }
  lVar40 = *(long *)(lVar40 + 8);
  if (*(ulong *)(lVar40 + 0x10) < 0x1000) {
LAB_0316bad8:
    local_110 = FUN_032ce670(lVar40,0x1000);
  }
  else {
    local_110 = *(long *)(lVar40 + 0x18);
    if (*(ulong *)(lVar40 + 0x20) < local_110 + 0x1000U) goto LAB_0316bad8;
    *(ulong *)(lVar40 + 0x18) = local_110 + 0x1000U;
  }
  local_118 = CONCAT44(0x80000080,(int)local_118);
  local_140 = 0;
  local_138 = 0x8000000000000000;
  local_128 = iVar12;
  local_120 = local_110;
  if (iVar12 == 0) {
    local_130 = 0;
  }
  else {
    lVar40 = *(long *)(lVar33 + 0x38d490);
    if (lVar40 == 0) {
      lVar40 = FUN_0333d16c(0,1);
      *(long *)(lVar33 + 0x38d490) = lVar40;
    }
    lVar40 = *(long *)(lVar40 + 8);
    uVar47 = (ulong)(int)(iVar12 * 0x20 + 0x7fU & 0xffffff80);
    if (uVar47 <= *(ulong *)(lVar40 + 0x10)) {
      local_130 = *(long *)(lVar40 + 0x18);
      uVar47 = local_130 + uVar47;
      if (uVar47 <= *(ulong *)(lVar40 + 0x20)) {
        *(ulong *)(lVar40 + 0x18) = uVar47;
        goto LAB_0316a79c;
      }
    }
    local_130 = FUN_032ce670(lVar40);
  }
LAB_0316a79c:
  local_138 = CONCAT44(iVar12,(int)local_138) | 0x8000000000000000;
  lVar40 = param_12 + 0x18;
  fVar57 = (float)local_e0;
  local_c8 = (int *)CONCAT44((float)((ulong)*param_8 >> 0x20) - (float)((ulong)local_e0 >> 0x20),
                             (float)*param_8 - fVar57);
  puVar137 = local_150;
  plVar136 = &local_140;
  local_140 = local_130;
  FUN_031684f0(param_1,param_2,param_3,param_4);
  uVar90 = local_100;
  uVar47 = local_138;
  lVar30 = local_140;
  iVar12 = (int)local_138;
  lVar43 = (long)(int)local_138;
  fStack_1f8 = (float)uStack_f8;
  fStack_1f4 = (float)((ulong)uStack_f8 >> 0x20);
  local_200 = (float)local_100;
  fStack_1fc = (float)((ulong)local_100 >> 0x20);
  lVar35 = *(long *)(*(long *)(param_1 + 0x38) + (param_3 >> 0x16) * 0xf0);
  uVar29 = (uint)*(short *)((long)param_4 + 10);
  uVar46 = (int)local_138 + uVar29;
  local_138 = CONCAT44(local_138._4_4_,uVar46);
  if (*(short *)((long)param_4 + 10) != 0) {
    lVar32 = (long)param_4[1];
    uVar41 = (uint)(short)param_4[2];
    lVar37 = 0;
    uVar45 = (ulong)uVar29;
    lVar20 = lVar32 * 0x14;
    puVar38 = (undefined8 *)(local_140 + lVar43 * 0x20 + 0x10);
    lVar27 = lVar32;
    do {
      lVar23 = *(long *)(lVar35 + 0x20);
      if (lVar27 < *(int *)(lVar23 + 0x30)) {
        if (*(int *)(lVar23 + 0x78) == 0) {
          iVar42 = (int)lVar27;
        }
        else {
          iVar42 = *(int *)(*(long *)(lVar23 + 0x70) + lVar27 * 4);
        }
        if (iVar42 == -1) {
          piVar22 = (int *)(*(long *)(lVar23 + 0x28) + (lVar37 + lVar32) * 0x14);
        }
        else {
          piVar22 = (int *)(*(long *)(lVar23 + 0xc0) + (long)iVar42 * 0x14);
        }
      }
      else {
        piVar22 = (int *)(*(long *)(lVar23 + 0xe0) + (long)*(int *)(lVar23 + 0x30) * -0x14 + lVar20)
        ;
      }
      iVar7 = *(int *)(lVar23 + 0x40);
      iVar42 = *piVar22;
      iVar6 = piVar22[1];
      fVar8 = *(float *)(lVar35 + 0x6c);
      fVar82 = *(float *)(lVar35 + 0x7c);
      plVar3 = (long *)(lVar23 + 0x38);
      if (iVar7 <= iVar42) {
        plVar3 = (long *)(lVar23 + 0xf0);
      }
      iVar65 = 0;
      if (iVar7 <= iVar42) {
        iVar65 = iVar7;
      }
      plVar4 = (long *)(lVar23 + 0x38);
      if (iVar7 <= iVar6) {
        plVar4 = (long *)(lVar23 + 0xf0);
      }
      iVar68 = 0;
      if (iVar7 <= iVar6) {
        iVar68 = iVar7;
      }
      pfVar34 = (float *)(*plVar4 + (long)(iVar6 - iVar68) * 0x10);
      fVar49 = *pfVar34;
      fVar53 = pfVar34[1];
      fVar55 = pfVar34[2];
      lVar37 = lVar37 + 1;
      pfVar34 = (float *)(*plVar3 + (long)(iVar42 - iVar65) * 0x10);
      fVar56 = *pfVar34;
      fVar50 = pfVar34[1];
      fVar64 = pfVar34[2];
      uVar94 = uVar41 | 0x3f010000;
      uVar41 = uVar41 + 1;
      lVar20 = lVar20 + 0x14;
      lVar27 = lVar27 + 1;
      uVar45 = uVar45 - 1;
      fVar67 = *(float *)(lVar35 + 0x8c);
      auVar60 = *(undefined1 (*) [16])(lVar35 + 0x90);
      fVar69 = auVar60._0_4_ +
               *(float *)(lVar35 + 0x80) * fVar55 +
               *(float *)(lVar35 + 0x60) * fVar49 + *(float *)(lVar35 + 0x70) * fVar53;
      fVar70 = auVar60._4_4_ +
               *(float *)(lVar35 + 0x84) * fVar55 +
               *(float *)(lVar35 + 100) * fVar49 + *(float *)(lVar35 + 0x74) * fVar53;
      fVar49 = auVar60._8_4_ +
               *(float *)(lVar35 + 0x88) * fVar55 +
               *(float *)(lVar35 + 0x68) * fVar49 + *(float *)(lVar35 + 0x78) * fVar53;
      fVar53 = auVar60._0_4_ +
               *(float *)(lVar35 + 0x80) * fVar64 +
               *(float *)(lVar35 + 0x60) * fVar56 + *(float *)(lVar35 + 0x70) * fVar50;
      fVar55 = auVar60._4_4_ +
               *(float *)(lVar35 + 0x84) * fVar64 +
               *(float *)(lVar35 + 100) * fVar56 + *(float *)(lVar35 + 0x74) * fVar50;
      fVar71 = auVar60._8_4_ +
               *(float *)(lVar35 + 0x88) * fVar64 +
               *(float *)(lVar35 + 0x68) * fVar56 + *(float *)(lVar35 + 0x78) * fVar50;
      fVar54 = local_200 * fVar69;
      fVar83 = fStack_1fc * fVar70;
      fVar84 = fStack_1f8 * fVar49;
      fVar78 = local_200 * fVar53;
      fVar96 = fStack_1fc * fVar55;
      fVar100 = fStack_1f8 * fVar71;
      fVar85 = fVar78 + fVar96 + fVar100;
      fVar100 = fVar78 + fVar96 + fVar100;
      fVar78 = fVar54 + fVar83 + fVar84;
      auVar51._0_8_ =
           CONCAT44(fVar70 - fStack_1fc * (fVar54 + fVar83 + fVar84),fVar69 - local_200 * fVar78);
      auVar51._8_4_ = fVar49 - fStack_1f8 * fVar78;
      *(float *)(puVar38 + -1) = fVar71 - fStack_1f8 * fVar85;
      *(float *)((long)puVar38 + -4) =
           (auVar60._12_4_ + fVar67 * fVar64 + fVar8 * fVar56 + fVar82 * fVar50) -
           fStack_1f4 * fVar100;
      *(float *)(puVar38 + -2) = fVar53 - local_200 * fVar85;
      *(float *)((long)puVar38 + -0xc) = fVar55 - fStack_1fc * fVar100;
      auVar51._12_4_ = uVar94;
      puVar38[1] = auVar51._8_8_;
      *puVar38 = auVar51._0_8_;
      puVar38 = puVar38 + 4;
    } while (uVar45 != 0);
  }
  lVar37 = (long)DAT_0444b53c;
  lVar35 = *(long *)(lVar33 + 0x38d490);
  if (lVar35 == 0) {
    lVar35 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar35;
  }
  if (*(long *)(lVar35 + lVar37 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (0 < iVar12) {
    lVar35 = param_12 + 0x58;
    lVar37 = (ulong)*(ushort *)(lVar30 + 0x1c) * 8;
    FUN_03167130(lVar30,lVar30 + 0x10,param_8,&local_e0,&local_100,&local_120,*param_10 + lVar37,
                 *param_9 + lVar37 + 4,lVar35,plVar136,puVar137,lVar40);
    if (((iVar12 != 1) &&
        (lVar37 = (ulong)*(ushort *)(lVar30 + 0x3c) * 8,
        FUN_03167130(lVar30 + 0x20,lVar30 + 0x30,param_8,&local_e0,&local_100,&local_120,
                     *param_10 + lVar37,*param_9 + lVar37 + 4,lVar35,plVar136,puVar137,lVar40),
        iVar12 != 2)) &&
       (lVar37 = (ulong)*(ushort *)(lVar30 + 0x5c) * 8,
       FUN_03167130(lVar30 + 0x40,lVar30 + 0x50,param_8,&local_e0,&local_100,&local_120,
                    *param_10 + lVar37,*param_9 + lVar37 + 4,lVar35), iVar12 != 3)) {
      lVar20 = (uVar47 & 0xffffffff) - 3;
      lVar37 = lVar30 + 0x60;
      do {
        lVar27 = (ulong)*(ushort *)(lVar37 + 0x1c) * 8;
        FUN_03167130(lVar37,lVar37 + 0x10,param_8,&local_e0,&local_100,&local_120,*param_10 + lVar27
                     ,*param_9 + lVar27 + 4,lVar35);
        lVar20 = lVar20 + -1;
        lVar37 = lVar37 + 0x20;
      } while (lVar20 != 0);
    }
  }
  if (0 < (int)uVar29) {
    lVar35 = lVar30 + lVar43 * 0x20 + 0x10;
    do {
      FUN_03167130(lVar35 + -0x10,lVar35,param_8,&local_e0,&local_100,&local_120,
                   *param_10 + (ulong)*(ushort *)(lVar35 + 0xc) * 8,0,param_12 + 0x58,plVar136,
                   puVar137,lVar40);
      lVar43 = lVar43 + 1;
      lVar35 = lVar35 + 0x20;
    } while (lVar43 < (int)uVar46);
  }
  iVar12 = uVar46 - 1;
  if (iVar12 != 0 && 0 < (int)uVar46) {
    lVar43 = (long)DAT_0444b53c;
    lVar40 = *(long *)(lVar33 + 0x38d490);
    if (lVar40 == 0) {
      lVar40 = FUN_0333d16c(0,1);
      *(long *)(lVar33 + 0x38d490) = lVar40;
    }
    if (*(long *)(lVar40 + lVar43 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar29 = (int)(iVar12 * uVar46) >> 1;
    local_170 = (float)*param_8;
    if ((int)(*(uint *)((long)param_11 + 0xc) & 0x3fffffff) < (int)uVar29) {
      uVar41 = (*(uint *)((long)param_11 + 0xc) & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar41) {
        uVar41 = 0x3fffffff;
      }
      uVar94 = uVar29;
      if ((int)uVar29 <= (int)uVar41) {
        uVar94 = uVar41;
      }
      lVar40 = FUN_032bd1d4(PTR_PTR_0434a090,uVar94,4,*param_11,(int)param_11[1]);
      *param_11 = lVar40;
    }
    lVar40 = nn::os::GetSystemTick();
    iVar42 = (int)local_118;
    uVar47 = local_118 & 0xffffffff;
    if (*(uint *)(param_11 + 1) != uVar29) {
      *(uint *)(param_11 + 1) = uVar29;
    }
    if ((int)local_118 == 0) {
      lVar43 = 0;
      lVar35 = 0;
    }
    else {
      lVar35 = *(long *)(lVar33 + 0x38d490);
      if (lVar35 == 0) {
        lVar35 = FUN_0333d16c(0,1);
        *(long *)(lVar33 + 0x38d490) = lVar35;
      }
      lVar37 = *(long *)(lVar35 + 8);
      uVar45 = (ulong)(int)(iVar42 * 0x20 + 0x7fU & 0xffffff80);
      if (*(ulong *)(lVar37 + 0x10) < uVar45) {
LAB_0316bb00:
        lVar43 = FUN_032ce670(lVar37,uVar45);
        lVar35 = *(long *)(lVar33 + 0x38d490);
      }
      else {
        lVar43 = *(long *)(lVar37 + 0x18);
        if (*(ulong *)(lVar37 + 0x20) < lVar43 + uVar45) goto LAB_0316bb00;
        *(ulong *)(lVar37 + 0x18) = lVar43 + uVar45;
      }
      if (lVar35 == 0) {
        lVar35 = FUN_0333d16c(0,1);
        *(long *)(lVar33 + 0x38d490) = lVar35;
      }
      lVar37 = *(long *)(lVar35 + 8);
      if (uVar45 <= *(ulong *)(lVar37 + 0x10)) {
        lVar35 = *(long *)(lVar37 + 0x18);
        if (lVar35 + uVar45 <= *(ulong *)(lVar37 + 0x20)) {
          *(ulong *)(lVar37 + 0x18) = lVar35 + uVar45;
          goto LAB_0316aa94;
        }
      }
      lVar35 = FUN_032ce670(lVar37,uVar45);
    }
LAB_0316aa94:
    puVar14 = PTR_PTR_0434a090;
    uVar45 = (ulong)(int)uVar46;
    local_cc = 4;
    local_d0 = uVar46;
    if ((uVar45 & 0x3fffffffe0000000) != 0) {
      local_c8 = (int *)0x2;
      local_c0 = &DAT_0411b3a0;
      local_b8 = &local_cc;
      local_b0 = &local_d0;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_c8);
    }
    local_c8 = (int *)(-(uVar45 >> 0x1d & 1) & 0xffffffff00000000 | (uVar45 & 0x3fffffff) << 2);
    puVar21 = (undefined4 *)(**(code **)(*(long *)puVar14 + 0x10))(puVar14,local_c8,&local_c8);
    iVar6 = local_cc;
    iVar7 = (int)local_c8;
    uVar45 = (ulong)uVar46;
    *puVar21 = 0;
    if (((uVar46 != 1) && (puVar21[1] = 1, uVar46 != 2)) && (puVar21[2] = 2, uVar46 != 3)) {
      uVar24 = 3;
      do {
        puVar21[uVar24] = (int)uVar24;
        uVar24 = uVar24 + 1;
      } while (uVar45 != uVar24);
    }
    local_b0 = (uint *)CONCAT44(local_b0._4_4_,uVar46);
    local_c8 = (int *)0x0;
    local_c0 = (undefined *)0x8000000000000000;
    if (uVar46 == 0) {
      piVar22 = (int *)0x0;
    }
    else {
      lVar37 = *(long *)(lVar33 + 0x38d490);
      if (lVar37 == 0) {
        lVar37 = FUN_0333d16c(0,1);
        *(long *)(lVar33 + 0x38d490) = lVar37;
      }
      lVar37 = *(long *)(lVar37 + 8);
      uVar24 = (ulong)(int)(uVar46 * 4 + 0x7f & 0xffffff80);
      if (uVar24 <= *(ulong *)(lVar37 + 0x10)) {
        piVar22 = *(int **)(lVar37 + 0x18);
        uVar24 = (long)piVar22 + uVar24;
        if (uVar24 <= *(ulong *)(lVar37 + 0x20)) {
          *(ulong *)(lVar37 + 0x18) = uVar24;
          goto LAB_0316ab6c;
        }
      }
      piVar22 = (int *)FUN_032ce670();
    }
LAB_0316ab6c:
    puVar13 = PTR_PTR_0434a080;
    local_c0 = (undefined *)(CONCAT44(uVar46,(uint)local_c0) | 0x8000000000000000);
    local_c8 = piVar22;
    local_b8 = piVar22;
    if ((int)uVar46 < 0x40000000) {
      if (uVar46 == 0) goto LAB_0316abdc;
    }
    else {
      FUN_032bd0a8(uVar46);
      uVar29 = uVar46 * 2 & 0x7ffffffe;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar41 = uVar46;
      if ((int)uVar46 <= (int)uVar29) {
        uVar41 = uVar29;
      }
      local_c8 = (int *)FUN_032bd1d4(puVar13,uVar41,4,piVar22,0,(long)&local_c0 + 4);
      if ((uint)local_c0 == uVar46) goto LAB_0316abdc;
    }
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar46);
LAB_0316abdc:
    *local_c8 = *(int *)(*param_10 + (ulong)*(ushort *)(lVar30 + 0x1c) * 8 + 4);
    if (uVar46 != 1) {
      local_c8[1] = *(int *)(*param_10 + (ulong)*(ushort *)(lVar30 + 0x3c) * 8 + 4);
      if (((uVar46 != 2) &&
          (local_c8[2] = *(int *)(*param_10 + (ulong)*(ushort *)(lVar30 + 0x5c) * 8 + 4),
          uVar46 != 3)) &&
         (local_c8[3] = *(int *)(*param_10 + (ulong)*(ushort *)(lVar30 + 0x7c) * 8 + 4), uVar46 != 4
         )) {
        uVar24 = 4;
        puVar28 = (ushort *)(lVar30 + 0x9c);
        do {
          local_c8[uVar24] = *(int *)(*param_10 + (ulong)*puVar28 * 8 + 4);
          uVar24 = uVar24 + 1;
          puVar28 = puVar28 + 0x10;
        } while (uVar45 != uVar24);
      }
      FUN_03174b70(puVar21,0,iVar12,&local_c8);
    }
    piVar22 = local_b8;
    if (local_b8 == local_c8) {
      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    }
    iVar12 = (int)local_b0;
    lVar37 = *(long *)(lVar33 + 0x38d490);
    if (lVar37 == 0) {
      lVar37 = FUN_0333d16c(0,1);
      *(long *)(lVar33 + 0x38d490) = lVar37;
    }
    lVar37 = *(long *)(lVar37 + 8);
    uVar24 = (ulong)(int)(iVar12 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar37 + 0x10) < uVar24) ||
        (*(long *)(lVar37 + 0x18) != uVar24 + (long)piVar22)) ||
       (*(int **)(lVar37 + 0x28) == piVar22)) {
      if (piVar22 != (int *)0x0) {
        if (*(ulong *)(lVar37 + 0x10) < uVar24) {
          *(int *)(*(long *)(lVar37 + 8) + 0x20) = *(int *)(*(long *)(lVar37 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar37 + 0x40) + 0x18))(*(long **)(lVar37 + 0x40),piVar22);
        }
        else if (*(long *)(lVar37 + 0x18) == uVar24 + (long)piVar22) {
          *(int **)(lVar37 + 0x18) = piVar22;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar37,piVar22);
        }
      }
    }
    else {
      *(int **)(lVar37 + 0x18) = piVar22;
    }
    uVar24 = (ulong)local_c0;
    iVar12 = 0;
    if (iVar6 != 0) {
      iVar12 = iVar7 / iVar6;
    }
    uVar46 = local_c0._4_4_;
    local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
    if ((-1 < (long)uVar24) && (local_c8 != (int *)0x0)) {
      (**(code **)(*(long *)puVar13 + 0x18))(puVar13,local_c8,uVar46 << 2);
    }
    puVar13 = PTR_DAT_043723a0;
    auVar60._8_4_ = fStack_1f8;
    auVar60._0_8_ = uVar90;
    auVar60._12_4_ = fStack_1f4;
    auVar60 = NEON_ext(auVar60,auVar60,4,1);
    puVar38 = (undefined8 *)(local_120 + 0x10);
    uVar90 = NEON_fmov(0x3f800000,4);
    uVar24 = 1;
    bVar39 = true;
LAB_0316ad80:
    iVar6 = puVar21[uVar24];
    pfVar1 = (float *)(lVar30 + (long)iVar6 * 0x20);
    fVar82 = *pfVar1;
    fVar49 = pfVar1[1];
    fVar53 = pfVar1[2];
    fVar55 = pfVar1[3];
    fVar56 = pfVar1[7];
    lVar37 = *param_10;
    auVar81._0_4_ = ABS(pfVar1[4]);
    auVar81._4_4_ = ABS(pfVar1[5]);
    auVar81._8_4_ = ABS(pfVar1[6]);
    auVar81._12_4_ = ABS(fVar56);
    pfVar34 = (float *)(lVar37 + (ulong)SUB42(fVar56,0) * 8);
    uVar44 = 0;
    fVar8 = *pfVar34;
    auVar79._0_4_ = fVar82 + (pfVar1[4] - fVar82) * fVar8;
    auVar79._4_4_ = fVar49 + (pfVar1[5] - fVar49) * fVar8;
    auVar79._8_4_ = fVar53 + (pfVar1[6] - fVar53) * fVar8;
    auVar79._12_4_ = fVar55 + (fVar56 - fVar55) * fVar8;
    auVar120._0_4_ = ABS(fVar82);
    auVar120._4_4_ = ABS(fVar49);
    auVar120._8_4_ = ABS(fVar53);
    auVar120._12_4_ = ABS(fVar55);
    fVar8 = pfVar34[1];
    auVar51 = NEON_fmax(auVar120,auVar81,4);
    uVar58 = NEON_fmaxp(auVar51._0_8_,auVar51._0_8_,4);
    uVar58 = NEON_fmax(CONCAT44(auVar51._8_4_,auVar51._8_4_),uVar58,4);
    auVar80 = auVar79;
    do {
      iVar7 = puVar21[uVar44];
      pauVar2 = (undefined1 (*) [16])(lVar30 + (long)iVar7 * 0x20);
      auVar51 = *pauVar2;
      auVar81 = pauVar2[1];
      pfVar34 = (float *)(lVar37 + (ulong)auVar81._12_2_ * 8);
      fVar49 = *pfVar34;
      fVar82 = pfVar34[1];
      uVar59 = NEON_fmin(CONCAT44(fVar8,fVar8),CONCAT44(fVar82,fVar82),4);
      fVar82 = (float)uVar59;
      if ((uVar44 == 0) || (!bVar39)) {
        fVar53 = auVar51._0_4_;
        fVar55 = auVar51._4_4_;
        fVar56 = auVar51._8_4_;
        fVar50 = auVar51._12_4_;
        auVar92._0_4_ = ABS(auVar81._0_4_);
        auVar92._4_4_ = ABS(auVar81._4_4_);
        auVar92._8_4_ = ABS(auVar81._8_4_);
        auVar92._12_4_ = ABS(auVar81._12_4_);
        fVar64 = fVar53 + (auVar81._0_4_ - fVar53) * fVar49;
        fVar67 = fVar55 + (auVar81._4_4_ - fVar55) * fVar49;
        fVar69 = fVar56 + (auVar81._8_4_ - fVar56) * fVar49;
        fVar70 = fVar50 + (auVar81._12_4_ - fVar50) * fVar49;
        auVar88._0_4_ = ABS(fVar53);
        auVar88._4_4_ = ABS(fVar55);
        auVar88._8_4_ = ABS(fVar56);
        auVar88._12_4_ = ABS(fVar50);
        auVar51 = NEON_fmax(auVar92,auVar88,4);
        uVar59 = NEON_fmaxp(auVar51._0_8_,auVar51._0_8_,4);
        uVar59 = NEON_fmax(CONCAT44(auVar51._8_4_,auVar51._8_4_),uVar59,4);
        uVar59 = NEON_fmax(uVar58,uVar59,4);
        fVar49 = (float)uVar59 * 7.1525574e-07;
        if (ABS(auVar80._8_4_ - fVar69) <= fVar49 &&
            (ABS(auVar80._0_4_ - fVar64) <= fVar49 &&
            ABS(auVar80._4_4_ - fVar67) <= (float)((ulong)uVar59 >> 0x20) * 7.1525574e-07)) {
          *(int *)(param_12 + 0xdc) = *(int *)(param_12 + 0xdc) + 1;
          fVar82 = fVar8;
        }
        else {
          if (uVar44 != 0) {
            uVar26 = 0;
            do {
              iVar68 = puVar21[uVar26];
              iVar65 = iVar68;
              if (iVar68 <= iVar6) {
                iVar65 = iVar6;
              }
              iVar131 = iVar6;
              if (iVar68 <= iVar6) {
                iVar131 = iVar68;
              }
              iVar132 = iVar7;
              if (iVar68 <= iVar7) {
                iVar132 = iVar68;
                iVar68 = iVar7;
              }
              fVar49 = *(float *)(*param_11 + (long)(iVar131 + ((iVar65 + -1) * iVar65 >> 1)) * 4);
              fVar53 = *(float *)(*param_11 + (long)(iVar132 + ((iVar68 + -1) * iVar68 >> 1)) * 4);
              if (fVar53 <= fVar49) {
                fVar49 = fVar53;
              }
              if (fVar82 <= fVar49 * 1.01) {
                *(int *)(param_12 + 0xe0) = *(int *)(param_12 + 0xe0) + 1;
                goto LAB_0316b450;
              }
              uVar26 = uVar26 + 1;
            } while (uVar44 != uVar26);
          }
          fVar49 = fVar64 - auVar80._0_4_;
          fVar53 = fVar67 - auVar80._4_4_;
          fVar55 = fVar69 - auVar80._8_4_;
          fVar56 = fVar70 - auVar80._12_4_;
          lVar37 = nn::os::GetSystemTick();
          uVar46 = 0;
          uVar29 = 0;
          if (0 < iVar42) {
            auVar93._4_4_ = fVar53;
            auVar93._0_4_ = fVar49;
            auVar93._8_4_ = fVar55;
            auVar93._12_4_ = fVar56;
            auVar51 = NEON_ext(auVar93,auVar93,4,1);
            local_230 = auVar60._0_4_;
            fStack_22c = auVar60._4_4_;
            auVar99._0_4_ = local_200 * auVar51._0_4_ - local_230 * fVar49;
            auVar99._4_4_ = fStack_1fc * auVar51._4_4_ - fStack_22c * fVar53;
            auVar99._8_4_ = fStack_1f8 * fVar49 - local_200 * fVar55;
            auVar99._12_4_ = fStack_1f4 * fVar53 - fStack_1fc * fVar56;
            auVar51 = NEON_ext(auVar99,auVar99,4,1);
            fVar83 = auVar51._0_4_;
            fVar84 = auVar51._4_4_;
            fVar50 = auVar99._0_4_ * auVar99._0_4_ + fVar83 * fVar83 + fVar84 * fVar84;
            fVar54 = auVar99._0_4_ * auVar99._0_4_ + fVar83 * fVar83 + fVar84 * fVar84;
            uVar59 = CONCAT44(fVar54,fVar50);
            uVar72 = NEON_frsqrte(uVar59,4);
            fVar71 = (float)uVar72;
            fVar78 = (float)((ulong)uVar72 >> 0x20);
            uVar72 = NEON_frsqrts(uVar59,CONCAT44(fVar78 * fVar78,fVar71 * fVar71),4);
            fVar71 = fVar71 * (float)uVar72;
            fVar78 = fVar78 * (float)((ulong)uVar72 >> 0x20);
            iVar65 = -(uint)(fVar50 <= 0.0);
            iVar68 = -(uint)(fVar54 <= 0.0);
            uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar78 * fVar78,fVar71 * fVar71),4);
            fVar71 = (float)uVar59 * fVar71;
            fVar78 = (float)((ulong)uVar59 >> 0x20) * fVar78;
            fVar50 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                     CONCAT12((byte)((uint)fVar71 >> 0x10) &
                                              ~(byte)((uint)iVar65 >> 0x10),
                                              CONCAT11((byte)((uint)fVar71 >> 8) &
                                                       ~(byte)((uint)iVar65 >> 8),
                                                       SUB41(fVar71,0) & ~(byte)iVar65)));
            auVar52._0_4_ = fVar83 * fVar50;
            fVar71 = (float)(CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                      CONCAT16((byte)((uint)fVar78 >> 0x10) &
                                               ~(byte)((uint)iVar68 >> 0x10),
                                               CONCAT15((byte)((uint)fVar78 >> 8) &
                                                        ~(byte)((uint)iVar68 >> 8),
                                                        CONCAT14(SUB41(fVar78,0) & ~(byte)iVar68,
                                                                 fVar50)))) >> 0x20);
            auVar52._4_4_ = fVar84 * fVar71;
            auVar52._8_4_ = auVar99._0_4_ * fVar50;
            auVar103._0_4_ = auVar79._0_4_ * auVar52._0_4_;
            auVar103._4_4_ = auVar79._4_4_ * auVar52._4_4_;
            auVar103._8_4_ = auVar79._8_4_ * auVar52._8_4_;
            auVar103._12_4_ = auVar79._12_4_ * auVar99._4_4_ * fVar71;
            auVar51 = NEON_ext(auVar103,auVar103,8,1);
            fVar50 = -(auVar103._0_4_ + auVar103._4_4_ + auVar51._0_4_);
            auVar61._0_8_ =
                 CONCAT44(fVar55 * fVar55 + fVar49 * fVar49 + fVar53 * fVar53,
                          fVar55 * fVar55 + fVar49 * fVar49 + fVar53 * fVar53);
            auVar52._12_4_ = fVar50;
            auVar61._8_8_ = auVar61._0_8_;
            auVar51 = NEON_frecpe(auVar61,4);
            auVar80 = NEON_frecps(auVar61,auVar51,4);
            auVar73._0_4_ = auVar51._0_4_ * auVar80._0_4_;
            auVar73._4_4_ = auVar51._4_4_ * auVar80._4_4_;
            auVar73._8_4_ = auVar51._8_4_ * auVar80._8_4_;
            auVar73._12_4_ = auVar51._12_4_ * auVar80._12_4_;
            auVar51 = NEON_frecps(auVar61,auVar73,4);
            auVar62._0_4_ = fVar49 * auVar73._0_4_ * auVar51._0_4_;
            auVar62._4_4_ = fVar53 * auVar73._4_4_ * auVar51._4_4_;
            auVar62._8_4_ = fVar55 * auVar73._8_4_ * auVar51._8_4_;
            auVar74._0_4_ = auVar79._0_4_ * auVar62._0_4_;
            auVar74._4_4_ = auVar79._4_4_ * auVar62._4_4_;
            auVar74._8_4_ = auVar79._8_4_ * auVar62._8_4_;
            auVar74._12_4_ = auVar79._12_4_ * fVar56 * auVar73._12_4_ * auVar51._12_4_;
            auVar51 = NEON_ext(auVar74,auVar74,8,1);
            fVar71 = -(auVar74._0_4_ + auVar74._4_4_ + auVar51._0_4_);
            auVar62._12_4_ = fVar71;
            local_220 = local_150._0_4_;
            fStack_21c = local_150._4_4_;
            fStack_218 = local_150._8_4_;
            fStack_214 = local_150._12_4_;
            auVar75._0_4_ = local_220 * auVar52._0_4_;
            auVar75._4_4_ = fStack_21c * auVar52._4_4_;
            auVar75._8_4_ = fStack_218 * auVar52._8_4_;
            auVar75._12_4_ = fStack_214 * fVar50;
            auVar81 = NEON_ext(auVar75,auVar75,8,1);
            auVar76._8_8_ = _UNK_03889298;
            auVar76._0_8_ = _DAT_03889290;
            auVar51 = a64_TBL(ZEXT816(0),auVar52,auVar76);
            auVar80 = a64_TBL(ZEXT816(0),auVar62,auVar76);
            puVar25 = puVar38;
            uVar26 = uVar47;
            do {
              auVar120 = *(undefined1 (*) [16])(puVar25 + -2);
              uVar72 = puVar25[1];
              fVar78 = (float)((ulong)uVar72 >> 0x20);
              uVar59 = *puVar25;
              fVar54 = (float)((ulong)uVar59 >> 0x20);
              auVar91._0_4_ = auVar52._0_4_ * (float)uVar59;
              auVar91._4_4_ = auVar52._4_4_ * fVar54;
              auVar91._8_4_ = auVar52._8_4_ * (float)uVar72;
              auVar91._12_4_ = fVar50 * fVar78;
              auVar102._0_4_ = auVar62._0_4_ * (float)uVar59;
              auVar102._4_4_ = auVar62._4_4_ * fVar54;
              auVar102._8_4_ = auVar62._8_4_ * (float)uVar72;
              auVar102._12_4_ = fVar71 * fVar78;
              auVar87._0_4_ = auVar52._0_4_ * auVar120._0_4_;
              auVar87._4_4_ = auVar52._4_4_ * auVar120._4_4_;
              auVar87._8_4_ = auVar52._8_4_ * auVar120._8_4_;
              auVar87._12_4_ = fVar50 * auVar120._12_4_;
              auVar98._0_4_ = auVar62._0_4_ * auVar120._0_4_;
              auVar98._4_4_ = auVar62._4_4_ * auVar120._4_4_;
              auVar98._8_4_ = auVar62._8_4_ * auVar120._8_4_;
              auVar98._12_4_ = fVar71 * auVar120._12_4_;
              auVar88 = NEON_ext(auVar87,auVar87,8,1);
              auVar92 = NEON_ext(auVar91,auVar91,8,1);
              auVar99 = NEON_ext(auVar98,auVar98,8,1);
              auVar103 = NEON_ext(auVar102,auVar102,8,1);
              auVar93 = auVar80 ^ (auVar80 ^ auVar51) & *(undefined1 (*) [16])(puVar13 + 0x30);
              auVar105._0_4_ = auVar88._0_4_ + auVar87._0_4_ + auVar87._4_4_ + auVar93._0_4_;
              auVar105._4_4_ = auVar92._0_4_ + auVar91._0_4_ + auVar91._4_4_ + auVar93._4_4_;
              auVar105._8_4_ = auVar99._0_4_ + auVar98._0_4_ + auVar98._4_4_ + auVar93._8_4_;
              auVar105._12_4_ = auVar103._0_4_ + auVar102._0_4_ + auVar102._4_4_ + auVar93._12_4_;
              auVar104._0_8_ =
                   CONCAT44(-(uint)(auVar105._12_4_ < auVar105._8_4_),
                            -(uint)(auVar105._12_4_ < auVar105._8_4_));
              auVar88 = NEON_rev64(auVar105,4);
              auVar104._8_8_ = auVar104._0_8_;
              auVar105 = auVar105 ^ (auVar105 ^ auVar88) & auVar104;
              fVar78 = auVar105._4_4_;
              fVar54 = fVar78;
              if (0.0 <= auVar105._12_4_) {
                fVar54 = auVar105._0_4_;
                bVar113 = auVar105[3];
                if (auVar105._8_4_ <= 1.0) {
                  auVar88 = NEON_ext(auVar105,auVar105,8,1);
                  fVar84 = auVar88._0_4_;
                  fVar83 = auVar88._4_4_ - fVar84;
                  uVar129 = CONCAT44(auVar88._4_4_ - fVar84,fVar83);
                  uVar133 = NEON_frecpe(uVar129,4);
                  uVar128 = NEON_frecps(uVar129,uVar133,4);
                  fVar85 = (float)uVar133 * (float)uVar128;
                  iVar65 = -(uint)(fVar83 == 0.0);
                  uVar129 = NEON_frecps(uVar129,CONCAT44((float)((ulong)uVar133 >> 0x20) *
                                                         (float)((ulong)uVar128 >> 0x20),fVar85),4);
                  fVar85 = (float)((uint)(fVar85 * (float)uVar129) &
                                  CONCAT13(~(byte)((uint)iVar65 >> 0x18),
                                           CONCAT12(~(byte)((uint)iVar65 >> 0x10),
                                                    CONCAT11(~(byte)((uint)iVar65 >> 8),
                                                             ~(byte)iVar65))));
                  fVar83 = fVar54;
                  if (auVar105._8_4_ < 0.0) {
                    fVar83 = fVar54 - (fVar78 - fVar54) * fVar84 * fVar85;
                    bVar113 = (byte)((uint)fVar83 >> 0x18);
                  }
                  if (1.0 < auVar105._12_4_) {
                    fVar78 = fVar54 + (fVar78 - fVar54) * ((float)uVar90 - fVar84) * fVar85;
                  }
                  fVar83 = ABS(fVar83);
                  uVar94 = -(uint)(ABS(fVar78) < fVar83);
                  uVar41 = (uint)fVar83 ^ ((uint)fVar83 ^ (uint)ABS(fVar78)) & uVar94;
                  bVar11 = (byte)((uint)fVar78 >> 0x18);
                  fVar54 = (float)CONCAT13((bVar11 ^ (bVar11 ^ bVar113) & (byte)(uVar94 >> 0x18)) &
                                           0x80 ^ (byte)(uVar41 >> 0x18),(int3)uVar41);
                }
              }
              auVar86._0_12_ = auVar120._0_12_;
              auVar86._12_4_ = ABS(fVar54);
              if (ABS(fVar54) < local_170 * 0.007874016) {
                fVar54 = fVar54 - (auVar75._0_4_ + auVar75._4_4_ + auVar81._0_4_ + fVar50);
              }
              if (fVar54 <= 0.0) {
                lVar20 = (long)(int)uVar46;
                uVar46 = uVar46 + 1;
                puVar31 = (undefined8 *)(lVar35 + lVar20 * 0x20);
              }
              else {
                lVar20 = (long)(int)uVar29;
                uVar29 = uVar29 + 1;
                puVar31 = (undefined8 *)(lVar43 + lVar20 * 0x20);
              }
              puVar31[1] = auVar86._8_8_;
              *puVar31 = auVar120._0_8_;
              uVar26 = uVar26 - 1;
              puVar25 = puVar25 + 4;
              puVar31[3] = uVar72;
              puVar31[2] = uVar59;
            } while (uVar26 != 0);
          }
          lVar20 = nn::os::GetSystemTick();
          *(long *)(param_12 + 0x98) = (lVar20 - lVar37) + *(long *)(param_12 + 0x98);
          *(int *)(param_12 + 0xa0) = *(int *)(param_12 + 0xa0) + 1;
          if (uVar29 - 1 != 0 && 0 < (int)uVar29) {
            FUN_03174c60(lVar43,0,uVar29 - 1);
          }
          if (1 < (int)uVar46) {
            FUN_03174c60(lVar35,0,uVar46 - 1);
          }
          lVar37 = nn::os::GetSystemTick();
          fVar50 = fVar82;
          if ((uVar46 != 0) && (uVar29 != 0)) {
            fVar50 = (fVar82 - fVar57) + (fVar82 - fVar57);
            if (0 < (int)uVar29) {
              uVar26 = 0;
              auVar63._0_4_ = auVar79._0_4_ * fVar49;
              auVar63._4_4_ = auVar79._4_4_ * fVar53;
              auVar63._8_4_ = auVar79._8_4_ * fVar55;
              auVar63._12_4_ = auVar79._12_4_ * fVar56;
              auVar51 = NEON_ext(auVar63,auVar63,8,1);
              fVar71 = auVar51._0_4_ + auVar63._0_4_ + auVar63._4_4_;
              auVar66._0_4_ = fVar64 * fVar49;
              auVar66._4_4_ = fVar67 * fVar53;
              auVar66._8_4_ = fVar69 * fVar55;
              auVar66._12_4_ = fVar70 * fVar56;
              auVar51 = NEON_ext(auVar66,auVar66,8,1);
              fVar64 = auVar51._0_4_ + auVar66._0_4_ + auVar66._4_4_;
              auVar77 = ZEXT416((uint)(fVar50 * fVar50));
              do {
                pfVar34 = (float *)(lVar43 + uVar26 * 0x20);
                fVar67 = *pfVar34;
                fVar69 = pfVar34[1];
                fVar70 = pfVar34[2];
                fVar54 = pfVar34[3];
                if (fVar50 < fVar54) break;
                if (0 < (int)uVar46) {
                  lVar20 = lVar43 + uVar26 * 0x20;
                  uVar72 = *(undefined8 *)(lVar20 + 0x18);
                  uVar59 = *(undefined8 *)(lVar20 + 0x10);
                  fVar78 = (float)uVar59 - fVar67;
                  fVar83 = (float)((ulong)uVar59 >> 0x20) - fVar69;
                  fVar84 = (float)uVar72 - fVar70;
                  fVar85 = (float)((ulong)uVar72 >> 0x20) - fVar54;
                  auVar9._4_4_ = fVar83;
                  auVar9._0_4_ = fVar78;
                  auVar9._8_4_ = fVar84;
                  auVar9._12_4_ = fVar85;
                  auVar10._4_4_ = fVar83;
                  auVar10._0_4_ = fVar78;
                  auVar10._8_4_ = fVar84;
                  auVar10._12_4_ = fVar85;
                  auVar51 = NEON_ext(auVar9,auVar10,4,1);
                  auVar89._0_4_ = fVar78 * fVar78;
                  auVar89._4_4_ = fVar83 * fVar83;
                  auVar89._8_4_ = fVar84 * fVar84;
                  auVar89._12_4_ = fVar85 * fVar85;
                  auVar80 = NEON_ext(auVar89,auVar89,8,1);
                  pfVar34 = (float *)(lVar35 + 0x10);
                  uVar36 = (ulong)uVar46;
                  do {
                    auVar81 = *(undefined1 (*) [16])(pfVar34 + -4);
                    fVar96 = auVar81._4_4_;
                    fVar100 = auVar81._8_4_;
                    fVar101 = auVar81._12_4_;
                    if (fVar50 < fVar54 + fVar101) break;
                    fVar95 = auVar81._0_4_;
                    auVar106._0_4_ = *pfVar34 - fVar95;
                    auVar106._4_4_ = pfVar34[1] - fVar96;
                    auVar106._8_4_ = pfVar34[2] - fVar100;
                    auVar106._12_4_ = pfVar34[3] - fVar101;
                    auVar81 = NEON_ext(auVar106,auVar106,4,1);
                    fVar111 = fVar95 - fVar67;
                    fVar114 = fVar96 - fVar69;
                    fVar115 = fVar100 - fVar70;
                    fVar108 = auVar51._0_4_ * auVar106._0_4_ - fVar78 * auVar81._0_4_;
                    fVar110 = auVar51._4_4_ * auVar106._4_4_ - fVar83 * auVar81._4_4_;
                    auVar109._0_8_ = CONCAT44(fVar110,fVar108);
                    auVar109._8_4_ = fVar78 * auVar106._8_4_ - fVar84 * auVar106._0_4_;
                    auVar109._12_4_ = fVar83 * auVar106._12_4_ - fVar85 * auVar106._4_4_;
                    auVar120 = NEON_ext(auVar109,auVar109,4,1);
                    uVar72 = NEON_ext(auVar120._0_8_,auVar109._0_8_,4,1);
                    fVar126 = auVar120._0_4_;
                    fVar123 = auVar120._4_4_;
                    fVar125 = fVar126 * fVar126 + fVar123 * fVar123 + fVar108 * fVar108;
                    fVar127 = fVar126 * fVar126 + fVar123 * fVar123 + fVar108 * fVar108;
                    uVar59 = CONCAT44(fVar127,fVar125);
                    uVar129 = NEON_frecpe(uVar59,4);
                    uVar133 = NEON_frecps(uVar59,uVar129,4);
                    fVar119 = (float)uVar129 * (float)uVar133;
                    fVar124 = (float)((ulong)uVar129 >> 0x20) * (float)((ulong)uVar133 >> 0x20);
                    auVar118._0_4_ = auVar81._0_4_ * fVar126 - auVar106._0_4_ * (float)uVar72;
                    auVar118._4_4_ =
                         auVar81._4_4_ * fVar123 - auVar106._4_4_ * (float)((ulong)uVar72 >> 0x20);
                    auVar118._8_4_ = auVar106._0_4_ * fVar108 - auVar106._8_4_ * fVar126;
                    auVar118._12_4_ = auVar106._4_4_ * fVar110 - auVar106._12_4_ * fVar123;
                    auVar81 = NEON_ext(auVar118,auVar118,4,1);
                    iVar65 = -(uint)(fVar125 == 0.0);
                    iVar68 = -(uint)(fVar127 == 0.0);
                    uVar59 = NEON_frecps(uVar59,CONCAT44(fVar124,fVar119),4);
                    uVar97 = CONCAT17(~(byte)((uint)iVar68 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar68 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar68 >> 8),
                                                        CONCAT14(~(byte)iVar68,
                                                                 CONCAT13(~(byte)((uint)iVar65 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar65 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar65 >> 8),~(byte)iVar65)
                                                  ))))));
                    fVar108 = fVar111 * auVar81._0_4_;
                    fVar110 = fVar114 * auVar81._4_4_;
                    auVar130._0_4_ = fVar78 * fVar111;
                    auVar130._4_4_ = fVar83 * fVar114;
                    auVar130._8_4_ = fVar84 * fVar115;
                    auVar130._12_4_ = fVar85 * (fVar101 - fVar54);
                    auVar134._0_4_ = auVar106._0_4_ * auVar106._0_4_;
                    auVar134._4_4_ = auVar106._4_4_ * auVar106._4_4_;
                    auVar134._8_4_ = auVar106._8_4_ * auVar106._8_4_;
                    auVar134._12_4_ = auVar106._12_4_ * auVar106._12_4_;
                    auVar112._0_4_ = fVar111 * auVar106._0_4_;
                    auVar112._4_4_ = fVar114 * auVar106._4_4_;
                    auVar112._8_4_ = fVar115 * auVar106._8_4_;
                    auVar112._12_4_ = (fVar101 - fVar54) * auVar106._12_4_;
                    uVar116 = CONCAT44(fVar124 * (float)((ulong)uVar59 >> 0x20),
                                       fVar119 * (float)uVar59) & uVar97;
                    auVar120 = NEON_ext(auVar130,auVar130,8,1);
                    auVar88 = NEON_ext(auVar134,auVar134,8,1);
                    auVar81 = NEON_ext(auVar112,auVar112,8,1);
                    uVar59 = NEON_fminnm(CONCAT44((float)(uVar116 >> 0x20) *
                                                  (fVar108 + fVar110 + fVar115 * auVar118._0_4_),
                                                  (float)uVar116 *
                                                  (fVar108 + fVar110 + fVar115 * auVar118._0_4_)),
                                         uVar90,4);
                    auVar121._0_4_ = auVar80._0_4_ + auVar89._0_4_ + auVar89._4_4_;
                    auVar121._4_4_ = auVar120._0_4_ + auVar130._0_4_ + auVar130._4_4_;
                    fVar108 = auVar88._0_4_ + auVar134._0_4_ + auVar134._4_4_;
                    fVar110 = auVar81._0_4_ + auVar112._0_4_ + auVar112._4_4_;
                    auVar121._12_4_ = fVar110;
                    auVar121._8_4_ = fVar108;
                    auVar81 = NEON_frecpe(auVar121,4);
                    iVar65 = -(uint)(auVar121._0_4_ == 0.0);
                    iVar68 = -(uint)(auVar121._4_4_ == 0.0);
                    iVar131 = -(uint)(fVar108 == 0.0);
                    iVar132 = -(uint)(fVar110 == 0.0);
                    uVar117 = NEON_fmax(uVar59,0,4);
                    auVar120 = NEON_frecps(auVar121,auVar81,4);
                    fVar126 = fVar84 * auVar106._8_4_ +
                              fVar78 * auVar106._0_4_ + fVar83 * auVar106._4_4_;
                    fVar119 = fVar84 * auVar106._8_4_ +
                              fVar78 * auVar106._0_4_ + fVar83 * auVar106._4_4_;
                    auVar135._0_4_ = auVar81._0_4_ * auVar120._0_4_;
                    auVar135._4_4_ = auVar81._4_4_ * auVar120._4_4_;
                    auVar135._8_4_ = auVar81._8_4_ * auVar120._8_4_;
                    auVar135._12_4_ = auVar81._12_4_ * auVar120._12_4_;
                    auVar81 = NEON_frecps(auVar121,auVar135,4);
                    fVar108 = auVar135._0_4_ * auVar81._0_4_;
                    fVar111 = auVar135._4_4_ * auVar81._4_4_;
                    fVar114 = auVar135._8_4_ * auVar81._8_4_;
                    fVar115 = auVar135._12_4_ * auVar81._12_4_;
                    auVar122._0_4_ =
                         (float)CONCAT13((byte)((uint)fVar108 >> 0x18) &
                                         ~(byte)((uint)iVar65 >> 0x18),
                                         CONCAT12((byte)((uint)fVar108 >> 0x10) &
                                                  ~(byte)((uint)iVar65 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar108 >> 8) &
                                                           ~(byte)((uint)iVar65 >> 8),
                                                           SUB41(fVar108,0) & ~(byte)iVar65)));
                    auVar122[4] = SUB41(fVar111,0) & ~(byte)iVar68;
                    auVar122[5] = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar68 >> 8);
                    auVar122[6] = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
                    auVar122[7] = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
                    auVar122[8] = SUB41(fVar114,0) & ~(byte)iVar131;
                    auVar122[9] = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar131 >> 8);
                    auVar122[10] = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar131 >> 0x10);
                    auVar122[0xb] = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar131 >> 0x18);
                    auVar122[0xc] = SUB41(fVar115,0) & ~(byte)iVar132;
                    auVar122[0xd] = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar132 >> 8);
                    auVar122[0xe] = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10);
                    auVar122[0xf] = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18);
                    auVar81 = NEON_ext(auVar122,auVar122,8,1);
                    fVar108 = ((float)uVar117 * fVar126 - fVar110) * auVar81._0_4_;
                    fVar110 = ((float)(uVar117 >> 0x20) * fVar119 - fVar110) * auVar81._0_4_;
                    uVar59 = NEON_fminnm(CONCAT44(fVar110,fVar108),uVar90,4);
                    uVar59 = NEON_fmax(uVar59,0,4);
                    fVar123 = (float)uVar59;
                    fVar124 = (float)((ulong)uVar59 >> 0x20);
                    uVar59 = NEON_fminnm(CONCAT44((auVar121._4_4_ + fVar119 * fVar124) *
                                                  auVar122._0_4_,
                                                  (auVar121._4_4_ + fVar126 * fVar123) *
                                                  auVar122._0_4_),uVar90,4);
                    uVar116 = NEON_fmax(uVar59,0,4);
                    uVar116 = uVar116 ^ (uVar116 ^ uVar117) &
                                        CONCAT44(-(uint)(fVar124 == fVar110),
                                                 -(uint)(fVar123 == fVar108)) & uVar97;
                    fVar108 = (float)uVar116;
                    fVar111 = (float)(uVar116 >> 0x20);
                    fVar110 = fVar67 + fVar78 * fVar108;
                    fVar114 = fVar69 + fVar83 * fVar111;
                    fVar115 = fVar70 + fVar84 * fVar108;
                    fVar111 = fVar54 + fVar85 * fVar111;
                    fVar95 = fVar110 - (fVar95 + auVar106._0_4_ * fVar123);
                    fVar108 = fVar114 - (fVar96 + auVar106._4_4_ * fVar124);
                    fVar100 = fVar115 - (fVar100 + auVar106._8_4_ * fVar123);
                    fVar96 = fVar95 * fVar95 + fVar108 * fVar108 + fVar100 * fVar100;
                    uVar97 = CONCAT44(fVar95 * fVar95 + fVar108 * fVar108 + fVar100 * fVar100,fVar96
                                     );
                    auVar107._0_4_ = fVar49 * (fVar110 + fVar95 * -0.5);
                    auVar107._4_4_ = fVar53 * (fVar114 + fVar108 * -0.5);
                    auVar107._8_4_ = fVar55 * (fVar115 + fVar100 * -0.5);
                    auVar107._12_4_ =
                         fVar56 * (fVar111 +
                                  (fVar111 - (fVar101 + auVar106._12_4_ * fVar124)) * -0.5);
                    auVar81 = NEON_ext(auVar107,auVar107,8,1);
                    fVar100 = auVar81._0_4_ + auVar107._0_4_ + auVar107._4_4_;
                    bVar15 = false;
                    bVar17 = true;
                    bVar18 = false;
                    if (fVar96 < auVar77._0_4_) {
                      bVar15 = false;
                      bVar17 = false;
                      bVar18 = true;
                      if (!NAN(fVar100) && !NAN(fVar71)) {
                        bVar15 = fVar100 < fVar71;
                        bVar17 = fVar100 == fVar71;
                        bVar18 = false;
                      }
                    }
                    bVar16 = false;
                    if ((!bVar17 && bVar15 == bVar18) &&
                       (bVar16 = false, !NAN(fVar100) && !NAN(fVar64))) {
                      bVar16 = fVar100 < fVar64;
                    }
                    if (bVar16) {
                      uVar59 = NEON_frsqrte(uVar97,4);
                      fVar50 = (float)uVar59;
                      fVar100 = (float)((ulong)uVar59 >> 0x20);
                      uVar59 = NEON_frsqrts(uVar97,CONCAT44(fVar100 * fVar100,fVar50 * fVar50),4);
                      fVar50 = fVar50 * (float)uVar59;
                      fVar100 = fVar100 * (float)((ulong)uVar59 >> 0x20);
                      uVar59 = NEON_frsqrts(uVar97,CONCAT44(fVar100 * fVar100,fVar50 * fVar50),4);
                      iVar65 = -(uint)(fVar96 <= 0.0);
                      fVar96 = fVar96 * (float)uVar59 * fVar50;
                      fVar50 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) &
                                               ~(byte)((uint)iVar65 >> 0x18),
                                               CONCAT12((byte)((uint)fVar96 >> 0x10) &
                                                        ~(byte)((uint)iVar65 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar96 >> 8) &
                                                                 ~(byte)((uint)iVar65 >> 8),
                                                                 SUB41(fVar96,0) & ~(byte)iVar65)));
                      auVar77._8_8_ = 0;
                      auVar77._0_8_ = uVar97;
                    }
                    uVar36 = uVar36 - 1;
                    pfVar34 = pfVar34 + 8;
                  } while (uVar36 != 0);
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar29);
            }
            fVar50 = fVar57 + fVar50 * 0.5;
          }
          lVar20 = nn::os::GetSystemTick();
          *(long *)(param_12 + 0xb0) = (lVar20 - lVar37) + *(long *)(param_12 + 0xb0);
          auVar80._4_4_ = auVar79._4_4_;
          auVar80._0_4_ = auVar79._0_4_;
          auVar80._8_4_ = auVar79._8_4_;
          auVar80._12_4_ = auVar79._12_4_;
          *(int *)(param_12 + 0xb8) = *(int *)(param_12 + 0xb8) + 1;
          bVar39 = (bool)(bVar39 & fVar82 <= fVar50 * 1.01);
          *(int *)(param_12 + 0xe4) = *(int *)(param_12 + 0xe4) + 1;
          fVar82 = fVar50;
        }
      }
      else {
        *(int *)(param_12 + 0xd8) = *(int *)(param_12 + 0xd8) + 1;
      }
LAB_0316b450:
      iVar65 = iVar7;
      if (iVar7 <= iVar6) {
        iVar65 = iVar6;
      }
      iVar68 = iVar6;
      if (iVar7 <= iVar6) {
        iVar68 = iVar7;
      }
      uVar44 = uVar44 + 1;
      *(float *)(*param_11 + (long)(iVar68 + ((iVar65 + -1) * iVar65 >> 1)) * 4) = fVar82;
      if (uVar44 == uVar24) goto LAB_0316b4b8;
      lVar37 = *param_10;
    } while( true );
  }
LAB_0316b5e0:
  iVar12 = local_128;
  lVar40 = local_130;
  if (local_130 == lVar30) {
    local_138 = local_138 & 0xffffffff00000000;
  }
  lVar43 = *(long *)(lVar33 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar43;
  }
  lVar43 = *(long *)(lVar43 + 8);
  uVar47 = (ulong)(int)(iVar12 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar43 + 0x10) < uVar47) || (*(long *)(lVar43 + 0x18) != uVar47 + lVar40)) ||
     (*(long *)(lVar43 + 0x28) == lVar40)) {
    if (lVar40 != 0) {
      if (*(ulong *)(lVar43 + 0x10) < uVar47) {
        *(int *)(*(long *)(lVar43 + 8) + 0x20) = *(int *)(*(long *)(lVar43 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar43 + 0x40) + 0x18))(*(long **)(lVar43 + 0x40),lVar40);
      }
      else if (*(long *)(lVar43 + 0x18) == uVar47 + lVar40) {
        *(long *)(lVar43 + 0x18) = lVar40;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar43,lVar40);
      }
    }
  }
  else {
    *(long *)(lVar43 + 0x18) = lVar40;
  }
  uVar45 = local_138;
  puVar14 = PTR_PTR_0434a080;
  uVar47 = local_138 >> 0x20;
  local_138 = uVar47 << 0x20;
  if ((lVar30 != 0) && (-1 < (long)uVar45)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar30,(uVar47 & 0x3fffffff) << 5);
  }
  iVar12 = local_108;
  lVar43 = local_110;
  lVar40 = local_120;
  if (local_110 == local_120) {
    local_118 = local_118 & 0xffffffff00000000;
  }
  lVar30 = *(long *)(lVar33 + 0x38d490);
  if (lVar30 == 0) {
    lVar30 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar30;
  }
  lVar33 = *(long *)(lVar30 + 8);
  uVar45 = (ulong)(int)(iVar12 * 0x20 + 0x7fU & 0xffffff80);
  uVar47 = local_118;
  if (((*(ulong *)(lVar33 + 0x10) < uVar45) || (*(long *)(lVar33 + 0x18) != uVar45 + lVar43)) ||
     (*(long *)(lVar33 + 0x28) == lVar43)) {
    if (lVar43 != 0) {
      if (*(ulong *)(lVar33 + 0x10) < uVar45) {
        *(int *)(*(long *)(lVar33 + 8) + 0x20) = *(int *)(*(long *)(lVar33 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar33 + 0x40) + 0x18))(*(long **)(lVar33 + 0x40),lVar43);
        uVar47 = local_118;
      }
      else if (*(long *)(lVar33 + 0x18) == uVar45 + lVar43) {
        *(long *)(lVar33 + 0x18) = lVar43;
        FUN_032ce944();
        uVar47 = local_118;
      }
      else {
        FUN_032ceaf0(lVar33,lVar43);
        uVar47 = local_118;
      }
    }
  }
  else {
    *(long *)(lVar33 + 0x18) = lVar43;
  }
  local_118 = uVar47 & 0xffffffff00000000;
  if ((lVar40 != 0) && (-1 < (long)local_118)) {
    (**(code **)(*(long *)puVar14 + 0x18))(puVar14,lVar40,(uVar47 >> 0x20 & 0x3fffffff) << 5);
  }
  uVar90 = 1;
joined_r0x0316b6ec:
  if ((local_f0 != 0) && (local_e8 != '\0')) {
    FUN_032d5b34(local_f0,&DAT_0390f40e);
  }
  lVar33 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar33 - lVar19) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return uVar90;
LAB_0316b4b8:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar45) goto LAB_0316b500;
  goto LAB_0316ad80;
LAB_0316b500:
  if ((-1 < iVar12) && (puVar21 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar14 + 0x18))(puVar14,puVar21,iVar12 << 2);
  }
  lVar37 = *(long *)(lVar33 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar37;
  }
  lVar20 = *(long *)(lVar37 + 8);
  uVar47 = (ulong)(int)(iVar42 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar20 + 0x10) < uVar47) || (*(long *)(lVar20 + 0x18) != lVar35 + uVar47)) ||
     (*(long *)(lVar20 + 0x28) == lVar35)) {
    if (lVar35 != 0) {
      if (*(ulong *)(lVar20 + 0x10) < uVar47) {
        *(int *)(*(long *)(lVar20 + 8) + 0x20) = *(int *)(*(long *)(lVar20 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar20 + 0x40) + 0x18))(*(long **)(lVar20 + 0x40),lVar35,uVar47);
      }
      else if (*(long *)(lVar20 + 0x18) == lVar35 + uVar47) {
        *(long *)(lVar20 + 0x18) = lVar35;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar20,lVar35,uVar47);
      }
    }
    lVar37 = *(long *)(lVar33 + 0x38d490);
  }
  else {
    *(long *)(lVar20 + 0x18) = lVar35;
  }
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar33 + 0x38d490) = lVar37;
  }
  lVar35 = *(long *)(lVar37 + 8);
  if (((*(ulong *)(lVar35 + 0x10) < uVar47) || (*(long *)(lVar35 + 0x18) != lVar43 + uVar47)) ||
     (*(long *)(lVar35 + 0x28) == lVar43)) {
    if (lVar43 != 0) {
      if (*(ulong *)(lVar35 + 0x10) < uVar47) {
        *(int *)(*(long *)(lVar35 + 8) + 0x20) = *(int *)(*(long *)(lVar35 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar35 + 0x40) + 0x18))(*(long **)(lVar35 + 0x40),lVar43,uVar47);
      }
      else if (*(long *)(lVar35 + 0x18) == lVar43 + uVar47) {
        *(long *)(lVar35 + 0x18) = lVar43;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar35,lVar43,uVar47);
      }
    }
  }
  else {
    *(long *)(lVar35 + 0x18) = lVar43;
  }
  lVar43 = nn::os::GetSystemTick();
  *(long *)(param_12 + 0x80) = (lVar43 - lVar40) + *(long *)(param_12 + 0x80);
  *(int *)(param_12 + 0x88) = *(int *)(param_12 + 0x88) + 1;
  goto LAB_0316b5e0;
}


