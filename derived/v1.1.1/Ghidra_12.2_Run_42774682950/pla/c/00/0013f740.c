/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013f740; name: FUN_0013f740
 */


void FUN_0013f740(long *param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  
  *(undefined4 *)((long)param_1 + 300) = 0x400;
  iVar5 = 0;
  *(short *)((long)param_1 + param_2 * 2 + 0xda) =
       *(short *)((long)param_1 + param_2 * 2 + 0xda) + 0x3d9;
  lVar6 = 0;
  do {
    lVar4 = lVar6 + 2;
    uVar2 = *(ushort *)((long)param_1 + lVar6 + 0x8a);
    iVar5 = iVar5 + (uint)*(ushort *)((long)param_1 + lVar6 + 0xda);
    *(ushort *)((long)param_1 + lVar6 + 0x8a) = uVar2 + (short)(iVar5 - (uint)uVar2 >> 1);
    *(undefined2 *)((long)param_1 + lVar6 + 0xda) = 1;
    lVar6 = lVar4;
  } while (lVar4 != 0x50);
  lVar4 = 0;
  lVar6 = 0;
  plVar7 = param_1;
  do {
    lVar6 = lVar6 + 1;
    plVar1 = (long *)((long)param_1 +
                     ((ulong)*(ushort *)((long)param_1 + lVar6 * 2 + 0x88) - 1 >> 8 &
                     0xfffffffffffffe));
    do {
      plVar8 = plVar7 + 1;
      *plVar7 = lVar4;
      plVar7 = plVar8;
    } while (plVar8 <= plVar1);
    plVar7 = (long *)((long)plVar1 + 2);
    lVar4 = lVar4 + 0x1000100010001;
  } while (lVar6 != 0x28);
  if ((int)param_1[0x26] != 0) {
    lVar6 = 0;
    uVar9 = (uint)*(ushort *)(param_1 + 0x11);
    do {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar6 * 2 + 0x8a);
      iVar5 = uVar10 - uVar9;
      uVar3 = 0x1f - (int)LZCOUNT(iVar5);
      uVar9 = (uint)(iVar5 * 0x8000) >> (ulong)(uVar3 & 0x1f);
      lVar4 = (ulong)(uVar9 >> 10) * 2;
      *(uint *)((long)param_1 + lVar6 * 4 + 0x134) =
           ((0x3c000 - (uint)*(ushort *)(&DAT_039c4ec8 + lVar4)) + uVar3 * -0x4000) -
           ((uVar9 & 0x3ff) *
            ((uint)*(ushort *)(&DAT_039c4eca + lVar4) - (uint)*(ushort *)(&DAT_039c4ec8 + lVar4)) +
            0x200 >> 10);
      lVar6 = lVar6 + 1;
      uVar9 = uVar10;
    } while (lVar6 != 0x28);
  }
  return;
}


