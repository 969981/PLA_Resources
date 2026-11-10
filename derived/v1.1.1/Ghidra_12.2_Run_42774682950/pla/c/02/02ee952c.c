/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee952c; name: FUN_02ee952c
 */


void FUN_02ee952c(long param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = *puVar2 & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
    FUN_02ee89dc();
    plVar5 = *(long **)(param_1 + 8);
    uVar1 = *(uint *)(plVar5 + 3);
    if (*plVar5 == 0 && uVar1 == 0) {
      if (plVar5 != (long *)0x0) {
        if (plVar5[2] != 0) {
          *(undefined4 *)(plVar5 + 3) = 0;
          (*DAT_0442d150)(0);
          plVar5[2] = 0;
          *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        }
        (*DAT_0442d150)(2,plVar5);
      }
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      plVar5[1] = -1;
      if (uVar1 != 0) {
        lVar3 = (ulong)uVar1 << 4;
        uVar4 = 0xffffffffffffffff;
        puVar2 = (ulong *)plVar5[2];
        do {
          uVar4 = *puVar2 & uVar4;
          lVar3 = lVar3 + -0x10;
          plVar5[1] = uVar4;
          puVar2 = puVar2 + 2;
        } while (lVar3 != 0);
      }
    }
  }
  return;
}


