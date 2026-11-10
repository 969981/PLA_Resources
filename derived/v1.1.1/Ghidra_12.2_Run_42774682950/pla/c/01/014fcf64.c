/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fcf64; name: FUN_014fcf64
 */


undefined8 FUN_014fcf64(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_02c5be58(*(undefined8 *)(param_1 + 0x5b8));
  if (cVar1 != '\0') {
    uVar4 = 0;
    do {
      iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),uVar4);
      if (iVar2 == param_2) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_02c5be58(*(undefined8 *)(param_1 + 0x5b8));
    } while (uVar4 < (uVar3 & 0xff));
  }
  return 0;
}


