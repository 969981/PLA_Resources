/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa5bb0; name: FUN_02aa5bb0
 */


undefined1  [16] FUN_02aa5bb0(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  plVar1 = *(long **)(param_1 + 0x58);
  plVar3 = *(long **)(param_1 + 0x60);
  if ((ulong)(((long)plVar3 - (long)plVar1 >> 3) * 0x6db6db6db6db6db7) <= (ulong)(long)(int)param_3)
  {
LAB_02aa5d7c:
    return ZEXT816(0);
  }
  if (param_3 == 0xffffffff) {
    uVar10 = 0xffffffffffffffff;
    if (plVar1 == plVar3) {
      uVar9 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar9 = 0;
      plVar11 = plVar1;
      do {
        plVar2 = (long *)*plVar11;
        plVar4 = (long *)plVar11[1];
        if ((plVar2 == plVar4) || (*plVar2 == *param_2)) {
          plVar12 = plVar2;
        }
        else {
          plVar8 = plVar2;
          do {
            if (plVar4 + -1 == plVar8) {
              plVar12 = plVar4;
              break;
            }
            plVar12 = plVar8 + 1;
            plVar5 = plVar8 + 1;
            plVar8 = plVar12;
          } while (*plVar5 != *param_2);
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar2) >> 3);
        if (plVar4 == plVar12) {
          uVar6 = 0xffffffff;
        }
        if (-1 < (int)uVar6) {
          uVar10 = (ulong)uVar6;
          plVar12 = plVar1;
          do {
            plVar8 = (long *)*plVar12;
            plVar5 = (long *)plVar12[1];
            if ((long)plVar5 - (long)plVar8 == (long)plVar4 - (long)plVar2) {
              if (plVar8 == plVar5) goto LAB_02aa5c50;
              plVar7 = plVar2;
              while (*plVar8 == *plVar7) {
                plVar8 = plVar8 + 1;
                plVar7 = plVar7 + 1;
                if (plVar5 == plVar8) goto LAB_02aa5c50;
              }
            }
            plVar12 = plVar12 + 7;
          } while (plVar12 != plVar3);
          plVar12 = plVar3;
LAB_02aa5c50:
          param_3 = (int)((ulong)((long)plVar12 - (long)plVar1) >> 3) * -0x49249249;
          uVar9 = 1;
          uVar13 = 1;
        }
        plVar11 = plVar11 + 7;
      } while (plVar11 != plVar3);
    }
    uVar13 = uVar13 | uVar10 << 0x20;
  }
  else {
    plVar3 = (long *)plVar1[(long)(int)param_3 * 7];
    plVar1 = (long *)(plVar1 + (long)(int)param_3 * 7)[1];
    plVar11 = plVar3;
    if ((plVar3 != plVar1) && (*plVar3 != *param_2)) {
      do {
        plVar11 = plVar11 + 1;
        if (plVar1 == plVar11) {
          plVar11 = plVar1;
          goto LAB_02aa5d50;
        }
      } while (*plVar11 != *param_2);
    }
LAB_02aa5d50:
    uVar6 = (uint)((ulong)((long)plVar11 - (long)plVar3) >> 3);
    if (plVar1 == plVar11) {
      uVar6 = 0xffffffff;
    }
    if ((int)uVar6 < 0) goto LAB_02aa5d7c;
    uVar9 = 1;
    uVar13 = (ulong)uVar6 << 0x20 | 1;
  }
  auVar14._0_8_ = uVar9 | (ulong)param_3 << 0x20;
  auVar14._8_8_ = uVar13;
  return auVar14;
}


