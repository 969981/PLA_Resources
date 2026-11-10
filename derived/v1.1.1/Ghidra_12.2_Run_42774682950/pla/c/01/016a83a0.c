/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a83a0; name: FUN_016a83a0
 */


ulong FUN_016a83a0(ulong *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar17 = *(long **)(lVar9 + 0x290);
  if (plVar17 != (long *)0x0) {
    lVar9 = plVar17[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar11 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = *piVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar13 = plVar17[0xe];
  uVar12 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar10 = *param_1;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar10;
    }
    else if (uVar10 < uVar13) {
      uVar15 = uVar10;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar10 / uVar13;
      }
      uVar15 = uVar10 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(plVar17[0xd] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar10) {
            if (plVar16[2] == uVar10) goto LAB_016a8518;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) goto LAB_016a84c8;
          plVar16 = (long *)*plVar16;
          uVar12 = 0;
        } while (plVar16 != (long *)0x0);
        goto LAB_016a851c;
      }
      do {
        uVar14 = plVar16[1];
        if (uVar14 == uVar10) {
          if (plVar16[2] == uVar10) goto LAB_016a8518;
        }
        else {
          if (uVar13 <= uVar14) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar6 * uVar13;
          }
          if (uVar14 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
LAB_016a84c8:
    uVar12 = 0;
  }
LAB_016a851c:
  piVar11 = (int *)param_1[2];
  if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x15) ||
      (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[10], uVar13 == 0)) ||
     (puVar2 = (uint *)((long)piVar11 + uVar13), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
     puVar2 == (uint *)0x0)) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar3 = *puVar2;
    uVar13 = 0;
    if ((uVar12 != 0) && (uVar3 != 0)) {
      uVar13 = 0;
      do {
        if (uVar12 == puVar2[uVar13 + 1] && (puVar2[uVar13 + 1] & 0xff) != 0) goto LAB_016a8588;
        uVar1 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar1;
      } while (uVar3 != uVar1);
      uVar13 = (ulong)uVar3;
    }
LAB_016a8588:
    uVar14 = (ulong)((uint)uVar13 != uVar3);
    uVar13 = uVar13 << 0x20;
  }
  if (plVar17 != (long *)0x0) {
    lVar9 = plVar17[0xb];
    piVar11 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return uVar14 | uVar13;
LAB_016a8518:
  uVar12 = (uint)*(byte *)(plVar16 + 3);
  goto LAB_016a851c;
}


