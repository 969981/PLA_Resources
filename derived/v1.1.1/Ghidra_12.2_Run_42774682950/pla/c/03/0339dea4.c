/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339dea4; name: FUN_0339dea4
 */


void FUN_0339dea4(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)param_1[4];
  *param_1 = (long)&PTR_LAB_0436fb90;
  if (puVar5 != (ulong *)0x0) {
    lVar4 = param_1[3];
    uVar1 = FUN_032e225c(puVar5,&DAT_043568f0);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      do {
        uVar2 = (uint)uVar1;
        uVar3 = (uint)*puVar5;
        if ((uVar3 >> 0x15 & 1) != 0) {
          uVar2 = (uVar3 & 0x1fffff) - (uVar3 >> 1 & 0x55555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar1 = puVar5[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                  uVar1;
          uVar2 = (uint)uVar1;
        }
        if ((*puVar5 & 1) != 0) break;
        uVar2 = (uint)uVar1;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
      if ((lVar4 != 0) && ((uVar2 >> 3 & 1) == 0)) {
        FUN_032d647c(lVar4);
        uVar1 = param_1[5];
        goto joined_r0x0339df70;
      }
    }
    FUN_032e6310(param_1 + 3,3,1);
  }
  uVar1 = param_1[5];
joined_r0x0339df70:
  if ((uVar1 & 1) != 0) {
    FUN_032e0c40(uVar1 & 0xfffffffffffffffe);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


