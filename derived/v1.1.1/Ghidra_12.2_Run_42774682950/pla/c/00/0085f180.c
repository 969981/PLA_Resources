/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f180; name: FUN_0085f180
 */


void FUN_0085f180(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = param_1[0x17];
  *param_1 = (long)(PTR_DAT_04378198 + 0x10);
  if (lVar2 != 0) {
    uVar1 = FUN_0081a840(lVar2);
    if (0x77 < uVar1) {
      uVar4 = 0;
      lVar3 = lVar2 + 0x28;
      do {
        FUN_007e34a4(lVar3 + 0x20);
        FUN_007e34a4(lVar3);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x78;
      } while (uVar4 < uVar1 / 0x78);
    }
    FUN_0081a800(lVar2);
    param_1[0x17] = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00861cf8(param_1 + 0x1b);
  FUN_007e34a4(param_1 + 0x10);
  FUN_007e34a4(param_1 + 0xc);
  FUN_00847210(param_1);
  return;
}


