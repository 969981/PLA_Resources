/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009757b4; name: FUN_009757b4
 */


void FUN_009757b4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  bVar2 = *(int *)(param_1 + 0x1a4) != 1;
  if (!bVar2) {
    cVar1 = *(char *)(param_1 + 0x1a3);
    FUN_00982d58(param_1);
    uVar4 = FUN_00923c80();
    uVar3 = FUN_0092723c(uVar4,(int)cVar1);
    *(undefined1 *)(param_1 + 0x68) = uVar3;
  }
  *(bool *)(param_1 + 0x69) = bVar2;
  return;
}


