/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014c400; name: FUN_0014c400
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong * FUN_0014c400(uint *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  ulong *puVar5;
  int *piVar6;
  uint *puVar7;
  ulong *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  
  if (DAT_0438e190 == 0) {
    do {
      iVar9 = DAT_0438e180;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
      if (bVar3) {
        DAT_0438e180 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 != 0) {
      uVar26 = 0;
LAB_0014c4c0:
      if (DAT_0438e180 == 0) {
        do {
          iVar9 = DAT_0438e180;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
          if (bVar3) {
            DAT_0438e180 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) goto LAB_0014c4e8;
      }
      uVar26 = uVar26 + 1;
      if ((uVar26 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014c4c0;
    }
LAB_0014c4e8:
    if (DAT_0438e190 == 0) {
      DAT_0438e198 = 0x1000;
      DAT_0438e1a0 = 0x10000;
      DAT_0438e1a8 = 0x40000;
      DAT_0438e1b0 = 0x200000;
      DAT_0438e1b8 = 7;
      DAT_0438e530 = 7;
      uVar24 = time((time_t *)0x0);
      DAT_0438e190 = uVar24 & 0xfffffffffffffff0 ^ 0x55555558;
      DAT_0438e180 = 0;
      uVar26 = param_1[0xdc];
    }
    else {
      DAT_0438e180 = 0;
      uVar26 = param_1[0xdc];
    }
  }
  else {
    uVar26 = param_1[0xdc];
  }
  if ((((uVar26 & 1) != 0) && (DAT_0438e1a8 <= param_2)) && (*(long *)(param_1 + 4) != 0)) {
    uVar24 = param_2 + DAT_0438e198 + 0x3e & -DAT_0438e198;
    if (*(ulong *)(param_1 + 0xda) == 0) {
      if (param_2 < uVar24) {
LAB_0014c560:
        pvVar4 = mmap((void *)0x0,uVar24,3,0x22,-1,0);
        if (pvVar4 != (void *)0xffffffffffffffff) {
          uVar14 = 0;
          if (((long)pvVar4 + 0x10U & 0xf) != 0) {
            uVar14 = (ulong)(uint)-(int)((long)pvVar4 + 0x10U) & 0xf;
          }
          lVar25 = uVar24 - uVar14;
          puVar5 = (ulong *)((long)pvVar4 + uVar14);
          *puVar5 = uVar14;
          puVar5[1] = lVar25 - 0x20;
          *(undefined8 *)((long)puVar5 + lVar25 + -0x18) = 0xb;
          *(undefined8 *)((long)puVar5 + lVar25 + -0x10) = 0;
          if ((*(void **)(param_1 + 6) == (void *)0x0) || (pvVar4 < *(void **)(param_1 + 6))) {
            *(void **)(param_1 + 6) = pvVar4;
          }
          uVar24 = *(long *)(param_1 + 0xd6) + uVar24;
          *(ulong *)(param_1 + 0xd6) = uVar24;
          if (*(ulong *)(param_1 + 0xd8) < uVar24) {
            *(ulong *)(param_1 + 0xd8) = uVar24;
          }
          if (((ulong)(puVar5 + 2) & 0xf) == 0) {
            FUN_0014f540(param_1);
            return puVar5 + 2;
          }
          goto LAB_0014d184;
        }
      }
    }
    else if (param_2 < uVar24) {
      uVar14 = *(ulong *)(param_1 + 0xd6) + uVar24;
      if ((uVar14 <= *(ulong *)(param_1 + 0xda)) && (*(ulong *)(param_1 + 0xd6) < uVar14))
      goto LAB_0014c560;
    }
  }
  uVar24 = param_2 + DAT_0438e1a0 + 0x5f & -DAT_0438e1a0;
  if (uVar24 <= param_2) {
    return (ulong *)0x0;
  }
  if (*(ulong *)(param_1 + 0xda) != 0) {
    uVar14 = *(ulong *)(param_1 + 0xd6) + uVar24;
    if (*(ulong *)(param_1 + 0xda) < uVar14) {
      return (ulong *)0x0;
    }
    if (uVar14 <= *(ulong *)(param_1 + 0xd6)) {
      return (ulong *)0x0;
    }
  }
  puVar5 = mmap((void *)0x0,uVar24,3,0x22,-1,0);
  if (puVar5 == (ulong *)0xffffffffffffffff) goto LAB_0014c8e8;
  uVar14 = *(long *)(param_1 + 0xd6) + uVar24;
  *(ulong *)(param_1 + 0xd6) = uVar14;
  if (*(ulong *)(param_1 + 0xd8) < uVar14) {
    *(ulong *)(param_1 + 0xd8) = uVar14;
  }
  puVar8 = *(ulong **)(param_1 + 10);
  if (puVar8 == (ulong *)0x0) {
    if ((*(ulong **)(param_1 + 6) == (ulong *)0x0) || (puVar5 < *(ulong **)(param_1 + 6))) {
      *(ulong **)(param_1 + 6) = puVar5;
    }
    *(ulong **)(param_1 + 0xde) = puVar5;
    *(ulong *)(param_1 + 0xe0) = uVar24;
    param_1[0xe4] = 1;
    uVar14 = DAT_0438e190;
    param_1[0xe] = 0xfff;
    param_1[0xf] = 0;
    *(ulong *)(param_1 + 0x10) = uVar14;
    *(uint **)(param_1 + 0x16) = param_1 + 0x12;
    *(uint **)(param_1 + 0x18) = param_1 + 0x12;
    *(uint **)(param_1 + 0x88) = param_1 + 0x82;
    *(uint **)(param_1 + 0x86) = param_1 + 0x82;
    *(uint **)(param_1 + 0x90) = param_1 + 0x8a;
    *(uint **)(param_1 + 0x8e) = param_1 + 0x8a;
    *(uint **)(param_1 + 0x1a) = param_1 + 0x16;
    *(uint **)(param_1 + 0x1c) = param_1 + 0x16;
    *(uint **)(param_1 + 0x1e) = param_1 + 0x1a;
    *(uint **)(param_1 + 0x20) = param_1 + 0x1a;
    *(uint **)(param_1 + 0x22) = param_1 + 0x1e;
    *(uint **)(param_1 + 0x24) = param_1 + 0x1e;
    *(uint **)(param_1 + 0x26) = param_1 + 0x22;
    *(uint **)(param_1 + 0x28) = param_1 + 0x22;
    *(uint **)(param_1 + 0x2a) = param_1 + 0x26;
    *(uint **)(param_1 + 0x2c) = param_1 + 0x26;
    *(uint **)(param_1 + 0x2e) = param_1 + 0x2a;
    *(uint **)(param_1 + 0x30) = param_1 + 0x2a;
    *(uint **)(param_1 + 0x32) = param_1 + 0x2e;
    *(uint **)(param_1 + 0x34) = param_1 + 0x2e;
    *(uint **)(param_1 + 0x36) = param_1 + 0x32;
    *(uint **)(param_1 + 0x38) = param_1 + 0x32;
    *(uint **)(param_1 + 0x3a) = param_1 + 0x36;
    *(uint **)(param_1 + 0x3c) = param_1 + 0x36;
    *(uint **)(param_1 + 0x3e) = param_1 + 0x3a;
    *(uint **)(param_1 + 0x40) = param_1 + 0x3a;
    *(uint **)(param_1 + 0x42) = param_1 + 0x3e;
    *(uint **)(param_1 + 0x44) = param_1 + 0x3e;
    *(uint **)(param_1 + 0x46) = param_1 + 0x42;
    *(uint **)(param_1 + 0x48) = param_1 + 0x42;
    *(uint **)(param_1 + 0x4a) = param_1 + 0x46;
    *(uint **)(param_1 + 0x4c) = param_1 + 0x46;
    *(uint **)(param_1 + 0x4e) = param_1 + 0x4a;
    *(uint **)(param_1 + 0x50) = param_1 + 0x4a;
    *(uint **)(param_1 + 0x52) = param_1 + 0x4e;
    *(uint **)(param_1 + 0x54) = param_1 + 0x4e;
    *(uint **)(param_1 + 0x56) = param_1 + 0x52;
    *(uint **)(param_1 + 0x58) = param_1 + 0x52;
    *(uint **)(param_1 + 0x5a) = param_1 + 0x56;
    *(uint **)(param_1 + 0x5c) = param_1 + 0x56;
    *(uint **)(param_1 + 0x5e) = param_1 + 0x5a;
    *(uint **)(param_1 + 0x60) = param_1 + 0x5a;
    *(uint **)(param_1 + 0x62) = param_1 + 0x5e;
    *(uint **)(param_1 + 100) = param_1 + 0x5e;
    *(uint **)(param_1 + 0x66) = param_1 + 0x62;
    *(uint **)(param_1 + 0x68) = param_1 + 0x62;
    *(uint **)(param_1 + 0x6a) = param_1 + 0x66;
    *(uint **)(param_1 + 0x6c) = param_1 + 0x66;
    *(uint **)(param_1 + 0x6e) = param_1 + 0x6a;
    *(uint **)(param_1 + 0x70) = param_1 + 0x6a;
    *(uint **)(param_1 + 0x72) = param_1 + 0x6e;
    *(uint **)(param_1 + 0x74) = param_1 + 0x6e;
    *(uint **)(param_1 + 0x76) = param_1 + 0x72;
    *(uint **)(param_1 + 0x78) = param_1 + 0x72;
    *(uint **)(param_1 + 0x7a) = param_1 + 0x76;
    *(uint **)(param_1 + 0x7c) = param_1 + 0x76;
    *(uint **)(param_1 + 0x7e) = param_1 + 0x7a;
    *(uint **)(param_1 + 0x80) = param_1 + 0x7a;
    *(uint **)(param_1 + 0x84) = param_1 + 0x7e;
    *(uint **)(param_1 + 0x82) = param_1 + 0x7e;
    *(uint **)(param_1 + 0x8c) = param_1 + 0x86;
    *(uint **)(param_1 + 0x8a) = param_1 + 0x86;
    *(uint **)(param_1 + 0x94) = param_1 + 0x8e;
    *(uint **)(param_1 + 0x92) = param_1 + 0x8e;
    if (param_1 == &DAT_0438e1c0) {
      uVar14 = 0;
      if (((ulong)(puVar5 + 2) & 0xf) != 0) {
        uVar14 = (ulong)(uint)-(int)(puVar5 + 2) & 0xf;
      }
      DAT_0438e1e8 = (long)puVar5 + uVar14;
      DAT_0438e1d0 = (uVar24 - 0x50) - uVar14;
      *(ulong *)(DAT_0438e1e8 + 8) = DAT_0438e1d0 | 1;
      *(undefined8 *)((long)puVar5 + (uVar24 - 0x48)) = 0x50;
      DAT_0438e1f0 = DAT_0438e1b0;
      uVar24 = DAT_0438e1d0 - param_2;
      if (DAT_0438e1d0 < param_2 || uVar24 == 0) goto LAB_0014c8e8;
    }
    else {
      uVar14 = (long)param_1 + (*(ulong *)(param_1 + -2) & 0xfffffffffffffff8);
      uVar23 = 0;
      if ((uVar14 & 0xf) != 0) {
        uVar23 = (ulong)(uint)-(int)uVar14 & 0xf;
      }
      lVar25 = (uVar14 - 0x10) + uVar23;
      uVar14 = (long)puVar5 + (((uVar24 - (uVar14 - 0x10)) + -0x50) - uVar23);
      *(ulong *)(param_1 + 4) = uVar14;
      *(long *)(param_1 + 10) = lVar25;
      *(ulong *)(lVar25 + 8) = uVar14 | 1;
      *(undefined8 *)((long)puVar5 + (uVar24 - 0x48)) = 0x50;
LAB_0014c8d0:
      *(undefined8 *)(param_1 + 0xc) = DAT_0438e1b0;
      uVar24 = *(ulong *)(param_1 + 4) - param_2;
      if (*(ulong *)(param_1 + 4) < param_2 || uVar24 == 0) {
LAB_0014c8e8:
        piVar6 = __errno_location();
        *piVar6 = 0xc;
        return (ulong *)0x0;
      }
    }
  }
  else {
    puVar13 = (ulong *)(param_1 + 0xde);
    puVar15 = puVar13;
    do {
      if (puVar5 == (ulong *)((long)*puVar15 + puVar15[1])) {
        if ((((((uint)puVar15[3] >> 3 & 1) == 0) && (((uint)puVar15[3] & 1) == 1)) &&
            ((ulong *)*puVar15 <= puVar8)) && (puVar8 < puVar5)) {
          puVar15[1] = puVar15[1] + uVar24;
          lVar25 = *(long *)(param_1 + 10);
          lVar11 = *(long *)(param_1 + 4);
          uVar14 = 0;
          if ((lVar25 + 0x10U & 0xf) != 0) {
            uVar14 = (ulong)(uint)-(int)(lVar25 + 0x10U) & 0xf;
          }
          uVar23 = (lVar11 + uVar24) - uVar14;
          *(ulong *)(param_1 + 4) = uVar23;
          *(ulong *)(param_1 + 10) = lVar25 + uVar14;
          *(ulong *)(lVar25 + uVar14 + 8) = uVar23 | 1;
          *(undefined8 *)(lVar25 + lVar11 + uVar24 + 8) = 0x50;
          goto LAB_0014c8d0;
        }
        break;
      }
      puVar15 = (ulong *)puVar15[2];
    } while (puVar15 != (ulong *)0x0);
    if (puVar5 < *(ulong **)(param_1 + 6)) {
      *(ulong **)(param_1 + 6) = puVar5;
    }
    uVar14 = (long)puVar5 + uVar24;
    puVar15 = puVar13;
    do {
      puVar20 = puVar13;
      if (*puVar15 == uVar14) {
        if (((uint)puVar15[3] >> 3 & 1) != 0) goto LAB_0014c93c;
        if (((uint)puVar15[3] & 1) != 1) goto LAB_0014c93c;
        *puVar15 = (ulong)puVar5;
        puVar15[1] = puVar15[1] + uVar24;
        uVar24 = 0;
        if (((ulong)(puVar5 + 2) & 0xf) != 0) {
          uVar24 = (ulong)(uint)-(int)(puVar5 + 2) & 0xf;
        }
        lVar25 = (long)puVar5 + uVar24;
        uVar24 = 0;
        if ((uVar14 + 0x10 & 0xf) != 0) {
          uVar24 = (ulong)(uint)-(int)(uVar14 + 0x10) & 0xf;
        }
        puVar12 = (uint *)(uVar14 + uVar24);
        puVar7 = (uint *)(lVar25 + param_2);
        *(ulong *)(lVar25 + 8) = param_2 | 3;
        if (((puVar12 <= puVar7) || (uVar24 = *(ulong *)(puVar12 + 2), (uVar24 & 1) == 0)) ||
           (uVar14 = (long)puVar12 + (-param_2 - lVar25), uVar14 < 0x20)) goto LAB_0014d184;
        if (*(uint **)(param_1 + 10) == puVar12) {
          lVar11 = *(long *)(param_1 + 4);
          *(ulong *)(param_1 + 4) = lVar11 + uVar14;
          *(uint **)(param_1 + 10) = puVar7;
          *(ulong *)(puVar7 + 2) = lVar11 + uVar14 | 1;
          goto LAB_0014cdc4;
        }
        if (*(uint **)(param_1 + 8) == puVar12) {
          uVar14 = *(long *)(param_1 + 2) + uVar14;
          *(ulong *)(param_1 + 2) = uVar14;
          *(uint **)(param_1 + 8) = puVar7;
          *(ulong *)(puVar7 + 2) = uVar14 | 1;
          *(ulong *)((long)puVar7 + uVar14) = uVar14;
          goto LAB_0014cdcc;
        }
        if ((uVar24 & 3) != 1) goto LAB_0014cfb4;
        uVar23 = uVar24 & 0xfffffffffffffff8;
        if (0xff < uVar24) {
          puVar16 = *(uint **)(puVar12 + 6);
          uVar24 = *(ulong *)(puVar12 + 0xc);
          if (puVar16 == puVar12) {
            puVar22 = *(uint **)(puVar12 + 10);
            puVar17 = puVar12 + 10;
            if (puVar22 != (uint *)0x0) goto LAB_0014cec8;
            puVar22 = *(uint **)(puVar12 + 8);
            puVar17 = puVar12 + 8;
            if (puVar22 != (uint *)0x0) goto LAB_0014cec8;
            puVar16 = (uint *)0x0;
          }
          else {
            uVar18 = *(ulong *)(puVar12 + 4);
            if (((uVar18 < *(ulong *)(param_1 + 6)) || (*(uint **)(uVar18 + 0x18) != puVar12)) ||
               (*(uint **)(puVar16 + 4) != puVar12)) goto LAB_0014d184;
            *(uint **)(uVar18 + 0x18) = puVar16;
            *(ulong *)(puVar16 + 4) = uVar18;
          }
          goto joined_r0x0014cef8;
        }
        puVar16 = *(uint **)(puVar12 + 6);
        if (((puVar16 == puVar12) || (puVar17 = *(uint **)(puVar12 + 4), puVar17 == puVar12)) ||
           (uVar23 != (uVar24 & 0xfffffff8))) goto LAB_0014d184;
        if ((puVar17 != param_1 + (uVar24 >> 3 & 0x7fffffff) * 4 + 0x12) &&
           ((puVar17 < *(uint **)(param_1 + 6) || (*(uint **)(puVar17 + 6) != puVar12))))
        goto LAB_0014d184;
        if (puVar16 == puVar17) {
          *param_1 = *param_1 & (1 << (ulong)((uint)(uVar24 >> 3) & 0x1f) ^ 0xffffffffU);
          goto LAB_0014cfac;
        }
        if ((puVar16 != param_1 + (uVar24 >> 3 & 0x7fffffff) * 4 + 0x12) &&
           ((puVar16 < *(uint **)(param_1 + 6) || (*(uint **)(puVar16 + 4) != puVar12))))
        goto LAB_0014d184;
        *(uint **)(puVar17 + 6) = puVar16;
        *(uint **)(puVar16 + 4) = puVar17;
        goto LAB_0014cfac;
      }
      puVar15 = (ulong *)puVar15[2];
    } while (puVar15 != (ulong *)0x0);
    puVar15 = (ulong *)*puVar13;
    if (puVar15 <= puVar8) goto LAB_0014c948;
    do {
      do {
        puVar20 = (ulong *)puVar20[2];
LAB_0014c93c:
        puVar15 = (ulong *)*puVar20;
      } while (puVar8 < puVar15);
LAB_0014c948:
      puVar15 = (ulong *)((long)puVar15 + puVar20[1]);
    } while (puVar15 <= puVar8);
    uVar14 = 0;
    if (((long)puVar15 - 0x4fU & 0xf) != 0) {
      uVar14 = (ulong)(uint)-(int)((long)puVar15 - 0x4fU) & 0xf;
    }
    puVar21 = (ulong *)((long)puVar15 + (uVar14 - 0x5f));
    puVar20 = puVar8;
    if (puVar8 + 4 <= puVar21) {
      puVar20 = puVar21;
    }
    uVar14 = 0;
    if (((ulong)(puVar5 + 2) & 0xf) != 0) {
      uVar14 = (ulong)(uint)-(int)(puVar5 + 2) & 0xf;
    }
    uVar23 = (uVar24 - 0x50) - uVar14;
    *(ulong *)(param_1 + 4) = uVar23;
    *(ulong *)(param_1 + 10) = (long)puVar5 + uVar14;
    *(ulong *)((long)puVar5 + uVar14 + 8) = uVar23 | 1;
    *(undefined8 *)((long)puVar5 + (uVar24 - 0x48)) = 0x50;
    puVar21 = puVar20 + 2;
    *(undefined8 *)(param_1 + 0xc) = DAT_0438e1b0;
    if (((ulong)puVar21 & 0xf) != 0) goto LAB_0014d184;
    puVar20[1] = 0x33;
    uVar14 = *puVar13;
    uVar23 = *(ulong *)(param_1 + 0xe0);
    uVar18 = *(ulong *)(param_1 + 0xe4);
    puVar20[4] = *(ulong *)(param_1 + 0xe2);
    puVar20[5] = uVar18;
    *puVar21 = uVar14;
    puVar20[3] = uVar23;
    *(ulong *)(param_1 + 0xe0) = uVar24;
    param_1[0xe4] = 1;
    iVar9 = 1;
    *(ulong **)(param_1 + 0xde) = puVar5;
    *(ulong **)(param_1 + 0xe2) = puVar21;
    puVar5 = puVar20 + 7;
    do {
      puVar13 = puVar5 + 1;
      *puVar5 = 0xb;
      iVar9 = iVar9 + -1;
      puVar5 = puVar13;
    } while (puVar13 < puVar15);
    if (iVar9 == 0) goto LAB_0014d184;
    uVar24 = (long)puVar20 - (long)puVar8;
    if (uVar24 != 0) {
      puVar20[1] = puVar20[1] & 0xfffffffffffffffe;
      puVar8[1] = uVar24 | 1;
      *puVar20 = uVar24;
      if (uVar24 < 0x100) {
        if (uVar24 < 0x20) goto LAB_0014d184;
        uVar14 = uVar24 * 2 & 0x7fffffff0;
        uVar26 = 1 << (ulong)((uint)(uVar24 >> 3) & 0x1f);
        uVar18 = (long)param_1 + uVar14 + 0x48;
        if ((*param_1 & uVar26) == 0) {
          *param_1 = *param_1 | uVar26;
          uVar24 = uVar18;
        }
        else {
          uVar24 = *(ulong *)((long)param_1 + uVar14 + 0x58);
          if (uVar24 < *(ulong *)(param_1 + 6)) goto LAB_0014d184;
        }
        *(ulong **)((long)param_1 + uVar14 + 0x58) = puVar8;
        *(ulong **)(uVar24 + 0x18) = puVar8;
LAB_0014cd84:
        puVar8[2] = uVar24;
        puVar8[3] = uVar18;
      }
      else {
        uVar26 = 0;
        if (uVar24 >> 8 != 0) {
          if (uVar24 >> 0x18 == 0) {
            iVar9 = (int)(uVar24 >> 8);
            uVar26 = iVar9 + 0xfff00U >> 0x10 & 8;
            iVar9 = iVar9 << (ulong)uVar26;
            uVar10 = iVar9 + 0x7f000U >> 0x10 & 4;
            iVar9 = iVar9 << (ulong)uVar10;
            uVar1 = iVar9 + 0x3c000U >> 0x10 & 2;
            iVar9 = (0xe - (uVar10 | uVar26 | uVar1)) + ((uint)(iVar9 << (ulong)uVar1) >> 0xf);
            uVar26 = (uint)(uVar24 >> ((ulong)(iVar9 + 7) & 0x3f)) & 1 | iVar9 * 2;
          }
          else {
            uVar26 = 0x1f;
          }
        }
        *(uint *)(puVar8 + 7) = uVar26;
        puVar8[4] = 0;
        puVar8[5] = 0;
        uVar10 = 1 << (ulong)(uVar26 & 0x1f);
        puVar5 = (ulong *)(param_1 + (ulong)uVar26 * 2 + 0x96);
        if ((param_1[1] & uVar10) == 0) {
          param_1[1] = param_1[1] | uVar10;
          *puVar5 = (ulong)puVar8;
          puVar8[6] = (ulong)puVar5;
        }
        else {
          uVar14 = 0;
          if (uVar26 != 0x1f) {
            uVar14 = 0x3f - (ulong)((uVar26 >> 1) + 6);
          }
          uVar23 = uVar24 << (uVar14 & 0x3f);
          uVar14 = *puVar5;
          do {
            uVar18 = uVar14;
            if ((*(ulong *)(uVar18 + 8) & 0xfffffffffffffff8) == uVar24) {
              uVar24 = *(ulong *)(uVar18 + 0x10);
              if ((uVar24 < *(ulong *)(param_1 + 6)) || (uVar18 < *(ulong *)(param_1 + 6)))
              goto LAB_0014d184;
              *(ulong **)(uVar24 + 0x18) = puVar8;
              *(ulong **)(uVar18 + 0x10) = puVar8;
              puVar8[6] = 0;
              goto LAB_0014cd84;
            }
            uVar14 = uVar23 >> 0x3c;
            uVar23 = uVar23 << 1;
            puVar5 = (ulong *)(uVar18 + (uVar14 & 8) + 0x20);
            uVar14 = *puVar5;
          } while (*puVar5 != 0);
          if (puVar5 < *(ulong **)(param_1 + 6)) goto LAB_0014d184;
          *puVar5 = (ulong)puVar8;
          puVar8[6] = uVar18;
        }
        puVar8[2] = (ulong)puVar8;
        puVar8[3] = (ulong)puVar8;
      }
    }
    FUN_0014c360(param_1,*(undefined8 *)(param_1 + 10));
    uVar24 = *(ulong *)(param_1 + 4) - param_2;
    if (*(ulong *)(param_1 + 4) < param_2 || uVar24 == 0) goto LAB_0014c8e8;
  }
  lVar25 = *(long *)(param_1 + 10);
  *(ulong *)(param_1 + 4) = uVar24;
  *(ulong *)(param_1 + 10) = lVar25 + param_2;
  *(ulong *)(lVar25 + param_2 + 8) = uVar24 | 1;
  *(ulong *)(lVar25 + 8) = param_2 | 3;
  puVar7 = *(uint **)(param_1 + 10);
LAB_0014cdc4:
  FUN_0014c360(param_1,puVar7);
LAB_0014cdcc:
  uVar24 = *(ulong *)(lVar25 + 8);
  FUN_0014d190(param_1,lVar25);
  if ((((uVar24 & 0xc) == 0) && (uVar24 = uVar24 & 0xfffffffffffffffc, 0x1f < uVar24)) &&
     (param_2 <= uVar24)) {
    if (uVar24 < param_2 + 0x20) {
      return (ulong *)(lVar25 + 0x10);
    }
    if ((*(ulong *)(lVar25 + 8) & 3) == 0) {
      return (ulong *)(lVar25 + 0x10);
    }
  }
LAB_0014d184:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0014cec8:
  do {
    do {
      puVar16 = puVar22;
      puVar19 = puVar17;
      puVar22 = *(uint **)(puVar16 + 10);
      puVar17 = puVar16 + 10;
    } while (puVar22 != (uint *)0x0);
    puVar22 = *(uint **)(puVar16 + 8);
    puVar17 = puVar16 + 8;
  } while (puVar22 != (uint *)0x0);
  if (puVar19 < *(uint **)(param_1 + 6)) goto LAB_0014d184;
  puVar19[0] = 0;
  puVar19[1] = 0;
joined_r0x0014cef8:
  if (uVar24 != 0) {
    if (*(uint **)(param_1 + (ulong)puVar12[0xe] * 2 + 0x96) == puVar12) {
      *(uint **)(param_1 + (ulong)puVar12[0xe] * 2 + 0x96) = puVar16;
      if (puVar16 == (uint *)0x0) {
        param_1[1] = param_1[1] & (1 << (ulong)(puVar12[0xe] & 0x1f) ^ 0xffffffffU);
      }
      else {
LAB_0014cf48:
        if (puVar16 < *(uint **)(param_1 + 6)) goto LAB_0014d184;
        *(ulong *)(puVar16 + 0xc) = uVar24;
        uVar24 = *(ulong *)(puVar12 + 8);
        if (uVar24 != 0) {
          if (uVar24 < *(ulong *)(param_1 + 6)) goto LAB_0014d184;
          *(ulong *)(puVar16 + 8) = uVar24;
          *(uint **)(uVar24 + 0x30) = puVar16;
        }
        uVar24 = *(ulong *)(puVar12 + 10);
        if (uVar24 != 0) {
          if (uVar24 < *(ulong *)(param_1 + 6)) goto LAB_0014d184;
          *(ulong *)(puVar16 + 10) = uVar24;
          *(uint **)(uVar24 + 0x30) = puVar16;
        }
      }
    }
    else {
      if (uVar24 < *(ulong *)(param_1 + 6)) goto LAB_0014d184;
      lVar11 = 0x20;
      if (*(uint **)(uVar24 + 0x20) != puVar12) {
        lVar11 = 0x28;
      }
      *(uint **)(uVar24 + lVar11) = puVar16;
      if (puVar16 != (uint *)0x0) goto LAB_0014cf48;
    }
  }
LAB_0014cfac:
  puVar12 = (uint *)((long)puVar12 + uVar23);
  uVar14 = uVar23 + uVar14;
LAB_0014cfb4:
  *(ulong *)(puVar12 + 2) = *(ulong *)(puVar12 + 2) & 0xfffffffffffffffe;
  *(ulong *)(puVar7 + 2) = uVar14 | 1;
  *(ulong *)((long)puVar7 + uVar14) = uVar14;
  if (uVar14 < 0x100) {
    if (uVar14 < 0x20) goto LAB_0014d184;
    uVar23 = uVar14 & 0x3fffffff8;
    uVar26 = 1 << (ulong)((uint)(uVar14 >> 3) & 0x1f);
    uVar18 = (long)param_1 + uVar23 * 2 + 0x48;
    if ((*param_1 & uVar26) == 0) {
      *param_1 = *param_1 | uVar26;
      uVar24 = uVar18;
    }
    else {
      uVar24 = *(ulong *)((long)param_1 + uVar23 * 2 + 0x58);
      if (uVar24 < *(ulong *)(param_1 + 6)) goto LAB_0014d184;
    }
    *(uint **)((long)param_1 + uVar23 * 2 + 0x58) = puVar7;
    *(uint **)(uVar24 + 0x18) = puVar7;
LAB_0014d168:
    *(ulong *)(puVar7 + 4) = uVar24;
    *(ulong *)(puVar7 + 6) = uVar18;
  }
  else {
    uVar24 = 0;
    if (uVar14 >> 8 != 0) {
      if (uVar14 >> 0x18 == 0) {
        iVar9 = (int)(uVar14 >> 8);
        uVar26 = iVar9 + 0xfff00U >> 0x10 & 8;
        iVar9 = iVar9 << (ulong)uVar26;
        uVar10 = iVar9 + 0x7f000U >> 0x10 & 4;
        iVar9 = iVar9 << (ulong)uVar10;
        uVar1 = iVar9 + 0x3c000U >> 0x10 & 2;
        iVar9 = (0xe - (uVar10 | uVar26 | uVar1)) + ((uint)(iVar9 << (ulong)uVar1) >> 0xf);
        uVar24 = (ulong)((uint)(uVar14 >> ((ulong)(iVar9 + 7) & 0x3f)) & 1 | iVar9 * 2);
      }
      else {
        uVar24 = 0x1f;
      }
    }
    uVar10 = (uint)uVar24;
    puVar7[0xe] = uVar10;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    uVar26 = 1 << (ulong)(uVar10 & 0x1f);
    puVar5 = (ulong *)(param_1 + uVar24 * 2 + 0x96);
    if ((param_1[1] & uVar26) == 0) {
      param_1[1] = param_1[1] | uVar26;
      *puVar5 = (ulong)puVar7;
      *(ulong **)(puVar7 + 0xc) = puVar5;
    }
    else {
      if (uVar10 == 0x1f) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0x3f - (ulong)((int)(uVar24 >> 1) + 6);
      }
      uVar23 = uVar14 << (uVar24 & 0x3f);
      uVar24 = *puVar5;
      do {
        uVar18 = uVar24;
        if ((*(ulong *)(uVar18 + 8) & 0xfffffffffffffff8) == uVar14) {
          uVar24 = *(ulong *)(uVar18 + 0x10);
          if ((uVar24 < *(ulong *)(param_1 + 6)) || (uVar18 < *(ulong *)(param_1 + 6)))
          goto LAB_0014d184;
          *(uint **)(uVar24 + 0x18) = puVar7;
          *(uint **)(uVar18 + 0x10) = puVar7;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          goto LAB_0014d168;
        }
        uVar24 = uVar23 >> 0x3c;
        uVar23 = uVar23 << 1;
        puVar5 = (ulong *)(uVar18 + (uVar24 & 8) + 0x20);
        uVar24 = *puVar5;
      } while (*puVar5 != 0);
      if (puVar5 < *(ulong **)(param_1 + 6)) goto LAB_0014d184;
      *puVar5 = (ulong)puVar7;
      *(ulong *)(puVar7 + 0xc) = uVar18;
    }
    *(uint **)(puVar7 + 4) = puVar7;
    *(uint **)(puVar7 + 6) = puVar7;
  }
  FUN_0014d4e0(param_1);
  goto LAB_0014cdcc;
}


