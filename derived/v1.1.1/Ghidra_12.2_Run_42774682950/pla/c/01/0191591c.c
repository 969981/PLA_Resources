/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191591c; name: FUN_0191591c
 */


undefined1  [16] FUN_0191591c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 extraout_d0;
  undefined1 auVar15 [16];
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar9 = PTR_DAT_04379e90;
  puVar8 = PTR_DAT_04379e88;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *param_1;
  uVar14 = 0;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar12 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(uVar14,puVar8), uVar14 = extraout_d0, iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar14;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        uVar14 = __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01915948;
        if (plVar13 == (long *)puVar9) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return ZEXT816(0);
          }
          local_80 = &DAT_a5a3289dce9ffc4a;
          pcStack_78 = "EffCenter01";
          plVar13 = (long *)(lVar11 + -0x50);
          local_70 = 0xb;
          local_68 = (long *)0x0;
          auVar15 = FUN_01a9a884(0,plVar13,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return auVar15;
          }
          return auVar15;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01915948:
  return ZEXT816(0);
}


