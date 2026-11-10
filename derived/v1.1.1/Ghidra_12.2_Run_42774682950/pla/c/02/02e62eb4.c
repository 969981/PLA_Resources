/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62eb4; name: FUN_02e62eb4
 */


bool FUN_02e62eb4(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  if (*(long *)(param_2 + 0xe) != *(long *)(param_1 + 0xe0)) {
    uVar2 = *(uint *)(param_1 + 0xf0);
    *(undefined4 **)(param_1 + (ulong)uVar2 * 8 + 0x108) = param_2;
    *(undefined4 *)(param_1 + (ulong)uVar2 * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf0) * 4 + 0xb0) = param_2[0xb];
    iVar1 = *(int *)(param_1 + 0xf0) + 1;
    *(int *)(param_1 + 0xf0) = iVar1;
    if (iVar1 == 4) {
      uVar3 = FUN_02e63038(param_1);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined1 *)(param_1 + 0xf4);
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 0xf4) = uVar4;
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  return *(char *)(param_1 + 0xf4) == '\0';
}


