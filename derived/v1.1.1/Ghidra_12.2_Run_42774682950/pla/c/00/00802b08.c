/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00802b08; name: FUN_00802b08
 */


undefined8 FUN_00802b08(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((((*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10)) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
      (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) &&
     (((*(short *)(param_1 + 0x1a) == *(short *)(param_2 + 0x1a) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))) &&
      ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
       (*(short *)(param_1 + 0x38) == *(short *)(param_2 + 0x38))))))) {
    if (*(short *)(param_1 + 0x38) == 0) {
      return 1;
    }
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_007f0f48(*(long *)(param_1 + 0x30) + lVar3,*(long *)(param_2 + 0x30) + lVar3);
      if ((uVar1 & 1) == 0) goto LAB_00802bcc;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
      uVar2 = 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x38));
  }
  else {
LAB_00802bcc:
    uVar2 = 0;
  }
  return uVar2;
}


