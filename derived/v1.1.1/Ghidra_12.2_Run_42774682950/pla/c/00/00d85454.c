/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d85454; name: FUN_00d85454
 */


void FUN_00d85454(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00d87078();
  uVar2 = FUN_00d87954(param_1);
  FUN_00d870dc(&DAT_043acf38,uVar2);
  lVar1 = 0;
  if (DAT_043acf38 != 0) {
    lVar1 = DAT_043acf38 + 0x48;
  }
  FUN_02a47440(lVar1);
  return;
}


