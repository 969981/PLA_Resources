/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6230; name: FUN_032f6230
 */


uint FUN_032f6230(int param_1,long *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong *puVar6;
  
  puVar4 = (undefined8 *)(*param_2 + (long)param_1 * 0x18);
  puVar6 = (ulong *)*puVar4;
  iVar5 = *(int *)((long)puVar4 + 0xc);
  uVar1 = param_3 + 1;
  uVar2 = uVar1;
  if (-1 < iVar5) {
    do {
      uVar2 = FUN_032f6230(iVar5,param_2,uVar2,param_4);
      iVar5 = *(int *)(*param_2 + (long)iVar5 * 0x18 + 0x10);
    } while (-1 < iVar5);
  }
  while( true ) {
    uVar3 = (uint)*puVar6;
    if ((uVar3 >> 0xd & 1) != 0) {
      if (puVar6 != (ulong *)0x0) {
        uVar3 = (uVar3 & 0x1fff) - (uVar3 >> 1 & 0x555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        puVar6[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] =
             (long)(int)(uVar1 * 0x20000 | param_4 & 3 | (uVar2 & 0x7fff) << 2);
      }
      return uVar2;
    }
    if ((*puVar6 & 1) != 0) break;
    puVar6 = (ulong *)puVar6[1];
    if (puVar6 == (ulong *)0x0) {
      return uVar2;
    }
  }
  return uVar2;
}


