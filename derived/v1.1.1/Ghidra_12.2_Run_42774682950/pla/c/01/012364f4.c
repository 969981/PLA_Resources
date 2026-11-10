/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012364f4; name: FUN_012364f4
 */


long * FUN_012364f4(long *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 < 7) {
    switch((ulong)param_3) {
    case 0:
      lVar2 = *param_1;
      lVar3 = param_1[1];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 1:
      lVar2 = param_1[7];
      lVar3 = param_1[8];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 2:
      lVar2 = param_1[0xe];
      lVar3 = param_1[0xf];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 3:
      lVar2 = param_1[0x15];
      lVar3 = param_1[0x16];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 4:
      lVar2 = param_1[0x1c];
      lVar3 = param_1[0x1d];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 5:
      lVar2 = param_1[0x23];
      lVar3 = param_1[0x24];
      if (lVar2 == lVar3) goto LAB_012365f0;
      break;
    case 6:
      lVar2 = param_1[0x2a];
      lVar3 = param_1[0x2b];
      if (lVar2 == lVar3) goto LAB_012365f0;
    }
    if (param_2 < (uint)((int)((ulong)(lVar3 - lVar2) >> 4) * -0x33333333) && param_3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x012365a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar1 = (long *)(*(code *)(&UNK_012365ac + (ulong)(byte)(&DAT_03a7a29b)[param_3] * 4))();
      return plVar1;
    }
  }
LAB_012365f0:
  return param_1 + 0x31;
}


