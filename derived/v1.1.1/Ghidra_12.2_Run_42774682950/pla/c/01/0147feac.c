/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147feac; name: FUN_0147feac
 */


undefined4 FUN_0147feac(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  if ((long)uVar1 < 0x2fa8eb6b046ad87f) {
    if (uVar1 == 0x2fa8e86b046ad366) {
      return 0x3f800000;
    }
    uVar4 = 0x40000000;
    uVar5 = 0x40400000;
    uVar3 = 0x2fa8e66b046ad000;
    uVar2 = 0xe76b046ad1b3;
  }
  else {
    if (uVar1 == 0x2fa8ed6b046adbe5) {
      return 0x40800000;
    }
    uVar4 = 0x40a00000;
    uVar5 = 0x40c00000;
    uVar3 = 0x2fa8eb6b046ad87f;
    uVar2 = 0xec6b046ada32;
  }
  if (uVar1 != uVar3) {
    uVar5 = 0;
  }
  if (uVar1 != (uVar2 | 0x2fa8000000000000)) {
    uVar4 = uVar5;
  }
  return uVar4;
}


