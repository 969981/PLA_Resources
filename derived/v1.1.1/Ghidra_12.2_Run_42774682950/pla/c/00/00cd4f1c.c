/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd4f1c; name: FUN_00cd4f1c
 */


undefined1  [16] FUN_00cd4f1c(undefined8 *param_1,long *param_2)

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
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 extraout_d0;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d0;
  puVar6 = PTR_DAT_043795c8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *param_2;
  uVar13 = 0;
  uVar15 = 0;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0xc) != 0) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        plVar11 = *(long **)(lVar10 + 0x10);
        if ((*puVar6 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(uVar13,puVar6);
          uVar13 = extraout_d0;
          if (iVar9 != 0) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
              if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)puVar5 = uVar13;
                __cxa_guard_release(puVar4);
              }
              *(undefined **)puVar8 = puVar5;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar7 = puVar8;
            uVar13 = __cxa_guard_release(puVar6);
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00cd4ff0;
          if (plVar11 == (long *)puVar7) break;
          plVar11 = (long *)*plVar11;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            uVar13 = 0;
            uVar15 = 0;
            plVar11 = (long *)(lVar10 + -0x50);
            if (lVar10 != 0) {
              auVar14 = (**(code **)(*plVar11 + 0x110))(0,plVar11);
              uVar13 = CONCAT44((float)((ulong)*param_1 >> 0x20) + auVar14._4_4_,
                                (float)*param_1 + auVar14._0_4_);
              uVar15 = CONCAT44((float)((ulong)param_1[1] >> 0x20) + auVar14._12_4_,
                                (float)param_1[1] + auVar14._8_4_);
              lVar10 = *(long *)(lVar10 + 8);
              piVar1 = (int *)(lVar10 + 0xc);
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
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))(plVar11);
              }
            }
            goto LAB_00cd4f48;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar9;
      } while (iVar9 != 0);
    }
LAB_00cd4ff0:
    uVar13 = 0;
    uVar15 = 0;
  }
LAB_00cd4f48:
  auVar14._8_8_ = uVar15;
  auVar14._0_8_ = uVar13;
  return auVar14;
}


