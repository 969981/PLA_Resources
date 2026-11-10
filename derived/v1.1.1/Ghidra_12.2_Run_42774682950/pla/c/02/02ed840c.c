/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed840c; name: FUN_02ed840c
 */


void FUN_02ed840c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar4;
  plVar2 = plVar7 + uVar5 * 2;
  plVar6 = plVar7;
  if ((uVar4 != 0) && (*plVar7 != param_2)) {
    lVar3 = uVar5 * 0x10;
    plVar8 = plVar7;
    do {
      lVar3 = lVar3 + -0x10;
      if (lVar3 == 0) {
        return;
      }
      plVar6 = plVar8 + 2;
      plVar1 = plVar8 + 2;
      plVar8 = plVar6;
    } while (*plVar1 != param_2);
  }
  if (plVar2 != plVar6) {
    if (plVar6 < plVar2 + -2) {
      uVar5 = (long)plVar7 + ~(ulong)plVar6 + uVar5 * 0x10 + -0x10;
      plVar7 = plVar6;
      if (((uint)uVar5 >> 4 & 1) == 0) {
        plVar7 = plVar6 + 2;
        *plVar6 = *plVar7;
        plVar6[1] = plVar6[3];
      }
      if (0xf < uVar5) {
        do {
          *plVar7 = plVar7[2];
          plVar7[1] = plVar7[3];
          plVar6 = plVar7 + 4;
          plVar7[2] = *plVar6;
          plVar7[3] = plVar7[5];
          plVar7 = plVar6;
        } while (plVar6 < plVar2 + -2);
      }
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}


