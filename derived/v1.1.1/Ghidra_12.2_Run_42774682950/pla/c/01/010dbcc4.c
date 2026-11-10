/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dbcc4; name: FUN_010dbcc4
 */


void FUN_010dbcc4(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = FUN_010dac08((int)param_1,param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x68;
  }
  else if (param_3 == 1) {
    param_1 = param_1 + 0xaf4;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    param_1 = param_1 + 0xc84;
  }
  if (uVar1 - 1 < 0x2a3) {
    uVar2 = 0;
    do {
      if (uVar2 == 0x2a3) {
                    /* WARNING: Subroutine does not return */
        FUN_010dc030();
      }
      lVar3 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_1 + lVar3);
    } while (uVar2 < uVar1);
  }
  return;
}


