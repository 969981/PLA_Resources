/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002e5c; name: FUN_03002e5c
 */


void FUN_03002e5c(long param_1)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (-1 < iVar1) {
    psVar2 = *(short **)(param_1 + 8);
    uVar5 = 0;
    psVar6 = psVar2;
    do {
      if (*psVar6 != -1) break;
      uVar5 = uVar5 + 1;
      psVar6 = psVar6 + 8;
    } while ((long)iVar1 + 1U != uVar5);
    if ((int)uVar5 <= iVar1) {
      uVar5 = uVar5 & 0xffffffff;
      do {
        FUN_03002d40(*(undefined8 *)((long)psVar2 + ((long)(uVar5 << 0x20) >> 0x1c) + 8));
        lVar7 = (long)(int)uVar5;
        lVar3 = lVar7 + -1;
        lVar4 = lVar7 << 0x20;
        lVar7 = lVar7 * 0x10;
        iVar1 = *(int *)(param_1 + 0x14);
        do {
          lVar4 = lVar4 + 0x100000000;
          lVar7 = lVar7 + 0x10;
          lVar3 = lVar3 + 1;
          if (iVar1 <= lVar3) break;
        } while (*(short *)(*(long *)(param_1 + 8) + lVar7) == -1);
        uVar5 = lVar4 >> 0x20;
        if (iVar1 < (int)((ulong)lVar4 >> 0x20)) break;
        psVar2 = *(short **)(param_1 + 8);
      } while( true );
    }
    if (0 < iVar1) {
      lVar4 = 0;
      uVar5 = (ulong)(iVar1 + 1);
      do {
        if (*(short *)(*(long *)(param_1 + 8) + lVar4) != -1) {
          *(undefined2 *)(*(long *)(param_1 + 8) + lVar4) = 0xffff;
        }
        uVar5 = uVar5 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 != 0);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x80000000;
  return;
}


