/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c6bb0; name: FUN_018c6bb0
 */


bool FUN_018c6bb0(long param_1,undefined1 *param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  
  if (param_2 == &DAT_cbf29ce484222645) {
    return false;
  }
  puVar7 = *(undefined1 **)(param_1 + 0xa0);
  if (puVar7 == (undefined1 *)0x0) {
    return false;
  }
  uVar4 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    puVar5 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)param_2);
  }
  else {
    puVar5 = param_2;
    if (puVar7 <= param_2) {
      uVar3 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar3 = (ulong)param_2 / (ulong)puVar7;
      }
      puVar5 = param_2 + -(uVar3 * (long)puVar7);
    }
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x98) + (long)puVar5 * 8);
  if (plVar8 == (long *)0x0) {
    return false;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return false;
  }
  if (1 < uVar4) {
    do {
      puVar9 = (undefined1 *)plVar8[1];
      if (puVar9 == param_2) {
        if ((undefined1 *)plVar8[2] == param_2) goto LAB_018c6cc0;
      }
      else {
        if (puVar7 <= puVar9) {
          uVar4 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar4 = (ulong)puVar9 / (ulong)puVar7;
          }
          puVar9 = puVar9 + -(uVar4 * (long)puVar7);
        }
        if (puVar9 != puVar5) {
          return false;
        }
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return false;
      }
    } while( true );
  }
  do {
    if ((undefined1 *)plVar8[1] == param_2) {
      if ((undefined1 *)plVar8[2] == param_2) {
LAB_018c6cc0:
        piVar6 = (int *)plVar8[3];
        if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
           (uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar4 == 0)) {
          piVar6 = (int *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar6 + uVar4);
          piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
        }
        if (param_3 == 1) {
          if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
            return false;
          }
          uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[3];
        }
        else {
          if (param_3 != 0) {
            return false;
          }
          if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
            return false;
          }
          uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
        }
        if ((ulong)uVar2 == 0) {
          return false;
        }
        return *(int *)((long)piVar6 + (ulong)uVar2) == 1;
      }
    }
    else if ((undefined1 *)((ulong)plVar8[1] & (ulong)(puVar7 + -1)) != puVar5) {
      return false;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return false;
    }
  } while( true );
}


