/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00808460; name: FUN_00808460
 */


void FUN_00808460(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_043778c8;
  param_1[0xb] = 0;
  param_1[0xd] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(0x30,uVar2);
  if (lVar3 != 0) {
    FUN_007e5b70(lVar3);
  }
  param_1[0xc] = lVar3;
  return;
}


