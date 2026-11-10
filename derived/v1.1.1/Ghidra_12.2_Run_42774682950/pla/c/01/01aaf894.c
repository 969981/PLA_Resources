/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aaf894; name: FUN_01aaf894
 */


undefined1  [16]
FUN_01aaf894(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  fVar27 = param_4._12_4_;
  fVar26 = param_4._8_4_;
  fVar25 = param_4._4_4_;
  fVar24 = param_4._0_4_;
  fVar23 = param_3._12_4_;
  fVar22 = param_3._8_4_;
  fVar21 = param_3._4_4_;
  fVar20 = param_3._0_4_;
  fVar19 = param_2._12_4_;
  fVar18 = param_2._8_4_;
  fVar17 = param_2._4_4_;
  fVar16 = param_2._0_4_;
  if (*(char *)(param_5 + 0x250) == '\0') {
    uVar9 = 0;
    uVar15 = 0;
  }
  else {
    lVar10 = *(long *)(param_5 + 0x1a8);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01aaf8c8:
      plVar11 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar10 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar9;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar5 = puVar6;
          __cxa_guard_release(puVar4);
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_01aaf8c8;
        while (puVar13 != (undefined8 *)puVar5) {
          puVar13 = (undefined8 *)*puVar13;
          plVar11 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_01aaf8cc;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar11 = (long *)0x0;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar11 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar11 = (long *)0x0;
        iVar12 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01aaf8cc:
    auVar14 = (**(code **)(*plVar11 + 0x40))(plVar11);
    fVar28 = (float)*(undefined8 *)(param_5 + 0x260);
    fVar29 = (float)((ulong)*(undefined8 *)(param_5 + 0x260) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_5 + 0x268);
    uVar9 = CONCAT44(fVar25 + auVar14._4_4_ * fVar28 + fVar17 * fVar29 + fVar21 * fVar30,
                     fVar24 + auVar14._0_4_ * fVar28 + fVar16 * fVar29 + fVar20 * fVar30);
    uVar15 = CONCAT44(fVar27 + auVar14._12_4_ * fVar28 + fVar19 * fVar29 + fVar23 * fVar30,
                      fVar26 + auVar14._8_4_ * fVar28 + fVar18 * fVar29 + fVar22 * fVar30);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
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
  }
  auVar14._8_8_ = uVar15;
  auVar14._0_8_ = uVar9;
  return auVar14;
}


