/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5785c; name: FUN_01a5785c
 */


uint FUN_01a5785c(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *local_60 [2];
  long *local_50;
  long local_48;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar15 = *(long *)(param_1 + 0x8a8);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar8 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01a5787c;
        if (plVar17 == (long *)puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a578c0;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + -0x50);
          FUN_00a9ecd4(local_60,plVar16);
          FUN_009983e4(&local_50,local_60);
          plVar17 = local_60[0];
          if (local_60[0] != (long *)0x0) {
            plVar12 = local_60[0] + 1;
            do {
              iVar8 = (int)*plVar12 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *(int *)plVar12 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 == 0) {
              local_60[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = *plVar17;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
          if (local_50 == (long *)0x0) {
LAB_01a57a7c:
            uVar14 = (uint)plVar17;
            bVar4 = false;
          }
          else {
            plVar12 = (long *)local_50[0x4a];
            plVar13 = (long *)local_50[0x4b];
            if (plVar12 == plVar13) {
LAB_01a57a18:
              if ((plVar12 == plVar13) || (*plVar12 == 0)) goto LAB_01a579c0;
              FUN_01a05488(local_60,*plVar12,&local_48);
              if (local_60[0] == (long *)0x0) goto joined_r0x01a57b40;
              uVar9 = FUN_028f14d0();
              plVar17 = (long *)(uVar9 & 0xffffffff);
              if (local_60[0] != (long *)0x0) {
                lVar11 = local_60[0][0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 == 1) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_60[0] + 0x20))();
                }
              }
              bVar4 = true;
              if (local_50 != (long *)0x0) goto LAB_01a579d0;
LAB_01a579ec:
              uVar14 = (uint)plVar17;
            }
            else {
              do {
                if (*(undefined1 **)(*plVar12 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a57a18;
                plVar12 = plVar12 + 1;
              } while (plVar13 != plVar12);
LAB_01a579c0:
              local_60[0] = (long *)0x0;
joined_r0x01a57b40:
              bVar4 = false;
              if (local_50 == (long *)0x0) goto LAB_01a579ec;
LAB_01a579d0:
              uVar14 = (uint)plVar17;
              lVar11 = local_50[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 != 0) goto LAB_01a579ec;
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_50 + 0x20))();
            }
            if (!bVar4) goto LAB_01a57a7c;
            bVar4 = true;
          }
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          if (bVar4) goto LAB_01a57880;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a578c0:
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01a5787c:
  uVar14 = 0;
LAB_01a57880:
  return uVar14 & 1;
}


