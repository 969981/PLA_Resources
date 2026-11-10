/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a9724; name: FUN_016a9724
 */


void FUN_016a9724(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  int *piVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 auStack_1d0 [144];
  char local_140;
  undefined1 *local_130;
  char local_120 [16];
  undefined1 auStack_110 [160];
  undefined1 *local_70 [2];
  
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1c8);
  uVar16 = *(ulong *)(param_1 + 0xf0);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar15 = *(long **)(lVar6 + 0x290);
  if (plVar15 != (long *)0x0) {
    lVar6 = plVar15[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar10 = (int *)(lVar6 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((int)uVar16 == 0) {
LAB_016a9a94:
    if (plVar15 != (long *)0x0) {
      lVar6 = plVar15[0xb];
      piVar10 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x016a9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return;
      }
    }
    return;
  }
  uVar17 = 0;
LAB_016a98c4:
  if (uVar17 < (ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 3)) {
    puVar18 = *(undefined1 **)(*(long *)(param_1 + 0x100) + uVar17 * 8);
  }
  else {
    puVar18 = &DAT_cbf29ce484222645;
  }
  puVar7 = *(undefined1 **)(param_1 + 0xa0);
  local_70[0] = puVar18;
  if (puVar7 != (undefined1 *)0x0) {
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)puVar18);
    }
    else {
      puVar9 = puVar18;
      if (puVar7 <= puVar18) {
        uVar3 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar18 / (ulong)puVar7;
        }
        puVar9 = puVar18 + -(uVar3 * (long)puVar7);
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x98) + (long)puVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar11[1] == puVar18) {
            if ((undefined1 *)plVar11[2] == puVar18) goto LAB_016a9988;
          }
          else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined1 *)plVar11[1];
          if (puVar12 == puVar18) {
            if ((undefined1 *)plVar11[2] == puVar18) goto LAB_016a9988;
          }
          else {
            if (puVar7 <= puVar12) {
              uVar8 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar12 / (ulong)puVar7;
              }
              puVar12 = puVar12 + -(uVar8 * (long)puVar7);
            }
            if (puVar12 != puVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_016a98b8;
LAB_016a9988:
  puVar7 = (undefined1 *)plVar11[3];
  if ((puVar7 != (undefined1 *)0xc0ea47549ab5f3d9) && (puVar7 != &DAT_cbf29ce484222645)) {
    piVar10 = (int *)plVar11[5];
    if ((4 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (((uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 != 0 &&
         (*(long *)((long)piVar10 + uVar8) == 0x68d97d277752b795)) &&
        (puVar9 = (undefined1 *)plVar15[0xe], puVar9 != (undefined1 *)0x0)))) {
      uVar8 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        puVar12 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar7);
      }
      else if (puVar7 < puVar9) {
        puVar12 = puVar7;
      }
      else {
        uVar3 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar7 / (ulong)puVar9;
        }
        puVar12 = puVar7 + -(uVar3 * (long)puVar9);
      }
      puVar13 = *(undefined8 **)(plVar15[0xd] + (long)puVar12 * 8);
      if ((puVar13 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar13, plVar11 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if ((undefined1 *)plVar11[1] == puVar7) {
              if ((undefined1 *)plVar11[2] == puVar7) goto LAB_016a98ac;
            }
            else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar9 + -1)) != puVar12) break;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            puVar14 = (undefined1 *)plVar11[1];
            if (puVar14 == puVar7) {
              if ((undefined1 *)plVar11[2] == puVar7) goto LAB_016a98ac;
            }
            else {
              if (puVar9 <= puVar14) {
                uVar8 = 0;
                if (puVar9 != (undefined1 *)0x0) {
                  uVar8 = (ulong)puVar14 / (ulong)puVar9;
                }
                puVar14 = puVar14 + -(uVar8 * (long)puVar9);
              }
              if (puVar14 != puVar12) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
LAB_016a98b8:
  uVar17 = uVar17 + 1;
  if (uVar17 == (uVar16 & 0xffffffff)) goto LAB_016a9a94;
  goto LAB_016a98c4;
LAB_016a98ac:
  if (((char)plVar11[3] == '\x01') &&
     (FUN_016a9bac(local_120,param_1,local_70), local_120[0] != '\0')) {
    local_130 = puVar18;
    memcpy(auStack_1d0,auStack_110,0x98);
    if (local_140 == '\0') {
      if (*(long *)(param_1 + 0x1d0) == *(long *)(param_1 + 0x1d8)) {
        FUN_016ae9d0(param_1 + 0x1c8,auStack_1d0);
      }
      else {
        FUN_016aea7c(param_1 + 0x1e0,*(long *)(param_1 + 0x1d0),auStack_1d0);
        *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + 0xb0;
      }
    }
    local_120[0] = '\0';
  }
  goto LAB_016a98b8;
}


