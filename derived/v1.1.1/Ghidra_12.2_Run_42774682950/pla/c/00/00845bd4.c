/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845bd4; name: FUN_00845bd4
 */


void FUN_00845bd4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_0081a840(lVar2);
    if (0x64f < uVar1) {
      uVar4 = 0;
      lVar3 = lVar2;
      do {
        FUN_007f07cc(lVar3);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x650;
      } while (uVar4 < uVar1 / 0x650);
    }
    FUN_0081a800(lVar2);
    param_1[1] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  return;
}


