/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099a65c; name: FUN_0099a65c
 */


void FUN_0099a65c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  puVar8 = PTR_DAT_04379588;
  puVar7 = PTR_DAT_04379580;
  puVar6 = PTR_DAT_04379578;
  if ((*(char *)(param_1 + 0x56a) != '\0') &&
     (plVar17 = *(long **)(param_1 + 0x98), plVar17 != (long *)0x0)) {
    bVar5 = false;
    do {
      while (local_68 = (long *)plVar17[3], local_68 == (long *)0x0) {
LAB_0099a850:
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_0099a858;
      }
      lVar14 = local_68[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar6);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      lVar14 = *(long *)(lVar14 + 0xd0);
      plVar15 = *(long **)(lVar14 + 0x120);
      if (plVar15 == (long *)0x0) {
        uVar12 = FUN_00977208(0,(int)plVar17[4]);
      }
      else {
        plVar16 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar12 = FUN_00977208(plVar15,(int)plVar17[4]);
        do {
          iVar10 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if ((uVar12 & 1) != 0) {
        plVar15 = plVar17 + 4;
        lVar13 = FUN_009ab5b8(local_68 + 0x1e,&local_90);
        if (lVar13 == 0) {
LAB_0099a7b4:
          plVar16 = *(long **)(lVar14 + 0x120);
          if (plVar16 != (long *)0x0) goto LAB_0099a7bc;
LAB_0099a8fc:
          bVar9 = FUN_00977320(0,(int)*plVar15);
        }
        else {
          plVar16 = *(long **)(lVar14 + 0x120);
          if (plVar16 == (long *)0x0) {
            fVar18 = (float)FUN_00977458(0,(int)*plVar15);
          }
          else {
            plVar2 = plVar16 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            fVar18 = (float)FUN_00977458(plVar16,(int)*plVar15);
            do {
              iVar10 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          if (fVar18 == *(float *)(lVar13 + 0x478)) goto LAB_0099a7b4;
          *(float *)(lVar13 + 0x478) = fVar18;
          local_88 = "PM_HEALTH";
          local_90 = 0x5f6929b9e6ec4ddd;
          local_80 = 9;
          local_78 = (long *)0x0;
          plVar16 = (long *)FUN_00ab9c38(&local_68);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0xf8))(fVar18 * 100.0,plVar16,&local_90,0);
          }
          if (local_78 == (long *)0x0) goto LAB_0099a7b4;
          (**(code **)(*local_78 + 0x20))();
          plVar16 = *(long **)(lVar14 + 0x120);
          if (plVar16 == (long *)0x0) goto LAB_0099a8fc;
LAB_0099a7bc:
          plVar2 = plVar16 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar9 = FUN_00977320(plVar16,(int)*plVar15);
          do {
            iVar10 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        lVar14 = FUN_009b421c(local_68 + 0x1e,&local_90);
        if ((((lVar14 != 0) && (*(char *)(param_1 + 0x56b) != '\0')) && ((int)*plVar15 == 0)) &&
           ((((bVar9 ^ *(char *)(lVar14 + 0x68a) != '\0') & 1) != 0 &&
            (*(byte *)(lVar14 + 0x68a) = bVar9 & 1, (bVar9 & 1) != 0)))) {
          bVar5 = true;
        }
      }
      if (local_68 == (long *)0x0) goto LAB_0099a850;
      lVar14 = local_68[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 != 0) goto LAB_0099a850;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
LAB_0099a858:
    if (bVar5) {
      local_90 = 0x544954d85ca1907c;
      local_88 = "PLAY_BA_SYS_PINCH";
      local_80 = 0x11;
      local_78 = (long *)0x0;
      FUN_00ab9db4(&local_90,0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  return;
}


