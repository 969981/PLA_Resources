/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4b18; name: FUN_003e4b18
 */


void FUN_003e4b18(long *param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = -1;
  *param_1 = (long)(PTR_DAT_043740e0 + 0x10);
  param_1[1] = 0;
  lVar3 = param_3[1];
  lVar2 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = lVar3;
  param_1[5] = lVar2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
                    /* try { // try from 003e4b64 to 003e4b6f has its CatchHandler @ 003e4b7c */
  uVar1 = FUN_003eed6c();
  FUN_003eedac(uVar1,param_1);
  return;
}


