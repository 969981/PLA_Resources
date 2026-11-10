/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014de90; name: FUN_0014de90
 */


uint * FUN_0014de90(uint *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  if (((byte)param_1[0xdc] >> 1 & 1) != 0) {
    puVar9 = param_1 + 0xdd;
    do {
      uVar17 = *puVar9;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar8) {
        *puVar9 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (uVar17 != 0) {
      uVar17 = 0;
LAB_0014dedc:
      if (*puVar9 == 0) {
        do {
          uVar1 = *puVar9;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar8) {
            *puVar9 = 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar1 == 0) goto LAB_0014df04;
      }
      uVar17 = uVar17 + 1;
      if ((uVar17 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014dedc;
    }
  }
LAB_0014df04:
  if (param_2 < 0xe9) {
    uVar16 = 0x20;
    if (0x16 < param_2) {
      uVar16 = param_2 + 0x17 & 0xfffffffffffffff0;
    }
    uVar17 = *param_1;
    uVar4 = (uint)(uVar16 >> 3);
    uVar1 = uVar17 >> (ulong)(uVar4 & 0x1e);
    if ((uVar1 & 3) == 0) {
      if (*(ulong *)(param_1 + 2) < uVar16) {
        if (uVar1 != 0) {
          uVar3 = 2 << (ulong)(uVar4 & 0x1f);
          uVar1 = uVar1 << (ulong)(uVar4 & 0x1f) & (uVar3 | -uVar3);
          uVar4 = (uVar1 & -uVar1) - 1;
          uVar1 = uVar4 >> 0xc & 0x10;
          uVar4 = uVar4 >> (ulong)uVar1;
          uVar3 = uVar4 >> (ulong)(uVar4 >> 5 & 8);
          uVar5 = uVar3 >> (ulong)(uVar3 >> 2 & 4);
          uVar6 = uVar5 >> (ulong)(uVar5 >> 1 & 2);
          uVar1 = (uVar1 | uVar4 >> 5 & 8 | uVar3 >> 2 & 4 | uVar5 >> 1 & 2 | uVar6 >> 1 & 1) +
                  (uVar6 >> (ulong)(uVar6 >> 1 & 1));
          puVar11 = param_1 + (ulong)(uVar1 * 2) * 2 + 0x12;
          puVar13 = *(uint **)(puVar11 + 4);
          uVar12 = *(ulong *)(puVar13 + 2) & 0xfffffffffffffff8;
          if (uVar12 != uVar1 * 8) goto LAB_0014e3a0;
          puVar9 = puVar13 + 4;
          puVar15 = *(uint **)puVar9;
          if ((puVar13 == puVar11) || (puVar13 == puVar15)) goto LAB_0014e3a0;
          if (puVar15 == puVar11) {
            *param_1 = uVar17 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
            uVar10 = uVar12 - uVar16;
            if (uVar10 < 0x20) goto LAB_0014e0f8;
LAB_0014e2ac:
            *(ulong *)(puVar13 + 2) = uVar16 | 3;
            *(ulong *)((long)puVar13 + uVar16 + 8) = uVar10 | 1;
            *(ulong *)((long)puVar13 + uVar12) = uVar10;
            uVar12 = *(ulong *)(param_1 + 2);
            if (0xff < uVar12) goto LAB_0014e3a0;
            if (uVar12 != 0) {
              if (uVar12 < 0x20) goto LAB_0014e3a0;
              lVar14 = *(long *)(param_1 + 8);
              puVar11 = param_1 + (uVar12 >> 3 & 0x7fffffff) * 4 + 0x12;
              uVar17 = 1 << (ulong)((uint)(uVar12 >> 3) & 0x1f);
              if ((*param_1 & uVar17) == 0) {
                *param_1 = *param_1 | uVar17;
                puVar15 = puVar11;
              }
              else {
                puVar15 = *(uint **)(puVar11 + 4);
                if (*(uint **)(puVar11 + 4) < *(uint **)(param_1 + 6)) goto LAB_0014e3a0;
              }
              *(long *)(puVar11 + 4) = lVar14;
              *(long *)(puVar15 + 6) = lVar14;
              *(uint **)(lVar14 + 0x10) = puVar15;
              *(uint **)(lVar14 + 0x18) = puVar11;
            }
            *(ulong *)(param_1 + 2) = uVar10;
            *(ulong *)(param_1 + 8) = (long)puVar13 + uVar16;
          }
          else {
            if ((puVar15 < *(uint **)(param_1 + 6)) || (*(uint **)(puVar15 + 6) != puVar13))
            goto LAB_0014e3a0;
            *(uint **)(puVar15 + 6) = puVar11;
            *(uint **)(puVar11 + 4) = puVar15;
            uVar10 = uVar12 - uVar16;
            if (0x1f < uVar10) goto LAB_0014e2ac;
LAB_0014e0f8:
            *(ulong *)(puVar13 + 2) = uVar12 | 3;
            *(ulong *)((long)puVar13 + uVar12 + 8) = *(ulong *)((long)puVar13 + uVar12 + 8) | 1;
          }
          uVar12 = *(ulong *)(puVar13 + 2);
          FUN_0014d190(param_1,puVar13);
          if (((((uVar12 & 0xc) != 0) || (uVar12 = uVar12 & 0xfffffffffffffffc, uVar12 < 0x20)) ||
              (uVar12 < uVar16)) || (uVar16 + 0x20 <= uVar12 && (*(ulong *)(puVar13 + 2) & 3) != 0))
          goto LAB_0014e3a0;
          goto LAB_0014e378;
        }
        if ((param_1[1] != 0) &&
           (puVar9 = (uint *)FUN_0014bab0(param_1,uVar16), puVar9 != (uint *)0x0))
        goto LAB_0014dfe8;
      }
LAB_0014e19c:
      uVar10 = *(ulong *)(param_1 + 2);
      uVar12 = uVar10 - uVar16;
      if (uVar10 < uVar16) goto LAB_0014e1a8;
LAB_0014e1e4:
      lVar14 = *(long *)(param_1 + 8);
      if (uVar12 < 0x20) {
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *(ulong *)(lVar14 + 8) = uVar10 | 3;
        *(ulong *)(lVar14 + uVar10 + 8) = *(ulong *)(lVar14 + uVar10 + 8) | 1;
        goto LAB_0014e250;
      }
      uVar18 = uVar16 | 3;
      *(ulong *)(param_1 + 2) = uVar12;
      *(ulong *)(param_1 + 8) = lVar14 + uVar16;
      *(ulong *)(lVar14 + uVar16 + 8) = uVar12 | 1;
      *(ulong *)(lVar14 + uVar10) = uVar12;
      *(ulong *)(lVar14 + 8) = uVar18;
      goto LAB_0014e254;
    }
    uVar1 = (uVar1 & 1 | uVar4) ^ 1;
    uVar4 = uVar1 << 1;
    puVar11 = *(uint **)(param_1 + (ulong)uVar4 * 2 + 0x16);
    uVar12 = *(ulong *)(puVar11 + 2) & 0xfffffffffffffff8;
    if (uVar12 != uVar1 << 3) goto LAB_0014e3a0;
    puVar9 = puVar11 + 4;
    puVar15 = *(uint **)puVar9;
    puVar13 = param_1 + (ulong)uVar4 * 2 + 0x12;
    if ((puVar11 == puVar13) || (puVar11 == puVar15)) goto LAB_0014e3a0;
    if (puVar15 == puVar13) {
      *param_1 = uVar17 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
    }
    else {
      if ((puVar15 < *(uint **)(param_1 + 6)) || (*(uint **)(puVar15 + 6) != puVar11))
      goto LAB_0014e3a0;
      *(uint **)(puVar15 + 6) = puVar13;
      *(uint **)(param_1 + (ulong)uVar4 * 2 + 0x16) = puVar15;
    }
    *(ulong *)(puVar11 + 2) = uVar12 | 3;
    *(ulong *)((long)puVar11 + uVar12 + 8) = *(ulong *)((long)puVar11 + uVar12 + 8) | 1;
    uVar12 = *(ulong *)(puVar11 + 2);
    FUN_0014d190(param_1,puVar11);
joined_r0x0014e000:
    if ((((uVar12 & 0xc) != 0) || (uVar12 = uVar12 & 0xfffffffffffffffc, uVar12 < 0x20)) ||
       (uVar12 < uVar16)) goto LAB_0014e3a0;
    if (uVar16 + 0x20 <= uVar12) goto LAB_0014e174;
  }
  else {
    if (param_2 < 0xffffffffffffff80) {
      uVar16 = param_2 + 0x17 & 0xfffffffffffffff0;
      if ((param_1[1] == 0) ||
         (puVar9 = (uint *)FUN_0014bda0(param_1,uVar16), puVar9 == (uint *)0x0)) goto LAB_0014e19c;
LAB_0014dfe8:
      uVar12 = *(ulong *)(puVar9 + -2);
      FUN_0014d190(param_1,puVar9 + -4);
      goto joined_r0x0014e000;
    }
    uVar16 = 0xffffffffffffffff;
    if (*(long *)(param_1 + 2) == -1) {
      uVar10 = 0xffffffffffffffff;
      uVar12 = 0;
      goto LAB_0014e1e4;
    }
LAB_0014e1a8:
    uVar12 = *(ulong *)(param_1 + 4) - uVar16;
    if (*(ulong *)(param_1 + 4) < uVar16 || uVar12 == 0) {
      puVar9 = (uint *)FUN_0014c400(param_1,uVar16);
      bVar2 = (byte)param_1[0xdc];
      goto joined_r0x0014e37c;
    }
    lVar14 = *(long *)(param_1 + 10);
    *(ulong *)(param_1 + 4) = uVar12;
    *(ulong *)(param_1 + 10) = lVar14 + uVar16;
    *(ulong *)(lVar14 + uVar16 + 8) = uVar12 | 1;
    *(ulong *)(lVar14 + 8) = uVar16 | 3;
    FUN_0014c360(param_1,*(undefined8 *)(param_1 + 10));
LAB_0014e250:
    uVar18 = *(ulong *)(lVar14 + 8);
LAB_0014e254:
    FUN_0014d190(param_1,lVar14);
    if ((((uVar18 & 0xc) != 0) || (uVar18 = uVar18 & 0xfffffffffffffffc, uVar18 < 0x20)) ||
       (uVar18 < uVar16)) goto LAB_0014e3a0;
    puVar9 = (uint *)(lVar14 + 0x10);
    if (uVar16 + 0x20 <= uVar18) {
LAB_0014e174:
      if ((*(ulong *)(puVar9 + -2) & 3) != 0) {
LAB_0014e3a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
LAB_0014e378:
  bVar2 = (byte)param_1[0xdc];
joined_r0x0014e37c:
  if ((bVar2 >> 1 & 1) != 0) {
    param_1[0xdd] = 0;
  }
  return puVar9;
}


