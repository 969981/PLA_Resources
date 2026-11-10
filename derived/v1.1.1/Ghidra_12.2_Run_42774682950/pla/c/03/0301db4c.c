/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301db4c; name: FUN_0301db4c
 */


void FUN_0301db4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  FUN_0301de30(param_1 + 0x758);
  if (*(long *)(param_1 + 0x620) != 0) {
    iVar4 = *(int *)(param_1 + 0x638);
    if (*(char *)(param_1 + 0x62c) != '\0') {
      plVar3 = *(long **)(param_1 + 0x630);
      if (iVar4 < 1) {
        plVar7 = plVar3;
      }
      else {
        plVar7 = plVar3;
        if (*plVar3 != 0) {
          *plVar3 = *plVar3;
          plVar7 = plVar3 + 1;
        }
        if (iVar4 != 1) {
          if (plVar3[1] != 0) {
            *plVar7 = plVar3[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar4 != 2) {
            iVar4 = iVar4 + -2;
            plVar3 = plVar3 + 2;
            plVar6 = plVar7;
            do {
              plVar7 = plVar6;
              if (*plVar3 != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = *plVar3;
              }
              plVar3 = plVar3 + 1;
              iVar4 = iVar4 + -1;
              plVar6 = plVar7;
            } while (iVar4 != 0);
          }
        }
        plVar3 = plVar7;
        plVar7 = *(long **)(param_1 + 0x630);
      }
      *(undefined1 *)(param_1 + 0x62c) = 0;
      iVar4 = (int)((ulong)((long)plVar3 - (long)plVar7) >> 3);
    }
    if (iVar4 != 0) {
      (**(code **)(**(long **)(param_1 + 0x620) + 0x28))
                (*(long **)(param_1 + 0x620),*(undefined8 *)(param_1 + 0x630));
    }
    *(undefined4 *)(param_1 + 0x638) = 0;
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x638) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x63c)) && (*(long *)(param_1 + 0x630) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x630),
               ((ulong)*(uint *)(param_1 + 0x63c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)(param_1 + 0x63c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x630) = 0;
  if (*(long *)(param_1 + 0x520) != 0) {
    iVar4 = *(int *)(param_1 + 0x538);
    if (*(char *)(param_1 + 0x52c) != '\0') {
      plVar3 = *(long **)(param_1 + 0x530);
      if (iVar4 < 1) {
        plVar7 = plVar3;
      }
      else {
        plVar7 = plVar3;
        if (*plVar3 != 0) {
          *plVar3 = *plVar3;
          plVar7 = plVar3 + 1;
        }
        if (iVar4 != 1) {
          if (plVar3[1] != 0) {
            *plVar7 = plVar3[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar4 != 2) {
            iVar4 = iVar4 + -2;
            plVar3 = plVar3 + 2;
            plVar6 = plVar7;
            do {
              plVar7 = plVar6;
              if (*plVar3 != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = *plVar3;
              }
              plVar3 = plVar3 + 1;
              iVar4 = iVar4 + -1;
              plVar6 = plVar7;
            } while (iVar4 != 0);
          }
        }
        plVar3 = plVar7;
        plVar7 = *(long **)(param_1 + 0x530);
      }
      *(undefined1 *)(param_1 + 0x52c) = 0;
      iVar4 = (int)((ulong)((long)plVar3 - (long)plVar7) >> 3);
    }
    if (iVar4 != 0) {
      (**(code **)(**(long **)(param_1 + 0x520) + 0x28))
                (*(long **)(param_1 + 0x520),*(undefined8 *)(param_1 + 0x530));
    }
    *(undefined4 *)(param_1 + 0x538) = 0;
    *(undefined4 *)(param_1 + 0x528) = 0;
  }
  *(undefined4 *)(param_1 + 0x538) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x53c)) && (*(long *)(param_1 + 0x530) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x530),
               ((ulong)*(uint *)(param_1 + 0x53c) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x510) = 0;
  if ((-1 < *(int *)(param_1 + 0x514)) && (*(long *)(param_1 + 0x508) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x508),*(int *)(param_1 + 0x514) << 2);
  }
  lVar8 = *(long *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0x80000000;
  if (lVar8 == 0) {
    return;
  }
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar5;
  }
  plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0301dc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,0x80);
  return;
}


