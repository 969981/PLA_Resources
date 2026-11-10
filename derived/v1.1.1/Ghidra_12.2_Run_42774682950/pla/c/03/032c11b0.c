/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c11b0; name: FUN_032c11b0
 */


/* WARNING: Removing unreachable block (ram,0x032c1408) */
/* WARNING: Removing unreachable block (ram,0x032c139c) */
/* WARNING: Removing unreachable block (ram,0x032c1448) */
/* WARNING: Removing unreachable block (ram,0x032c1344) */

undefined8 FUN_032c11b0(long *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_48;
  
  uVar19 = param_2 * -0xae502812aa7333;
  uVar18 = uVar19 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar2 = (ulong *)(*param_1 + (param_1[1] & uVar18) * 0x80);
  puVar1 = puVar2 + 1;
  do {
    uVar6 = *puVar1;
    cVar11 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar6 | 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_032c0d5c(puVar2);
  }
  cVar11 = (char)(uVar19 >> 0x38);
  local_48 = *puVar2;
  uVar10 = uVar6 | 1;
  uVar3 = (uint)local_48 & 0xff;
  if ((local_48 & 0xff) == 0) {
    for (uVar6 = uVar6 & 0x101010101010100 &
                 CONCAT17(-(cVar11 == (char)(local_48 >> 0x38)),
                          CONCAT16(-(cVar11 == (char)(local_48 >> 0x30)),
                                   CONCAT15(-(cVar11 == (char)(local_48 >> 0x28)),
                                            CONCAT14(-(cVar11 == (char)(local_48 >> 0x20)),
                                                     CONCAT13(-(cVar11 == (char)(local_48 >> 0x18)),
                                                              CONCAT12(-(cVar11 ==
                                                                        (char)(local_48 >> 0x10)),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 (char)(local_48 >>
                                                                                       8)),
                                                                                -(cVar11 ==
                                                                                 (char)local_48)))))
                                           ))); uVar6 != 0; uVar6 = 1L << (uVar14 & 0x3f) ^ uVar6) {
      uVar14 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
      if (puVar2[(uVar14 >> 3) * 2] == param_2) {
        uVar7 = 1;
        goto LAB_032c151c;
      }
    }
  }
  else if (uVar3 < 0xcd) {
    uVar6 = 0;
    uVar14 = local_48;
    puVar12 = puVar2;
    uVar8 = uVar10;
    while( true ) {
      for (uVar14 = uVar8 & 0x101010101010100 &
                    CONCAT17(-(cVar11 == (char)(uVar14 >> 0x38)),
                             CONCAT16(-(cVar11 == (char)(uVar14 >> 0x30)),
                                      CONCAT15(-(cVar11 == (char)(uVar14 >> 0x28)),
                                               CONCAT14(-(cVar11 == (char)(uVar14 >> 0x20)),
                                                        CONCAT13(-(cVar11 == (char)(uVar14 >> 0x18))
                                                                 ,CONCAT12(-(cVar11 ==
                                                                            (char)(uVar14 >> 0x10)),
                                                                           CONCAT11(-(cVar11 ==
                                                                                     (char)(uVar14 
                                                  >> 8)),-(cVar11 == (char)uVar14))))))));
          uVar14 != 0; uVar14 = 1L << (uVar8 & 0x3f) ^ uVar14) {
        uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        if (puVar12[(uVar8 >> 3) * 2] == param_2) {
          uVar7 = 1;
          goto LAB_032c151c;
        }
      }
      if (uVar6 == uVar3) break;
      uVar6 = uVar6 + 1;
      puVar12 = (ulong *)(*param_1 + (param_1[1] & uVar6 + uVar18) * 0x80);
      uVar8 = puVar12[1];
      uVar14 = *puVar12;
    }
  }
  else {
    uVar6 = 0;
    uVar14 = local_48;
    puVar12 = puVar2;
    uVar8 = uVar10;
    while( true ) {
      for (uVar14 = uVar8 & 0x101010101010100 &
                    CONCAT17(-(cVar11 == (char)(uVar14 >> 0x38)),
                             CONCAT16(-(cVar11 == (char)(uVar14 >> 0x30)),
                                      CONCAT15(-(cVar11 == (char)(uVar14 >> 0x28)),
                                               CONCAT14(-(cVar11 == (char)(uVar14 >> 0x20)),
                                                        CONCAT13(-(cVar11 == (char)(uVar14 >> 0x18))
                                                                 ,CONCAT12(-(cVar11 ==
                                                                            (char)(uVar14 >> 0x10)),
                                                                           CONCAT11(-(cVar11 ==
                                                                                     (char)(uVar14 
                                                  >> 8)),-(cVar11 == (char)uVar14))))))));
          uVar14 != 0; uVar14 = 1L << (uVar8 & 0x3f) ^ uVar14) {
        uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        if (puVar12[(uVar8 >> 3) * 2] == param_2) {
          uVar7 = 1;
          goto LAB_032c151c;
        }
      }
      if (uVar6 == ~(-1L << ((ulong)(uVar3 - 0xc5) & 0x3f))) break;
      uVar6 = uVar6 + 1;
      puVar12 = (ulong *)(*param_1 + (param_1[1] & uVar6 + uVar18) * 0x80);
      uVar8 = puVar12[1];
      uVar14 = *puVar12;
    }
  }
  uVar6 = 0;
  puVar12 = &local_48;
  puVar13 = puVar2;
LAB_032c1274:
  uVar14 = (~uVar10 & 0xff) * 0x101010101010100 &
           ((uVar10 ^ 0xffffffffffffffff) & 0x101010101010100) * 0xff;
  if ((uVar14 & 0x8040201008040200) == 0) {
    uVar10 = param_1[1];
    if (uVar6 == uVar10) {
      uVar7 = 2;
LAB_032c151c:
      do {
        cVar11 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffffffffffe;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      return uVar7;
    }
  }
  else {
    uVar8 = *puVar12;
    puVar12 = puVar13 + 1;
    if (*puVar12 == uVar10) {
      uVar14 = (uVar14 & 0x8000200008000200) >> 1 | (uVar14 & 0x40001000040000) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
      uVar16 = 1L << (uVar14 >> 3);
      uVar15 = uVar16 | uVar10;
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar4) {
        *puVar12 = uVar15;
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 == '\0') {
        puVar13[(uVar14 >> 3) * 2] = param_2;
        (puVar13 + (uVar14 >> 3) * 2)[1] = param_3;
        uVar18 = *puVar13;
        uVar17 = (uVar19 >> 0x38) << (uVar14 & 0x38);
        uVar19 = 0xffL << (uVar14 & 0x38);
        if (uVar18 != uVar8) {
          ClearExclusiveLocal();
          uVar8 = uVar18;
          goto LAB_032c13e0;
        }
        cVar11 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar4) {
          *puVar13 = uVar8 & (uVar19 ^ 0xffffffffffffffff) | uVar17;
          cVar11 = ExclusiveMonitorsStatus();
        }
        while (uVar8 = uVar18, cVar11 != '\0') {
LAB_032c13e0:
          while( true ) {
            uVar18 = *puVar13;
            if (uVar18 == uVar8) break;
            ClearExclusiveLocal();
            uVar8 = uVar18;
          }
          cVar11 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar4) {
            *puVar13 = uVar8 & ~uVar19 | uVar17;
            cVar11 = ExclusiveMonitorsStatus();
          }
        }
        uVar18 = *puVar12;
        uVar14 = uVar10 - (1L << (uVar14 & 0x38)) & uVar19;
        uVar19 = ~uVar19 & ((ulong)(uVar6 == 0) ^ 0xffffffffffffffff) &
                 (uVar16 ^ 0xffffffffffffffff);
        if (uVar18 != uVar15) {
          ClearExclusiveLocal();
          uVar10 = uVar18;
          goto LAB_032c1420;
        }
        cVar11 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar4) {
          *puVar12 = uVar19 & uVar10 | uVar14;
          cVar11 = ExclusiveMonitorsStatus();
        }
        while (uVar10 = uVar18, cVar11 != '\0') {
LAB_032c1420:
          while (uVar18 = *puVar12, uVar18 != uVar10) {
            ClearExclusiveLocal();
            uVar10 = uVar18;
          }
          cVar11 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar4) {
            *puVar12 = uVar10 & uVar19 | uVar14;
            cVar11 = ExclusiveMonitorsStatus();
          }
        }
        if (uVar6 == 0) {
          return 0;
        }
        if (uVar6 < 0xcd) {
          uVar9 = (uint)uVar6;
        }
        else {
          uVar9 = 0xcc;
          do {
            uVar5 = uVar9 - 0xc4;
            uVar9 = uVar9 + 1;
          } while (uVar6 >> ((ulong)uVar5 & 0x3f) != 0);
        }
        if (uVar9 <= uVar3) {
          uVar7 = 0;
          goto LAB_032c151c;
        }
        do {
          uVar18 = *puVar2;
          if (uVar18 == local_48) {
            cVar11 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = local_48 & 0xffffffffffffff00 | (ulong)uVar9;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_032c14ec;
            break;
          }
          ClearExclusiveLocal();
LAB_032c14ec:
          local_48 = uVar18;
        } while (((uint)uVar18 & 0xff) < uVar9);
        uVar7 = 0;
        goto LAB_032c151c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar10 = param_1[1];
  }
  uVar14 = uVar18 + 1 + uVar6;
  uVar6 = uVar6 + 1;
  puVar12 = (ulong *)(*param_1 + (uVar10 & uVar14) * 0x80);
  uVar10 = puVar12[1];
  puVar13 = puVar12;
  goto LAB_032c1274;
}


