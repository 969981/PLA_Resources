/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b709c; name: FUN_018b709c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_018b709c(long param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 **ppuVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *local_50 [2];
  long *local_40;
  undefined1 *local_38;
  undefined8 local_28;
  
  local_38 = param_2;
  FUN_018b39c0(local_50);
  if (local_50[0] == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
    lVar16 = _DAT_00000070;
    puVar6 = local_50[0];
  }
  else {
    FUN_018bacec(&local_40);
    lVar16 = local_40[0xe];
    puVar6 = local_50[0];
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
        puVar6 = local_50[0];
      }
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if (param_2 == &DAT_cbf29ce484222645) goto LAB_018b7200;
  ppuVar2 = &local_38;
  puVar11 = *(undefined1 **)(lVar16 + 0x2f0);
  do {
    if (puVar11 != (undefined1 *)0x0) {
      uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      puVar9 = *ppuVar2;
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)puVar9);
      }
      else if (puVar9 < puVar11) {
        puVar13 = puVar9;
      }
      else {
        uVar5 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar9 / (ulong)puVar11;
        }
        puVar13 = puVar9 + -(uVar5 * (long)puVar11);
      }
      plVar14 = *(long **)(*(long *)(lVar16 + 0x2e8) + (long)puVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if ((undefined1 *)plVar14[1] == puVar9) {
              if ((undefined1 *)plVar14[2] == puVar9) goto LAB_018b7268;
            }
            else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            puVar15 = (undefined1 *)plVar14[1];
            if (puVar15 == puVar9) {
              if ((undefined1 *)plVar14[2] == puVar9) {
LAB_018b7268:
                plVar14 = (long *)plVar14[3];
                if (plVar14 == (long *)0x0) {
                  plVar17 = (long *)0x338;
                }
                else {
                  lVar16 = plVar14[0xb];
                  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl("","","",0);
                  }
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                    *(undefined8 *)(lVar16 + 0x10) = uVar8;
                  }
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  lVar16 = plVar14[0xb];
                  plVar17 = plVar14 + 0x67;
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar7 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))(plVar14);
                  }
                }
                return plVar17;
              }
            }
            else {
              if (puVar11 <= puVar15) {
                uVar12 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar15 / (ulong)puVar11;
                }
                puVar15 = puVar15 + -(uVar12 * (long)puVar11);
              }
              if (puVar15 != puVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    FUN_018bae60();
LAB_018b7200:
    ppuVar2 = (undefined1 **)PTR_DAT_04379c88;
    if (*(long *)(param_1 + 0x68) != 0) {
      ppuVar2 = (undefined1 **)(*(long *)(param_1 + 0x68) + 0x58);
    }
    puVar11 = *(undefined1 **)(lVar16 + 0x2f0);
  } while( true );
}


