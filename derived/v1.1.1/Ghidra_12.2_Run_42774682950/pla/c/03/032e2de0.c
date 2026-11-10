/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2de0; name: FUN_032e2de0
 */


undefined8 FUN_032e2de0(long *param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  short *psVar6;
  undefined8 *puVar7;
  short *psVar8;
  
  puVar7 = (undefined8 *)param_1[3];
  if (puVar7 != (undefined8 *)param_1[2]) {
    uVar4 = (uint)*puVar7;
    if ((uVar4 >> 0x17 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
      psVar6 = (short *)0x0;
    }
    else {
      uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      psVar6 = (short *)puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      if (psVar6 == (short *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        bVar3 = (int)psVar6[1] + (int)*psVar6 != 0;
        puVar5 = (undefined8 *)0x0;
        if (bVar3) {
          puVar5 = puVar7;
        }
        psVar8 = (short *)0x0;
        if (bVar3) {
          psVar8 = psVar6;
        }
        psVar6 = psVar8;
      }
    }
    while (puVar7 = (undefined8 *)puVar7[1], puVar7 != (undefined8 *)param_1[2]) {
      uVar4 = (uint)*puVar7;
      if (((uVar4 >> 0x17 & 1) != 0) &&
         (uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555),
         uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
         psVar8 = (short *)puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2], psVar8 != (short *)0x0)) {
        if ((int)psVar8[1] + (int)*psVar8 != 0) {
          psVar6 = psVar8;
          puVar5 = puVar7;
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      sVar1 = *psVar6;
      sVar2 = psVar6[1];
      *param_1 = (long)(psVar6 + 4);
      param_1[1] = (long)(psVar6 + 4 + ((long)sVar2 + (long)sVar1) * 4);
      param_1[2] = (long)puVar5;
      return 1;
    }
  }
  return 0;
}


