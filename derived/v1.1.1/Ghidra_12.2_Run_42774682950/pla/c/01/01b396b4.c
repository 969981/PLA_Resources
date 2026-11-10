/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b396b4; name: FUN_01b396b4
 */


undefined8 FUN_01b396b4(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_68;
  undefined1 local_60 [16];
  
  puVar9 = PTR_DAT_04379fd0;
  puVar8 = PTR_DAT_04379fc8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_1 + 0x5f0);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar2 = (int *)(lVar11 + 0xc);
    iVar13 = *(int *)(lVar11 + 0xc);
    do {
      plVar14 = *(long **)(lVar11 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar15;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return 0;
        }
        if (plVar14 == (long *)puVar9) break;
        plVar14 = (long *)*plVar14;
      }
      iVar10 = *piVar2;
      if (iVar10 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return 0;
          }
          if (**(char **)(param_2 + 8) == '\0') {
            FUN_009c69bc(&local_68,param_1);
            pauVar1 = (undefined1 (*) [16])(local_68 + 0x1a);
            local_60._8_8_ = local_68[0x1b];
            local_60._0_8_ = *(undefined8 *)*pauVar1;
            auVar5 = *pauVar1;
            auVar16 = *pauVar1;
            if (local_68 != (long *)0x0) {
              lVar12 = local_68[0xb];
              piVar2 = (int *)(lVar12 + 0xc);
              do {
                iVar13 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              auVar16 = auVar5;
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
                auVar16._8_8_ = local_60._8_8_;
                auVar16._0_8_ = local_60._0_8_;
              }
            }
          }
          else {
            auVar16 = FUN_01b39890(param_1,param_2);
          }
          local_60 = auVar16;
          uVar15 = FUN_01832ce8(local_60);
          lVar12 = *(long *)(lVar11 + 8);
          piVar2 = (int *)(lVar12 + 0xc);
          do {
            iVar13 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))((long *)(lVar11 + -0x50));
          }
          return uVar15;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar10;
    } while (iVar10 != 0);
  }
  return 0;
}


