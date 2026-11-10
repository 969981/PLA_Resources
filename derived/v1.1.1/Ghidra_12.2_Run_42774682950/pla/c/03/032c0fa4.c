/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c0fa4; name: FUN_032c0fa4
 */


ulong FUN_032c0fa4(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = param_2 * -0xae502812aa7333;
  uVar6 = uVar3 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  uVar4 = uVar3 >> 0x38;
  puVar5 = (ulong *)(*param_1 + (param_1[1] & uVar6) * 0x80);
  cVar2 = (char)(uVar3 >> 0x38);
  uVar3 = puVar5[1];
  uVar8 = *puVar5;
  uVar1 = (uint)uVar8 & 0xff;
  if ((uVar8 & 0xff) == 0) {
    uVar6 = uVar3 & 0x101010101010100 &
            CONCAT17(-(cVar2 == (char)(uVar8 >> 0x38)),
                     CONCAT16(-(cVar2 == (char)(uVar8 >> 0x30)),
                              CONCAT15(-(cVar2 == (char)(uVar8 >> 0x28)),
                                       CONCAT14(-(cVar2 == (char)(uVar8 >> 0x20)),
                                                CONCAT13(-(cVar2 == (char)(uVar8 >> 0x18)),
                                                         CONCAT12(-(cVar2 == (char)(uVar8 >> 0x10)),
                                                                  CONCAT11(-(cVar2 == (char)(uVar8 
                                                  >> 8)),-(cVar2 == (char)uVar8))))))));
    if (uVar6 == 0) {
      return 0;
    }
    do {
      uVar4 = (uVar6 << 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 << 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      uVar9 = (puVar5 + (uVar4 >> 3) * 2)[1];
      uVar8 = 0xffL << (uVar4 & 0x3f);
      if (puVar5[(uVar4 >> 3) * 2] == param_2 && ((puVar5[1] ^ uVar3) & uVar8) == 0) {
LAB_032c1044:
        *param_3 = uVar9;
        return 1;
      }
      uVar4 = 0;
      uVar6 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
    } while (uVar6 != 0);
  }
  else if (uVar1 < 0xcd) {
    uVar7 = 0;
    while( true ) {
      for (uVar8 = uVar3 & 0x101010101010100 &
                   CONCAT17(-(cVar2 == (char)(uVar8 >> 0x38)),
                            CONCAT16(-(cVar2 == (char)(uVar8 >> 0x30)),
                                     CONCAT15(-(cVar2 == (char)(uVar8 >> 0x28)),
                                              CONCAT14(-(cVar2 == (char)(uVar8 >> 0x20)),
                                                       CONCAT13(-(cVar2 == (char)(uVar8 >> 0x18)),
                                                                CONCAT12(-(cVar2 == (char)(uVar8 >> 
                                                  0x10)),CONCAT11(-(cVar2 == (char)(uVar8 >> 8)),
                                                                  -(cVar2 == (char)uVar8))))))));
          uVar8 != 0; uVar8 = uVar8 & (uVar11 ^ 0xffffffffffffffff)) {
        uVar10 = (uVar8 << 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 << 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar11 = 0xffL << (uVar10 & 0x3f);
        uVar9 = (puVar5 + (uVar10 >> 3) * 2)[1];
        if (puVar5[(uVar10 >> 3) * 2] == param_2 && ((puVar5[1] ^ uVar3) & uVar11) == 0)
        goto LAB_032c1044;
      }
      uVar4 = (ulong)((uint)uVar4 & (uint)(uVar7 != uVar1));
      if (uVar7 == uVar1) break;
      uVar7 = uVar7 + 1;
      puVar5 = (ulong *)(*param_1 + (param_1[1] & uVar7 + uVar6) * 0x80);
      uVar3 = puVar5[1];
      uVar8 = *puVar5;
    }
  }
  else {
    uVar4 = -1L << ((ulong)(uVar1 - 0xc5) & 0x3f);
    uVar7 = 0;
    uVar10 = ~uVar4;
    while( true ) {
      for (uVar8 = uVar3 & 0x101010101010100 &
                   CONCAT17(-(cVar2 == (char)(uVar8 >> 0x38)),
                            CONCAT16(-(cVar2 == (char)(uVar8 >> 0x30)),
                                     CONCAT15(-(cVar2 == (char)(uVar8 >> 0x28)),
                                              CONCAT14(-(cVar2 == (char)(uVar8 >> 0x20)),
                                                       CONCAT13(-(cVar2 == (char)(uVar8 >> 0x18)),
                                                                CONCAT12(-(cVar2 == (char)(uVar8 >> 
                                                  0x10)),CONCAT11(-(cVar2 == (char)(uVar8 >> 8)),
                                                                  -(cVar2 == (char)uVar8))))))));
          uVar8 != 0; uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff)) {
        uVar9 = (uVar8 << 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 << 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
        uVar12 = 0xffL << (uVar11 & 0x3f);
        uVar9 = (puVar5 + (uVar11 >> 3) * 2)[1];
        if (puVar5[(uVar11 >> 3) * 2] == param_2 && ((puVar5[1] ^ uVar3) & uVar12) == 0)
        goto LAB_032c1044;
      }
      uVar4 = (ulong)((uint)uVar4 & (uint)(uVar7 != uVar10));
      if (uVar7 == uVar10) break;
      uVar7 = uVar7 + 1;
      puVar5 = (ulong *)(*param_1 + (param_1[1] & uVar7 + uVar6) * 0x80);
      uVar3 = puVar5[1];
      uVar8 = *puVar5;
    }
  }
  return uVar4;
}


