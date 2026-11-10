/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e691d4; name: FUN_02e691d4
 */


long * FUN_02e691d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  int local_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  plVar1 = (long *)(param_1 + 0x280);
  if (*(long **)(param_1 + 0x280) == (long *)0x0) {
    local_54 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    local_54 = 0;
    bVar10 = false;
    plVar7 = *(long **)(param_1 + 0x280);
    plVar9 = (long *)0x0;
    do {
      while ((plVar11 = plVar7, (char)plVar11[0xd] == '\0' ||
             (uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11), (uVar5 & 1) == 0))) {
        iVar3 = (**(code **)(*plVar11 + 0x50))(plVar11);
        local_54 = iVar3 + local_54;
        plVar7 = (long *)plVar11[2];
        plVar9 = plVar11;
        if ((long *)plVar11[2] == (long *)0x0) goto LAB_02e692e4;
      }
      plVar7 = (long *)plVar11[2];
      plVar2 = plVar1;
      if ((long *)*plVar1 != plVar11) {
        plVar2 = plVar9 + 2;
      }
      *plVar2 = (long)plVar7;
      (**(code **)*plVar11)(plVar11);
      (*DAT_0442d150)(7,plVar11);
      bVar10 = true;
    } while (plVar7 != (long *)0x0);
LAB_02e692e4:
    plVar7 = (long *)*plVar1;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)0x0;
      if (bVar10) {
        do {
          (**(code **)(*plVar7 + 0x58))(plVar7);
          if ((*(char *)((long)plVar7 + 0x6a) != '\0') &&
             ((plVar9 == (long *)0x0 ||
              (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar7 + 100))))) {
            plVar9 = plVar7;
          }
          plVar7 = (long *)plVar7[2];
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          if ((*(char *)((long)plVar7 + 0x6a) != '\0') &&
             ((plVar9 == (long *)0x0 ||
              (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar7 + 100))))) {
            plVar9 = plVar7;
          }
          plVar7 = (long *)plVar7[2];
        } while (plVar7 != (long *)0x0);
      }
      if (plVar9 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar9 + 0x48))(plVar9);
        iVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
        iVar3 = iVar3 - iVar4;
        uVar6 = *(uint *)(param_1 + 0x624);
        if (uVar6 < (uint)(iVar3 + local_54)) {
          do {
            plVar7 = (long *)*plVar1;
            if (plVar7 == (long *)0x0) {
LAB_02e6944c:
              uVar8 = local_54 + iVar3;
              break;
            }
            plVar11 = (long *)0x0;
            do {
              iVar4 = (**(code **)(*plVar7 + 0x50))(plVar7);
              if (((iVar4 != 0) && (*(char *)((long)plVar7 + 100) < *(char *)((long)plVar9 + 100)))
                 && ((plVar11 == (long *)0x0 ||
                     (*(char *)((long)plVar7 + 100) < *(char *)((long)plVar11 + 100))))) {
                plVar11 = plVar7;
              }
              plVar7 = (long *)plVar7[2];
            } while (plVar7 != (long *)0x0);
            if (plVar11 == (long *)0x0) {
              uVar6 = *(uint *)(param_1 + 0x624);
              goto LAB_02e6944c;
            }
            iVar4 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar3);
            local_54 = local_54 - iVar4;
            uVar8 = local_54 + iVar3;
            uVar6 = *(uint *)(param_1 + 0x624);
          } while (uVar6 < uVar8);
          if (uVar6 < uVar8) {
            (**(code **)(*plVar9 + 0x60))(plVar9,0);
            plVar9 = (long *)0x0;
          }
        }
      }
      plVar7 = plVar9;
    }
  }
  *(int *)(param_1 + 0x628) = local_54;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return plVar7;
}


