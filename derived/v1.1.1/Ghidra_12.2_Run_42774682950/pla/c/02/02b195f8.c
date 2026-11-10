/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b195f8; name: FUN_02b195f8
 */


void FUN_02b195f8(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_1 == 0.0) {
    lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x278) - *(long *)(*(long *)(param_3 + 8) + 0x270);
    if (lVar2 != 0) {
      uVar3 = 1;
      do {
        FUN_02b18f84(param_2,param_3,uVar3 - 1);
        uVar1 = (ulong)uVar3;
        uVar3 = uVar3 + 1;
      } while (uVar1 < (ulong)((lVar2 >> 4) * -0x79435e50d79435e5));
    }
  }
  else {
    FUN_02b1ad08(param_2 + 0xa0,param_3);
    FUN_02b196a4(param_2,param_3);
    *(double *)(param_2 + 0xd8) = param_1;
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  return;
}


