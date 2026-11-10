/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e430; name: FUN_0044e430
 */


undefined4 FUN_0044e430(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  if (uVar3 == uVar4) {
    uVar4 = (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 == uVar4) {
      uVar1 = (*(uint *)(param_1 + 200) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 200) & 0xff00ff) << 8;
      uVar3 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (*(uint *)(param_2 + 200) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 200) & 0xff00ff) << 8;
      uVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      if (uVar3 == uVar4) {
        return 0;
      }
    }
  }
  uVar2 = 1;
  if (uVar3 < uVar4) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


