/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76420; name: FUN_00d76420
 */


bool FUN_00d76420(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = FUN_02c30440();
  if (uVar3 == 0) {
    bVar2 = true;
  }
  else {
    uVar5 = 0;
    uVar4 = (ulong)uVar3;
    do {
      sVar1 = *(short *)(param_1 + uVar5 * 2);
      if ((sVar1 != 0x3000) && (sVar1 != 0x20)) goto LAB_00d76464;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    uVar5 = uVar4;
LAB_00d76464:
    bVar2 = uVar5 == uVar4;
  }
  return bVar2;
}


