/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c635c; name: FUN_018c635c
 */


undefined1 *
FUN_018c635c(long param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  int *piVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  int iVar20;
  
  puVar7 = PTR_DAT_04381ea0;
  puVar6 = PTR_DAT_04381e98;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  puVar9 = &DAT_cbf29ce484222645;
  if (param_2 == &DAT_cbf29ce484222645) {
    return puVar9;
  }
  puVar12 = *(undefined1 **)(param_1 + 0xa0);
  if (puVar12 == (undefined1 *)0x0) {
    return puVar9;
  }
  uVar16 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    puVar17 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)param_2);
  }
  else {
    puVar17 = param_2;
    if (puVar12 <= param_2) {
      uVar3 = 0;
      if (puVar12 != (undefined1 *)0x0) {
        uVar3 = (ulong)param_2 / (ulong)puVar12;
      }
      puVar17 = param_2 + -(uVar3 * (long)puVar12);
    }
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x98) + (long)puVar17 * 8);
  if (plVar18 == (long *)0x0) {
    return puVar9;
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return puVar9;
  }
  if (uVar16 < 2) {
    do {
      if ((undefined1 *)plVar18[1] == param_2) {
        if ((undefined1 *)plVar18[2] == param_2) goto LAB_018c648c;
      }
      else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar12 + -1)) != puVar17) {
        return puVar9;
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return puVar9;
      }
    } while( true );
  }
  do {
    puVar19 = (undefined1 *)plVar18[1];
    if (puVar19 == param_2) {
      if ((undefined1 *)plVar18[2] == param_2) break;
    }
    else {
      if (puVar12 <= puVar19) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = (ulong)puVar19 / (ulong)puVar12;
        }
        puVar19 = puVar19 + -(uVar16 * (long)puVar12);
      }
      if (puVar19 != puVar17) {
        return puVar9;
      }
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
      return puVar9;
    }
  } while( true );
LAB_018c648c:
  piVar13 = (int *)plVar18[3];
  puVar14 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13)));
  puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14 + 4);
  piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
     (uVar16 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar16 == 0)) {
    uVar15 = 0;
    lVar11 = *(long *)(param_1 + 0x100);
  }
  else {
    uVar15 = *(undefined8 *)((long)piVar13 + uVar16);
    lVar11 = *(long *)(param_1 + 0x100);
  }
  if (lVar11 != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    if (*(int *)(lVar11 + 0xc) != 0) {
      piVar13 = (int *)(lVar11 + 0xc);
      iVar20 = *(int *)(lVar11 + 0xc);
      do {
        plVar18 = *(long **)(lVar11 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_018c64d8;
          if (plVar18 == (long *)puVar7) break;
          plVar18 = (long *)*plVar18;
        }
        iVar8 = *piVar13;
        if (iVar8 == iVar20) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar20 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 == 0) {
              return &DAT_cbf29ce484222645;
            }
            plVar18 = (long *)(lVar11 + -0x50);
            puVar9 = (undefined1 *)FUN_01e3c898(plVar18,uVar15,param_3,param_4,param_5);
            lVar11 = *(long *)(lVar11 + 8);
            piVar13 = (int *)(lVar11 + 0xc);
            do {
              iVar20 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar20 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar20 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar20 = iVar8;
      } while (iVar8 != 0);
    }
  }
LAB_018c64d8:
  return puVar9;
}


