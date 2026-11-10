/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017dad38; name: FUN_017dad38
 */


void FUN_017dad38(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 in_q3 [16];
  undefined8 uVar19;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_2c;
  long *local_28;
  
  uVar15 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  lVar9 = *(long *)(param_1 + 0xf0);
  if (lVar9 == param_1 + 0xe8) {
    uVar16 = 0;
    uVar17 = 0;
    iVar5 = 0;
    uVar15 = 0;
    uVar13 = 0;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    iVar5 = 0;
    do {
      if (*(long *)(lVar9 + 0x18) == 0) {
        local_28 = (long *)0x0;
      }
      else {
        FUN_017dca7c(&local_28,*(long *)(lVar9 + 0x18));
        if (local_28 != (long *)0x0) {
          lVar11 = local_28[0x35];
          piVar1 = (int *)(lVar11 + 0xc);
          puVar6 = PTR_DAT_043794b8;
          pbVar7 = PTR_DAT_043794b0;
          uVar18 = uVar13;
          uVar19 = uVar15;
          iVar8 = *(int *)(lVar11 + 0xc);
          do {
            while( true ) {
              plVar10 = *(long **)(lVar11 + 0x10);
              if ((*pbVar7 & 1) == 0) {
                iVar4 = __cxa_guard_acquire(PTR_DAT_043794b0);
                pbVar7 = PTR_DAT_043794b0;
                puVar6 = PTR_DAT_043794b8;
                if (iVar4 != 0) {
                  if (((*PTR_DAT_043794c0 & 1) == 0) &&
                     (iVar4 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar4 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
                      uVar13 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_043794c0);
                  }
                  puVar6 = PTR_DAT_043794b8;
                  *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                  pbVar7 = PTR_DAT_043794b0;
                  __cxa_guard_release(PTR_DAT_043794b0);
                }
              }
              for (; plVar10 != (long *)puVar6; plVar10 = (long *)*plVar10) {
              }
              iVar4 = *piVar1;
              if (iVar4 == iVar8) break;
              ClearExclusiveLocal();
              iVar8 = iVar4;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            iVar8 = iVar4;
          } while (cVar2 != '\0');
          lVar11 = *(long *)(lVar11 + 0x18);
          plVar10 = (long *)0x0;
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + -0x50);
          }
          (**(code **)(*plVar10 + 0x40))(plVar10);
          uVar13 = uVar18;
          uVar15 = uVar19;
          if (lVar11 != 0) {
            lVar11 = plVar10[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
          }
          iVar5 = iVar5 + 1;
          uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar18 >> 0x20),
                            (float)uVar16 + (float)uVar18);
          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar19 >> 0x20),
                            (float)uVar17 + (float)uVar19);
          if (local_28 != (long *)0x0) {
            lVar11 = local_28[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_28 + 0x20))();
            }
          }
        }
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != param_1 + 0xe8);
    if (iVar5 < 1) {
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      fVar12 = 1.0 / (float)iVar5;
      uVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar12,(float)uVar16 * fVar12);
      uVar15 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar12,(float)uVar17 * fVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = uVar15;
  *(undefined8 *)(param_1 + 0x80) = uVar13;
  if ((*(long *)(param_1 + 0xd0) == 0) ||
     (FUN_00cfac20(&local_28,*(long *)(param_1 + 0xd0)), local_28 == (long *)0x0)) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    auVar14 = (**(code **)(*local_28 + 0x140))(local_28);
    fVar12 = 1.0 / (float)(iVar5 + 1);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(((float)((ulong)uVar17 >> 0x20) + auVar14._12_4_) * fVar12,
                  ((float)uVar17 + auVar14._8_4_) * fVar12);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(((float)((ulong)uVar16 >> 0x20) + auVar14._4_4_) * fVar12,
                  ((float)uVar16 + auVar14._0_4_) * fVar12);
    if (local_28 != (long *)0x0) {
      lVar9 = local_28[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


