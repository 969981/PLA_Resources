/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30440; name: FUN_02c30440
 */


void FUN_02c30440(short *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  do {
    if (*param_1 == 0x10) {
      lVar2 = (ulong)(ushort)param_1[1] + 2;
      param_1 = param_1 + lVar2;
    }
    else {
      if (*param_1 == 0) {
        return;
      }
      param_1 = param_1 + 1;
      lVar2 = 1;
    }
    uVar1 = (int)lVar2 + uVar1;
  } while (uVar1 < 0x800);
  return;
}


