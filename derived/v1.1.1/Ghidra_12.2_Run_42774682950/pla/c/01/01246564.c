/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246564; name: FUN_01246564
 */


void FUN_01246564(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)*(undefined8 *)(param_1 + 8)) >> 2;
  uVar2 = uVar1 & 0xff;
  if (param_2 == 0) {
    uVar3 = (*(byte *)(param_1 + 0x40) + uVar2) - 1;
    cVar4 = '\0';
    if (uVar2 != 0) {
      cVar4 = (char)((int)uVar3 / (int)uVar2);
    }
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x40) + 1;
    cVar4 = '\0';
    if (uVar2 != 0) {
      cVar4 = (char)(uVar3 / uVar2);
    }
  }
  *(char *)(param_1 + 0x40) = (char)uVar3 - cVar4 * (char)uVar1;
  FUN_012465c0(param_1);
  FUN_01246450(param_1);
  return;
}


