/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028ca5c; name: FUN_0028ca5c
 */


void FUN_0028ca5c(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((char)param_1[0xc] != '\0') {
    if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + (long)*param_1 * 2 + 4)) {
      *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + (long)*param_1 * 2 + 4);
    }
    piVar4 = param_1 + (long)*param_1 * 0x6c + 0xe;
    FUN_008773f4(piVar4,0,*(undefined8 *)(piVar4 + 0x12));
    FUN_008773f0(piVar4);
    iVar3 = 2;
    if (param_1[1] == 3) {
      iVar3 = 3;
    }
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = (*param_1 + 1) / iVar3;
    }
    iVar3 = (*param_1 + 1) - iVar1 * iVar3;
    piVar4 = param_1 + (long)iVar3 * 0x6c + 0xe;
    *param_1 = iVar3;
    piVar4[0x68] = 0;
    piVar4[0x69] = 0;
    uVar2 = FUN_008773dc(piVar4);
    *(undefined8 *)(piVar4 + 0x6a) = uVar2;
    iVar3 = *param_1;
    (param_1 + (long)iVar3 * 2 + 4)[0] = 0;
    (param_1 + (long)iVar3 * 2 + 4)[1] = 0;
  }
  return;
}


