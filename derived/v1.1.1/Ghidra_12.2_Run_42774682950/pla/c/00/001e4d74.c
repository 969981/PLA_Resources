/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4d74; name: FUN_001e4d74
 */


undefined8 FUN_001e4d74(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_f0 [128];
  
  lVar1 = FUN_001e66b8(param_2,auStack_f0 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_001f8588(*param_1,lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      return 0;
    }
    FUN_002044d4(lVar1);
  }
  return 0x1b;
}


