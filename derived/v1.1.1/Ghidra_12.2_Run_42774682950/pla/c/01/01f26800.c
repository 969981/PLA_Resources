/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f26800; name: FUN_01f26800
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_01f26800(long param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined *puVar24;
  long *plVar25;
  long *local_68;
  
  puVar24 = PTR_DAT_04380750;
  plVar18 = (long *)PTR_DAT_04380748;
  puVar8 = PTR_DAT_043794d8;
  puVar19 = PTR_DAT_043794d0;
  uVar20 = *(ulong *)(param_1 + 0x68);
  if ((uVar20 != 0) && (*(uint *)(uVar20 + 0xc) != 0)) {
    puVar23 = (uint *)(uVar20 + 0xc);
    uVar7 = *(uint *)(uVar20 + 0xc);
    do {
      puVar22 = (undefined8 *)(ulong)uVar7;
      plVar25 = *(long **)(uVar20 + 0x10);
      if (((*(byte *)plVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(plVar18), iVar9 != 0)) {
        if (((*puVar19 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar19), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar10;
          __cxa_guard_release(puVar19);
        }
        *(undefined **)puVar24 = puVar8;
        __cxa_guard_release(plVar18);
      }
      while( true ) {
        if (plVar25 == (long *)0x0) {
          return &DAT_cbf29ce484222645;
        }
        if (plVar25 == (long *)puVar24) break;
        plVar25 = (long *)*plVar25;
      }
      uVar2 = *puVar23;
      if (uVar2 == uVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar23,0x10);
        if (bVar5) {
          *puVar23 = uVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar21 = *(long *)(uVar20 + 0x18);
          if (lVar21 == 0) {
            return &DAT_cbf29ce484222645;
          }
          uVar11 = *(ulong *)(param_1 + 0x98);
          if (uVar11 == 0) goto LAB_01f26cb4;
          uVar20 = 0x351c91b3fd84c97;
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = 0x351c91b3fd84c97 / uVar11;
          }
          uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            uVar16 = uVar11 - 1 & 0x351c91b3fd84c97;
          }
          else {
            uVar16 = 0x351c91b3fd84c97;
            if (uVar11 < 0x351c91b3fd84c98) {
              uVar16 = 0x351c91b3fd84c97 - uVar13 * uVar11;
            }
          }
          lVar15 = *(long *)(param_1 + 0x90);
          plVar25 = *(long **)(lVar15 + uVar16 * 8);
          if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
          goto LAB_01f26cb4;
          uVar14 = uVar11 - 1;
          if (uVar12 < 2) goto LAB_01f269fc;
          goto LAB_01f26970;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = uVar2;
    } while (uVar2 != 0);
  }
  return &DAT_cbf29ce484222645;
LAB_01f26970:
  do {
    uVar17 = plVar25[1];
    if (uVar17 == 0x351c91b3fd84c97) {
      if (plVar25[2] == 0x351c91b3fd84c97) goto LAB_01f26a14;
    }
    else {
      if (uVar11 <= uVar17) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar17 / uVar11;
        }
        uVar17 = uVar17 - uVar6 * uVar11;
      }
      if (uVar17 != uVar16) break;
    }
    plVar25 = (long *)*plVar25;
  } while (plVar25 != (long *)0x0);
  goto LAB_01f26cb4;
  while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
LAB_01f269fc:
    if (plVar25[1] == 0x351c91b3fd84c97) {
      if (plVar25[2] == 0x351c91b3fd84c97) goto LAB_01f26a14;
    }
    else if ((plVar25[1] & uVar14) != uVar16) break;
  }
  goto LAB_01f26cb4;
LAB_01f26a14:
  plVar18 = (long *)(lVar21 + -0x50);
  if (plVar25[4] == plVar25[3]) {
    bVar5 = true;
    puVar19 = &DAT_cbf29ce484222645;
LAB_01f26c30:
    lVar21 = *(long *)(lVar21 + 8);
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
    if (bVar5) {
      return puVar19;
    }
    return &DAT_cbf29ce484222645;
  }
  if (uVar12 < 2) {
    uVar16 = uVar14 & 0x351c91b3fd84c97;
    plVar25 = *(long **)(lVar15 + uVar16 * 8);
  }
  else {
    uVar16 = 0x351c91b3fd84c97;
    if (uVar11 < 0x351c91b3fd84c98) {
      uVar16 = 0x351c91b3fd84c97 - uVar13 * uVar11;
    }
    plVar25 = *(long **)(lVar15 + uVar16 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    if (uVar12 < 2) {
      do {
        if (plVar25[1] == 0x351c91b3fd84c97) {
          if (plVar25[2] == 0x351c91b3fd84c97) goto LAB_01f26adc;
        }
        else if ((plVar25[1] & uVar14) != uVar16) break;
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar25[1];
        if (uVar13 == 0x351c91b3fd84c97) {
          if (plVar25[2] == 0x351c91b3fd84c97) {
LAB_01f26adc:
            puVar22 = (undefined8 *)plVar25[4];
            puVar23 = (uint *)0x101010101010101;
            puVar24 = (undefined *)0x180df237aaa7ec05;
            goto LAB_01f26af4;
          }
        }
        else {
          if (uVar11 <= uVar13) {
            uVar12 = 0;
            if (uVar11 != 0) {
              uVar12 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar12 * uVar11;
          }
          if (uVar13 != uVar16) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
  }
LAB_01f26cb4:
  plVar25 = (long *)FUN_01f28040();
LAB_01f26cb8:
  bVar5 = true;
  puVar19 = &DAT_cbf29ce484222645;
LAB_01f26bdc:
  lVar15 = plVar25[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))();
  }
  if (!bVar5) {
LAB_01f26bfc:
    uVar11 = *(ulong *)(param_1 + 0x98);
    if (uVar11 != 0) {
LAB_01f26af4:
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * (long)puVar23 >> 0x38;
      if (uVar13 < 2) {
        uVar12 = uVar11 - 1 & uVar20;
      }
      else {
        uVar12 = uVar20;
        if (uVar11 <= uVar20) {
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar20 / uVar11;
          }
          uVar12 = uVar20 - uVar12 * uVar11;
        }
      }
      plVar25 = *(long **)(*(long *)(param_1 + 0x90) + uVar12 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar25[1] == uVar20) {
              if (plVar25[2] == uVar20) goto LAB_01f26b98;
            }
            else if ((plVar25[1] & uVar11 - 1) != uVar12) goto LAB_01f26cb4;
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_01f26cb4;
          } while( true );
        }
        do {
          uVar13 = plVar25[1];
          if (uVar13 == uVar20) {
            if (plVar25[2] == uVar20) goto LAB_01f26b98;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar16 = 0;
              if (uVar11 != 0) {
                uVar16 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar16 * uVar11;
            }
            if (uVar13 != uVar12) break;
          }
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) break;
        } while( true );
      }
    }
    goto LAB_01f26cb4;
  }
  bVar5 = true;
  goto LAB_01f26c30;
LAB_01f26b98:
  if (puVar22 == (undefined8 *)plVar25[3]) {
    bVar5 = false;
    goto LAB_01f26c30;
  }
  puVar22 = puVar22 + -2;
  FUN_01f25fc8(&local_68,plVar18,*puVar22);
  if (local_68 != (long *)0x0) goto code_r0x01f26bbc;
  goto LAB_01f26bfc;
code_r0x01f26bbc:
  plVar25 = local_68;
  if ((undefined *)local_68[0x4b] == puVar24) {
    bVar5 = false;
    goto LAB_01f26bdc;
  }
  if (local_68[0x45] != uVar20) goto LAB_01f26cb8;
  puVar19 = (undefined *)local_68[0x47];
  bVar5 = true;
  goto LAB_01f26bdc;
}


