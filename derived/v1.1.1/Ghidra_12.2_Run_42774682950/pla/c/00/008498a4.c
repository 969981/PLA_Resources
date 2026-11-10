/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008498a4; name: FUN_008498a4
 */


void FUN_008498a4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 100) = 0;
  uVar1 = *(ushort *)(param_1 + 0x5a) - 1;
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + lVar2) + 0x20))();
      lVar2 = lVar2 + 0x520;
    } while ((ulong)uVar1 * 0x520 != lVar2);
  }
  FUN_00847354(param_1);
  return;
}


