/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc4e90; name: FUN_02cc4e90
 */


void FUN_02cc4e90(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x108));
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar18 = *(undefined8 **)(param_1 + 0x98);
    pcVar12 = (code *)*puVar18;
    while( true ) {
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(puVar18 + 4);
      }
      if (((puVar18[0x10] == 0) || (plVar8 = (long *)FUN_013b36b8(), plVar8 == (long *)0x0)) ||
         (uVar9 = (**(code **)(*plVar8 + 0x48))(), (uVar9 & 1) == 0)) {
        lVar13 = *(long *)(param_1 + 0x98);
        lVar14 = *(long *)(param_1 + 0xa0);
        if (puVar18 + 0x12 != (undefined8 *)(lVar13 + lVar14 * 0x90)) {
          pcVar12 = (code *)puVar18[1];
          puVar17 = puVar18;
          while( true ) {
            if (pcVar12 != (code *)0x0) {
              puVar17[2] = 0;
              puVar17[3] = 0;
              *puVar17 = 0;
              puVar17[1] = 0;
              (*pcVar12)(puVar17 + 4);
            }
            if ((code *)puVar17[0x15] != (code *)0x0) {
              (*(code *)puVar17[0x15])(puVar17 + 0x16,puVar17 + 4);
              pcVar12 = (code *)puVar17[0x13];
              *puVar17 = puVar17[0x12];
              puVar17[1] = pcVar12;
              puVar17[2] = puVar17[0x14];
              puVar17[3] = puVar17[0x15];
              if (pcVar12 != (code *)0x0) {
                puVar17[0x14] = 0;
                puVar17[0x15] = 0;
                puVar17[0x12] = 0;
                puVar17[0x13] = 0;
                (*pcVar12)(puVar17 + 0x16);
              }
            }
            FUN_013b41cc(puVar17 + 0x10,puVar17 + 0x22);
            if ((undefined8 *)(lVar13 + lVar14 * 0x90 + -0x90) == puVar17 + 0x12) break;
            pcVar12 = (code *)puVar17[0x13];
            puVar17 = puVar17 + 0x12;
          }
          lVar13 = *(long *)(param_1 + 0x98);
          lVar14 = *(long *)(param_1 + 0xa0);
        }
        lVar13 = lVar13 + lVar14 * 0x90;
        puVar17 = *(undefined8 **)(lVar13 + -0x10);
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_68 = *puVar17;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        pcVar12 = *(code **)(lVar13 + -0x88);
        if (pcVar12 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          *(undefined8 *)(lVar13 + -0x90) = 0;
          *(undefined8 *)(lVar13 + -0x88) = 0;
          (*pcVar12)(lVar13 + -0x70);
        }
        lVar13 = *(long *)(param_1 + 0xa0) + -1;
        *(long *)(param_1 + 0xa0) = lVar13;
      }
      else {
        lVar13 = *(long *)(param_1 + 0xa0);
        puVar18 = puVar18 + 0x12;
      }
      if ((undefined8 *)(*(long *)(param_1 + 0x98) + lVar13 * 0x90) == puVar18) break;
      pcVar12 = (code *)*puVar18;
    }
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    plVar8 = *(long **)(param_1 + 0xf0);
    do {
      if (((*(byte *)(*plVar8 + 0x302) & 1) == 0) && ((*(byte *)(*plVar8 + 0x301) & 1) == 0)) {
        lVar13 = *(long *)(param_1 + 0xf8);
        plVar8 = plVar8 + 1;
      }
      else {
        FUN_02a49534(*plVar8);
        lVar13 = *(long *)(param_1 + 0xf0);
        lVar14 = *(long *)(param_1 + 0xf8);
        plVar11 = (long *)(lVar13 + lVar14 * 8);
        plVar15 = plVar8;
        plVar16 = plVar8 + 1;
        if (plVar8 + 1 != plVar11) {
          do {
            plVar10 = (long *)*plVar15;
            *plVar15 = 0;
            if (plVar10 != (long *)0x0) {
              lVar13 = plVar10[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar10 + 0x20))();
              }
            }
            lVar13 = *plVar16;
            plVar10 = plVar16 + 1;
            *plVar16 = 0;
            *plVar15 = lVar13;
            plVar15 = plVar15 + 1;
            plVar16 = plVar10;
          } while (plVar10 != plVar11);
          lVar13 = *(long *)(param_1 + 0xf0);
          lVar14 = *(long *)(param_1 + 0xf8);
        }
        plVar11 = *(long **)(lVar13 + lVar14 * 8 + -8);
        if (plVar11 != (long *)0x0) {
          lVar13 = plVar11[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))();
          }
        }
        lVar13 = *(long *)(param_1 + 0xf8) + -1;
        *(long *)(param_1 + 0xf8) = lVar13;
      }
    } while ((long *)(*(long *)(param_1 + 0xf0) + lVar13 * 8) != plVar8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x108));
  return;
}


