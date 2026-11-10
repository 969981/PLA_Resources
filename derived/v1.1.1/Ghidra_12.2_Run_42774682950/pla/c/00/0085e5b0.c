/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e5b0; name: FUN_0085e5b0
 */


void FUN_0085e5b0(ushort *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 4);
  if (plVar2 == (long *)0x0) goto LAB_0085e63c;
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *plVar2;
    do {
      if (lVar3 == 0) {
        if (uVar1 <= lVar4 + 1U) goto LAB_0085e624;
      }
      else {
        FUN_007e34a4(lVar3 + 0x38);
        FUN_007e34a4(lVar3 + 0x18);
        FUN_0081a800(lVar3);
        *(undefined8 *)(*(long *)(param_1 + 4) + lVar4 * 8) = 0;
        uVar1 = (ulong)*param_1;
        plVar2 = *(long **)(param_1 + 4);
        if ((ulong)*param_1 <= lVar4 + 1U) goto LAB_0085e624;
      }
      lVar4 = lVar4 + 1;
      lVar3 = plVar2[lVar4];
    } while( true );
  }
  goto LAB_0085e628;
LAB_0085e624:
  if (plVar2 == (long *)0x0) goto LAB_0085e63c;
LAB_0085e628:
  FUN_0081a840(plVar2);
  FUN_0081a800(plVar2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0085e63c:
  lVar4 = *(long *)(param_1 + 0x14);
  if (lVar4 != 0) {
    FUN_0081a840(lVar4);
    FUN_0081a800(lVar4);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  return;
}


