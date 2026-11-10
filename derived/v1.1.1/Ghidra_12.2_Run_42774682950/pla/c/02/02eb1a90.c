/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1a90; name: FUN_02eb1a90
 */


long FUN_02eb1a90(long *param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + (uVar4 >> 1);
      lVar5 = (long)iVar1;
      bVar2 = *(byte *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (bVar2 == param_2) {
        *param_3 = 1;
        goto LAB_02eb1ae0;
      }
      if (bVar2 < param_2) {
        iVar3 = iVar1 + 1;
      }
      uVar4 = uVar4 - (bVar2 < param_2) >> 1;
    } while (uVar4 != 0);
    lVar5 = (long)iVar3;
  }
  *param_3 = 0;
LAB_02eb1ae0:
  return *param_1 + lVar5 * 0x28;
}


