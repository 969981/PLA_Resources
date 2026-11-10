/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5d4ec; name: FUN_00d5d4ec
 */


bool FUN_00d5d4ec(long param_1,int param_2,byte *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x6ef);
  if (*(byte *)(param_1 + 0x6ef) == 0) {
LAB_00d5d5a8:
    if (*param_3 == 0) {
      return false;
    }
    return *param_4 != '\0';
  }
  iVar1 = *(int *)(param_1 + 0x6d8);
  bVar3 = *(byte *)(param_1 + 0x6ee);
  uVar2 = 0;
  if (bVar3 != 0) goto LAB_00d5d538;
  do {
    bVar5 = 0;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (uVar4 <= uVar2) goto LAB_00d5d5a8;
      if (bVar5 == 0) break;
LAB_00d5d538:
      uVar4 = 0;
      do {
        if (1 < *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x6d8) *
                                                                  0x60 + 0x638) + 0xa8) +
                                   (ulong)(param_2 + uVar4 +
                                          uVar2 * *(int *)(param_1 + (long)iVar1 * 0x60 + 0x640)) *
                                   0x10) + 8)) {
          if (*param_3 <= uVar4) {
            *param_3 = (char)uVar4 + 1;
          }
          *param_4 = (char)uVar2 + '\x01';
          bVar3 = *(byte *)(param_1 + 0x6ee);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < bVar3);
      uVar4 = (uint)*(byte *)(param_1 + 0x6ef);
      bVar5 = bVar3;
    }
  } while( true );
}


