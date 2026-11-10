/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad2ed8; name: FUN_00ad2ed8
 */


void FUN_00ad2ed8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_78;
  undefined1 auStack_70 [8];
  long *local_68;
  undefined1 **local_60;
  undefined1 **ppuStack_58;
  undefined1 *local_48;
  
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  lVar11 = *(long *)(param_1 + 0x4c0);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_00ad2efc;
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00ad2f44;
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar13 = (long *)(lVar11 + -0x50);
          FUN_02c90d40(plVar13);
          FUN_009c69bc(&local_78,param_1);
          local_48 = auStack_70;
          local_60 = &local_48;
          local_68 = local_78 + 0x1e;
          ppuStack_58 = local_60;
          FUN_00ad55f4(local_68,&ppuStack_58,&local_68);
          if (local_78 != (long *)0x0) {
            lVar10 = local_78[0xb];
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
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          plVar12 = *(long **)(param_1 + 0x4c0);
          *(undefined8 *)(param_1 + 0x4c0) = 0;
          if (plVar12 != (long *)0x0) {
            plVar2 = plVar12 + 1;
            do {
              iVar8 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 == 0) {
              plVar12[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_68 = (long *)*plVar12;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
          }
          *(undefined8 *)(param_1 + 0x4c8) = 0;
          *(undefined1 *)(param_1 + 0x31e) = 1;
          lVar11 = *(long *)(lVar11 + 8);
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
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
          if (*(char *)(param_1 + 0x430) == '\0') {
            return;
          }
          goto LAB_00ad30cc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00ad2f44:
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ad2efc:
  if (*(char *)(param_1 + 0x430) != '\0') {
LAB_00ad30cc:
    *(undefined1 *)(param_1 + 0x430) = 0;
  }
  return;
}


