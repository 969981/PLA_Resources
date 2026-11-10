/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00acce34; name: FUN_00acce34
 */


undefined8 FUN_00acce34(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = (long *)*param_2;
  plVar7 = (long *)param_2[1];
  if ((plVar4 != plVar7) && (uVar1 = FUN_00acd004(plVar4), (uVar1 & 1) == 0)) {
    do {
      plVar2 = plVar4 + 1;
      plVar4 = plVar7;
      if (plVar7 == plVar2) break;
      uVar1 = FUN_00acd004(plVar2);
      plVar4 = plVar2;
    } while ((uVar1 & 1) == 0);
  }
  plVar7 = (long *)param_2[1];
  if (plVar7 == plVar4) {
    return 0;
  }
  plVar2 = plVar4;
  if (plVar4 + 1 != plVar7) {
    plVar2 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    plVar6 = plVar4 + 2;
    *plVar2 = 0;
    *plVar4 = lVar5;
    if (plVar6 != plVar7) {
      plVar3 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      lVar5 = *plVar6;
      plVar3 = plVar4 + 3;
      *plVar6 = 0;
      plVar6 = plVar4 + 2;
      *plVar2 = lVar5;
      plVar2 = plVar6;
      if (plVar3 != plVar7) {
        plVar2 = (long *)*plVar6;
        *plVar6 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))();
        }
        lVar5 = *plVar3;
        plVar8 = plVar4 + 4;
        *plVar3 = 0;
        plVar3 = plVar4 + 3;
        *plVar6 = lVar5;
        plVar2 = plVar3;
        if (plVar8 != plVar7) {
          plVar2 = (long *)*plVar3;
          *plVar3 = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x18))();
          }
          lVar5 = *plVar8;
          *plVar8 = 0;
          plVar2 = plVar4 + 4;
          *plVar3 = lVar5;
          plVar6 = plVar2;
          if (plVar4 + 5 != plVar7) {
            do {
              plVar4 = (long *)*plVar6;
              *plVar6 = 0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x18))();
              }
              plVar2 = plVar6 + 1;
              lVar5 = *plVar2;
              *plVar2 = 0;
              plVar4 = plVar6 + 2;
              *plVar6 = lVar5;
              plVar6 = plVar2;
            } while (plVar4 != plVar7);
          }
        }
      }
    }
    plVar7 = (long *)param_2[1];
    if (plVar7 == plVar2) goto LAB_00accf4c;
  }
  plVar7 = plVar7 + -1;
  if ((long *)*plVar7 != (long *)0x0) {
    (**(code **)(*(long *)*plVar7 + 0x18))();
  }
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x18))();
    }
  }
LAB_00accf4c:
  param_2[1] = plVar2;
  return 1;
}


