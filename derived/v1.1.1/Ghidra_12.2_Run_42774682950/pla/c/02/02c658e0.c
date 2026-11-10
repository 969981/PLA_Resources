/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c658e0; name: FUN_02c658e0
 */


void FUN_02c658e0(long param_1,long param_2,ushort *param_3)

{
  long lVar1;
  short *psVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(ushort **)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    lVar4 = 0;
    sVar6 = 0;
    do {
      psVar2 = (short *)(param_2 + 8 + lVar4);
      lVar4 = lVar4 + 8;
      sVar6 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar6;
    } while (lVar4 != 0x160);
    *(short *)(param_2 + 6) = sVar6;
    piVar5 = *(int **)(param_1 + 0x10);
    iVar7 = *piVar5;
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 4;
      iVar3 = iVar7 * 0x41c64e6d + 0x6073;
      iVar7 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar5 + lVar4 + 8) =
           *(ushort *)((long)piVar5 + lVar4 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar5 + lVar4 + 10) =
           *(ushort *)((long)piVar5 + lVar4 + 10) ^ (ushort)((uint)iVar7 >> 0x10);
      lVar4 = lVar1;
    } while (lVar1 != 0x160);
    param_3 = *(ushort **)(param_1 + 8);
  }
  if ((param_3 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
    iVar7 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    *param_3 = *param_3 ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[1] = param_3[1] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    param_3[2] = param_3[2] ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[3] = param_3[3] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    param_3[4] = param_3[4] ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[5] = param_3[5] ^ (ushort)((uint)iVar3 >> 0x10);
    param_3[6] = param_3[6] ^ (ushort)((uint)iVar7 >> 0x10);
    param_3[7] = param_3[7] ^ (ushort)((uint)(iVar7 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


