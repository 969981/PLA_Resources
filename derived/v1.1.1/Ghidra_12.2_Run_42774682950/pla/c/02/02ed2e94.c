/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed2e94; name: FUN_02ed2e94
 */


float FUN_02ed2e94(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  
  plVar9 = (long *)(param_1 + 0x18);
  uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
  fVar11 = 0.0;
  uVar8 = (uint)param_2;
  if (((((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x20) != '\0')) &&
      (uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9,param_2 & 0xffffffff), (uVar4 & 1) != 0)) &&
     ((plVar9 = (long *)(**(code **)(*plVar9 + 0x80))(plVar9), plVar9 != (long *)0x0 &&
      (lVar5 = *plVar9, lVar5 != 0)))) {
    fVar11 = 0.0;
    do {
      puVar6 = *(ushort **)(lVar5 + 0x20);
      if (puVar6 != (ushort *)0x0) {
        uVar4 = 0;
        pfVar7 = (float *)((long)puVar6 + ((ulong)((uint)*puVar6 * 2 + 5) & 0x3fffc));
        do {
          if ((uint)puVar6[uVar4 + 1] == (uVar8 & 0xffff)) {
            fVar11 = *pfVar7 + fVar11;
            break;
          }
          uVar4 = uVar4 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar4 < *puVar6);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (lVar5 != 0);
  }
  if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
     ((**(ulong **)(param_1 + 0x38) & 1L << (param_2 & 0x3f)) != 0)) {
    uVar2 = *(uint *)(DAT_0440a160 + 0x20);
    fVar10 = 0.0;
    if (uVar2 != 0) {
      uVar1 = (int)(param_1 + 0x30) + uVar8;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar9 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
        if ((*plVar9 == param_1 + 0x30) && (*(uint *)(plVar9 + 1) == uVar8)) {
          if (*(int *)((long)plVar9 + 0x4c) == 3) {
            fVar10 = (float)FUN_02eb1180(DAT_0440a160,plVar9,param_3);
          }
          else {
            fVar10 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    fVar11 = fVar10 + fVar11;
  }
  return fVar11;
}


