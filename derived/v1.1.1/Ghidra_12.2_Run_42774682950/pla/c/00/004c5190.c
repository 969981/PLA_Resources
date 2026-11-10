/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5190; name: FUN_004c5190
 */


long FUN_004c5190(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  FUN_00444950(*param_1);
  *param_1 = 0;
  lVar2 = FUN_00444930();
  *param_1 = lVar2;
  lVar3 = 0;
  if (lVar2 == 0) {
LAB_004c51e4:
    FUN_00444950(lVar3);
    *param_1 = 0;
    return 0;
  }
  lVar3 = lVar2;
  if (param_2 != 0) {
    iVar1 = FUN_004449b0(lVar2,param_2,0);
    lVar3 = *param_1;
    if (iVar1 < 1) goto LAB_004c51e4;
  }
  return lVar3;
}


