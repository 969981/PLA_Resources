/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026b9dec; name: FUN_026b9dec
 */


uint FUN_026b9dec(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar18 = *(long **)(lVar11 + 0x228);
  if (plVar18 != (long *)0x0) {
    lVar11 = plVar18[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_026ba1f8;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = ((long *)plVar18[0x37])[1];
    if (uVar12 != 0) {
      uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar12 - 1 & 0x83a94bc3473666b4;
      }
      else if (uVar12 < 0x83a94bc3473666b5) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0x83a94bc3473666b4 / uVar12;
        }
        uVar14 = 0x83a94bc3473666b4 - uVar14 * uVar12;
      }
      else {
        uVar14 = 0x83a94bc3473666b4;
      }
      plVar15 = *(long **)(*(long *)plVar18[0x37] + uVar14 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar15[1] == 0x83a94bc3473666b4) {
              if (plVar15[2] == -0x7c56b43cb8c9994c) goto LAB_026b9f74;
            }
            else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_026b9f24;
            plVar15 = (long *)*plVar15;
            uVar17 = 0;
          } while (plVar15 != (long *)0x0);
          goto LAB_026b9f78;
        }
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0x83a94bc3473666b4) {
            if (plVar15[2] == -0x7c56b43cb8c9994c) goto LAB_026b9f74;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
LAB_026b9f24:
    uVar17 = 0;
    goto LAB_026b9f78;
  }
  uVar17 = 0;
  bVar2 = *puVar6;
joined_r0x026ba0c0:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  plVar18 = *(long **)(lVar11 + 0x228);
  if (plVar18 == (long *)0x0) {
    return uVar17;
  }
  lVar11 = plVar18[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_026ba1f8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = ((long *)plVar18[0x37])[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0x83a5c2c347334812;
    }
    else if (uVar12 < 0x83a5c2c347334813) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0x83a5c2c347334812 / uVar12;
      }
      uVar14 = 0x83a5c2c347334812 - uVar14 * uVar12;
    }
    else {
      uVar14 = 0x83a5c2c347334812;
    }
    plVar15 = *(long **)(*(long *)plVar18[0x37] + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0x83a5c2c347334812) {
            if (plVar15[2] == -0x7c5a3d3cb8ccb7ee) goto LAB_026ba148;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_026ba0a0;
          plVar15 = (long *)*plVar15;
          uVar16 = 0;
        } while (plVar15 != (long *)0x0);
        goto LAB_026ba14c;
      }
      do {
        uVar13 = plVar15[1];
        if (uVar13 == 0x83a5c2c347334812) {
          if (plVar15[2] == -0x7c5a3d3cb8ccb7ee) goto LAB_026ba148;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar5 = 0;
            if (uVar12 != 0) {
              uVar5 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar5 * uVar12;
          }
          if (uVar13 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_026ba0a0:
  uVar16 = 0;
LAB_026ba14c:
  lVar11 = plVar18[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  return uVar16 + uVar17;
LAB_026b9f74:
  uVar17 = (uint)*(byte *)(plVar15 + 3);
LAB_026b9f78:
  lVar11 = plVar18[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    bVar2 = *puVar6;
  }
  else {
    bVar2 = *puVar6;
  }
  goto joined_r0x026ba0c0;
LAB_026ba148:
  uVar16 = (uint)*(byte *)(plVar15 + 3);
  goto LAB_026ba14c;
}


