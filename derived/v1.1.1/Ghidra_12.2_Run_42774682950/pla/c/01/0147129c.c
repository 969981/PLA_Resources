/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147129c; name: FUN_0147129c
 */


void FUN_0147129c(long param_1)

{
  long lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x1a0);
  if ((plVar5 != (long *)0x0) && ((char)plVar5[0x11] != '\0')) {
    uVar7 = 0;
    do {
      lVar1 = param_1 + uVar7 * 4;
      if (*(int *)(lVar1 + 0x1a8) == 0) {
        if (*(char *)(param_1 + 0x1c7) != '\0') goto LAB_01471314;
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar7 & 0xffffffff);
        if ((lVar6 == 0) || (iVar3 = FUN_02c5fb2c(), iVar3 == 100)) goto LAB_014712d8;
        if (*(long *)(*(long *)(lVar6 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar6);
          if (sVar2 == 0) goto LAB_014712d8;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 == 0) goto LAB_014712d8;
        }
      }
      else {
LAB_014712d8:
        lVar6 = (**(code **)(**(long **)(param_1 + 0x1a0) + 0x58))
                          (*(long **)(param_1 + 0x1a0),uVar7 & 0xffffffff);
        iVar3 = FUN_02c5fb2c();
        if (iVar3 == 100) {
          *(undefined4 *)(lVar1 + 0x1a8) = 0;
          if (*(char *)(param_1 + uVar7 + 0x1c0) != '\0') {
            *(undefined1 *)(param_1 + uVar7 + 0x1c8) = 1;
          }
        }
        else if (*(char *)(param_1 + uVar7 + 0x1c0) != '\0') {
          iVar3 = FUN_02c600e8(lVar6);
          iVar4 = FUN_02c68e44(*(undefined8 *)(lVar6 + 0x98));
          *(int *)(lVar1 + 0x1a8) = iVar3 - iVar4;
        }
        FUN_014713d0(param_1,uVar7 & 0xffffffff);
      }
LAB_01471314:
      plVar5 = *(long **)(param_1 + 0x1a0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(plVar5 + 0x11));
  }
  return;
}


