/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fa7fc; name: FUN_032fa7fc
 */


long FUN_032fa7fc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort uVar7;
  short *psVar8;
  undefined8 *puVar9;
  short *psVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 4) == '\0') {
    puVar12 = (undefined8 *)param_2[1];
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  if (*(char *)(lVar5 + 1) == '\0') {
    if (*(char *)(lVar5 + 2) == '\0') {
      plVar11 = (long *)0x0;
      plVar13 = (long *)0x0;
      do {
        plVar13 = plVar13 + 1;
        puVar6 = puVar12;
        if (plVar11 <= plVar13) {
          if (puVar12 == param_2) {
            return 0;
          }
          uVar4 = (uint)*param_2;
          if ((uVar4 >> 0x17 & 1) == 0) {
            puVar6 = (undefined8 *)0x0;
            psVar8 = (short *)0x0;
          }
          else {
            uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            psVar8 = (short *)param_2[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                             ) + 2];
            if (psVar8 == (short *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            else {
              bVar1 = (int)psVar8[1] + (int)*psVar8 != 0;
              puVar6 = (undefined8 *)0x0;
              if (bVar1) {
                puVar6 = param_2;
              }
              psVar10 = (short *)0x0;
              if (bVar1) {
                psVar10 = psVar8;
              }
              psVar8 = psVar10;
            }
          }
          for (puVar9 = (undefined8 *)param_2[1]; puVar9 != puVar12;
              puVar9 = (undefined8 *)puVar9[1]) {
            uVar4 = (uint)*puVar9;
            if (((uVar4 >> 0x17 & 1) != 0) &&
               (uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555),
               uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
               psVar10 = (short *)puVar9[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2], psVar10 != (short *)0x0)) {
              if ((int)psVar10[1] + (int)*psVar10 != 0) {
                psVar8 = psVar10;
                puVar6 = puVar9;
              }
            }
          }
          if (puVar6 == (undefined8 *)0x0) {
            return 0;
          }
          plVar13 = (long *)(psVar8 + 4);
          plVar11 = plVar13 + (long)psVar8[1] + (long)*psVar8;
        }
        uVar4 = (uint)*(undefined8 *)*plVar13;
        puVar12 = puVar6;
        if ((((uVar4 >> 0x11 & 1) != 0) &&
            (uVar4 = (uVar4 & 0x1ffff) - (uVar4 >> 1 & 0x5555),
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
            (*(ushort *)
              (*plVar13 + (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12
              ) & 0x30) != 0)) && (iVar2 = FUN_032fac04(param_3,*plVar13), iVar2 < 0)) {
          return *plVar13;
        }
      } while( true );
    }
    uVar7 = 0;
    uVar3 = 0x10;
  }
  else {
    uVar3 = (ushort)(*(char *)(lVar5 + 2) != '\0') << 4;
    uVar7 = 1;
  }
  plVar11 = (long *)0x0;
  plVar13 = (long *)0x0;
  do {
    plVar13 = plVar13 + 1;
    puVar6 = puVar12;
    if (plVar11 <= plVar13) {
      if (puVar12 == param_2) {
        return 0;
      }
      uVar4 = (uint)*param_2;
      if ((uVar4 >> 0x17 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
        psVar8 = (short *)0x0;
      }
      else {
        uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        psVar8 = (short *)param_2[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2];
        if (psVar8 == (short *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          bVar1 = (int)psVar8[1] + (int)*psVar8 != 0;
          puVar6 = (undefined8 *)0x0;
          if (bVar1) {
            puVar6 = param_2;
          }
          psVar10 = (short *)0x0;
          if (bVar1) {
            psVar10 = psVar8;
          }
          psVar8 = psVar10;
        }
      }
      for (puVar9 = (undefined8 *)param_2[1]; puVar9 != puVar12; puVar9 = (undefined8 *)puVar9[1]) {
        uVar4 = (uint)*puVar9;
        if (((uVar4 >> 0x17 & 1) != 0) &&
           (uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555),
           uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
           psVar10 = (short *)puVar9[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2], psVar10 != (short *)0x0)) {
          if ((int)psVar10[1] + (int)*psVar10 != 0) {
            psVar8 = psVar10;
            puVar6 = puVar9;
          }
        }
      }
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      plVar13 = (long *)(psVar8 + 4);
      plVar11 = plVar13 + (long)psVar8[1] + (long)*psVar8;
    }
    uVar4 = (uint)*(undefined8 *)*plVar13;
    puVar12 = puVar6;
    if (((uVar4 >> 0x11 & 1) != 0) &&
       (uVar4 = (uVar4 & 0x1ffff) - (uVar4 >> 1 & 0x5555),
       uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
       (*(ushort *)
         (*plVar13 + (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) &
       0x30) != 0)) {
      uVar4 = (uint)*(undefined8 *)*plVar13;
      if ((((uVar4 >> 0x11 & 1) == 0) ||
          (uVar4 = (uVar4 & 0x1ffff) - (uVar4 >> 1 & 0x5555),
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
          ((uVar3 | uVar7) &
          *(ushort *)
           (*plVar13 + (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12))
          == 0)) && (iVar2 = FUN_032fac04(param_3,*plVar13), iVar2 < 0)) {
        return *plVar13;
      }
    }
  } while( true );
}


