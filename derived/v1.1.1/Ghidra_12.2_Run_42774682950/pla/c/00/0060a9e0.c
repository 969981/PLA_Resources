/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a9e0; name: FUN_0060a9e0
 */


void FUN_0060a9e0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_043730c0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 != PTR_DAT_043730c0) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3 = *(byte **)(param_1 + 0x18);
      goto joined_r0x0060aa08;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x18);
joined_r0x0060aa08:
  if (pbVar3 == puVar1) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else if ((*pbVar3 & 1) == 0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (((uVar2 & 1) == 0) ||
     (*(long *)((uVar2 & 0xfffffffffffffffe) + 8) == *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10))
     ) {
    return;
  }
  FUN_0030cac0();
  return;
}


