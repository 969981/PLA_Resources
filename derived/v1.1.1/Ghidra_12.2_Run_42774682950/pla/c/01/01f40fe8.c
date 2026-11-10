/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f40fe8; name: FUN_01f40fe8
 */


void FUN_01f40fe8(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != lVar8) {
    uVar6 = *(ulong *)(param_1 + 0xf0);
    uVar1 = *(long *)(param_1 + 0xf8) + uVar6;
    plVar4 = (long *)(lVar8 + (uVar6 >> 4 & 0xffffffffffffff8));
    plVar5 = (long *)(*plVar4 + (uVar6 & 0x7f) * 0x20);
    plVar2 = (long *)(*(long *)(lVar8 + (uVar1 >> 4 & 0xffffffffffffff8)) + (uVar1 & 0x7f) * 0x20);
    if (plVar2 != plVar5) {
      if ((long *)*param_2 == (long *)0x0) {
        do {
          if ((long *)*plVar5 == (long *)0x0) {
            return;
          }
          if (*(long *)*plVar5 == 0) {
            return;
          }
          plVar5 = plVar5 + 4;
          if ((long)plVar5 - *plVar4 == 0x1000) {
            plVar4 = plVar4 + 1;
            plVar5 = (long *)*plVar4;
          }
        } while (plVar2 != plVar5);
      }
      else {
        plVar7 = (long *)*plVar5;
        if (plVar7 != (long *)0x0) goto LAB_01f41058;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == *(long *)*param_2) {
            return;
          }
          plVar5 = plVar5 + 4;
          if ((long)plVar5 - *plVar4 == 0x1000) {
            plVar4 = plVar4 + 1;
            plVar5 = (long *)*plVar4;
          }
          if (plVar2 == plVar5) break;
          plVar7 = (long *)*plVar5;
          lVar8 = 0;
          if (plVar7 != (long *)0x0) {
LAB_01f41058:
            lVar8 = *plVar7;
          }
        }
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0xb8);
  lVar3 = *(long *)(param_1 + 0xc0) - lVar8;
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = lVar3 * 0x10 - 1;
  }
  uVar6 = *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0xf0);
  if (uVar1 == uVar6) {
    FUN_01f4d980(param_1 + 0xb0);
    uVar6 = *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8);
    lVar8 = *(long *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0xc0) == lVar8) goto LAB_01f41160;
  }
  else if (*(long *)(param_1 + 0xc0) == lVar8) {
LAB_01f41160:
    lVar8 = 0;
    goto LAB_01f4111c;
  }
  lVar8 = *(long *)(lVar8 + (uVar6 >> 4 & 0xffffffffffffff8)) + (uVar6 & 0x7f) * 0x20;
LAB_01f4111c:
  FUN_01f4e7c8(param_1 + 0x100,lVar8,param_2);
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
  return;
}


