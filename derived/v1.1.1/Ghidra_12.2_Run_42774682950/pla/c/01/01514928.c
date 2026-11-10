/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01514928; name: FUN_01514928
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01514928(long param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  undefined4 local_64;
  
  puVar9 = PTR_DAT_0437f890;
  puVar8 = PTR_DAT_0437f888;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (*(char *)(param_1 + 0xc6) != '\0') {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x98);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar2 = (int *)(lVar18 + 0xc);
    iVar16 = *(int *)(lVar18 + 0xc);
    do {
      plVar17 = *(long **)(lVar18 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_0151497c;
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar12 = *piVar2;
      if (iVar12 == iVar16) {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = iVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01514bec;
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(lVar18 + 0x79c);
          lVar15 = *(long *)(lVar18 + 8);
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar16 = *piVar2;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
          }
          goto LAB_01514988;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01514bec:
      iVar16 = iVar12;
    } while (iVar12 != 0);
  }
LAB_0151497c:
  *(undefined4 *)(param_1 + 0xb8) = _DAT_000007ec;
LAB_01514988:
  iVar16 = *(int *)(param_1 + 0xb8);
  if (iVar16 < *(int *)(param_1 + 0x78)) {
    iVar12 = -1;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x7c);
    if (iVar16 <= *(int *)(param_1 + 0x7c)) {
      iVar12 = iVar16;
    }
    iVar12 = iVar12 - *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0xbc) = iVar12;
    puVar7 = PTR_DAT_0437f890;
    puVar6 = PTR_DAT_0437f888;
    if (iVar12 != -1) {
      lVar18 = *(long *)(param_1 + 0x98);
      cVar5 = DAT_0000081c;
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
        piVar2 = (int *)(lVar18 + 0xc);
        iVar19 = *(int *)(lVar18 + 0xc);
        do {
          plVar17 = *(long **)(lVar18 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar7 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            cVar5 = DAT_0000081c;
            if (plVar17 == (long *)0x0) goto joined_r0x01514d38;
            if (plVar17 == (long *)puVar7) break;
            plVar17 = (long *)*plVar17;
          }
          iVar11 = *piVar2;
          if (iVar11 == iVar19) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = iVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar18 = *(long *)(lVar18 + 0x18);
              cVar5 = DAT_0000081c;
              if (lVar18 != 0) {
                lVar15 = *(long *)(lVar18 + 8);
                cVar5 = *(char *)(lVar18 + 0x7cc);
                piVar2 = (int *)(lVar15 + 0xc);
                do {
                  iVar19 = *piVar2;
                  cVar3 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar10) {
                    *piVar2 = iVar19 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar19 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar19 = iVar11;
          cVar5 = DAT_0000081c;
        } while (iVar11 != 0);
      }
joined_r0x01514d38:
      if (cVar5 != '\0') {
        iVar19 = iVar12 + -1;
        if (*(int *)(param_1 + 0x78) != iVar16 &&
            *(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x78)) {
          iVar19 = 0;
        }
        *(int *)(param_1 + 0xc0) = iVar19;
        if (*(int *)(param_1 + 0x7c) < iVar16) {
          if (*(char *)(param_1 + 0xc4) != '\0') {
            if (*(char *)(param_1 + 200) == '\0') {
              pcVar14 = *(code **)(param_1 + 0x350);
              if (pcVar14 == (code *)0x0) goto LAB_01514aac;
              lVar18 = param_1 + 0x370;
            }
            else {
              pcVar14 = *(code **)(param_1 + 0x1d0);
              if (pcVar14 == (code *)0x0) goto LAB_01514aac;
              lVar18 = param_1 + 0x1f0;
            }
            (*pcVar14)(lVar18);
          }
LAB_01514aac:
          *(undefined1 *)(param_1 + 0xc5) = 1;
          return;
        }
      }
    }
  }
  puVar6 = PTR_DAT_0437f890;
  iVar19 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
  iVar16 = *(int *)(param_1 + 0xc0);
  iVar11 = iVar12 - iVar16;
  if (iVar11 < 1) {
    lVar18 = *(long *)(param_1 + 0x98);
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar16 = *(int *)(lVar18 + 0xc);
      do {
        plVar17 = *(long **)(lVar18 + 0x10);
        if (((*PTR_DAT_0437f888 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437f888), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar6 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437f888);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_015149d4;
          if (plVar17 == (long *)puVar6) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar16) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01514dd4;
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            if ((((*(undefined1 **)(lVar18 + 0x7a0) == &DAT_cbf29ce484222645) &&
                 (*(undefined1 **)(lVar18 + 0x7a8) == &DAT_cbf29ce484222645)) &&
                (*(undefined1 **)(lVar18 + 0x7b0) == &DAT_cbf29ce484222645)) &&
               (*(undefined1 **)(lVar18 + 0x7b8) == &DAT_cbf29ce484222645)) {
              bVar10 = *(undefined1 **)(lVar18 + 0x7c0) != &DAT_cbf29ce484222645;
            }
            else {
              bVar10 = true;
            }
            lVar15 = *(long *)(lVar18 + 8);
            piVar2 = (int *)(lVar15 + 0xc);
            do {
              iVar16 = *piVar2;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
            }
            if (!bVar10) goto LAB_01514a24;
            goto LAB_01514e98;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01514dd4:
        iVar16 = iVar12;
      } while (iVar12 != 0);
    }
LAB_015149d4:
    if (((_DAT_000007f0 != &DAT_cbf29ce484222645) || (_DAT_000007f8 != &DAT_cbf29ce484222645)) ||
       ((_DAT_00000800 != &DAT_cbf29ce484222645 ||
        ((_DAT_00000808 != &DAT_cbf29ce484222645 || (_DAT_00000810 != &DAT_cbf29ce484222645)))))) {
LAB_01514e98:
      if ((*(char *)(param_1 + 200) == '\0') &&
         (((-1 < *(int *)(param_1 + 0xbc) && (*(int *)(param_1 + 0xbc) < iVar19)) &&
          (*(code **)(param_1 + 0x2d0) != (code *)0x0)))) {
        (**(code **)(param_1 + 0x2d0))(param_1 + 0x2f0);
      }
    }
    goto LAB_01514a24;
  }
  do {
    if (iVar12 <= iVar16) goto LAB_01514a24;
    iVar1 = iVar16 + 1;
    if (iVar16 == -1) {
      *(undefined1 *)(param_1 + 0xc4) = 1;
      if (*(char *)(param_1 + 200) == '\0') {
        pcVar14 = *(code **)(param_1 + 0xd0);
        if (pcVar14 != (code *)0x0) {
          lVar18 = param_1 + 0xf0;
          goto LAB_01514b34;
        }
        goto LAB_01514ad8;
      }
      pcVar14 = *(code **)(param_1 + 0x150);
      if (pcVar14 != (code *)0x0) {
        lVar18 = param_1 + 0x170;
LAB_01514b34:
        (*pcVar14)(lVar18);
        cVar5 = *(char *)(param_1 + 200);
        goto joined_r0x01514b3c;
      }
    }
    else {
      cVar5 = *(char *)(param_1 + 200);
joined_r0x01514b3c:
      if (cVar5 == '\0') {
LAB_01514ad8:
        if (*(code **)(param_1 + 0x250) != (code *)0x0) {
          local_64 = 1;
          (**(code **)(param_1 + 0x250))(param_1 + 0x270,&local_64);
        }
      }
    }
    iVar16 = iVar1;
  } while (iVar19 != iVar1);
  if (*(char *)(param_1 + 200) == '\0') {
    pcVar14 = *(code **)(param_1 + 0x350);
    if (pcVar14 != (code *)0x0) {
      lVar18 = param_1 + 0x370;
LAB_01514b48:
      (*pcVar14)(lVar18);
    }
  }
  else {
    pcVar14 = *(code **)(param_1 + 0x1d0);
    if (pcVar14 != (code *)0x0) {
      lVar18 = param_1 + 0x1f0;
      goto LAB_01514b48;
    }
  }
  *(undefined1 *)(param_1 + 0xc5) = 1;
LAB_01514a24:
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar11;
  return;
}


