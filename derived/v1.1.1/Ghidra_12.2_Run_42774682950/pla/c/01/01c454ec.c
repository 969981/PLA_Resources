/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c454ec; name: FUN_01c454ec
 */


undefined1  [16] FUN_01c454ec(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined1 in_q3 [16];
  undefined8 uVar19;
  long *local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  uVar19 = in_q3._8_8_;
  uVar16 = in_q3._0_8_;
  FUN_009c69bc(local_90);
  (**(code **)(*local_90[0] + 0x40))();
  local_80 = uVar16;
  uStack_78 = uVar19;
  if (local_90[0] != (long *)0x0) {
    lVar17 = local_90[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_90[0] + 0x20))();
      lVar17 = *(long *)(param_1 + 0x200);
      goto joined_r0x01c45590;
    }
  }
  lVar17 = *(long *)(param_1 + 0x200);
joined_r0x01c45590:
  if ((lVar17 != 0) && (FUN_00bd915c(local_90), plVar12 = local_90[0], local_90[0] != (long *)0x0))
  {
    FUN_01a821c8(local_90,local_90[0]);
    plVar6 = local_90[0];
    puVar11 = PTR_DAT_0437b090;
    puVar10 = PTR_DAT_0437b088;
    puVar9 = PTR_DAT_043795e0;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_90[0] != (long *)0x0) {
      if (*(int *)((long)local_90[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_90[0] + 0xc);
        iVar14 = *(int *)((long)local_90[0] + 0xc);
        do {
          plVar18 = (long *)plVar6[2];
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar16;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar9 = puVar8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_01c457ac;
            if (plVar18 == (long *)puVar11) break;
            plVar18 = (long *)*plVar18;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar14) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar17 = plVar6[3];
              plVar6 = (long *)0x0;
              plVar18 = local_90[0];
              if (lVar17 != 0) {
                plVar6 = (long *)(lVar17 + -0x50);
              }
              goto joined_r0x01c45674;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01c457ac:
      plVar6 = (long *)0x0;
      plVar18 = local_90[0];
joined_r0x01c45674:
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          iVar14 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 == 0) {
          plVar18[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_68 = *plVar18;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
        }
      }
      if (plVar6 != (long *)0x0) {
        uVar15 = FUN_0182fe2c(plVar6,&local_80);
        if ((uVar15 & 0xff) != 0) {
          local_80 = CONCAT44((int)(uVar15 >> 0x20),(int)local_80);
        }
        lVar17 = plVar6[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
        }
      }
    }
    lVar17 = plVar12[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  auVar5._8_8_ = uStack_78;
  auVar5._0_8_ = local_80;
  return auVar5;
}


