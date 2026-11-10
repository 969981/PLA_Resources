/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5afec; name: FUN_01a5afec
 */


uint FUN_01a5afec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  local_70 = (undefined8 *)0x0;
  pcStack_68 = (char *)0x0;
  FUN_00af7e30(&local_70,param_1 + 0x8a8);
  puVar15 = local_70;
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  if (local_70 != (undefined8 *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar9 = *(int *)((long)local_70 + 0xc);
      do {
        plVar16 = (long *)puVar15[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01a5b32c;
          if (plVar16 == (long *)puVar7) break;
          plVar16 = (long *)*plVar16;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar16 = (long *)0x0;
            puVar5 = local_70;
            if (puVar15[3] != 0) {
              plVar16 = (long *)(puVar15[3] + -0x50);
            }
            goto joined_r0x01a5b0b4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a5b32c:
    plVar16 = (long *)0x0;
    puVar5 = local_70;
joined_r0x01a5b0b4:
    local_70 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = (long *)*puVar5;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (plVar16 != (long *)0x0) {
      FUN_00a9ecd4(&local_70,plVar16);
      FUN_009983e4(&local_50,&local_70);
      puVar5 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = (long *)*puVar5;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      if (local_50 == (long *)0x0) {
        bVar4 = 0;
      }
      else {
        plVar13 = (long *)local_50[0x4a];
        plVar14 = (long *)local_50[0x4b];
        if (plVar13 == plVar14) {
LAB_01a5b230:
          if ((plVar13 == plVar14) || (*plVar13 == 0)) goto LAB_01a5b1d0;
          FUN_009cda48(&local_48,*plVar13,&local_70);
          if (local_48 == (long *)0x0) {
            bVar4 = 0;
          }
          else {
            local_70 = (undefined8 *)0xbe9738c4a8c8e3ba;
            pcStack_68 = "blink_disable";
            local_60 = 0xd;
            local_58 = (long *)0x0;
            uVar10 = FUN_017f22f0(local_48,&local_70);
            puVar15 = (undefined8 *)(uVar10 & 0xffffffff);
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            if (local_48 != (long *)0x0) {
              lVar12 = local_48[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 == 1) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_48 + 0x20))();
              }
            }
            bVar4 = 1;
          }
        }
        else {
          do {
            if (*(undefined1 **)(*plVar13 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a5b230;
            plVar13 = plVar13 + 1;
          } while (plVar14 != plVar13);
LAB_01a5b1d0:
          bVar4 = 0;
          local_48 = (long *)0x0;
        }
        if (local_50 != (long *)0x0) {
          lVar12 = local_50[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_50 + 0x20))();
          }
        }
      }
      lVar12 = plVar16[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      goto LAB_01a5b020;
    }
  }
  bVar4 = 0;
LAB_01a5b020:
  return (uint)puVar15 & (uint)bVar4;
}


