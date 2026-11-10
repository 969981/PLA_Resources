/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027858ac; name: FUN_027858ac
 */


ulong FUN_027858ac(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 < -0x1c4413fb859baafc) {
    if (lVar1 == -0x1c4415fb859bae62) {
      uVar2 = 0x400;
    }
    else {
      if (lVar1 != -0x1c4414fb859bacaf) {
        return 0;
      }
      uVar2 = 0x500;
    }
  }
  else if (lVar1 == -0x1c4410fb859ba5e3) {
    uVar2 = 0x100;
  }
  else if (lVar1 == -0x1c4413fb859baafc) {
    uVar2 = 0x200;
  }
  else {
    if (lVar1 != -0x1c4412fb859ba949) {
      return 0;
    }
    uVar2 = 0x300;
  }
  return uVar2 | 1;
}


