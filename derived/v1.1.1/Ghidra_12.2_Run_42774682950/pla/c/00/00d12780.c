/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12780; name: FUN_00d12780
 */


bool FUN_00d12780(short *param_1,long param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      sVar1 = FUN_00d12920();
      sVar2 = FUN_00d12920(*(undefined2 *)(param_2 + uVar4 * 2));
      if (sVar1 != sVar2) {
        return false;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)uVar3;
    } while (param_1[uVar3] != 0);
  }
  return *(short *)(param_2 + uVar4 * 2) == 0;
}


