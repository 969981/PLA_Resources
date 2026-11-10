/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427540; name: FUN_00427540
 */


ulong FUN_00427540(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0x69;
    uVar4 = 0x263;
  }
  else {
    lVar1 = 0;
    if (*(ulong *)(param_1 + 0x28) <= *(ulong *)(param_1 + 0x30)) {
      lVar1 = *(ulong *)(param_1 + 0x30) - *(ulong *)(param_1 + 0x28);
    }
    uVar6 = *(ulong *)(param_1 + 8);
    uVar5 = lVar1 * (ulong)param_2 + 7 >> 3;
    if (uVar5 <= *(long *)(param_1 + 0x20) - uVar6) {
      uVar2 = *(ulong *)(param_1 + 0x18) - uVar6;
      if (*(ulong *)(param_1 + 0x18) < uVar6 || uVar2 == 0) {
        return uVar5;
      }
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      return uVar2;
    }
    uVar3 = 0x7d;
    uVar4 = 0x26b;
  }
  FUN_004014b0(0x24,0x73,uVar3,"external/openssl/crypto/rand/rand_lib.c",uVar4);
  return 0;
}


