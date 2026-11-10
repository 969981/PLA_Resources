/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a680; name: FUN_0044a680
 */


undefined8 FUN_0044a680(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  
  if (param_2 < 1) {
    param_2 = -1;
  }
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (bVar1 = *param_1, bVar1 != 0)) {
    bVar2 = false;
    bVar3 = false;
    do {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      iVar5 = FUN_00405430(bVar1,0x800);
      if (iVar5 == 0) {
        bVar3 = true;
      }
      bVar4 = bVar1 & 0x80;
      bVar1 = *param_1;
      if (bVar4 != 0) {
        bVar2 = true;
      }
    } while ((param_2 != 0) && (bVar1 != 0));
    if (bVar2) {
      return 0x14;
    }
    if (bVar3) {
      return 0x16;
    }
  }
  return 0x13;
}


