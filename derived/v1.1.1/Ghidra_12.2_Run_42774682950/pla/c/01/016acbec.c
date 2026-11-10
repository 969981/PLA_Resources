/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016acbec; name: FUN_016acbec
 */


undefined4 FUN_016acbec(long param_1,ulong *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  
  uVar11 = *(ulong *)(param_1 + 0xa0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & uVar8;
    }
    else if (uVar8 < uVar11) {
      uVar14 = uVar8;
    }
    else {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar8 / uVar11;
      }
      uVar14 = uVar8 - uVar14 * uVar11;
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x98) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == uVar8) {
            if (plVar16[2] == uVar8) goto LAB_016accf8;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar14) {
            return 0;
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar13 = plVar16[1];
        if (uVar13 == uVar8) {
          if (plVar16[2] == uVar8) goto LAB_016accf8;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar5 * uVar11;
          }
          if (uVar13 != uVar14) {
            return 0;
          }
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  return 0;
LAB_016ace7c:
  bVar1 = (char)plVar15[3] + 1;
  if (bVar1 < 3) {
    uVar18 = *(undefined4 *)(&DAT_03a7c4e4 + (long)(char)bVar1 * 4);
  }
  else {
    uVar18 = 2;
  }
  goto joined_r0x016acea0;
LAB_016accf8:
  puVar19 = (undefined1 *)plVar16[3];
  if (puVar19 == &DAT_cbf29ce484222645) {
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar16 = *(long **)(lVar9 + 0x290);
  if (plVar16 != (long *)0x0) {
    lVar9 = plVar16[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar10 = (undefined1 *)plVar16[0xe];
  if (puVar10 != (undefined1 *)0x0) {
    uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar19);
    }
    else if (puVar19 < puVar10) {
      puVar12 = puVar19;
    }
    else {
      uVar13 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar13 = (ulong)puVar19 / (ulong)puVar10;
      }
      puVar12 = puVar19 + -(uVar13 * (long)puVar10);
    }
    plVar15 = *(long **)(plVar16[0xd] + (long)puVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == puVar19) {
            if ((undefined1 *)plVar15[2] == puVar19) goto LAB_016ace7c;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar10 + -1)) != puVar12)
          goto LAB_016ace24;
          plVar15 = (long *)*plVar15;
          uVar18 = 0;
        } while (plVar15 != (long *)0x0);
        goto joined_r0x016acea0;
      }
      do {
        puVar17 = (undefined1 *)plVar15[1];
        if (puVar17 == puVar19) {
          if ((undefined1 *)plVar15[2] == puVar19) goto LAB_016ace7c;
        }
        else {
          if (puVar10 <= puVar17) {
            uVar11 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar11 = (ulong)puVar17 / (ulong)puVar10;
            }
            puVar17 = puVar17 + -(uVar11 * (long)puVar10);
          }
          if (puVar17 != puVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_016ace24:
  uVar18 = 0;
joined_r0x016acea0:
  if (plVar16 == (long *)0x0) {
    return uVar18;
  }
  lVar9 = plVar16[0xb];
  piVar2 = (int *)(lVar9 + 0xc);
  do {
    iVar6 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    return uVar18;
  }
  return uVar18;
}


