/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148d0dc; name: FUN_0148d0dc
 */


void FUN_0148d0dc(long param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x28c0);
  lVar5 = *(long *)(param_1 + 0x2888);
  plVar3 = (long *)(lVar5 + (uVar6 / 0xcc) * 8);
  bVar1 = *(long *)(param_1 + 0x2890) != lVar5;
  if (*(long *)(param_1 + 0x2858) == 0) {
    if (bVar1) {
      lVar4 = *(long *)(lVar5 + (uVar6 / 0xcc) * 8) + (uVar6 % 0xcc) * 0x14;
      uVar6 = *(long *)(param_1 + 0x28c8) + uVar6;
      lVar5 = *(long *)(lVar5 + (uVar6 / 0xcc) * 8) + (uVar6 % 0xcc) * 0x14;
      while (lVar5 != lVar4) {
        while( true ) {
          if (*(int *)(lVar4 + 0xc) == param_2) {
            *(undefined1 *)(lVar4 + 0x11) = 4;
          }
          lVar4 = lVar4 + 0x14;
          if (lVar4 - *plVar3 != 0xff0) break;
          plVar3 = plVar3 + 1;
          lVar4 = *plVar3;
          if (lVar5 == lVar4) goto LAB_0148d14c;
        }
      }
    }
LAB_0148d14c:
    param_1 = param_1 + (long)param_2 * 0x370;
    if (*(char *)(param_1 + 0x700) != '\0') {
      return;
    }
    puVar2 = (undefined1 *)(param_1 + 0x700);
  }
  else {
    if (bVar1) {
      lVar4 = *plVar3 + (uVar6 % 0xcc) * 0x14;
      uVar6 = *(long *)(param_1 + 0x28c8) + uVar6;
      lVar5 = *(long *)(lVar5 + (uVar6 / 0xcc) * 8) + (uVar6 % 0xcc) * 0x14;
      while (lVar5 != lVar4) {
        while( true ) {
          if (*(int *)(lVar4 + 0xc) == param_2) {
            *(undefined1 *)(lVar4 + 0x11) = 5;
          }
          lVar4 = lVar4 + 0x14;
          if (lVar4 - *plVar3 != 0xff0) break;
          plVar3 = plVar3 + 1;
          lVar4 = *plVar3;
          if (lVar5 == lVar4) goto LAB_0148d1a8;
        }
      }
    }
LAB_0148d1a8:
    param_1 = param_1 + (long)param_2 * 0x370;
    if (*(char *)(param_1 + 0x7b0) != '\0') {
      return;
    }
    puVar2 = (undefined1 *)(param_1 + 0x7b0);
  }
  *puVar2 = 1;
  return;
}


