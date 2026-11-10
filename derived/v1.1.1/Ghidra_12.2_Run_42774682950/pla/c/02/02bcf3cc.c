/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf3cc; name: FUN_02bcf3cc
 */


long FUN_02bcf3cc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
LAB_02bcf548:
    lVar5 = 0;
  }
  else {
    if (param_3 < 9) {
      param_3 = 8;
    }
    uVar1 = param_3;
    if (0xfff < param_3) {
      uVar1 = 0x1000;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    lVar5 = param_2 - uVar2 * uVar1;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar1 - lVar5;
    }
    lVar5 = lVar5 + param_2;
    puVar3 = (ulong *)FUN_02bce454(param_1,lVar5,param_3,0);
    if (puVar3 == (ulong *)0x0) {
      puVar3 = (ulong *)FUN_02bce454(param_1,lVar5 + param_3,param_3,1);
      if (((puVar3 == (ulong *)0x0) &&
          ((lVar4 = FUN_02bce800(param_1,lVar5), lVar4 == 0 ||
           (puVar3 = (ulong *)FUN_02bce678(param_1,lVar4,lVar5,param_3), puVar3 == (ulong *)0x0))))
         && ((lVar4 = FUN_02bce800(param_1,lVar5 + param_3), lVar4 == 0 ||
             (puVar3 = (ulong *)FUN_02bce678(param_1,lVar4,lVar5,param_3), puVar3 == (ulong *)0x0)))
         ) goto LAB_02bcf548;
    }
    param_3 = param_3 | param_3 << 1;
    param_3 = param_3 | param_3 << 2;
    param_3 = param_3 | param_3 << 4;
    lVar5 = (long)puVar3 + (ulong)*(byte *)((long)puVar3 + 0xd) + 0x10;
    param_3 = param_3 | param_3 << 8;
    param_3 = param_3 | param_3 << 0x10;
    param_3 = param_3 | param_3 << 0x20;
    uVar1 = (param_3 >> 1 & 0x5555555555555555) + (param_3 & 0x5555555555555555);
    uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
    uVar1 = (uVar1 >> 4 & 0x707070707070707) + (uVar1 & 0x707070707070707);
    uVar1 = (uVar1 >> 8 & 0xf000f000f000f) + (uVar1 & 0xf000f000f000f);
    lVar4 = (uVar1 >> 0x10 & 0x1f0000001f) + (uVar1 & 0x1f0000001f);
    *(char *)((long)puVar3 + 0xe) = '@' - ((char)((ulong)lVar4 >> 0x20) + (char)lVar4);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    lVar4 = *puVar3 + 0x18;
    if (*puVar3 < 0x11) {
      lVar4 = 0x28;
    }
    *(long *)(param_1 + 0x58) = lVar4 + *(long *)(param_1 + 0x58);
  }
  return lVar5;
}


