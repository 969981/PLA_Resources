/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f44a0; name: FUN_032f44a0
 */


uint FUN_032f44a0(ulong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_1 != (ulong *)0x0) {
    do {
      uVar3 = (uint)*param_1;
      if ((uVar3 >> 0x14 & 1) != 0) {
        uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar11 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar3 = (uint)param_1[uVar11 + 2];
        if ((~uVar3 & 0xfff0000) == 0) {
          uVar2 = FUN_032f44a0(param_1[1]);
          uVar4 = 0;
          puVar5 = param_1;
          do {
            uVar7 = (uint)*puVar5;
            if ((uVar7 >> 0x15 & 1) != 0) {
              uVar7 = (uVar7 & 0x1fffff) - (uVar7 >> 1 & 0x55555);
              uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
              uVar4 = puVar5[(ulong)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                      uVar4;
            }
          } while (((*puVar5 & 1) == 0) && (puVar5 = (ulong *)puVar5[1], puVar5 != (ulong *)0x0));
          uVar6 = *param_1;
          uVar7 = (uint)uVar6;
          if ((uVar4 & 0x80) != 0 && (int)uVar2 < 9) {
            uVar2 = 8;
          }
          puVar5 = param_1;
          if ((uVar6 & 1) == 0) {
            puVar5 = (ulong *)param_1[1];
            bVar1 = (byte)*puVar5;
            while ((bVar1 & 1) == 0) {
              puVar5 = (ulong *)puVar5[1];
              bVar1 = (byte)*puVar5;
            }
          }
          if ((puVar5[2] & 0x1f) == 7) {
            puVar5 = param_1;
            uVar9 = uVar7;
            if ((uVar7 >> 0x17 & 1) == 0) {
              do {
                if (((uVar6 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
                goto LAB_032f4648;
                uVar6 = *puVar5;
                uVar9 = (uint)uVar6;
              } while ((uVar9 >> 0x17 & 1) == 0);
            }
            if (((puVar5 != (ulong *)0x0) &&
                (uVar9 = (uVar9 & 0x7fffff) - (uVar9 >> 1 & 0x155555),
                uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
                (short *)puVar5[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                != (short *)0x0)) &&
               (0 < *(short *)puVar5[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2])) {
              lVar8 = 0;
              do {
                puVar5 = param_1;
                uVar9 = uVar7;
                if ((uVar7 >> 0x17 & 1) == 0) {
                  do {
                    puVar5 = (ulong *)puVar5[1];
                    uVar9 = (uint)*puVar5;
                  } while ((uVar9 >> 0x17 & 1) == 0);
                }
                uVar9 = (uVar9 & 0x7fffff) - (uVar9 >> 1 & 0x155555);
                uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
                puVar5 = *(ulong **)
                          (puVar5[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2] + lVar8 * 8 + 8);
                do {
                  uVar9 = (uint)*puVar5;
                  if ((uVar9 >> 0x14 & 1) != 0) {
                    uVar10 = 0;
                    if (puVar5 != (ulong *)0x0) {
                      uVar9 = (uVar9 & 0xfffff) - (uVar9 >> 1 & 0x55555);
                      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
                      uVar10 = *(ushort *)
                                ((long)puVar5 +
                                (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8
                                + 0x12) & 0xfff;
                    }
                    goto LAB_032f4710;
                  }
                  if ((*puVar5 & 1) != 0) {
                    uVar10 = 0;
                    goto LAB_032f4710;
                  }
                  puVar5 = (ulong *)puVar5[1];
                } while (puVar5 != (ulong *)0x0);
                uVar10 = 0;
LAB_032f4710:
                if ((int)uVar2 <= (int)uVar10) {
                  uVar2 = uVar10;
                }
                lVar8 = lVar8 + 1;
                puVar5 = param_1;
                while( true ) {
                  uVar9 = (uint)*puVar5;
                  if ((uVar9 >> 0x17 & 1) != 0) break;
                  if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
                  goto LAB_032f4648;
                }
              } while (((puVar5 != (ulong *)0x0) &&
                       (uVar9 = (uVar9 & 0x7fffff) - (uVar9 >> 1 & 0x155555),
                       uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
                       (short *)puVar5[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                              0x18) + 2] != (short *)0x0)) &&
                      (lVar8 < *(short *)puVar5[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) *
                                                        0x1010101 >> 0x18) + 2]));
            }
          }
LAB_032f4648:
          uVar3 = uVar3 & 0xf0000000 | uVar3 & 0xffff | (uVar2 & 0xfff) << 0x10;
          param_1[uVar11 + 2] = (ulong)uVar3;
        }
        return uVar3 >> 0x10 & 0xfff;
      }
      param_1 = (ulong *)param_1[1];
    } while (param_1 != (ulong *)0x0);
  }
  return 1;
}


