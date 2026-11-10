/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed5878; name: FUN_01ed5878
 */


void FUN_01ed5878(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *local_78 [2];
  undefined1 auStack_68 [8];
  long *local_58;
  
  FUN_0165a7a0(local_78);
  plVar5 = local_78[0];
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78[0] != (long *)0x0) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar10 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar17 = (long *)plVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar13;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_01ed5d38;
          if (plVar17 == (long *)puVar9) break;
          plVar17 = (long *)*plVar17;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar17 = local_78[0];
            if (lVar15 != 0) {
              plVar5 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x01ed5b60;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01ed5d38:
    plVar5 = (long *)0x0;
    plVar17 = local_78[0];
joined_r0x01ed5b60:
    local_78[0] = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar2 = plVar17 + 1;
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
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_58 = (long *)*plVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_0199c138(local_78,plVar5);
      if (local_78[0] == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        FUN_00956dac(&local_58,local_78[0] + 0x35);
        lVar15 = FUN_009bd48c(local_58 + 0x1e,auStack_68);
        if (local_58 == (long *)0x0) {
LAB_01ed5c18:
          if (lVar15 == 0) goto LAB_01ed5c30;
LAB_01ed5c1c:
          iVar10 = FUN_025e91d0(lVar15);
          if (iVar10 != 3) {
            lVar15 = 0;
            goto LAB_01ed5c30;
          }
          local_58 = (long *)0x57ba8020944ad222;
          FUN_0165b1f8(&local_58,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,
                       &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
          iVar10 = 1;
        }
        else {
          lVar16 = local_58[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 != 0) goto LAB_01ed5c18;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
          if (lVar15 != 0) goto LAB_01ed5c1c;
LAB_01ed5c30:
          iVar10 = (int)lVar15;
        }
        if (local_78[0] != (long *)0x0) {
          lVar15 = local_78[0][0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_78[0] + 0x20))();
          }
        }
      }
      lVar15 = plVar5[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (iVar10 != 0) {
        return;
      }
    }
  }
  lVar15 = *(long *)(param_1 + 0x78);
  iVar10 = *(int *)(lVar15 + 0x54);
  if (iVar10 == 1) {
    if (*(char *)(lVar15 + 0x210) != '\0') {
      if (*(int *)(lVar15 + 0x260) != 2) {
        local_78[0] = (long *)0xb7942bc60882a228;
LAB_01ed5964:
        puVar14 = *(undefined1 **)(lVar15 + 0x1f0);
        goto LAB_01ed5914;
      }
      local_78[0] = (long *)0x2e11b56c5a55e9e8;
LAB_01ed5a1c:
      puVar14 = &DAT_cbf29ce484222645;
      goto LAB_01ed5914;
    }
    if (*(char *)(lVar15 + 0x211) == '\0') {
      uVar12 = FUN_01ed6038(param_1);
      if ((uVar12 & 1) != 0) {
        return;
      }
      local_78[0] = (long *)0xb2ee750dbcd8ffd6;
LAB_01ed58e8:
      puVar14 = *(undefined1 **)(*(long *)(param_1 + 0x78) + 600);
      goto LAB_01ed5914;
    }
    uVar12 = FUN_01ed5fac(param_1);
    if ((uVar12 & 1) != 0) {
      return;
    }
    local_78[0] = (long *)0x78891ea1eb1719b7;
  }
  else if (iVar10 == 3) {
    if (*(char *)(lVar15 + 0x211) == '\0') {
      uVar12 = FUN_01ed6038(param_1);
    }
    else {
      uVar12 = FUN_01ed5fac(param_1);
    }
    if ((uVar12 & 1) != 0) {
      return;
    }
    local_78[0] = (long *)0xf027fbab2583ecf2;
  }
  else {
    if (iVar10 != 2) {
      if (iVar10 != 4) {
        return;
      }
      puVar14 = &DAT_cbf29ce484222645;
      local_78[0] = (long *)0x57ba8020944ad222;
      goto LAB_01ed5914;
    }
    if (*(char *)(lVar15 + 0x210) != '\0') {
      if (*(int *)(lVar15 + 0x260) != 2) {
        local_78[0] = (long *)0x7dacdfc0f3964597;
        goto LAB_01ed5964;
      }
      local_78[0] = (long *)0xa4e0055dfab6e157;
      goto LAB_01ed5a1c;
    }
    if (*(char *)(lVar15 + 0x211) == '\0') {
      uVar12 = FUN_01ed6038(param_1);
      if ((uVar12 & 1) != 0) {
        return;
      }
      local_78[0] = (long *)0x54b378194cdeb91;
      goto LAB_01ed58e8;
    }
    uVar12 = FUN_01ed5fac(param_1);
    if ((uVar12 & 1) != 0) {
      return;
    }
    local_78[0] = (long *)0x956ab57bcbe24ac2;
  }
  puVar14 = *(undefined1 **)(*(long *)(param_1 + 0x78) + 0x250);
LAB_01ed5914:
  FUN_0165b1f8(local_78,puVar14,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,
               &DAT_cbf29ce484222645);
  return;
}


