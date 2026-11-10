/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281c0dc; name: FUN_0281c0dc
 */


undefined8 FUN_0281c0dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  FUN_0282e15c(0,0,*(undefined8 *)(param_1 + 0x818));
  if (*(int *)(*(long *)(param_1 + 0x878) + 0x68) == 0) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    if (iVar4 != 0) {
      uVar9 = 0;
      iVar4 = 0;
      do {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x100) + 0x40))
                          (*(long **)(param_1 + 0x100),uVar9);
        if ((uVar7 & 1) == 0) {
          lVar1 = **(long **)(param_1 + 0x838);
          lVar2 = (*(long **)(param_1 + 0x838))[1];
          if ((lVar1 != lVar2) &&
             (*(char *)(lVar1 + 0x20) != '\0' || *(uint *)(lVar1 + 0x24) != uVar9)) {
            lVar3 = lVar1 + 0x30;
            do {
              lVar8 = lVar3;
              lVar1 = lVar2;
              if (lVar2 == lVar8) break;
              lVar3 = lVar8 + 0x30;
            } while ((*(char *)(lVar8 + 0x20) != '\0') ||
                    (lVar1 = lVar8, *(uint *)(lVar8 + 0x24) != uVar9));
          }
          if ((lVar1 != 0) && (lVar2 != lVar1)) {
            *(int *)(lVar1 + 0x24) = iVar4;
          }
          iVar4 = iVar4 + 1;
        }
        uVar9 = uVar9 + 1;
        uVar5 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
      } while (uVar9 < uVar5);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


