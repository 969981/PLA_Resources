/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ace094; name: FUN_00ace094
 */


undefined8 FUN_00ace094(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_0437a150;
  puVar1 = PTR_DAT_0437a148;
  plVar9 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  plVar4 = plVar9;
  if (plVar9 != plVar5) {
    do {
      if (*plVar9 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(*plVar9 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar7 = FUN_009b19b4();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            plVar4 = plVar9;
            goto LAB_00ace0bc;
          }
        }
      }
      plVar9 = plVar9 + 1;
      plVar4 = plVar5;
    } while (plVar9 != plVar5);
  }
LAB_00ace0bc:
  plVar9 = (long *)param_1[1];
  if (plVar9 == plVar4) {
    return 0;
  }
  plVar5 = plVar4;
  if (plVar4 + 1 != plVar9) {
    plVar5 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    plVar10 = plVar4 + 2;
    *plVar5 = 0;
    *plVar4 = lVar8;
    if (plVar10 != plVar9) {
      plVar6 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      lVar8 = *plVar10;
      plVar6 = plVar4 + 3;
      *plVar10 = 0;
      plVar10 = plVar4 + 2;
      *plVar5 = lVar8;
      plVar5 = plVar10;
      if (plVar6 != plVar9) {
        plVar5 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        lVar8 = *plVar6;
        plVar11 = plVar4 + 4;
        *plVar6 = 0;
        plVar6 = plVar4 + 3;
        *plVar10 = lVar8;
        plVar5 = plVar6;
        if (plVar11 != plVar9) {
          plVar5 = (long *)*plVar6;
          *plVar6 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
          lVar8 = *plVar11;
          *plVar11 = 0;
          plVar5 = plVar4 + 4;
          *plVar6 = lVar8;
          plVar10 = plVar5;
          if (plVar4 + 5 != plVar9) {
            do {
              plVar5 = (long *)*plVar10;
              *plVar10 = 0;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x18))();
              }
              plVar5 = plVar10 + 1;
              lVar8 = *plVar5;
              *plVar5 = 0;
              plVar4 = plVar10 + 2;
              *plVar10 = lVar8;
              plVar10 = plVar5;
            } while (plVar4 != plVar9);
          }
        }
      }
    }
    plVar9 = (long *)param_1[1];
    if (plVar9 == plVar5) goto LAB_00ace1ec;
  }
  plVar9 = plVar9 + -1;
  if ((long *)*plVar9 != (long *)0x0) {
    (**(code **)(*(long *)*plVar9 + 0x18))();
  }
  while (plVar9 != plVar5) {
    plVar9 = plVar9 + -1;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x18))();
    }
  }
LAB_00ace1ec:
  param_1[1] = plVar5;
  return 1;
}


