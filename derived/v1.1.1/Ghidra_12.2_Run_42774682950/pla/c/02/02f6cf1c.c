/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6cf1c; name: FUN_02f6cf1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6cf1c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  void *__dest;
  long *plVar14;
  void *__src;
  char cVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined1 (*pauVar24) [16];
  undefined1 *puVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_4c0;
  undefined4 local_490 [256];
  undefined4 *local_90;
  
  *(undefined4 *)(param_1 + 3) = 0x4030c;
  *param_1 = &PTR_LAB_042b76a0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar23 = param_1 + 9;
  *plVar23 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  piVar18 = (int *)((long)param_1 + 0x5c);
  piVar18[0] = 0;
  piVar18[1] = 0;
  *(byte *)((long)param_1 + 0x94) = *(byte *)((long)param_2 + 0x12) | *(byte *)(param_2 + 2);
  param_1[0x18] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &PTR_LAB_042b7ad8;
  param_1[0x17] = 0xffffffff;
  if (*(char *)((long)param_2 + 0x12) != '\0') {
    *(undefined2 *)((long)param_1 + 0x1a) = 0x8004;
  }
  uVar33 = NEON_fmov(0x3f800000,4);
  iVar11 = (int)param_2[1];
  if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
    iVar11 = *(int *)((long)param_2 + 0xc);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    if (iVar11 < 1) goto LAB_02f6d094;
    FUN_02f6d730(plVar23,iVar11);
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
LAB_02f6d09c:
    cVar15 = '\0';
    do {
      cVar15 = cVar15 + '\x01';
      iVar11 = iVar11 >> 1;
    } while (iVar11 != 0);
    *(char *)((long)param_1 + 0x1c) = cVar15;
    if (cVar15 != '\0') goto LAB_02f6d0bc;
  }
  else {
    lVar21 = (long)*(int *)(param_3 + 4) + (long)param_1;
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = lVar21 - (long)plVar23;
    }
    param_1[9] = lVar21;
    *(int *)(param_1 + 10) = iVar11;
    *(int *)((long)param_1 + 0x54) = iVar11;
    param_1[0xb] = 0;
    uVar8 = DAT_03aae468;
    uVar10 = DAT_03aae460;
    if (0 < iVar11) {
      iVar26 = 1;
      while( true ) {
        puVar22 = (undefined8 *)((long)plVar23 + (ulong)(iVar26 - 1U & 0xffff) * 0x40 + lVar21);
        iVar20 = iVar26;
        if (iVar11 + -1 <= (int)(iVar26 - 1U)) {
          iVar20 = -1;
        }
        *puVar22 = uVar10;
        puVar22[1] = uVar8;
        puVar22[4] = uVar33;
        *(undefined4 *)(puVar22 + 5) = 0x3f800000;
        *(int *)((long)puVar22 + 0x2c) = iVar20;
        puVar22[2] = 0;
        puVar22[3] = 0x1ffff00000000;
        puVar22[6] = 0;
        puVar22[7] = 0;
        if (iVar11 == iVar26) break;
        lVar21 = *plVar23;
        iVar26 = iVar26 + 1;
      }
    }
LAB_02f6d094:
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    if (iVar11 != 0) goto LAB_02f6d09c;
  }
  cVar15 = '\x01';
LAB_02f6d0bc:
  *(char *)((long)param_1 + 0x1c) = cVar15;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar8 = DAT_03aae468;
  uVar10 = DAT_03aae460;
  if (0 < (int)param_2[1]) {
    lVar21 = 0;
    do {
      pauVar1 = (undefined1 (*) [16])(*param_2 + lVar21 * 0x40);
      pauVar24 = pauVar1 + 3;
      if (*(long *)*pauVar24 == 0) {
        puVar25 = (undefined1 *)0x0;
        uVar28 = *(uint *)(param_1 + 0xb);
      }
      else {
        puVar25 = *pauVar24 + *(long *)*pauVar24;
        uVar28 = *(uint *)(param_1 + 0xb);
      }
      if ((int)uVar28 < 0) {
        FUN_02f6d730(param_1 + 9,8);
        uVar28 = (uint)*(ushort *)(param_1 + 0xb);
      }
      puVar22 = (undefined8 *)((long)(param_1 + 9) + (ulong)(uVar28 & 0xffff) * 0x40 + param_1[9]);
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)puVar22 + 0x2c);
      *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 1;
      *puVar22 = uVar10;
      puVar22[1] = uVar8;
      puVar22[2] = 0;
      puVar22[3] = 0x40ffff00000000;
      puVar22[5] = 0xffffffff3f800000;
      puVar22[4] = uVar33;
      puVar22[7] = 0;
      plVar13 = puVar22 + 6;
      *plVar13 = 0;
      auVar30 = *pauVar1;
      uVar7 = *(undefined8 *)(pauVar1[1] + 8);
      uVar6 = *(undefined8 *)pauVar1[1];
      uVar31 = *(undefined8 *)pauVar1[2];
      uVar32 = *(undefined8 *)(pauVar1[3] + 8);
      lVar12 = *(long *)*pauVar24;
      puVar22[5] = *(undefined8 *)(pauVar1[2] + 8);
      puVar22[4] = uVar31;
      puVar22[1] = auVar30._8_8_;
      *puVar22 = auVar30._0_8_;
      puVar22[3] = uVar7;
      puVar22[2] = uVar6;
      puVar22[7] = uVar32;
      *plVar13 = lVar12;
      lVar12 = 0;
      if (*(long *)*pauVar24 != 0) {
        lVar12 = (long)pauVar24 + (*(long *)*pauVar24 - (long)plVar13);
      }
      *plVar13 = lVar12;
      if (((lVar12 != 0) && (lVar12 = lVar12 + (long)plVar13, lVar12 != 0)) &&
         (*(long *)(lVar12 + 8) != 0)) {
        plVar13 = (long *)(lVar12 + 0x10);
        do {
          cVar15 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
      }
      iVar11 = (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar25[0x18] * 0x200 + 0xc0))(puVar25);
      *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + iVar11;
      lVar12 = (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar25[0x18] * 0x200 + 0x48))(puVar25);
      if (lVar12 == 0) {
        lVar12 = param_2[4];
      }
      else {
        *(undefined1 *)((long)param_1 + 0x94) = 1;
        FUN_02f6df44(param_1,pauVar1,(ulong)(uVar28 & 0xffff));
        lVar12 = param_2[4];
      }
      if (lVar12 != 0) {
        *(short *)(lVar12 + lVar21 * 2) = (short)uVar28;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_2[1]);
  }
  auVar30._8_4_ = 0x7f7fffee;
  auVar30._0_8_ = 0x7f7fffee7f7fffee;
  auVar30._12_4_ = 0x7f7fffee;
  uVar33 = auVar30._8_8_;
  param_1[0xf] = uVar33;
  param_1[0xe] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0xff7fffeeff7fffee;
  param_1[0x10] = 0xff7fffeeff7fffee;
  if ((param_3 == 0) || (iVar11 = *(int *)(param_3 + 0xc), iVar11 == 0)) {
    uVar3 = *(undefined4 *)((long)param_2 + 0x14);
    puVar22 = param_1 + 0x1d;
    *puVar22 = 0;
    param_1[0x16] = &PTR_LAB_042b7ad8;
    param_1[0x17] = 0xffffffff;
    param_1[0x1a] = 0;
    *(undefined2 *)(param_1 + 0x1b) = 0;
    *(undefined2 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    param_1[0x1e] = 0;
    param_1[0x18] = 1;
    param_1[0x19] = 0;
    lVar21 = tpidr_el0;
    lVar12 = *(long *)(lVar21 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar21 + 0x38d490) = lVar12;
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,0);
    if (param_1[0x1d] == 0) {
      __src = (void *)0x0;
    }
    else {
      __src = (void *)(param_1[0x1d] + (long)puVar22);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 0x1e) << 7);
    if ((int)*(uint *)((long)param_1 + 0xf4) < 0) {
      uVar28 = *(uint *)((long)param_1 + 0xf4) & 0x7fffffff;
      if ((int)uVar28 <= (int)*(uint *)(param_1 + 0x1e)) {
        uVar28 = *(uint *)(param_1 + 0x1e);
      }
      if (param_1[0x1d] == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = param_1[0x1d] + (long)puVar22;
      }
      lVar16 = *(long *)(lVar21 + 0x38d490);
      if (lVar16 == 0) {
        lVar16 = FUN_0333d16c(0,1);
        *(long *)(lVar21 + 0x38d490) = lVar16;
      }
      plVar13 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,(ulong)uVar28 << 7);
    }
    if (__dest == (void *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = (long)__dest - (long)puVar22;
    }
    puVar2 = (undefined8 *)(lVar21 + (long)puVar22);
    param_1[0x1d] = lVar21;
    param_1[0x1e] = 0x8000000200000002;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[1] = uVar33;
    *puVar2 = 0x7f7fffee7f7fffee;
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = 0xff7fffeeff7fffee;
    puVar2[5] = uVar33;
    puVar2[4] = 0x7f7fffee7f7fffee;
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = 0xff7fffeeff7fffee;
    puVar2[9] = uVar33;
    puVar2[8] = 0x7f7fffee7f7fffee;
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = 0xff7fffeeff7fffee;
    lVar21 = param_1[0x1d];
    *(undefined2 *)((long)puVar22 + lVar21 + 0xf0) = 0;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xe0) = 0;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xe8) = 0;
    *(undefined8 *)((long)puVar22 + lVar21 + 0x88) = uVar33;
    *(undefined8 *)((long)puVar22 + lVar21 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xa8) = uVar33;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 200) = uVar33;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)puVar22 + lVar21 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    *(char *)(param_1 + 0x20) = (char)uVar3;
  }
  else {
    *(char *)(param_1 + 0x20) = (char)*(undefined4 *)((long)param_2 + 0x14);
    plVar13 = param_1 + 0x1d;
    lVar21 = (long)iVar11 + (long)param_1;
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    if ((int)*(uint *)((long)param_1 + 0xf4) < 0) {
      uVar28 = *(uint *)((long)param_1 + 0xf4) & 0x7fffffff;
      if ((int)uVar28 <= (int)*(uint *)(param_1 + 0x1e)) {
        uVar28 = *(uint *)(param_1 + 0x1e);
      }
      if (*plVar13 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar13 + (long)plVar13;
      }
      lVar16 = tpidr_el0;
      lVar17 = *(long *)(lVar16 + 0x38d490);
      if (lVar17 == 0) {
        lVar17 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar17;
      }
      plVar14 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,(ulong)uVar28 << 7);
    }
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = lVar21 - (long)plVar13;
    }
    param_1[0x1d] = lVar21;
    *(undefined4 *)(param_1 + 0x1e) = uVar3;
    *(undefined4 *)((long)param_1 + 0xf4) = uVar3;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  FUN_02f992dc(param_1,*(undefined4 *)((long)param_2 + 0x14));
  uVar10 = _UNK_03889708;
  uVar33 = _DAT_03889700;
  if (((*(char *)((long)param_2 + 0x11) != '\0') && (*(char *)(param_1 + 0x20) == '\x02')) &&
     (1 < *piVar18)) {
    lVar21 = *param_2;
    local_490[0] = 1;
    local_90 = (undefined4 *)((ulong)local_490 | 4);
    local_4c0 = 0;
    do {
      puVar19 = local_90 + -1;
      puVar22 = (undefined8 *)
                ((long)(param_1 + 0x1d) + (long)(int)local_90[-1] * 0x80 + param_1[0x1d]);
      iVar11 = -(uint)((float)*puVar22 <= (float)puVar22[2]);
      iVar26 = -(uint)((float)((ulong)*puVar22 >> 0x20) <= (float)((ulong)puVar22[2] >> 0x20));
      iVar20 = -(uint)((float)puVar22[1] <= (float)puVar22[3]);
      iVar9 = -(uint)((float)((ulong)puVar22[1] >> 0x20) <= (float)((ulong)puVar22[3] >> 0x20));
      uVar29 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((ulong)uVar33 >> 0x18),
                        CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((ulong)uVar33 >> 0x10),
                                 CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((ulong)uVar33 >> 8),
                                          (byte)iVar11 & (byte)uVar33))) +
               CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((ulong)uVar33 >> 0x38),
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((ulong)uVar33 >> 0x30),
                                 CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((ulong)uVar33 >> 0x28),
                                          (byte)iVar26 & (byte)((ulong)uVar33 >> 0x20)))) +
               CONCAT13((byte)((uint)iVar20 >> 0x18) & (byte)((ulong)uVar10 >> 0x18),
                        CONCAT12((byte)((uint)iVar20 >> 0x10) & (byte)((ulong)uVar10 >> 0x10),
                                 CONCAT11((byte)((uint)iVar20 >> 8) & (byte)((ulong)uVar10 >> 8),
                                          (byte)iVar20 & (byte)uVar10))) +
               CONCAT13((byte)((uint)iVar9 >> 0x18) & (byte)((ulong)uVar10 >> 0x38),
                        CONCAT12((byte)((uint)iVar9 >> 0x10) & (byte)((ulong)uVar10 >> 0x30),
                                 CONCAT11((byte)((uint)iVar9 >> 8) & (byte)((ulong)uVar10 >> 0x28),
                                          (byte)iVar9 & (byte)((ulong)uVar10 >> 0x20))));
      lVar12 = (ulong)uVar29 * 0x10;
      uVar8 = *(undefined8 *)(&UNK_03aae128 + lVar12);
      uVar28 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar29 * 4);
      auVar5[9] = (char)((ulong)uVar8 >> 8);
      auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar12);
      auVar5[10] = (char)((ulong)uVar8 >> 0x10);
      auVar5[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar5[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar5[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar5[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar5[0xf] = (char)((ulong)uVar8 >> 0x38);
      auVar30 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar22 + 0xc),auVar5);
      if (*(char *)(puVar22 + 0xe) == '\0') {
        *(long *)(local_90 + -1) = auVar30._0_8_;
        auVar30 = NEON_ext(auVar30,auVar30,8,1);
        *(long *)(local_90 + 1) = auVar30._0_8_;
        local_90 = puVar19 + (int)uVar28;
      }
      else {
        local_90 = puVar19;
        if (uVar29 != 0) {
          uVar27 = 0;
          do {
            iVar26 = (int)uVar27;
            iVar11 = auVar30._4_4_;
            if (((iVar26 != 1) && (iVar11 = auVar30._12_4_, iVar26 != 3)) &&
               (iVar11 = auVar30._8_4_, iVar26 != 2)) {
              iVar11 = auVar30._0_4_;
            }
            uVar29 = (uint)(local_4c0 + uVar27);
            *(uint *)((long)puVar22 + uVar27 * 4 + 0x60) = uVar29;
            FUN_02fa2448((long)plVar23 + (ulong)(uVar29 & 0xffff) * 0x40 + *plVar23,
                         lVar21 + (long)iVar11 * 0x40);
            if (param_2[4] != 0) {
              *(short *)(param_2[4] + (long)iVar11 * 2) = (short)(local_4c0 + uVar27);
            }
            uVar27 = uVar27 + 1;
          } while (uVar28 != uVar27);
          local_4c0 = local_4c0 + (int)uVar27;
        }
      }
    } while (local_490 != local_90);
  }
  if ((int)param_2[1] < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    FUN_02f9b898(param_1);
    if (param_2[3] != 0) {
      FUN_02feceb0(param_1);
    }
  }
  return;
}


