/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329cb18; name: FUN_0329cb18
 */


/* WARNING: Removing unreachable block (ram,0x0329cb3c) */

undefined4 FUN_0329cb18(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  if ((int)uVar1 < 1) {
    return 0;
  }
  if (uVar1 == 1) {
    lVar4 = 0;
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)(param_1 + 0xc);
    do {
      lVar4 = lVar4 + 2;
      uVar3 = uVar3 + (pbVar5[-8] >> 3 & 1) + (*pbVar5 >> 3 & 1);
      pbVar5 = pbVar5 + 0x10;
    } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
    if ((uVar1 & 1) == 0) goto LAB_0329cb88;
  }
  uVar3 = uVar3 + (*(byte *)(param_1 + lVar4 * 8 + 4) >> 3 & 1);
LAB_0329cb88:
  uVar2 = 1;
  if (uVar3 != uVar1) {
    uVar2 = 2;
  }
  if (uVar3 == 0) {
    return 0;
  }
  return uVar2;
}


