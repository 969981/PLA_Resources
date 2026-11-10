/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e8a4; name: FUN_0083e8a4
 */


void FUN_0083e8a4(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  if (1 < param_3) {
    lVar5 = FUN_008473ec();
    if (lVar5 != 0) {
      lVar5 = FUN_008473ec(param_1);
      lVar6 = FUN_00847388(param_1);
      if (lVar5 == lVar6) {
        return;
      }
    }
    bVar1 = *(byte *)(param_2 + 1);
    if ((((uint)bVar1 << 3 | 2) == param_3) && (bVar1 != 0)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(param_2 + 2);
      lVar5 = *(long *)(param_1 + 0x68);
      puVar3 = (ulong *)(param_2 + 10);
      while( true ) {
        if (lVar5 != param_1 + 0x60) {
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          cVar2 = *(char *)(lVar5 + 0x31);
          lVar6 = *(long *)(lVar5 + 8);
          while( true ) {
            lVar4 = lVar6;
            if ((cVar2 == '\0') &&
               (uVar7 = FUN_0082deb0(lVar5 + 0x10), uVar7 == (uVar8 >> 0x20 | uVar8 << 0x20))) {
              *(undefined1 *)(lVar5 + 0x31) = 1;
            }
            if (lVar4 == param_1 + 0x60) break;
            cVar2 = *(char *)(lVar4 + 0x31);
            lVar6 = *(long *)(lVar4 + 8);
            lVar5 = lVar4;
          }
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == bVar1) break;
        uVar8 = *puVar3;
        lVar5 = *(long *)(param_1 + 0x68);
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}


