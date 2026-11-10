/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01492554; name: FUN_01492554
 */


void FUN_01492554(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = *param_1;
  lVar12 = (&DAT_043c3510)[(ulong)uVar3 * 0x2c];
  plVar10 = (long *)(&DAT_043c3528)[(ulong)uVar3 * 0x2c];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar9 = *(long **)(*(long *)(lVar11 + 0x2c8) + 0x148);
  lVar7 = *(long *)(*(long *)(lVar11 + 0x2c8) + 0x150);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar4 = plVar9;
  if ((lVar7 != 0) && (*plVar9 != lVar12)) {
    lVar6 = lVar7 * 0x30;
    plVar5 = plVar9 + lVar7 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar4 = plVar5;
      if (lVar6 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar4 = plVar9;
    } while (*plVar1 != lVar12);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) | 1;
  lVar12 = *(long *)(lVar11 + 0x2888);
  if (*(long *)(lVar11 + 0x2890) != lVar12) {
    uVar8 = *(ulong *)(lVar11 + 0x28c0);
    lVar7 = *(long *)(lVar12 + (uVar8 / 0xcc) * 8) + (uVar8 % 0xcc) * 0x14;
    uVar2 = *(long *)(lVar11 + 0x28c8) + uVar8;
    lVar6 = *(long *)(lVar12 + (uVar2 / 0xcc) * 8) + (uVar2 % 0xcc) * 0x14;
    if (lVar6 != lVar7) {
      plVar9 = (long *)(lVar12 + (uVar8 / 0xcc) * 8);
      do {
        while( true ) {
          if (*(uint *)(lVar7 + 0xc) == uVar3) {
            *(undefined1 *)(lVar7 + 0x11) = 2;
          }
          lVar7 = lVar7 + 0x14;
          if (lVar7 - *plVar9 != 0xff0) break;
          plVar9 = plVar9 + 1;
          lVar7 = *plVar9;
          if (lVar6 == lVar7) goto LAB_01492664;
        }
      } while (lVar6 != lVar7);
    }
  }
LAB_01492664:
  lVar11 = lVar11 + (long)(int)uVar3 * 0x370;
  if (*(char *)(lVar11 + 0x700) == '\0') {
    *(undefined1 *)(lVar11 + 0x700) = 1;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014926a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}


