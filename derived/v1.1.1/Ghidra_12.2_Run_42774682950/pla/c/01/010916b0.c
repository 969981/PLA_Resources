/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010916b0; name: FUN_010916b0
 */


undefined8 FUN_010916b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = FUN_010915e0();
  if ((int)uVar4 != 0) {
    cVar1 = FUN_02c5be58(param_1);
    if (cVar1 != '\0') {
      uVar5 = 0;
      do {
        iVar2 = FUN_02c5bed0(param_1,uVar5);
        if (iVar2 == (int)uVar4) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar3 = FUN_02c5be58(param_1);
      } while (uVar5 < (uVar3 & 0xff));
    }
    uVar4 = 0;
  }
  return uVar4;
}


