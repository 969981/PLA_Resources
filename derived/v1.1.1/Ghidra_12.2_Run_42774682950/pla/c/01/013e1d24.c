/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1d24; name: FUN_013e1d24
 */


int FUN_013e1d24(int param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != (undefined1 *)0x0) {
    if (param_1 == 6) {
      uVar2 = 1;
    }
    else {
      iVar3 = param_1;
      do {
        iVar3 = iVar3 % 6 + 1;
        uVar1 = FUN_013e19d0(iVar3);
      } while ((uVar1 & 1) == 0);
      uVar2 = 0;
    }
    *param_2 = uVar2;
  }
  iVar3 = param_1;
  do {
    iVar4 = 1;
    if (iVar3 - 1U < 6 && iVar3 != 6) {
      iVar4 = iVar3 + 1;
    }
    uVar1 = FUN_013e19d0(iVar4);
  } while (((uVar1 & 1) == 0) && (iVar3 = iVar4, iVar4 != param_1));
  return iVar4;
}


