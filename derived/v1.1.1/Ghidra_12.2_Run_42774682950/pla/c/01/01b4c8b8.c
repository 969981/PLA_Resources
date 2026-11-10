/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4c8b8; name: FUN_01b4c8b8
 */


void FUN_01b4c8b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_68;
  
  if ((*(char *)(param_1 + 0x380) == '\0') && (*(char *)(param_1 + 0x381) != '\0')) {
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_68,8);
    *(undefined8 *)(param_1 + 0x3b0) = local_68;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar13;
    plVar14 = *(long **)(lVar13 + 0x270);
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((ulong)plVar14[0xaf0] < 0x96) {
        uVar11 = *(undefined8 *)(param_1 + 0x3b0);
        puVar12 = (undefined8 *)FUN_010fb1b4(plVar14 + 0xae5,param_1 + 0x218);
        *puVar12 = uVar11;
      }
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    FUN_01b4be70(param_1);
    puVar8 = PTR_DAT_0437a258;
    puVar7 = PTR_DAT_0437a250;
    puVar6 = PTR_DAT_043795e0;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    lVar13 = *(long *)(param_1 + 0x3e0);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar9 = *(int *)(lVar13 + 0xc);
      do {
        plVar14 = *(long **)(lVar13 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar11;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01b4c9b8;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
              for (plVar14 = *(long **)(lVar13 + 0x270); plVar14 != (long *)0x0;
                  plVar14 = (long *)*plVar14) {
                *(uint *)(plVar14 + 3) = *(uint *)(plVar14 + 3) & 0xffffbfff;
                FUN_01839500(plVar15);
              }
              FUN_015916d0(plVar15,0,0x4000,0);
              lVar13 = *(long *)(lVar13 + 8);
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01b4c9b8:
    *(undefined1 *)(param_1 + 0x381) = 0;
  }
  return;
}


