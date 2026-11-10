/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b834; name: FUN_02e7b834
 */


bool FUN_02e7b834(long param_1,int param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((bVar1 | 0x10) == 0x90) {
    if (((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x10) != 0)) &&
       ((param_3 & 1) != 0)) {
      bVar4 = *(byte *)(param_1 + 0x30);
      if (((bVar4 >> 1 & 1) == 0) && (*(int *)(param_1 + 0x2c) < (int)(uint)DAT_042ab268)) {
        if ((bVar1 == 0x80) || ((bVar1 == 0x90 && (*(char *)(param_1 + 0x2b) == '\0')))) {
          FUN_02e7b90c(param_1);
          bVar4 = *(byte *)(param_1 + 0x30);
        }
        bVar4 = bVar4 | 2;
        *(byte *)(param_1 + 0x30) = bVar4;
      }
      if ((bVar4 & 1) == 0) {
        FUN_02e7ba24(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                     *(long *)(param_1 + 0x18) + 0x18);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
      }
    }
    uVar2 = *(int *)(param_1 + 0x2c) - param_2;
    *(uint *)(param_1 + 0x2c) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    bVar3 = ((*(byte *)(param_1 + 0x30) ^ 0xff) & 6) == 0;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


