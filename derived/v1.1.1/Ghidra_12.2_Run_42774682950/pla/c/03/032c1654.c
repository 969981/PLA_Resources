/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c1654; name: FUN_032c1654
 */


undefined8 FUN_032c1654(long *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  
  uVar10 = param_2 * -0xae502812aa7333 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar9 = (ulong *)(*param_1 + (param_1[1] & uVar10) * 0x80);
  puVar1 = puVar9 + 1;
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_032c0d5c(puVar9);
  }
  cVar5 = (char)(param_2 * -0xae502812aa7333 >> 0x38);
  uVar7 = *puVar9;
  uVar2 = (uint)uVar7 & 0xff;
  if ((uVar7 & 0xff) == 0) {
    for (uVar10 = uVar4 & (ulong)CONCAT16(-(cVar5 == (char)(uVar7 >> 0x38)),
                                          CONCAT15(-(cVar5 == (char)(uVar7 >> 0x30)),
                                                   CONCAT14(-(cVar5 == (char)(uVar7 >> 0x28)),
                                                            CONCAT13(-(cVar5 == (char)(uVar7 >> 0x20
                                                                                      )),
                                                                     CONCAT12(-(cVar5 == (char)(
                                                  uVar7 >> 0x18)),
                                                  CONCAT11(-(cVar5 == (char)(uVar7 >> 0x10)),
                                                           -(cVar5 == (char)(uVar7 >> 8)))))))) << 8
                  & 0x101010101010100; uVar10 != 0; uVar10 = uVar7 ^ uVar10) {
      uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      uVar7 = 1L << (uVar4 & 0x3f);
      if (puVar9[(uVar4 >> 3) * 2] == param_2) {
        uVar7 = ~uVar7;
        goto LAB_032c183c;
      }
    }
  }
  else if (uVar2 < 0xcd) {
    uVar6 = 0;
    while( true ) {
      for (uVar4 = uVar4 & 0x101010101010100 &
                   CONCAT17(-(cVar5 == (char)(uVar7 >> 0x38)),
                            CONCAT16(-(cVar5 == (char)(uVar7 >> 0x30)),
                                     CONCAT15(-(cVar5 == (char)(uVar7 >> 0x28)),
                                              CONCAT14(-(cVar5 == (char)(uVar7 >> 0x20)),
                                                       CONCAT13(-(cVar5 == (char)(uVar7 >> 0x18)),
                                                                CONCAT12(-(cVar5 == (char)(uVar7 >> 
                                                  0x10)),CONCAT11(-(cVar5 == (char)(uVar7 >> 8)),
                                                                  -(cVar5 == (char)uVar7))))))));
          uVar4 != 0; uVar4 = uVar7 ^ uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        uVar7 = 1L << (uVar8 & 0x3f);
        if (puVar9[(uVar8 >> 3) * 2] == param_2) goto LAB_032c1888;
      }
      if (uVar6 == uVar2) break;
      uVar6 = uVar6 + 1;
      puVar9 = (ulong *)(*param_1 + (param_1[1] & uVar6 + uVar10) * 0x80);
      uVar4 = puVar9[1];
      uVar7 = *puVar9;
    }
  }
  else {
    uVar6 = 0;
    while( true ) {
      for (uVar4 = uVar4 & 0x101010101010100 &
                   CONCAT17(-(cVar5 == (char)(uVar7 >> 0x38)),
                            CONCAT16(-(cVar5 == (char)(uVar7 >> 0x30)),
                                     CONCAT15(-(cVar5 == (char)(uVar7 >> 0x28)),
                                              CONCAT14(-(cVar5 == (char)(uVar7 >> 0x20)),
                                                       CONCAT13(-(cVar5 == (char)(uVar7 >> 0x18)),
                                                                CONCAT12(-(cVar5 == (char)(uVar7 >> 
                                                  0x10)),CONCAT11(-(cVar5 == (char)(uVar7 >> 8)),
                                                                  -(cVar5 == (char)uVar7))))))));
          uVar4 != 0; uVar4 = uVar7 ^ uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        uVar7 = 1L << (uVar8 & 0x3f);
        if (puVar9[(uVar8 >> 3) * 2] == param_2) goto LAB_032c1888;
      }
      if (uVar6 == ~(-1L << ((ulong)(uVar2 - 0xc5) & 0x3f))) break;
      uVar6 = uVar6 + 1;
      puVar9 = (ulong *)(*param_1 + (param_1[1] & uVar6 + uVar10) * 0x80);
      uVar4 = puVar9[1];
      uVar7 = *puVar9;
    }
  }
  do {
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return 0;
LAB_032c1888:
  uVar7 = ~uVar7;
  if (uVar6 != 0) {
    puVar9 = puVar9 + 1;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = *puVar9 & uVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffffffffffffe;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    return 1;
  }
LAB_032c183c:
  puVar9 = puVar9 + 1;
  do {
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar3) {
      *puVar9 = *puVar9 & uVar7 & 0xfffffffffffffffe;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return 1;
}


