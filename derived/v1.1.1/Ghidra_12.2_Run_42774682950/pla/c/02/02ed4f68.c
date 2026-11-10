/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4f68; name: FUN_02ed4f68
 */


void FUN_02ed4f68(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if ((plVar1 != (long *)0x0) && ((int)plVar1[1] != 0)) {
    plVar8 = (long *)*plVar1;
    do {
      if (*plVar8 == param_2) {
        lVar7 = plVar8[1];
        if (lVar7 != 0) {
          FUN_02ef41c0(lVar7);
          (*DAT_0442d150)(4,lVar7);
          plVar1 = *(long **)(param_1 + 0x60);
        }
        uVar3 = *(uint *)(plVar1 + 1);
        plVar2 = (long *)(*plVar1 + (ulong)uVar3 * 0x10 + -0x10);
        if (plVar8 < plVar2) {
          uVar5 = (*plVar1 + ((ulong)uVar3 * 0x10 - (long)plVar8)) - 0x11;
          uVar3 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
          uVar6 = (ulong)uVar3 & 3;
          plVar4 = plVar8;
          if ((uVar3 & 3) != 0) {
            plVar9 = plVar8;
            do {
              plVar4 = plVar9 + 2;
              uVar6 = uVar6 - 1;
              *plVar9 = *plVar4;
              plVar9[1] = plVar9[3];
              plVar9 = plVar4;
            } while (uVar6 != 0);
          }
          if (0x2f < uVar5) {
            do {
              *plVar4 = plVar4[2];
              plVar4[1] = plVar4[3];
              plVar4[2] = plVar4[4];
              plVar4[3] = plVar4[5];
              plVar4[4] = plVar4[6];
              plVar4[5] = plVar4[7];
              plVar4[7] = plVar4[9];
              plVar9 = plVar4 + 8;
              plVar4[6] = *plVar9;
              plVar4 = plVar9;
            } while (plVar9 < plVar2);
          }
          uVar3 = *(uint *)(plVar1 + 1);
        }
        *(uint *)(plVar1 + 1) = uVar3 - 1;
        plVar1 = *(long **)(param_1 + 0x60);
      }
      else {
        plVar8 = plVar8 + 2;
      }
    } while ((long *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x10) != plVar8);
  }
  return;
}


