/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002429fc; name: FUN_002429fc
 */


void FUN_002429fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  uVar10 = *(uint *)(param_1 + 0x60);
  if ((uVar10 >> 0x11 & 1) == 0) goto LAB_00242a8c;
  if (uVar10 == 0) {
LAB_00242a70:
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar10 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar13 + (ulong)(*(int *)(lVar13 + (ulong)uVar10 + 4) + uVar10));
    if ((*piVar2 != 0x15) || (lVar12 = (long)(char)piVar2[3], lVar12 < 0)) goto LAB_00242a70;
    lVar13 = lVar13 + (ulong)(*(int *)(lVar13 + (ulong)uVar10 + 4 + lVar12 * 4) + uVar10);
  }
  FUN_00245f88(*(undefined8 *)(lVar13 + 8),param_2);
  FUN_00232674(*(undefined8 *)(lVar13 + 8));
  uVar10 = *(uint *)(param_1 + 0x60);
LAB_00242a8c:
  if (uVar10 != 0) {
    lVar13 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar10 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar13 + (ulong)(*(int *)(lVar13 + (ulong)uVar10 + 4) + uVar10));
    if (((*piVar2 == 0x15) && (lVar12 = (long)*(char *)((long)piVar2 + 0xe), -1 < lVar12)) &&
       (lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + (ulong)uVar10 + 4 + lVar12 * 4) +
                                           uVar10) + 8), lVar13 != 0)) {
      FUN_00242c78(lVar13);
      FUN_00232674(lVar13);
    }
  }
  puVar7 = PTR_DAT_043729f0;
  puVar6 = PTR_DAT_043729e8;
  puVar5 = PTR_DAT_043729e0;
  puVar4 = PTR_DAT_043729d8;
  plVar11 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar1 == plVar11) {
LAB_00242c30:
    if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
      return;
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0xa8));
    return;
  }
  plVar3 = (long *)plVar11[1];
  do {
    if (plVar1 != plVar11) {
      lVar13 = *plVar3;
      *(long **)(*plVar11 + 8) = plVar3;
      *plVar3 = *plVar11;
      *(long **)(lVar13 + 8) = plVar11;
      *plVar11 = lVar13;
    }
    if ((*(byte *)(plVar11 + 10) >> 3 & 1) == 0) {
      plVar14 = plVar11 + -1;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          *(undefined8 *)puVar7 = 0;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar5 = puVar7;
        __cxa_guard_release(puVar4);
      }
      for (plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14); plVar9 != (long *)0x0;
          plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          plVar11 = (long *)plVar11[0x1c];
          if (plVar11 != (long *)0x0) {
            FUN_0023270c(plVar11,param_2);
            (**(code **)(*plVar11 + 8))(plVar11);
            goto LAB_00242b4c;
          }
          break;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,param_2);
      (**(code **)*plVar14)(plVar14);
      plVar11 = plVar14;
LAB_00242b4c:
      FUN_00232674(plVar11);
    }
    if (plVar1 == plVar3) goto LAB_00242c30;
    plVar11 = plVar3;
    plVar3 = (long *)plVar3[1];
  } while( true );
}


