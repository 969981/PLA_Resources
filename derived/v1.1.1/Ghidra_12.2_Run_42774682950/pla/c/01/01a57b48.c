/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a57b48; name: FUN_01a57b48
 */


uint FUN_01a57b48(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_60 [2];
  long *local_50;
  long local_48;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar14 = *(long *)(param_1 + 0x8a8);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar8 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01a57b68;
        if (plVar16 == (long *)puVar6) break;
        plVar16 = (long *)*plVar16;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a57bac;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_00a9ecd4(local_60,plVar15);
          FUN_009983e4(&local_50,local_60);
          plVar16 = local_60[0];
          if (local_60[0] != (long *)0x0) {
            plVar11 = local_60[0] + 1;
            do {
              iVar8 = (int)*plVar11 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = iVar8;
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
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_48 = *plVar16;
              FUN_02a44274(lVar10 + 0xd8,&local_48);
            }
          }
          if (local_50 == (long *)0x0) {
LAB_01a57d44:
            uVar13 = (uint)plVar16;
            bVar4 = false;
          }
          else {
            plVar11 = (long *)local_50[0x4a];
            plVar12 = (long *)local_50[0x4b];
            if (plVar11 == plVar12) {
LAB_01a57ce4:
              if ((plVar11 == plVar12) || (*plVar11 == 0)) goto LAB_01a57cac;
              FUN_01a05488(local_60,*plVar11,&local_48);
              if (local_60[0] == (long *)0x0) goto joined_r0x01a57e28;
              lVar10 = local_60[0][0xb];
              plVar16 = (long *)(ulong)(*(int *)((long)local_60[0] + 0x164) == 2);
              piVar1 = (int *)(lVar10 + 0xc);
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
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_60[0] + 0x20))();
              }
              bVar4 = true;
              if (local_50 != (long *)0x0) goto LAB_01a57cbc;
LAB_01a57cd8:
              uVar13 = (uint)plVar16;
            }
            else {
              do {
                if (*(undefined1 **)(*plVar11 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a57ce4;
                plVar11 = plVar11 + 1;
              } while (plVar12 != plVar11);
LAB_01a57cac:
              local_60[0] = (long *)0x0;
joined_r0x01a57e28:
              bVar4 = false;
              if (local_50 == (long *)0x0) goto LAB_01a57cd8;
LAB_01a57cbc:
              uVar13 = (uint)plVar16;
              lVar10 = local_50[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 != 0) goto LAB_01a57cd8;
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_50 + 0x20))();
            }
            if (!bVar4) goto LAB_01a57d44;
            bVar4 = true;
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
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
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
          if (bVar4) goto LAB_01a57b6c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a57bac:
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01a57b68:
  uVar13 = 0;
LAB_01a57b6c:
  return uVar13 & 1;
}


