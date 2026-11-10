/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00926d0c; name: FUN_00926d0c
 */


bool FUN_00926d0c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00926ca4();
  FUN_00923c60();
  uVar1 = FUN_00927054();
  if ((uVar1 & 1) == 0) {
    FUN_00926ca4(param_1);
    FUN_00923c68();
    uVar1 = FUN_00935f8c();
    if ((uVar1 & 1) == 0) {
      FUN_00926ca4(param_1);
      lVar2 = FUN_00923bb4();
      return *(char *)(lVar2 + 0x34c) == '\0';
    }
  }
  return false;
}


