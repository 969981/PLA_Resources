/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03028830; name: FUN_03028830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03028830(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  MutexType *pMVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined2 *puVar18;
  size_t sVar19;
  undefined4 uVar20;
  uint uVar21;
  long lVar22;
  uint *puVar23;
  long *plVar24;
  uint uVar25;
  long *plVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  char *__s;
  long *plVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  int iVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long lVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  int iVar59;
  undefined8 uVar60;
  undefined8 local_298;
  ulong uStack_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 local_280;
  undefined1 *local_278;
  uint local_270;
  uint local_26c;
  undefined1 auStack_268 [64];
  int local_228;
  uint local_224;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = (long)&PTR_LAB_042b1ae8;
  *param_1 = (long)&PTR_LAB_042b1668;
  param_1[4] = (long)&PTR_LAB_042b1d70;
  FUN_02fff1b0();
  FUN_03014b98();
  param_1[0x91] = 0;
  param_1[0x97] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x9a] = 0;
  lVar4 = tpidr_el0;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar12 = param_1 + 0x9a;
  puVar11 = (undefined4 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x410,0);
  lVar22 = 0;
  do {
    lVar55 = lVar22 + 0x10;
    *(undefined8 *)((long)puVar11 + lVar22 + 0x10) = 0xffffff00ffffff;
    *(undefined8 *)((long)puVar11 + lVar22 + 0x18) = 0xffffff00ffffff;
    lVar22 = lVar55;
  } while (lVar55 != 0x400);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined8 *)(puVar11 + 2) = 0;
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      lVar22 = *(long *)(lVar4 + 0x38d490);
      if (lVar22 == 0) {
        lVar22 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar22;
      }
      plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x410);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = (long)puVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f333333;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0x99] = param_1[0x9a];
  FUN_0303e870(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  memset(param_1 + 0xd4,0,0x148);
  uVar58 = 0;
  param_1[0xfe] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = -0x8000000000000000;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = -0x8000000000000000;
  param_1[0x106] = 0;
  param_1[0x107] = -0x8000000000000000;
  param_1[0x108] = 0;
  param_1[0x109] = -0x8000000000000000;
  param_1[0x10a] = 0;
  param_1[0x10b] = -0x8000000000000000;
  param_1[0x10c] = 0;
  param_1[0x10d] = -0x8000000000000000;
  param_1[0x110] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)((long)param_1 + 0x8c4) = 0x80000000;
  param_1[0x11a] = 0;
  param_1[0x11b] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x11d] = 0;
  param_1[0x125] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_032c0d94(ZEXT816(0x3f333333),param_1 + 0x129,(long)(int)param_2[2]);
  *(undefined1 *)(param_1 + 300) = 0;
  auVar36._8_8_ = uVar58;
  auVar36._0_8_ = 0x3f333333;
  FUN_032c0d94(auVar36,param_1 + 0x12d,(long)(int)param_2[6]);
  *(undefined1 *)(param_1 + 0x130) = 0;
  if (DAT_0442d3b0 == 0) {
    FUN_0331fefc(&local_298,&local_280,0x200);
    FUN_0332448c(&local_298,
                 "Shape dispatch table is not initialized! Please call hknpShapeFunctionsSingleton::setDefaults() before creating world."
                );
    FUN_03320af0(0x34739d70,&local_280,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Dynamics/World/hknpWorld.cpp"
                 ,0xae);
    FUN_0331ff7c(&local_298);
  }
  uStack_290 = param_2[3];
  local_298 = 0;
  local_288 = (undefined4)param_2[2];
  local_284 = (char)param_2[10] != '\0';
  FUN_02fff350(param_1 + 5,&local_298);
  param_1[0x100] = 0;
  uVar29 = param_1[0x110];
  param_1[0xff] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[5] = (long)param_1;
  *(undefined4 *)(param_1 + 0x101) = 1;
  param_1[0x121] = 0;
  puVar7 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if ((char *)(uVar29 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      param_1[0x110] = 0;
    }
    else {
      sVar19 = strlen(__s);
      uVar9 = (int)sVar19 + 1;
      puVar14 = (undefined8 *)
                (**(code **)(*(long *)puVar7 + 0x10))
                          (puVar7,(long)((sVar19 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar14 = puVar7;
      *(uint *)(puVar14 + 1) = uVar9;
      memcpy(puVar14 + 2,__s,(ulong)uVar9);
      param_1[0x110] = (ulong)(puVar14 + 2) | 1;
    }
    if ((uVar29 & 1) != 0) {
      lVar22 = *(long *)(lVar4 + 0x38d490);
      if (lVar22 == 0) {
        lVar22 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar22;
      }
      plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
      *(undefined8 *)(uVar29 - 0x11) = 0;
      (**(code **)(*plVar12 + 0x18))
                (plVar12,(undefined8 *)(uVar29 - 0x11),(long)*(int *)(uVar29 - 9) + 0x10);
    }
  }
  auVar36 = *(undefined1 (*) [16])(param_2 + 0x10);
  param_1[0x10f] = auVar36._8_8_;
  param_1[0x10e] = auVar36._0_8_;
  *(int *)(param_1 + 0x111) = (int)param_2[0x12];
  *(undefined1 *)(param_1 + 0x124) = 0;
  uVar29 = param_2[1];
  if ((uVar29 != 0) && (*(long *)(uVar29 + 8) != 0)) {
    plVar12 = (long *)(uVar29 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)param_1[0x94];
  param_1[0x94] = uVar29;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar10 = plVar12 + 2;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))();
    }
  }
  param_1[0xb2] =
       CONCAT44(*(undefined4 *)((long)param_2 + 0xdc),*(undefined4 *)((long)param_2 + 0xdc));
  *(int *)((long)param_1 + 0x59c) = (int)param_2[0x21];
  *(int *)(param_1 + 0xb3) = (int)param_2[0x1c];
  param_1[0xb1] = CONCAT44((int)param_2[0x1b],(int)param_2[0x1b]);
  if ((char)param_2[0x23] == '\0') {
    fVar35 = *(float *)((long)param_2 + 0xf4);
    fVar42 = *(float *)(param_2 + 0x1f);
    fVar32 = fVar35 / fVar42;
    fVar46 = fVar35 * 0.5;
    *(float *)(param_1 + 0xa6) = fVar35;
    fVar53 = fVar32 * (float)param_1[0xae];
    fVar35 = fVar42 / fVar35;
    param_1[0xa7] = CONCAT44(fVar42,fVar42);
    *(float *)(param_1 + 0xc2) = fVar35;
    *(float *)((long)param_1 + 0x614) = fVar32;
    param_1[0xc0] = CONCAT44(fVar53,fVar53);
    *(float *)((long)param_1 + 0x534) = fVar46;
    *(float *)(param_1 + 0xc3) = fVar42 / fVar46;
    fVar46 = fVar46 / fVar42;
    *(float *)((long)param_1 + 0x61c) = fVar46;
    fVar53 = -(fVar46 * (float)param_1[0xae]);
    fVar42 = (float)param_1[0xa8];
    lVar22 = CONCAT44(fVar42,fVar42);
    param_1[0xbf] = (ulong)(uint)fVar35;
    param_1[0xbe] = CONCAT44(fVar35,fVar35);
    param_1[0xc1] = CONCAT44(fVar53,fVar53);
    param_1[0xbd] = (ulong)(uint)fVar32;
    param_1[0xbc] = CONCAT44(fVar32,fVar32);
    iVar44 = *(int *)((long)param_2 + 0xfc);
    uVar29 = param_2[0x20];
    lVar55 = param_1[0xaa];
    *(int *)(param_1 + 0xb4) = iVar44;
    *(int *)(param_1 + 0xb5) = (int)uVar29;
    param_1[0xa8] = lVar22;
    *(float *)((long)param_1 + 0x5a4) = 1.0 / (float)iVar44;
    *(float *)((long)param_1 + 0x5ac) = 1.0 / (float)(int)uVar29;
    fVar35 = 1.0 / fVar42;
    param_1[0xa9] = CONCAT44(fVar35,fVar35);
    if ((float)lVar55 == 0.0) {
      lVar55 = NEON_fmov(0x3f800000,4);
    }
    else {
      uVar58 = NEON_frecpe(lVar55,4);
      uVar60 = NEON_frecps(lVar55,uVar58,4);
      fVar53 = (float)uVar58 * (float)uVar60;
      fVar48 = (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
      uVar58 = NEON_frecps(lVar55,CONCAT44(fVar48,fVar53),4);
      lVar55 = CONCAT44(fVar42 * fVar48 * (float)((ulong)uVar58 >> 0x20),
                        fVar42 * fVar53 * (float)uVar58);
    }
    fVar53 = (float)param_1[0xac];
    param_1[0xab] = lVar55;
    if (fVar42 <= fVar53) {
      lVar22 = CONCAT44(fVar53,fVar53);
    }
    param_1[0xac] = lVar22;
    fVar41 = (float)param_1[0x10e];
    fVar54 = fVar41 * fVar42;
    fVar51 = (float)((ulong)param_1[0x10e] >> 0x20);
    fVar56 = fVar51 * fVar42;
    fVar52 = (float)param_1[0x10f];
    fVar57 = fVar52 * fVar42;
    fVar42 = fVar42 * (1.0 / (float)iVar44);
    uVar49 = NEON_scvtf(CONCAT44(iVar44,iVar44),4);
    param_1[0xad] = CONCAT44(fVar42,fVar42);
    fVar53 = fVar52 * fVar52 + fVar41 * fVar41 + fVar51 * fVar51;
    uVar47 = CONCAT44(fVar52 * fVar52 + fVar41 * fVar41 + fVar51 * fVar51,fVar53);
    fVar43 = fVar35 * (float)uVar49;
    fVar48 = fVar54 * fVar54 + fVar56 * fVar56 + fVar57 * fVar57;
    uVar50 = CONCAT44(fVar54 * fVar54 + fVar56 * fVar56 + fVar57 * fVar57,fVar48);
    param_1[0xc1] = CONCAT44(-(fVar46 * fVar43),-(fVar46 * fVar43));
    param_1[0xc0] = CONCAT44(fVar32 * fVar43,fVar32 * fVar43);
    uVar58 = NEON_frsqrte(uVar47,4);
    param_1[0xb9] = CONCAT44((float)((ulong)param_1[0x10f] >> 0x20) * fVar42,fVar52 * fVar42);
    param_1[0xb8] = CONCAT44(fVar51 * fVar42,fVar41 * fVar42);
    uVar60 = NEON_frsqrte(uVar50,4);
    fVar42 = (float)uVar60;
    fVar41 = (float)((ulong)uVar60 >> 0x20);
    uVar60 = NEON_frsqrts(uVar50,CONCAT44(fVar41 * fVar41,fVar42 * fVar42),4);
    fVar42 = fVar42 * (float)uVar60;
    fVar41 = fVar41 * (float)((ulong)uVar60 >> 0x20);
    fVar32 = (float)uVar58;
    fVar46 = (float)((ulong)uVar58 >> 0x20);
    uVar58 = NEON_frsqrts(uVar47,CONCAT44(fVar46 * fVar46,fVar32 * fVar32),4);
    fVar32 = fVar32 * (float)uVar58;
    fVar46 = fVar46 * (float)((ulong)uVar58 >> 0x20);
    uVar58 = NEON_frsqrts(uVar47,CONCAT44(fVar46 * fVar46,fVar32 * fVar32),4);
    uVar60 = NEON_frsqrts(uVar50,CONCAT44(fVar41 * fVar41,fVar42 * fVar42),4);
    iVar59 = -(uint)(fVar48 <= 0.0);
    fVar48 = fVar48 * (float)uVar60 * fVar42;
    param_1[0xae] = CONCAT44(fVar35 * (float)((ulong)uVar49 >> 0x20),fVar43);
    iVar44 = -(uint)(fVar53 <= 0.0);
    fVar53 = fVar53 * (float)uVar58 * fVar32;
    fVar32 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                             CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                      CONCAT11((byte)((uint)fVar53 >> 8) &
                                               ~(byte)((uint)iVar44 >> 8),
                                               SUB41(fVar53,0) & ~(byte)iVar44)));
    param_1[0xbb] =
         CONCAT44(CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar59))),fVar57);
    param_1[0xba] = CONCAT44(fVar56,fVar54);
    if (fVar32 == 0.0) {
      fVar32 = 9.81;
    }
    *(float *)(param_1 + 0xb6) = fVar32;
    plVar12 = (long *)param_2[0xb];
    if (plVar12 == (long *)0x0) goto LAB_03028d28;
LAB_0302a7a0:
    plVar10 = (long *)param_1[0x113];
    if (plVar10 != plVar12) {
      if (plVar12[1] != 0) {
        plVar12 = plVar12 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10 = (long *)param_1[0x113];
        plVar12 = (long *)param_2[0xb];
      }
      param_1[0x113] = (long)plVar12;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar12 = plVar10 + 2;
        do {
          lVar22 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 + -1 == 0) goto LAB_0302a7f8;
      }
    }
  }
  else {
    plVar12 = param_1 + 0xc9;
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,0);
    FUN_0303ebf8();
    plVar24 = (long *)*plVar12;
    if ((plVar24 != plVar10) && (*plVar12 = (long)plVar10, plVar24 != (long *)0x0)) {
      if (plVar24[1] != 0) {
        plVar10 = plVar24 + 2;
        do {
          lVar22 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar24 + 0x18))();
        }
      }
      plVar10 = (long *)*plVar12;
    }
    local_280 = (long *)CONCAT44(*(undefined4 *)((long)param_2 + 0xf4),
                                 *(undefined4 *)((long)param_2 + 0x11c));
    local_278 = (undefined1 *)param_2[0x1f];
    local_270 = (uint)param_2[0x24];
    local_26c = *(uint *)((long)param_2 + 0x124);
    FUN_0303ec5c(plVar10,&local_280);
    auVar45._0_8_ = param_1[0xa8];
    auVar45._8_8_ = 0;
    auVar40._0_8_ = param_1[0xac];
    auVar40._8_8_ = 0;
    FUN_0303ecb8(auVar45,auVar40,param_1[0xc9],param_1 + 0x10e,param_1 + 0xa6);
    plVar12 = (long *)param_2[0xb];
    if (plVar12 != (long *)0x0) goto LAB_0302a7a0;
LAB_03028d28:
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x78,0);
    FUN_03012d10(plVar12,0x40);
    plVar10 = (long *)param_1[0x113];
    if (((plVar10 != plVar12) && (param_1[0x113] = (long)plVar12, plVar10 != (long *)0x0)) &&
       (plVar10[1] != 0)) {
      plVar12 = plVar10 + 2;
      do {
        lVar22 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 != 0) goto LAB_03028d9c;
LAB_0302a7f8:
      (**(code **)(*plVar10 + 0x18))();
    }
  }
LAB_03028d9c:
  *(undefined4 *)((long)param_1 + 0x80c) = 0;
  if (*(char *)((long)param_2 + 0x105) == '\0') {
    uVar20 = 0x80;
  }
  else {
    uVar20 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x80c) = uVar20;
  FUN_0302b044(param_1[0x113] + 0x18,param_1,&LAB_0302b11c,0);
  FUN_0302b144(param_1[0x113] + 0x28,param_1,&LAB_0302b21c,0);
  FUN_02ff1f1c(param_1 + 0x117,0,*(undefined4 *)(param_1[0x113] + 0x50),0);
  plVar12 = (long *)param_2[0xc];
  if (plVar12 == (long *)0x0) {
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x70,0);
    plVar12[1] = 0xffffffff;
    plVar12[2] = 1;
    *plVar12 = (long)&PTR_LAB_042c7870;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = -0x8000000000000000;
    plVar12[10] = 0;
    *(undefined4 *)((long)plVar12 + 0x5c) = 0xffffffff;
    *(undefined4 *)(plVar12 + 0xc) = 0;
    *(undefined4 *)((long)plVar12 + 100) = 0xffffffff;
    lVar22 = plVar12[9];
    *(undefined4 *)(plVar12 + 0xb) = 0;
    iVar44 = FUN_03016d6c(plVar12 + 8,0,0x10,0x10);
    if (-1 < iVar44) {
      FUN_0301707c(plVar12 + 3,plVar12,(int)lVar22);
    }
    plVar10 = (long *)param_1[0x114];
    if ((plVar10 != plVar12) && (param_1[0x114] = (long)plVar12, plVar10 != (long *)0x0)) {
      if (plVar10[1] != 0) {
        plVar12 = plVar10 + 2;
        do {
          lVar22 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      plVar12 = (long *)param_1[0x114];
    }
    fVar32 = *(float *)(param_1 + 0x10e);
    fVar32 = fVar32 * fVar32;
    fVar35 = *(float *)((long)param_1 + 0x874) * *(float *)((long)param_1 + 0x874);
    fVar46 = *(float *)(param_1 + 0x10f) * *(float *)(param_1 + 0x10f);
    uVar58 = CONCAT44(fVar32 + fVar35 + fVar46,fVar32 + fVar35 + fVar46);
    uVar60 = NEON_frsqrte(uVar58,4);
    fVar32 = (float)uVar60;
    fVar35 = (float)((ulong)uVar60 >> 0x20);
    uVar60 = NEON_frsqrts(uVar58,CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
    fVar32 = fVar32 * (float)uVar60;
    fVar35 = fVar35 * (float)((ulong)uVar60 >> 0x20);
    NEON_frsqrts(uVar58,CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
    FUN_0301713c(plVar12);
  }
  else {
    plVar10 = (long *)param_1[0x114];
    if (plVar10 != plVar12) {
      if (plVar12[1] != 0) {
        plVar12 = plVar12 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10 = (long *)param_1[0x114];
        plVar12 = (long *)param_2[0xc];
      }
      param_1[0x114] = (long)plVar12;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar12 = plVar10 + 2;
        do {
          lVar22 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    }
  }
  FUN_0302b240(param_1[0x114] + 0x28,param_1,&LAB_0302b318,0);
  plVar12 = (long *)param_2[0xd];
  if (plVar12 == (long *)0x0) {
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x820,0);
    memset(plVar12 + 4,0,0x800);
    *plVar12 = (long)&PTR_LAB_042da4a0;
    plVar12[1] = 0xffffffff;
    plVar12[2] = 1;
    plVar12[3] = 0;
    lVar22 = 0;
    do {
      lVar55 = lVar22 + 0x40;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x30) = 1;
      *(undefined **)((long)plVar12 + lVar22 + 0x20) = &DAT_042da458;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x28) = 0xffffffff;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x3c) = 0xffffffff;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x44) = 0x13dcccccd;
      *(undefined4 *)((long)plVar12 + lVar22 + 0x4c) = 1;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x50) = 0x3d4ccccd3c23d70a;
      *(undefined8 *)((long)plVar12 + lVar22 + 0x58) = 0x3c23d70a3a83126f;
      lVar22 = lVar55;
    } while (lVar55 != 0x800);
    plVar10 = (long *)param_1[0x115];
    if (((plVar10 != plVar12) && (param_1[0x115] = (long)plVar12, plVar10 != (long *)0x0)) &&
       (plVar10[1] != 0)) {
      plVar12 = plVar10 + 2;
      do {
        lVar22 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    local_280 = (long *)CONCAT62(CONCAT51(local_280._3_5_,*(undefined1 *)((long)param_2 + 0x94)),
                                 *(undefined2 *)((long)param_2 + 0xe4));
    FUN_0303ee44(param_1[0x115],&local_280);
  }
  else {
    plVar10 = (long *)param_1[0x115];
    if (plVar10 != plVar12) {
      if (plVar12[1] != 0) {
        plVar12 = plVar12 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10 = (long *)param_1[0x115];
        plVar12 = (long *)param_2[0xd];
      }
      param_1[0x115] = (long)plVar12;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar12 = plVar10 + 2;
        do {
          lVar22 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    }
  }
  FUN_0303de20(param_1[0x115] + 0x18,param_1,&LAB_0302d66c,0);
  FUN_02ff1f1c(param_1 + 0x11a,0,0x20,0);
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,0);
  *plVar12 = (long)&PTR_LAB_042b23d8;
  plVar12[1] = 0xffffffff;
  plVar12[2] = 1;
  plVar12[3] = 0;
  plVar12[4] = -0x100000000;
  plVar12[5] = 0;
  plVar12[8] = -0x8000000000000000;
  plVar12[6] = -0x8000000000000000;
  plVar12[7] = 0;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  pMVar13 = (MutexType *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,0);
  nn::os::InitializeMutex(pMVar13,true,0);
  plVar12[9] = (long)pMVar13;
  *(undefined4 *)(plVar12 + 10) = 0;
  plVar10 = (long *)param_1[0x116];
  if (((plVar10 == plVar12) || (param_1[0x116] = (long)plVar12, plVar10 == (long *)0x0)) ||
     (plVar10[1] == 0)) {
LAB_0302913c:
    plVar12 = (long *)param_2[0x22];
    if (plVar12 == (long *)0x0) goto LAB_03029144;
LAB_0302a1f0:
    plVar10 = (long *)param_1[0xca];
    if (plVar10 != plVar12) {
      if (plVar12[1] != 0) {
        plVar12 = plVar12 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10 = (long *)param_1[0xca];
        plVar12 = (long *)param_2[0x22];
      }
      param_1[0xca] = (long)plVar12;
      if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) goto LAB_030291cc;
      plVar12 = plVar10 + 2;
      do {
        lVar22 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 != 0) goto LAB_030291cc;
      goto LAB_0302a248;
    }
  }
  else {
    plVar12 = plVar10 + 2;
    do {
      lVar22 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_0302913c;
    (**(code **)(*plVar10 + 0x18))();
    plVar12 = (long *)param_2[0x22];
    if (plVar12 != (long *)0x0) goto LAB_0302a1f0;
LAB_03029144:
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,0);
    *(undefined4 *)(plVar12 + 4) = 0;
    *plVar12 = (long)&PTR_LAB_042dacb8;
    plVar12[1] = 0xffffffff;
    plVar12[2] = 1;
    plVar12[3] = 0;
    plVar10 = (long *)param_1[0xca];
    if (((plVar10 != plVar12) && (param_1[0xca] = (long)plVar12, plVar10 != (long *)0x0)) &&
       (plVar10[1] != 0)) {
      plVar12 = plVar10 + 2;
      do {
        lVar22 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
LAB_0302a248:
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
LAB_030291cc:
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar12 = param_1 + 0x11f;
  lVar22 = (**(code **)(*plVar10 + 0x10))(plVar10,0x50,0);
  FUN_032c03fc();
  param_1[0xfd] = lVar22;
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)((long)param_2 + 0x95);
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (*(char *)((long)param_2 + 0x95) == '\0') {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    lVar22 = (**(code **)(*plVar10 + 0x10))(plVar10,0x78,0);
    FUN_030459d4(lVar22,param_1);
    if ((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) {
      plVar10 = (long *)(lVar22 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)*plVar12;
    *plVar12 = lVar22;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar24 = plVar10 + 2;
      do {
        lVar22 = *plVar24 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *plVar24 = lVar22;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x0302a954;
    }
  }
  else {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    puVar14 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x90,0);
    FUN_030459d4(puVar14,param_1);
    *puVar14 = &PTR_LAB_042b2668;
    *(undefined1 *)(puVar14 + 0xf) = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0x8000000000000000;
    if ((puVar14 != (undefined8 *)0x0) && (puVar14[1] != 0)) {
      plVar10 = puVar14 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)*plVar12;
    *plVar12 = (long)puVar14;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar24 = plVar10 + 2;
      do {
        lVar22 = *plVar24 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *plVar24 = lVar22;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x0302a954:
      if (lVar22 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,0);
  plVar10[1] = 0xffffffff;
  plVar24 = plVar10 + 2;
  *plVar24 = 1;
  *plVar10 = (long)&PTR_LAB_042b4c50;
  plVar10[3] = (long)(param_1 + 3);
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar15 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x30,0);
  plVar15[1] = 0xffffffff;
  plVar26 = plVar15 + 2;
  *plVar26 = 1;
  *plVar15 = (long)&PTR_LAB_042b4bf8;
  plVar15[3] = (long)param_1;
  plVar15[4] = 0;
  plVar15[5] = -0x8000000000000000;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar16 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar16 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x18,0);
  plVar16[1] = 0xffffffff;
  plVar31 = plVar16 + 2;
  *plVar31 = 1;
  *plVar16 = (long)&PTR_LAB_043480b0;
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = (long *)param_1[0x120];
  param_1[0x120] = (long)plVar15;
  if ((plVar17 == (long *)0x0) || (plVar17[1] == 0)) {
LAB_03029424:
    lVar22 = param_1[0xfd];
  }
  else {
    plVar1 = plVar17 + 2;
    do {
      lVar22 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_03029424;
    (**(code **)(*plVar17 + 0x18))();
    lVar22 = param_1[0xfd];
  }
  if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar3) {
        *plVar31 = *plVar31 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = *(long **)(lVar22 + 0x10);
  *(long **)(lVar22 + 0x10) = plVar16;
  if ((plVar17 == (long *)0x0) || (plVar17[1] == 0)) {
LAB_03029450:
    lVar22 = param_1[0xfd];
  }
  else {
    plVar1 = plVar17 + 2;
    do {
      lVar22 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_03029450;
    (**(code **)(*plVar17 + 0x18))();
    lVar22 = param_1[0xfd];
  }
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = *plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = *(long **)(lVar22 + 0x18);
  *(long **)(lVar22 + 0x18) = plVar10;
  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
    plVar1 = plVar17 + 2;
    do {
      lVar22 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))();
    }
  }
  lVar22 = param_1[0xfd];
  lVar55 = param_1[0x11f];
  if ((lVar55 != 0) && (*(long *)(lVar55 + 8) != 0)) {
    plVar17 = (long *)(lVar55 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = *plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = *(long **)(lVar22 + 0x28);
  *(long *)(lVar22 + 0x28) = lVar55;
  if ((plVar17 == (long *)0x0) || (plVar17[1] == 0)) {
LAB_030294b0:
    lVar22 = param_1[0xfd];
  }
  else {
    plVar1 = plVar17 + 2;
    do {
      lVar22 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_030294b0;
    (**(code **)(*plVar17 + 0x18))();
    lVar22 = param_1[0xfd];
  }
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = *(long **)(lVar22 + 0x20);
  *(long **)(lVar22 + 0x20) = plVar15;
  if ((plVar17 == (long *)0x0) || (plVar17[1] == 0)) {
LAB_030294dc:
    if (plVar10[1] == 0) goto LAB_030294f8;
LAB_030294e4:
    do {
      lVar22 = *plVar24;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_030294f8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (plVar15[1] != 0) goto LAB_03029500;
LAB_03029514:
    lVar22 = plVar16[1];
  }
  else {
    plVar1 = plVar17 + 2;
    do {
      lVar22 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_030294dc;
    (**(code **)(*plVar17 + 0x18))();
    if (plVar10[1] != 0) goto LAB_030294e4;
LAB_030294f8:
    if (plVar15[1] == 0) goto LAB_03029514;
LAB_03029500:
    do {
      lVar22 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 != 0) goto LAB_03029514;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    lVar22 = plVar16[1];
  }
  if (lVar22 != 0) {
    do {
      lVar22 = *plVar31;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar3) {
        *plVar31 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar12 = (long *)*plVar12;
  if (plVar12[1] != 0) {
    plVar10 = plVar12 + 2;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))();
    }
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if ((char)param_2[0xe] == '\x01') {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2b0,0);
    FUN_030473e0(puVar14,*(undefined4 *)((long)param_2 + 0x74));
  }
  else {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,0);
    *(undefined4 *)(puVar14 + 3) = 0;
    *puVar14 = &PTR_LAB_042b2798;
    puVar14[1] = 0;
    puVar14[2] = 0x8000000000000000;
    *(undefined8 *)((long)puVar14 + 0x1c) = 0x100000001;
    local_280 = (long *)0x2;
    puVar18 = (undefined2 *)
              (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,2,&local_280);
    if (local_280 < (long *)0x7ffffffe) {
      uVar20 = (undefined4)((ulong)local_280 >> 1);
    }
    else {
      uVar20 = 0x3fffffff;
    }
    *(undefined4 *)((long)puVar14 + 0x14) = uVar20;
    puVar14[1] = puVar18;
    if (*(int *)(puVar14 + 2) != 1) {
      *(undefined4 *)(puVar14 + 2) = 1;
    }
    *puVar18 = 0;
  }
  param_1[0x96] = (long)puVar14;
  *(int *)(param_1 + 0xa3) = (int)param_2[0x1d];
  *(undefined4 *)((long)param_1 + 0x51c) = 0;
  uVar29 = param_2[0x14];
  param_1[0x9d] = param_2[0x15];
  param_1[0x9c] = uVar29;
  auVar36 = *(undefined1 (*) [16])(param_2 + 0x16);
  param_1[0x9f] = auVar36._8_8_;
  param_1[0x9e] = auVar36._0_8_;
  plVar12 = (long *)param_2[0x18];
  if (plVar12 == (long *)0x0) {
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x18,0);
    *plVar12 = (long)&DAT_042d9eb0;
    plVar12[1] = 0xffffffff;
    plVar12[2] = 1;
  }
  else if (plVar12[1] != 0) {
    plVar10 = plVar12 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar22 = (**(code **)(&DAT_0442d288 + (ulong)*(byte *)((long)param_2 + 0x96) * 8))
                     (param_1,plVar12);
  param_1[0x98] = lVar22;
  plVar10 = (long *)param_1[0x125];
  param_1[0x125] = lVar22;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  FUN_0302b31c(param_1 + 0xd8,param_1,FUN_0302b3f4,0);
  if (plVar12[1] != 0) {
    plVar10 = plVar12 + 2;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x20,0);
  puVar14[2] = 1;
  *(undefined4 *)(puVar14 + 3) = 0;
  *puVar14 = &DAT_042b2880;
  puVar14[1] = 0xffffffff;
  *(undefined1 *)((long)puVar14 + 0x1c) = 0;
  param_1[0x11e] = (long)puVar14;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  lVar22 = (**(code **)(*plVar12 + 0x10))(plVar12,0x550,0);
  FUN_03048498();
  param_1[0xa1] = lVar22;
  if (*(char *)((long)param_2 + 0x104) == '\0') {
    lVar22 = 0;
    param_1[0xd3] = 0;
  }
  else {
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x5c0,0);
    FUN_03049d3c();
    param_1[0xd3] = (long)puVar14;
    local_278 = auStack_268;
    *puVar14 = param_1;
    local_280 = (long *)param_1[0x94];
    local_270 = 0;
    local_26c = 0x80000008;
    local_228 = 0;
    uVar9 = (**(code **)(*local_280 + 0x50))();
    if (7 < (int)uVar9) {
      uVar9 = 8;
    }
    local_224 = uVar9;
    if ((int)(local_26c & 0x3fffffff) < (int)uVar9) {
      uVar25 = (local_26c & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar25) {
        uVar25 = 0x3fffffff;
      }
      uVar21 = uVar9;
      if ((int)uVar9 <= (int)uVar25) {
        uVar21 = uVar25;
      }
      local_278 = (undefined1 *)
                  FUN_032bd1d4(PTR_PTR_0434a080,uVar21,8,local_278,local_270,&local_26c);
    }
    puVar8 = local_278;
    if (local_270 != uVar9) {
      local_270 = uVar9;
    }
    puVar14[2] = local_280;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined1 *)((long)puVar14 + 0x1c) = 0;
    if (local_228 < 1) {
      (**(code **)(*local_280 + 0x20))(local_280,local_278,6);
      local_228 = 5;
      puVar27 = (undefined8 *)(puVar8 + 0x28);
    }
    else {
      puVar27 = (undefined8 *)(local_278 + (long)(local_228 + -1) * 8);
      local_228 = local_228 + -1;
    }
    puVar27 = (undefined8 *)*puVar27;
    puVar27[2] = 0;
    puVar27[3] = 0;
    *puVar27 = 0;
    puVar27[1] = 0;
    *(undefined4 *)((long)puVar27 + 4) = *(undefined4 *)(puVar14 + 5);
    puVar7 = PTR_PTR_0434a080;
    iVar44 = *(int *)(puVar14 + 5);
    uVar9 = iVar44 + 1;
    puVar23 = (uint *)((long)puVar14 + 0x2c);
    uVar25 = *puVar23;
    if (iVar44 < (int)(uVar25 & 0x3fffffff)) {
      lVar22 = puVar14[4];
    }
    else {
      uVar58 = puVar14[4];
      if (0x3ffffffe < iVar44) {
        FUN_032bd0a8(uVar9);
        uVar25 = *puVar23;
      }
      uVar25 = (uVar25 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar25) {
        uVar25 = 0x3fffffff;
      }
      uVar21 = uVar9;
      if ((int)uVar9 <= (int)uVar25) {
        uVar21 = uVar25;
      }
      lVar22 = FUN_032bd1d4(puVar7,uVar21,8,uVar58,iVar44,puVar23);
      iVar44 = *(int *)(puVar14 + 5);
      puVar14[4] = lVar22;
    }
    *(undefined8 **)(lVar22 + (long)iVar44 * 8) = puVar27;
    *(uint *)(puVar14 + 5) = uVar9;
    puVar14[0x20] = "hknpDeactivationManager::m_inactiveParentCaches";
    FUN_0305bb88(puVar14 + 0x22,&local_280,"hknpDeactivationManager::m_reactivatedCaches");
    FUN_0305bb88(puVar14 + 0x76,&local_280,"hknpDeactivationManager::m_narrowphaseOutputCaches");
    *(undefined1 *)((long)puVar14 + 0x361) = 0;
    if (local_228 != 0) {
      (**(code **)(*local_280 + 0x28))(local_280,local_278);
      local_228 = 0;
    }
    local_270 = 0;
    if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_278,((ulong)local_26c & 0x3fffffff) << 3);
    }
    lVar22 = param_1[0xd3];
  }
  FUN_03014e54(param_1 + 0x28,param_2[5],(int)param_2[4],param_1 + 5,lVar22);
  param_1[6] = (long)(param_1 + 0x28);
  FUN_03028748(param_1 + 0xc4,*(int *)(param_1[0x96] + 0x1c) + (int)param_2[4]);
  lVar22 = param_1[0xd3];
  if (lVar22 != 0) {
    uVar25 = *(uint *)(lVar22 + 0x390);
    uVar9 = (uint)param_2[4];
    if ((int)(uint)param_2[4] <= (int)uVar25) {
      uVar9 = uVar25;
    }
    uVar21 = *(uint *)(lVar22 + 0x394);
    if ((int)(uVar21 & 0x3fffffff) < (int)uVar9) {
      uVar58 = *(undefined8 *)(lVar22 + 0x388);
      if (0x3fffffff < (int)uVar9) {
        FUN_032bd0a8(uVar9);
        uVar21 = *(uint *)(lVar22 + 0x394);
      }
      uVar21 = (uVar21 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      uVar5 = uVar9;
      if ((int)uVar9 <= (int)uVar21) {
        uVar5 = uVar21;
      }
      uVar58 = FUN_032bd1d4(PTR_PTR_0434a080,uVar5,0x20,uVar58,uVar25,(uint *)(lVar22 + 0x394));
      uVar25 = *(uint *)(lVar22 + 0x390);
      *(undefined8 *)(lVar22 + 0x388) = uVar58;
    }
    if (uVar25 != uVar9) {
      *(uint *)(lVar22 + 0x390) = uVar9;
    }
    uVar60 = _UNK_0388a138;
    uVar58 = _DAT_0388a130;
    auVar33._8_4_ = 0x3f8ccccd;
    auVar33._0_8_ = 0x3f8ccccd3f8ccccd;
    auVar33._12_4_ = 0x3f8ccccd;
    auVar36 = NEON_frecpe(auVar33,4);
    auVar45 = NEON_frecps(auVar33,auVar36,4);
    auVar37._0_4_ = auVar36._0_4_ * auVar45._0_4_;
    auVar37._4_4_ = auVar36._4_4_ * auVar45._4_4_;
    auVar37._8_4_ = auVar36._8_4_ * auVar45._8_4_;
    auVar37._12_4_ = auVar36._12_4_ * auVar45._12_4_;
    auVar36 = NEON_frecps(auVar33,auVar37,4);
    puVar11 = *(undefined4 **)(param_1[0xd3] + 0x388);
    *(undefined2 *)((long)puVar11 + 10) = 0;
    auVar38._8_4_ = 0x7f;
    auVar38._0_8_ = 0x7f0000007f;
    auVar38._12_4_ = 0x7f;
    auVar34._0_8_ =
         CONCAT44((int)(auVar37._4_4_ * auVar36._4_4_ * 128.0 * (float)((ulong)uVar58 >> 0x20)) +
                  0x7f,(int)(auVar37._0_4_ * auVar36._0_4_ * 128.0 * (float)uVar58) + 0x7f);
    auVar34._8_4_ = (int)(auVar37._8_4_ * auVar36._8_4_ * 128.0 * (float)uVar60) + 0x7f;
    auVar34._12_4_ =
         (int)(auVar37._12_4_ * auVar36._12_4_ * 128.0 * (float)((ulong)uVar60 >> 0x20)) + 0x7f;
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = NEON_sqxtn(0x7f0000007f,auVar34,4);
    auVar36 = NEON_sqxtn2(auVar39,auVar34,4);
    *puVar11 = 0;
    uVar58 = NEON_sqxtun(auVar34._0_8_,auVar36,2);
    *(char *)(puVar11 + 1) = (char)uVar58;
    *(char *)((long)puVar11 + 5) = (char)((ulong)uVar58 >> 8);
    *(char *)((long)puVar11 + 6) = (char)((ulong)uVar58 >> 0x10);
    *(char *)((long)puVar11 + 7) = (char)((ulong)uVar58 >> 0x18);
    *(undefined1 *)((long)puVar11 + 0xe) = 0;
    puVar11[4] = 0xffffffff;
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0xb8,0);
  uVar28 = param_2[7];
  uVar29 = param_2[6];
  uVar30 = param_2[9];
  uVar6 = param_2[8];
  *puVar14 = param_1;
  puVar14[1] = 0;
  puVar14[2] = 0x8000000000000000;
  puVar14[3] = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar14 + 5) = 0;
  *(undefined4 *)((long)puVar14 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar14 + 4) = 0;
  puVar14[7] = 0;
  puVar14[8] = 0x8000000000000000;
  puVar14[9] = 0;
  *(undefined4 *)((long)puVar14 + 0x54) = 0xffffffff;
  *(undefined4 *)(puVar14 + 0xb) = 0;
  *(undefined4 *)((long)puVar14 + 0x5c) = 0xffffffff;
  *(undefined4 *)(puVar14 + 10) = 0;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0xffffffff00000000;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0x8000000000000000;
  FUN_032c0d94(puVar14 + 0x12,(ulong)(uint)uVar29 << 1 | 1);
  puVar14[0x15] = 0;
  puVar14[0x16] = 0x8000000000000000;
  FUN_03002f88(puVar14,uVar28,(ulong)(uint)uVar29);
  FUN_030043e4(puVar14 + 7,uVar30,(int)uVar6,0x10);
  param_1[0x91] = (long)puVar14;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x18,0);
  *plVar12 = (long)&DAT_042b4ca8;
  plVar12[1] = 0xffffffff;
  plVar12[2] = 1;
  plVar10 = (long *)param_1[0xa5];
  if (((plVar10 != plVar12) && (param_1[0xa5] = (long)plVar12, plVar10 != (long *)0x0)) &&
     (plVar10[1] != 0)) {
    plVar12 = plVar10 + 2;
    do {
      lVar22 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  plVar12 = param_1 + 0xa4;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x18,0);
  *plVar10 = (long)&DAT_042b4550;
  plVar10[1] = 0xffffffff;
  plVar10[2] = 1;
  plVar24 = (long *)*plVar12;
  if ((plVar24 != plVar10) && (*plVar12 = (long)plVar10, plVar24 != (long *)0x0)) {
    if (plVar24[1] != 0) {
      plVar10 = plVar24 + 2;
      do {
        lVar22 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
    }
    plVar10 = (long *)*plVar12;
  }
  param_1[0xcb] = (long)plVar10;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = param_1[0xa5];
  FUN_0302b47c(param_1 + 0xee,param_1,&LAB_0302b554,0);
  local_280 = (long *)param_1[0x94];
  local_278 = auStack_268;
  local_270 = 0;
  local_26c = 0x80000008;
  local_228 = 0;
  uVar9 = (**(code **)(*local_280 + 0x50))();
  if (7 < (int)uVar9) {
    uVar9 = 8;
  }
  local_224 = uVar9;
  if ((int)(local_26c & 0x3fffffff) < (int)uVar9) {
    uVar25 = (local_26c & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar25) {
      uVar25 = 0x3fffffff;
    }
    uVar21 = uVar9;
    if ((int)uVar9 <= (int)uVar25) {
      uVar21 = uVar25;
    }
    local_278 = (undefined1 *)FUN_032bd1d4(PTR_PTR_0434a080,uVar21,8,local_278,local_270,&local_26c)
    ;
  }
  if (local_270 != uVar9) {
    local_270 = uVar9;
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  lVar55 = (**(code **)(*plVar12 + 0x10))(plVar12,0xbb0,0);
  FUN_0305be50(lVar55,&local_280,*(undefined4 *)(param_1[0x96] + 0x20));
  lVar22 = param_1[0xd3];
  param_1[0xa0] = lVar55;
  if (lVar22 != 0) {
    lVar22 = lVar22 + 0x110;
  }
  *(long *)(lVar55 + 0x950) = lVar22;
  if (local_228 != 0) {
    (**(code **)(*local_280 + 0x28))(local_280,local_278);
    local_228 = 0;
  }
  *(undefined1 *)(param_1[0xa0] + 0xaa0) = *(undefined1 *)((long)param_2 + 0x94);
  local_270 = 0;
  if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_278,((ulong)local_26c & 0x3fffffff) << 3);
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar12 = param_1 + 0x112;
  puVar27 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1480,0);
  puVar14 = puVar27;
  do {
    *puVar14 = 0;
    *(undefined4 *)(puVar14 + 1) = 0;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined4 *)(puVar14 + 5) = 0;
    *(undefined4 *)(puVar14 + 7) = 0;
    *(undefined4 *)(puVar14 + 9) = 0;
    *(undefined4 *)(puVar14 + 0xb) = 0;
    *(undefined4 *)(puVar14 + 0xd) = 0;
    *(undefined4 *)(puVar14 + 0xf) = 0;
    *(undefined4 *)(puVar14 + 0x11) = 0;
    *(undefined4 *)(puVar14 + 0x13) = 0;
    *(undefined4 *)(puVar14 + 0x15) = 0;
    *(undefined4 *)(puVar14 + 0x17) = 0;
    *(undefined4 *)(puVar14 + 0x19) = 0;
    *(undefined4 *)(puVar14 + 0x1b) = 0;
    *(undefined4 *)(puVar14 + 0x1d) = 0;
    *(undefined4 *)(puVar14 + 0x1f) = 0;
    puVar14 = puVar14 + 0x21;
  } while (puVar14 != puVar27 + 0x273);
  *(undefined4 *)(puVar27 + 0x28b) = 0;
  *(undefined4 *)((long)puVar27 + 0x145c) = 0x80000004;
  puVar27[0x28a] = puVar27 + 0x28c;
  puVar27[0x287] = 0;
  puVar27[0x288] = 0;
  puVar27[0x285] = 0;
  puVar27[0x286] = 0;
  puVar27[0x283] = 0;
  puVar27[0x284] = 0;
  puVar27[0x281] = 0;
  puVar27[0x282] = 0;
  puVar27[0x27f] = 0;
  puVar27[0x280] = 0;
  puVar27[0x27d] = 0;
  puVar27[0x27e] = 0;
  puVar27[0x27b] = 0;
  puVar27[0x27c] = 0;
  puVar27[0x279] = 0;
  puVar27[0x27a] = 0;
  puVar27[0x277] = 0;
  puVar27[0x278] = 0;
  puVar27[0x275] = 0;
  puVar27[0x276] = 0;
  puVar27[0x273] = 0;
  puVar27[0x274] = 0;
  *(undefined1 *)(puVar27 + 0x289) = 1;
  param_1[0x92] = (long)puVar27;
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar10 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1f38,0);
  cVar2 = *(char *)((long)param_2 + 0xec);
  *plVar10 = (long)&PTR_LAB_042b29d0;
  plVar10[1] = 0xffffffff;
  plVar10[4] = (long)&PTR_LAB_042b2d88;
  plVar10[5] = (long)&PTR_LAB_042b2e68;
  plVar10[8] = (long)&PTR_LAB_042b3108;
  plVar10[9] = (long)&PTR_LAB_042b3238;
  plVar10[0xc] = (long)&PTR_LAB_042b31e8;
  *(undefined2 *)(plVar10 + 0xd) = 0x101;
  *(undefined4 *)((long)plVar10 + 0x6c) = 0x3f000000;
  plVar10[0xe] = (long)&PTR_LAB_042b3308;
  plVar10[0xf] = (long)&PTR_LAB_042b33e8;
  plVar10[0x10] = (long)&PTR_LAB_042b34c8;
  plVar10[0x11] = (long)&PTR_LAB_042b3688;
  *(undefined4 *)(plVar10 + 0x16) = 0;
  plVar10[2] = 1;
  plVar10[3] = (long)&PTR_LAB_042b2c98;
  plVar10[0x12] = (long)&PTR_LAB_042b35a8;
  plVar10[0x13] = (long)&PTR_LAB_042b3768;
  plVar10[6] = (long)&PTR_LAB_042b2f48;
  plVar10[7] = (long)&PTR_LAB_042b3028;
  plVar10[0x14] = (long)&PTR_LAB_042b3848;
  plVar10[0x15] = (long)&PTR_LAB_042b2a18;
  plVar10[0x17] = (long)&PTR_LAB_042b2a98;
  plVar10[10] = (long)&PTR_LAB_042b32c0;
  plVar10[0xb] = (long)&PTR_LAB_042b3280;
  *(undefined4 *)(plVar10 + 0x18) = 0;
  FUN_0306eee0(plVar10 + 0x19);
  plVar10[0x3dc] = (long)&PTR_LAB_042b3928;
  plVar10[0x3de] = (long)&PTR_LAB_042b39a8;
  plVar10[0x3e0] = (long)&PTR_LAB_042b3a10;
  *(undefined4 *)(plVar10 + 0x3dd) = 1;
  *(undefined4 *)(plVar10 + 0x3df) = 1;
  *(undefined4 *)(plVar10 + 0x3e1) = 1;
  *(bool *)((long)plVar10 + 0x1f0c) = cVar2 != '\0';
  plVar10[0x3e2] = (long)&PTR_LAB_042b3a78;
  *(undefined4 *)(plVar10 + 0x3e3) = 0;
  *(undefined4 *)(plVar10 + 0x3e5) = 0;
  plVar10[0x3e4] = (long)&PTR_LAB_042b2ae8;
  plVar10[0x3e6] = (long)&PTR_LAB_042b54d8;
  plVar24 = (long *)*plVar12;
  if ((plVar24 != plVar10) && (*plVar12 = (long)plVar10, plVar24 != (long *)0x0)) {
    if (plVar24[1] != 0) {
      plVar10 = plVar24 + 2;
      do {
        lVar22 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar24 + 0x18))();
      }
    }
    plVar10 = (long *)*plVar12;
  }
  FUN_0306e5f8(plVar10,param_1[0x92]);
  plVar10 = (long *)param_1[0x97];
  plVar12 = (long *)param_2[0x19];
  if (plVar10 != plVar12) {
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      plVar12 = plVar12 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10 = (long *)param_1[0x97];
      plVar12 = (long *)param_2[0x19];
    }
    param_1[0x97] = (long)plVar12;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar12 = plVar10 + 2;
      do {
        lVar22 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2[0x1a]);
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if ((char)param_2[0xe] == '\x01') {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    lVar22 = (**(code **)(*plVar12 + 0x10))(plVar12,0x6e0,0);
    FUN_0308db0c();
    param_1[0x95] = lVar22;
    *(uint *)(lVar22 + 0x1c) = (uint)(*(char *)((long)param_2 + 0xed) != '\0');
  }
  else {
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x20,0);
    puVar14[2] = 0;
    *(undefined4 *)(puVar14 + 3) = 0;
    *puVar14 = &PTR_LAB_042b5000;
    param_1[0x95] = (long)puVar14;
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  lVar22 = (**(code **)(*plVar12 + 0x10))(plVar12,0x3e40,0);
  FUN_02f903a4(lVar22,0);
  plVar12 = (long *)param_1[0xa2];
  param_1[0xa2] = lVar22;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar10 = plVar12 + 2;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))();
      plVar12 = (long *)param_2[0x19];
      goto joined_r0x0302a0b4;
    }
  }
  plVar12 = (long *)param_2[0x19];
joined_r0x0302a0b4:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x50))(plVar12,param_1);
  }
  lVar22 = *(long *)(lVar4 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar22;
  }
  plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
  lVar22 = (**(code **)(*plVar12 + 0x10))(plVar12,0x70,0);
  FUN_031026f4(lVar22,param_1,(int)param_2[0x1e],*(undefined4 *)((long)param_2 + 0x54));
  lVar55 = param_1[0x93];
  param_1[0x93] = lVar22;
  if (lVar55 != 0) {
    FUN_03102ec4(lVar55);
    lVar22 = *(long *)(lVar4 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar22;
    }
    plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar55,0x70);
  }
  return;
}


