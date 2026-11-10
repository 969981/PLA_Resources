/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4c4bc; name: FUN_01b4c4bc
 */


void FUN_01b4c4bc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  if ((*(char *)(param_1 + 0x380) != '\0') || (*(char *)(param_1 + 0x381) != '\0')) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar17 = *(long **)(lVar15 + 0x270);
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_010fae78(plVar17,&DAT_03a78ea0,param_1 + 0x218,1);
      lVar15 = plVar17[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
        lVar15 = *(long *)(param_1 + 0x220);
        pbVar4 = PTR_DAT_043794d0;
        puVar5 = (undefined8 *)PTR_DAT_043794d8;
      }
      else {
        lVar15 = *(long *)(param_1 + 0x220);
        pbVar4 = PTR_DAT_043794d0;
        puVar5 = (undefined8 *)PTR_DAT_043794d8;
      }
      PTR_DAT_043794d0 = pbVar4;
      PTR_DAT_043794d8 = (undefined *)puVar5;
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
        piVar1 = (int *)(lVar15 + 0xc);
        iVar12 = *(int *)(lVar15 + 0xc);
        do {
          plVar17 = *(long **)(lVar15 + 0x10);
          if (((*pbVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar4), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *puVar5 = uVar14;
            __cxa_guard_release(pbVar4);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01b4c590;
            if (plVar17 == puVar5) break;
            plVar17 = (long *)*plVar17;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar12) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              if (*(long *)(lVar15 + 0x18) != 0) {
                plVar16 = *(long **)(param_1 + 0x230);
                plVar17 = (long *)(*(long *)(lVar15 + 0x18) + -8);
                if (plVar16 == (long *)0x0) {
                  lVar15 = *plVar17;
                }
                else {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  (**(code **)(*plVar16 + 0x30))(plVar16,*(undefined8 *)(param_1 + 0x218));
                  lVar15 = *plVar16;
                  plVar17 = plVar16;
                }
                (**(code **)(lVar15 + 0x18))(plVar17);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01b4c590:
      *(undefined1 *)(param_1 + 0x381) = 1;
      puVar11 = PTR_DAT_0437a258;
      puVar10 = PTR_DAT_0437a250;
      puVar9 = PTR_DAT_043795e0;
      puVar8 = PTR_DAT_043795d8;
      puVar7 = PTR_DAT_043794d8;
      puVar6 = PTR_DAT_043794d0;
      lVar15 = *(long *)(param_1 + 0x3e0);
      if (lVar15 == 0) {
        return;
      }
      if (*(int *)(lVar15 + 0xc) == 0) {
        return;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      iVar12 = *(int *)(lVar15 + 0xc);
      do {
        plVar17 = *(long **)(lVar15 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar14;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar9 = puVar7;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) {
            return;
          }
          if (plVar17 == (long *)puVar11) break;
          plVar17 = (long *)*plVar17;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x18);
            if (lVar15 == 0) {
              return;
            }
            plVar16 = (long *)(lVar15 + -0x50);
            for (plVar17 = *(long **)(lVar15 + 0x270); plVar17 != (long *)0x0;
                plVar17 = (long *)*plVar17) {
              *(uint *)(plVar17 + 3) = *(uint *)(plVar17 + 3) | 0x4000;
              FUN_01839500(plVar16);
            }
            FUN_015916d0(plVar16,1,0x4000,0);
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b4c84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar16 + 0x20))(plVar16);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
        if (iVar13 == 0) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


