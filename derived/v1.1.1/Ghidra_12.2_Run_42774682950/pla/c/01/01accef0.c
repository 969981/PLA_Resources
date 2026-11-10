/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01accef0; name: FUN_01accef0
 */


undefined8 FUN_01accef0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x810) == 0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_009b3e90(&local_38);
    if (((local_38 != (long *)0x0) && (local_38[0x68] != 0)) &&
       (uVar8 = FUN_02a43a8c(), (uVar8 & 1) == 0)) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_009ab200(&local_48,local_38 + 0x68);
      puVar6 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        if (*(int *)((long)local_48 + 0xc) != 0) {
          piVar1 = (int *)((long)local_48 + 0xc);
          iVar7 = *(int *)((long)local_48 + 0xc);
          while (uVar8 = FUN_009b4090(puVar6[2]), (uVar8 & 1) != 0) {
            iVar2 = *piVar1;
            if (iVar2 == iVar7) {
              cVar11 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') {
                lVar9 = puVar6[3];
                plVar5 = (long *)0x0;
                puVar6 = local_48;
                if (lVar9 != 0) {
                  plVar5 = (long *)(lVar9 + -0x50);
                }
                goto joined_r0x01accff4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = iVar2;
            if (iVar2 == 0) break;
          }
        }
        plVar5 = (long *)0x0;
        puVar6 = local_48;
joined_r0x01accff4:
        local_48 = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          do {
            iVar7 = *piVar1;
            cVar11 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar7 + -1 == 0) {
            puVar6[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_28 = *puVar6;
            FUN_02a44274(lVar9 + 0xd8,&local_28);
          }
        }
        if (plVar5 != (long *)0x0) {
          uVar8 = FUN_018d45cc(plVar5);
          if ((uVar8 & 1) == 0) {
            cVar11 = '\0';
          }
          else {
            cVar11 = *(char *)((long)plVar5 + 0x7a9);
          }
          lVar9 = plVar5[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          if (cVar11 != '\0') {
            uVar10 = 1;
            goto joined_r0x01acd08c;
          }
        }
      }
    }
  }
  uVar10 = 0;
joined_r0x01acd08c:
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar11 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return uVar10;
}


