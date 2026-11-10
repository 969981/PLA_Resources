/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03000f14; name: FUN_03000f14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03000f14(long param_1,undefined8 *param_2,long *param_3,ulong param_4,int param_5)

{
  uint *puVar1;
  long *plVar2;
  char *__s2;
  char *__s1;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar3 = *(ushort *)(param_2 + 0xb);
  uVar16 = *(uint *)(param_2 + 10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(uint *)(param_2 + 10) = uVar16;
  if (param_4 == 0xffffffffffffffff) {
    param_4 = (ulong)uVar16 | 0x8000000000000000;
  }
  auVar22._8_8_ = _UNK_0388a1f8;
  auVar22._0_8_ = _DAT_0388a1f0;
  auVar26._8_8_ = _UNK_0388a388;
  auVar26._0_8_ = _DAT_0388a380;
  auVar22 = a64_TBL(ZEXT816(0),auVar26,auVar22);
  uVar28 = CONCAT44(auVar22._12_4_,0xff7fffee);
  *(ushort *)(param_2 + 0xb) = uVar3 & 0x800 | 1;
  *(undefined4 *)((long)param_2 + 0x84) = 0xffffff;
  param_2[0x16] = param_4;
  param_2[0xd] = uVar28;
  param_2[0xc] = 0xff7fffeeff7fffee;
  param_2[0xe] = 0x7f7fffee7f7fffee;
  *(undefined2 *)((long)param_2 + 0x94) = 0x3f80;
  uVar27 = NEON_fmov(0x3f800000,4);
  lVar18 = param_3[7];
  auVar22 = *(undefined1 (*) [16])(param_3 + 8);
  fVar20 = auVar22._0_4_;
  auVar25._0_4_ = fVar20 + fVar20;
  fVar23 = auVar22._4_4_;
  auVar25._4_4_ = fVar23 + fVar23;
  auVar25._8_4_ = auVar22._8_4_ + auVar22._8_4_;
  fVar24 = auVar22._12_4_;
  auVar25._12_4_ = fVar24 + fVar24;
  param_2[6] = param_3[6];
  auVar22 = NEON_ext(auVar22,auVar22,8,1);
  auVar26 = NEON_ext(auVar25,auVar25,8,1);
  fVar21 = auVar22._0_4_ * auVar26._0_4_;
  param_2[2] = CONCAT44((float)uVar27 - (auVar25._0_4_ * fVar20 + fVar21),
                        auVar25._4_4_ * fVar20 - auVar25._8_4_ * fVar24);
  *param_2 = CONCAT44(auVar25._4_4_ * fVar20 + auVar25._8_4_ * fVar24,
                      (float)uVar27 - (auVar25._4_4_ * fVar23 + fVar21));
  *(float *)(param_2 + 1) = auVar25._8_4_ * fVar20 - auVar25._4_4_ * fVar24;
  *(float *)(param_2 + 3) = auVar25._8_4_ * fVar23 + auVar25._0_4_ * fVar24;
  param_2[4] = CONCAT44(auVar25._8_4_ * fVar23 - auVar25._0_4_ * fVar24,
                        auVar25._8_4_ * fVar20 + auVar25._4_4_ * fVar24);
  *(float *)(param_2 + 5) = 1.0 - (auVar25._0_4_ * fVar20 + auVar25._4_4_ * fVar23);
  *(int *)(param_2 + 7) = (int)lVar18;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_3 + 0x94);
  lVar18 = *param_3;
  if (lVar18 == 0) {
    uVar16 = *(uint *)((long)param_2 + 0x54) & 0xff7fffff;
    param_2[0xf] = 0;
  }
  else {
    if (*(long *)(lVar18 + 8) != 0) {
      plVar8 = (long *)(lVar18 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = (long *)param_2[0xf];
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar2 = plVar8 + 2;
        do {
          lVar17 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    param_2[0xf] = lVar18;
    if (*(short *)(lVar18 + 0x1a) < 0) {
      uVar16 = *(uint *)((long)param_2 + 0x54) | 0x800000;
    }
    else {
      uVar16 = *(uint *)((long)param_2 + 0x54) & 0xff7fffff;
    }
  }
  puVar1 = (uint *)((long)param_2 + 0x54);
  *puVar1 = uVar16;
  *(undefined2 *)((long)param_2 + 0x8a) = *(undefined2 *)((long)param_3 + 0x14);
  *(int *)((long)param_2 + 0x8c) = (int)param_3[2];
  param_2[0x13] = param_3[4];
  *(char *)((long)param_2 + 0x96) = (char)param_3[0x14];
  cVar4 = *(char *)((long)param_3 + 0x16);
  cVar14 = cVar4;
  if (cVar4 == -1) {
    cVar14 = '\x03';
    cVar4 = '\0';
  }
  if (param_5 != 0) {
    cVar4 = cVar14;
  }
  *(char *)((long)param_2 + 0x89) = cVar4;
  uVar15 = 0;
  if (param_5 != 0) {
    uVar15 = 0x7fffffff;
  }
  *(undefined4 *)(param_2 + 0x10) = uVar15;
  uVar19 = (ulong)*(uint *)(param_2 + 10) & 0xffffff;
  lVar18 = uVar19 * 8;
  *(int *)(*(long *)(param_1 + 0x68) + lVar18) = (int)param_3[0xe];
  *(short *)(*(long *)(param_1 + 0x68) + lVar18 + 4) = (short)param_3[0x11];
  __s2 = (char *)(param_3[3] & 0xfffffffffffffffe);
  plVar8 = *(long **)(*(long *)(param_1 + 0x98) + lVar18);
  if (__s2 == (char *)0x0) {
    *(undefined8 *)(*(long *)(param_1 + 0x98) + uVar19 * 8) = 0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar2 = plVar8 + 2;
      do {
        lVar18 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 + -1 == 0) {
        pcVar13 = *(code **)(*plVar8 + 0x18);
LAB_03001260:
        (*pcVar13)();
        lVar18 = param_3[0xf];
        goto joined_r0x0300126c;
      }
    }
  }
  else if ((((plVar8 == (long *)0x0) ||
            (__s1 = (char *)(plVar8[3] & 0xfffffffffffffffe), __s1 == (char *)0x0)) ||
           (*__s1 == '\0')) || (iVar7 = strcmp(__s1,__s2), iVar7 != 0)) {
    lVar17 = tpidr_el0;
    lVar12 = *(long *)(lVar17 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar12;
    }
    plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,0);
    *puVar9 = &PTR_LAB_042b1250;
    puVar9[1] = 0xffffffff;
    puVar6 = PTR_PTR_0434a080;
    puVar9[2] = 1;
    puVar9[3] = 0;
    sVar10 = strlen(__s2);
    uVar16 = (int)sVar10 + 1;
    puVar11 = (undefined8 *)
              (**(code **)(*(long *)puVar6 + 0x10))
                        (puVar6,(long)((sVar10 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar11 = puVar6;
    *(uint *)(puVar11 + 1) = uVar16;
    memcpy(puVar11 + 2,__s2,(ulong)uVar16);
    puVar9[3] = (ulong)(puVar11 + 2) | 1;
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + lVar18);
    *(undefined8 **)(*(long *)(param_1 + 0x98) + lVar18) = puVar9;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar2 = plVar8 + 2;
      do {
        lVar18 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 + -1 == 0) {
        pcVar13 = *(code **)(*plVar8 + 0x18);
        goto LAB_03001260;
      }
    }
  }
  lVar18 = param_3[0xf];
joined_r0x0300126c:
  if (lVar18 == 0) {
    lVar18 = param_3[0x10];
  }
  else {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar19 * 8);
    if (puVar9 == (undefined8 *)0x0) {
      lVar17 = tpidr_el0;
      lVar12 = *(long *)(lVar17 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar17 + 0x38d490) = lVar12;
      }
      plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
      *puVar9 = 0xffffffffffffffff;
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0xffffffffffffffff;
      puVar9[3] = 0xffffffffffffffff;
      puVar9[4] = 0xffffffffffffffff;
      puVar9[5] = 0xffffffffffffffff;
      *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar19 * 8) = puVar9;
    }
    uVar27 = *(undefined8 *)(lVar18 + 0x20);
    puVar9[1] = *(undefined8 *)(lVar18 + 0x28);
    *puVar9 = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x30);
    puVar9[3] = *(undefined8 *)(lVar18 + 0x38);
    puVar9[2] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x40);
    puVar9[5] = *(undefined8 *)(lVar18 + 0x48);
    puVar9[4] = uVar27;
    lVar18 = param_3[0x10];
  }
  if (lVar18 != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x88) + uVar19 * 8);
    if (puVar9 == (undefined8 *)0x0) {
      lVar17 = tpidr_el0;
      lVar12 = *(long *)(lVar17 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar17 + 0x38d490) = lVar12;
      }
      plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0xc0,0);
      *puVar9 = 0xffffffffffffffff;
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0xffffffffffffffff;
      puVar9[3] = 0xffffffffffffffff;
      puVar9[4] = 0xffffffffffffffff;
      puVar9[5] = 0xffffffffffffffff;
      puVar9[6] = 0xffffffffffffffff;
      puVar9[7] = 0xffffffffffffffff;
      puVar9[8] = 0xffffffffffffffff;
      puVar9[9] = 0xffffffffffffffff;
      puVar9[10] = 0xffffffffffffffff;
      puVar9[0xb] = 0xffffffffffffffff;
      puVar9[0xc] = 0xffffffffffffffff;
      puVar9[0xd] = 0xffffffffffffffff;
      puVar9[0xe] = 0xffffffffffffffff;
      puVar9[0xf] = 0xffffffffffffffff;
      puVar9[0x10] = 0xffffffffffffffff;
      puVar9[0x11] = 0xffffffffffffffff;
      puVar9[0x12] = 0xffffffffffffffff;
      puVar9[0x13] = 0xffffffffffffffff;
      puVar9[0x14] = 0xffffffffffffffff;
      puVar9[0x15] = 0xffffffffffffffff;
      puVar9[0x16] = 0xffffffffffffffff;
      puVar9[0x17] = 0xffffffffffffffff;
      *(undefined8 **)(*(long *)(param_1 + 0x88) + uVar19 * 8) = puVar9;
    }
    uVar27 = *(undefined8 *)(lVar18 + 0x20);
    puVar9[1] = *(undefined8 *)(lVar18 + 0x28);
    *puVar9 = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x30);
    puVar9[3] = *(undefined8 *)(lVar18 + 0x38);
    puVar9[2] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x40);
    puVar9[5] = *(undefined8 *)(lVar18 + 0x48);
    puVar9[4] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x50);
    puVar9[7] = *(undefined8 *)(lVar18 + 0x58);
    puVar9[6] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x60);
    puVar9[9] = *(undefined8 *)(lVar18 + 0x68);
    puVar9[8] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x70);
    puVar9[0xb] = *(undefined8 *)(lVar18 + 0x78);
    puVar9[10] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x80);
    puVar9[0xd] = *(undefined8 *)(lVar18 + 0x88);
    puVar9[0xc] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0x90);
    puVar9[0xf] = *(undefined8 *)(lVar18 + 0x98);
    puVar9[0xe] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0xa0);
    puVar9[0x11] = *(undefined8 *)(lVar18 + 0xa8);
    puVar9[0x10] = uVar27;
    uVar27 = *(undefined8 *)(lVar18 + 0xd8);
    puVar9[0x15] = *(undefined8 *)(lVar18 + 200);
    puVar9[0x17] = uVar27;
    puVar9[0x13] = *(undefined8 *)(lVar18 + 0xb8);
    puVar9[0x12] = *(undefined8 *)(lVar18 + 0xb0);
    uVar27 = *(undefined8 *)(lVar18 + 0xc0);
    puVar9[0x16] = *(undefined8 *)(lVar18 + 0xd0);
    puVar9[0x14] = uVar27;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x58) + uVar19 * 0x18);
  puVar9[2] = 0x7f7fffee7f7fffee;
  puVar9[1] = uVar28;
  *puVar9 = 0xff7fffeeff7fffee;
  *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19) = 0xff;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + uVar19 * 4) = 0xffffffff;
  uVar16 = 1;
  if (param_5 != 0) {
    uVar16 = 2;
  }
  *puVar1 = *(uint *)(param_3 + 1) & 0xfffffff0 | uVar16 | *puVar1;
  return;
}


