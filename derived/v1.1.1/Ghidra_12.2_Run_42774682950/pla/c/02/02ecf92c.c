/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf92c; name: FUN_02ecf92c
 */


/* WARNING: Removing unreachable block (ram,0x02ecf980) */

void FUN_02ecf92c(long param_1,uint param_2,uint *param_3,ulong param_4)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  
  FUN_02f03e74();
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar3 = 0;
      lVar4 = 0;
    }
    else {
      uVar3 = 0;
      lVar4 = 0;
      puVar5 = param_3;
      do {
        uVar3 = 1L << ((ulong)*puVar5 & 0x3f) | uVar3;
        *(ulong *)(lVar2 + 8) = uVar3;
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 6;
        lVar4 = lVar4 + 2;
        uVar3 = 1L << ((ulong)*puVar1 & 0x3f) | uVar3;
        *(ulong *)(lVar2 + 8) = uVar3;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar4);
      if ((param_2 & 1) == 0) goto LAB_02ecf9e8;
    }
    *(ulong *)(lVar2 + 8) = 1L << ((ulong)param_3[lVar4 * 3] & 0x3f) | uVar3;
  }
LAB_02ecf9e8:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_02f04094(param_1);
  return;
}


