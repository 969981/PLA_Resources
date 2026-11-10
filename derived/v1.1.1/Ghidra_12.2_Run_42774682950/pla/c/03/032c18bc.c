/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c18bc; name: FUN_032c18bc
 */


/* WARNING: Removing unreachable block (ram,0x032c1b50) */
/* WARNING: Removing unreachable block (ram,0x032c1ad4) */
/* WARNING: Removing unreachable block (ram,0x032c1b90) */
/* WARNING: Removing unreachable block (ram,0x032c1a7c) */

void FUN_032c18bc(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulong local_88;
  undefined1 local_80;
  ulong local_78;
  char local_70;
  ulong local_68;
  
  uVar18 = param_2 * -0xae502812aa7333;
  uVar19 = uVar18 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar2 = (ulong *)(*param_1 + (param_1[1] & uVar19) * 0x80);
  puVar1 = puVar2 + 1;
  do {
    uVar6 = *puVar1;
    cVar17 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar6 | 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_032c0d5c(puVar2);
  }
  cVar17 = (char)(uVar18 >> 0x38);
  local_68 = *puVar2;
  uVar16 = uVar6 | 1;
  uVar3 = (uint)local_68 & 0xff;
  puVar8 = puVar2;
  if ((local_68 & 0xff) == 0) {
    for (uVar6 = uVar6 & 0x101010101010100 &
                 CONCAT17(-(cVar17 == (char)(local_68 >> 0x38)),
                          CONCAT16(-(cVar17 == (char)(local_68 >> 0x30)),
                                   CONCAT15(-(cVar17 == (char)(local_68 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(local_68 >> 0x20)),
                                                     CONCAT13(-(cVar17 == (char)(local_68 >> 0x18)),
                                                              CONCAT12(-(cVar17 ==
                                                                        (char)(local_68 >> 0x10)),
                                                                       CONCAT11(-(cVar17 ==
                                                                                 (char)(local_68 >>
                                                                                       8)),
                                                                                -(cVar17 ==
                                                                                 (char)local_68)))))
                                           ))); uVar6 != 0; uVar6 = 1L << (local_a8 & 0x3f) ^ uVar6)
    {
      uVar11 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      local_a8 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
      lVar9 = (local_a8 >> 3) - 1;
      if (puVar2[lVar9 * 2 + 2] == param_2) {
        local_a0 = 0;
LAB_032c1d54:
        local_88 = puVar8[lVar9 * 2 + 3];
        local_80 = 1;
        (*(code *)*param_3)(&local_78,param_3[1],&local_88);
        if (local_70 != '\0') {
          puVar8[lVar9 * 2 + 3] = local_78;
          do {
            cVar17 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 & 0xfffffffffffffffe;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          return;
        }
        uVar18 = ~(1L << (local_a8 & 0x3f));
        puVar8 = puVar8 + 1;
        if (local_a0 == 0) {
          do {
            cVar17 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
              *puVar8 = *puVar8 & uVar18 & 0xfffffffffffffffe;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          return;
        }
        do {
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar4) {
            *puVar8 = *puVar8 & uVar18;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        do {
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        return;
      }
    }
  }
  else if (uVar3 < 0xcd) {
    local_a0 = 0;
    uVar6 = local_68;
    uVar11 = uVar16;
    while( true ) {
      for (uVar6 = uVar11 & 0x101010101010100 &
                   CONCAT17(-(cVar17 == (char)(uVar6 >> 0x38)),
                            CONCAT16(-(cVar17 == (char)(uVar6 >> 0x30)),
                                     CONCAT15(-(cVar17 == (char)(uVar6 >> 0x28)),
                                              CONCAT14(-(cVar17 == (char)(uVar6 >> 0x20)),
                                                       CONCAT13(-(cVar17 == (char)(uVar6 >> 0x18)),
                                                                CONCAT12(-(cVar17 ==
                                                                          (char)(uVar6 >> 0x10)),
                                                                         CONCAT11(-(cVar17 ==
                                                                                   (char)(uVar6 >> 8
                                                                                         )),
                                                                                  -(cVar17 ==
                                                                                   (char)uVar6))))))
                                    )); uVar6 != 0; uVar6 = 1L << (local_a8 & 0x3f) ^ uVar6) {
        uVar11 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        local_a8 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        lVar9 = (local_a8 >> 3) - 1;
        if (puVar8[lVar9 * 2 + 2] == param_2) goto LAB_032c1d54;
      }
      if (local_a0 == uVar3) break;
      local_a0 = local_a0 + 1;
      puVar8 = (ulong *)(*param_1 + (param_1[1] & local_a0 + uVar19) * 0x80);
      uVar11 = puVar8[1];
      uVar6 = *puVar8;
    }
  }
  else {
    local_a0 = 0;
    uVar6 = local_68;
    uVar11 = uVar16;
    while( true ) {
      for (uVar6 = uVar11 & 0x101010101010100 &
                   CONCAT17(-(cVar17 == (char)(uVar6 >> 0x38)),
                            CONCAT16(-(cVar17 == (char)(uVar6 >> 0x30)),
                                     CONCAT15(-(cVar17 == (char)(uVar6 >> 0x28)),
                                              CONCAT14(-(cVar17 == (char)(uVar6 >> 0x20)),
                                                       CONCAT13(-(cVar17 == (char)(uVar6 >> 0x18)),
                                                                CONCAT12(-(cVar17 ==
                                                                          (char)(uVar6 >> 0x10)),
                                                                         CONCAT11(-(cVar17 ==
                                                                                   (char)(uVar6 >> 8
                                                                                         )),
                                                                                  -(cVar17 ==
                                                                                   (char)uVar6))))))
                                    )); uVar6 != 0; uVar6 = 1L << (local_a8 & 0x3f) ^ uVar6) {
        uVar11 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        local_a8 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        lVar9 = (local_a8 >> 3) - 1;
        if (puVar8[lVar9 * 2 + 2] == param_2) goto LAB_032c1d54;
      }
      if (local_a0 == ~(-1L << ((ulong)(uVar3 - 0xc5) & 0x3f))) break;
      local_a0 = local_a0 + 1;
      puVar8 = (ulong *)(*param_1 + (param_1[1] & local_a0 + uVar19) * 0x80);
      uVar11 = puVar8[1];
      uVar6 = *puVar8;
    }
  }
  local_98 = 0;
  local_90 = 0;
  (*(code *)*param_3)(&local_78,param_3[1],&local_98);
  if (local_70 == '\0') {
    return;
  }
  uVar6 = 0;
  puVar8 = &local_68;
  puVar10 = puVar2;
  do {
    uVar11 = (~uVar16 & 0xff) * 0x101010101010100 &
             ((uVar16 ^ 0xffffffffffffffff) & 0x101010101010100) * 0xff;
    if ((uVar11 & 0x8040201008040200) == 0) {
      uVar16 = param_1[1];
      if (uVar6 == uVar16) {
        do {
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        return;
      }
    }
    else {
      uVar15 = *puVar8;
      puVar8 = puVar10 + 1;
      if (*puVar8 == uVar16) {
        uVar11 = (uVar11 & 0x8000200008000200) >> 1 | (uVar11 & 0x40001000040000) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        uVar12 = 1L << (uVar14 >> 3);
        uVar11 = uVar12 | uVar16;
        cVar17 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar4) {
          *puVar8 = uVar11;
          cVar17 = ExclusiveMonitorsStatus();
        }
        if (cVar17 == '\0') {
          puVar10[(uVar14 >> 3) * 2] = param_2;
          (puVar10 + (uVar14 >> 3) * 2)[1] = local_78;
          uVar19 = *puVar10;
          uVar13 = (uVar18 >> 0x38) << (uVar14 & 0x38);
          uVar18 = 0xffL << (uVar14 & 0x38);
          if (uVar19 != uVar15) {
            ClearExclusiveLocal();
            uVar15 = uVar19;
            goto LAB_032c1b28;
          }
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar4) {
            *puVar10 = uVar15 & (uVar18 ^ 0xffffffffffffffff) | uVar13;
            cVar17 = ExclusiveMonitorsStatus();
          }
          while (uVar15 = uVar19, cVar17 != '\0') {
LAB_032c1b28:
            while( true ) {
              uVar19 = *puVar10;
              if (uVar19 == uVar15) break;
              ClearExclusiveLocal();
              uVar15 = uVar19;
            }
            cVar17 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
            if (bVar4) {
              *puVar10 = uVar15 & ~uVar18 | uVar13;
              cVar17 = ExclusiveMonitorsStatus();
            }
          }
          uVar15 = ~uVar18 & ((ulong)(uVar6 == 0) ^ 0xffffffffffffffff) &
                   (uVar12 ^ 0xffffffffffffffff);
          uVar19 = *puVar8;
          uVar18 = uVar16 - (1L << (uVar14 & 0x38)) & uVar18;
          if (uVar19 != uVar11) {
            ClearExclusiveLocal();
            uVar16 = uVar19;
            goto LAB_032c1b68;
          }
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar4) {
            *puVar8 = uVar15 & uVar16 | uVar18;
            cVar17 = ExclusiveMonitorsStatus();
          }
          while (uVar16 = uVar19, cVar17 != '\0') {
LAB_032c1b68:
            while (uVar19 = *puVar8, uVar19 != uVar16) {
              ClearExclusiveLocal();
              uVar16 = uVar19;
            }
            cVar17 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
              *puVar8 = uVar16 & uVar15 | uVar18;
              cVar17 = ExclusiveMonitorsStatus();
            }
          }
          if (uVar6 == 0) {
            return;
          }
          if (uVar6 < 0xcd) {
            uVar7 = (uint)uVar6;
          }
          else {
            uVar7 = 0xcc;
            do {
              uVar5 = uVar7 - 0xc4;
              uVar7 = uVar7 + 1;
            } while (uVar6 >> ((ulong)uVar5 & 0x3f) != 0);
          }
          if (uVar3 < uVar7) {
            do {
              uVar18 = *puVar2;
              if (uVar18 == local_68) {
                cVar17 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                  *puVar2 = local_68 & 0xffffffffffffff00 | (ulong)uVar7;
                  cVar17 = ExclusiveMonitorsStatus();
                }
                if (cVar17 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              local_68 = uVar18;
            } while (((uint)uVar18 & 0xff) < uVar7);
          }
          do {
            cVar17 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 & 0xfffffffffffffffe;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar16 = param_1[1];
    }
    uVar11 = uVar19 + 1 + uVar6;
    uVar6 = uVar6 + 1;
    puVar8 = (ulong *)(*param_1 + (uVar16 & uVar11) * 0x80);
    uVar16 = puVar8[1];
    puVar10 = puVar8;
  } while( true );
}


