/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fccb8; name: FUN_007fccb8
 */


long FUN_007fccb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(0x80,uVar1);
  if (lVar2 != 0) {
    FUN_008021a4(lVar2,param_1,param_2);
  }
  return lVar2;
}


