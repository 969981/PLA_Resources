/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b92a0; name: FUN_018b92a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_018b92a0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_28;
  
  FUN_018b39c0(local_48);
  if (local_48[0] == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
    lVar15 = _DAT_00000070;
    puVar2 = local_48[0];
  }
  else {
    FUN_018bacec(&local_38);
    lVar15 = local_38[0xe];
    puVar2 = local_48[0];
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        puVar2 = local_48[0];
      }
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar2[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar2;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  puVar8 = (undefined1 *)*param_2;
  if (puVar8 == &DAT_cbf29ce484222645) goto LAB_018b9404;
  puVar10 = *(undefined1 **)(lVar15 + 0x2f0);
  do {
    if (puVar10 != (undefined1 *)0x0) {
      uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar8);
      }
      else {
        puVar12 = puVar8;
        if (puVar10 <= puVar8) {
          uVar5 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar5 = (ulong)puVar8 / (ulong)puVar10;
          }
          puVar12 = puVar8 + -(uVar5 * (long)puVar10);
        }
      }
      plVar13 = *(long **)(*(long *)(lVar15 + 0x2e8) + (long)puVar12 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if ((undefined1 *)plVar13[1] == puVar8) {
              if ((undefined1 *)plVar13[2] == puVar8) goto LAB_018b9470;
            }
            else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar10 + -1)) != puVar12) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            puVar14 = (undefined1 *)plVar13[1];
            if (puVar14 == puVar8) {
              if ((undefined1 *)plVar13[2] == puVar8) {
LAB_018b9470:
                plVar13 = (long *)plVar13[3];
                if (plVar13 == (long *)0x0) {
                  plVar16 = (long *)0x5a8;
                }
                else {
                  lVar15 = plVar13[0xb];
                  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl("","","",0);
                  }
                  if (*(long *)(lVar15 + 0x10) == 0) {
                    uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                    *(undefined8 *)(lVar15 + 0x10) = uVar7;
                  }
                  piVar1 = (int *)(lVar15 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  lVar15 = plVar13[0xb];
                  plVar16 = plVar13 + 0xb5;
                  piVar1 = (int *)(lVar15 + 0xc);
                  do {
                    iVar6 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar6 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar6 + -1 == 0) {
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
                  }
                }
                return plVar16;
              }
            }
            else {
              if (puVar10 <= puVar14) {
                uVar11 = 0;
                if (puVar10 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar14 / (ulong)puVar10;
                }
                puVar14 = puVar14 + -(uVar11 * (long)puVar10);
              }
              if (puVar14 != puVar12) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    FUN_018bae60();
LAB_018b9404:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
    }
    puVar8 = (undefined1 *)*puVar2;
    puVar10 = *(undefined1 **)(lVar15 + 0x2f0);
  } while( true );
}


