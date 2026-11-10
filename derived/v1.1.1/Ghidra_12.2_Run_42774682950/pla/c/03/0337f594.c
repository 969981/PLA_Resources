/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337f594; name: FUN_0337f594
 */


void FUN_0337f594(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = (*(long *)(param_1 + 8) - lVar1 >> 2) * -0x5555555555555555;
  if (1 < (int)uVar3) {
    uVar6 = 1;
    do {
      uVar5 = *(uint *)(lVar1 + uVar6 * 0xc);
      if (uVar5 >> 0x1c == 1) {
        puVar2 = *(ulong **)(*(long *)(param_2 + 8) + ((ulong)uVar5 & 0xffffff) * 8);
        puVar4 = puVar2;
        while( true ) {
          uVar5 = (uint)*puVar4;
          if ((uVar5 >> 8 & 1) != 0) break;
          if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
          goto LAB_0337f5ec;
        }
        if ((puVar4 != (ulong *)0x0) &&
           (uVar5 = (uVar5 & 0xff) - (uVar5 >> 1 & 0x55),
           uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
           (code *)puVar4[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
           (code *)0x0)) {
          (*(code *)puVar4[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                    (*(long *)(param_2 + 0x18) + (ulong)*(uint *)(lVar1 + uVar6 * 0xc + 4),puVar2,1)
          ;
        }
      }
LAB_0337f5ec:
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uVar3 & 0xffffffff));
  }
  return;
}


