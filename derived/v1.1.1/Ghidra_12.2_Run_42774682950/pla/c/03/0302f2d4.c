/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302f2d4; name: FUN_0302f2d4
 */


void FUN_0302f2d4(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_68 [2];
  
  if (*(long *)(param_1 + 0x698) != 0) {
    lVar8 = *(long *)(param_1 + 0x488);
    lVar9 = *(long *)(lVar8 + 8);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0xb0);
    uVar2 = FUN_032c0fa4(lVar8 + 0x90,lVar7,local_68);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_68[0] & 0xffffff;
      do {
        if ((*(long *)(lVar9 + (ulong)uVar3 * 0x68) == lVar7) ||
           (*(long *)(lVar9 + (ulong)uVar3 * 0x68 + 0x10) == lVar7)) {
          do {
            if ((*(byte *)(lVar9 + (ulong)uVar3 * 0x68 + 0x42) >> 2 & 1) != 0) {
              uVar4 = *(uint *)(lVar9 + (ulong)uVar3 * 0x68 + 8);
              if (uVar4 == (uint)param_2) {
                uVar4 = *(uint *)(lVar9 + (ulong)uVar3 * 0x68 + 0x18);
              }
              uVar1 = uVar4 & 0xffffff;
              if ((((uVar1 != 0xffffff) && (uVar1 < *(uint *)(param_1 + 0x40))) &&
                  (lVar6 = *(long *)(param_1 + 0x38),
                  (*(byte *)(lVar6 + (ulong)uVar1 * 0xc0 + 0x54) & 3) != 0)) &&
                 ((*(uint *)(lVar6 + (ulong)uVar1 * 0xc0 + 0x50) == uVar4 &&
                  ((*(byte *)(lVar6 + ((ulong)uVar4 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)))) {
                FUN_0304f924(*(undefined8 *)(param_1 + 0x698),param_2 & 0xffffffff);
              }
            }
            puVar5 = (uint *)(*(long *)(lVar8 + 0xa8) + (long)(int)uVar3 * 8);
            if (*(long *)(lVar9 + (long)(int)uVar3 * 0x68) != lVar7) {
              puVar5 = puVar5 + 1;
            }
            while( true ) {
              uVar3 = *puVar5;
              if (uVar3 == 0x7fffffff) {
                return;
              }
              if ((*(long *)(lVar9 + (ulong)uVar3 * 0x68) == lVar7) ||
                 (*(long *)(lVar9 + (ulong)uVar3 * 0x68 + 0x10) == lVar7)) break;
              puVar5 = (uint *)(*(long *)(lVar8 + 0xa8) + (long)(int)uVar3 * 8);
              if (*(long *)(lVar9 + (long)(int)uVar3 * 0x68) != lVar7) {
                puVar5 = puVar5 + 1;
              }
            }
          } while( true );
        }
        puVar5 = (uint *)(*(long *)(lVar8 + 0xa8) + (long)(int)uVar3 * 8);
        if (*(long *)(lVar9 + (long)(int)uVar3 * 0x68) != lVar7) {
          puVar5 = puVar5 + 1;
        }
        uVar3 = *puVar5;
      } while (uVar3 != 0x7fffffff);
    }
  }
  return;
}


