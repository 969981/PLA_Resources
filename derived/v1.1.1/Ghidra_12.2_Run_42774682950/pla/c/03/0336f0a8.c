/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f0a8; name: FUN_0336f0a8
 */


void FUN_0336f0a8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x3ffffff8) == 0) {
    uVar2 = (*(uint *)(param_1 + 0x24) & 0x3fffffff) * 2;
    if (uVar2 < 0x3fffffff) {
      if (uVar2 < 9) {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 0x3fffffff;
    }
    puVar1 = (uint *)FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,*(undefined8 *)(param_1 + 0x18),0);
    iVar3 = *(int *)(param_1 + 0x20);
    *(uint **)(param_1 + 0x18) = puVar1;
    if (7 < iVar3) {
      if (iVar3 != 8) {
        *(undefined4 *)(param_1 + 0x20) = 8;
      }
      goto LAB_0336f104;
    }
  }
  else {
    puVar1 = *(uint **)(param_1 + 0x18);
    iVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  memset(puVar1 + iVar3,0,(ulong)(7 - iVar3) * 4 + 4);
  puVar1 = *(uint **)(param_1 + 0x18);
LAB_0336f104:
  puVar1[5] = 0;
  puVar1[6] = 4;
  puVar1[1] = 0;
  puVar1[2] = 4;
  puVar1[7] = puVar1[7] & 0x3fffffff | 0x40000000;
  *puVar1 = *puVar1 & 0x60000000;
  puVar1[3] = puVar1[3] & 0x3fffffff | 0x40000000;
  puVar1[4] = puVar1[4] & 0x60000000;
  memset((void *)(param_1 + 0x28),0,0xd6c);
  return;
}


