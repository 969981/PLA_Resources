/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bdb80; name: FUN_003bdb80
 */


void FUN_003bdb80(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (param_2 == param_1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_0032b96c(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x60);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
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
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x68);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        uVar2 = *(ulong *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
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
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto joined_r0x003bdbd4;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x003bdbd4:
  if (((uVar2 & 1) != 0) &&
     (*(long *)((uVar2 & 0xfffffffffffffffe) + 8) != *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10))
     ) {
    FUN_0030cac0();
  }
  FUN_003bd8c8(param_1,param_2);
  return;
}


