/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e5490; name: FUN_006e5490
 */


void FUN_006e5490(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  FUN_006e61dc(param_1 + 0x10);
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar1 != PTR_DAT_043730c0) {
    if ((*pbVar1 & 1) != 0) {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto joined_r0x006e54c8;
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
joined_r0x006e54c8:
  if (((uVar2 & 1) == 0) ||
     (*(long *)((uVar2 & 0xfffffffffffffffe) + 8) == *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10))
     ) {
    return;
  }
  FUN_0030cac0();
  return;
}


