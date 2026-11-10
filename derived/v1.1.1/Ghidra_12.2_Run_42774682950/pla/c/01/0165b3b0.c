/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165b3b0; name: FUN_0165b3b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0165b3b0(undefined1 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_0165a7a0(local_78);
  puVar4 = local_78[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] == (undefined8 *)0x0) {
LAB_0165b3e8:
    *param_1 = 0;
    return;
  }
  if (*(int *)((long)local_78[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_78[0] + 0xc);
    iVar10 = *(int *)((long)local_78[0] + 0xc);
    do {
      plVar13 = (long *)puVar4[2];
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_0165b97c;
        if (plVar13 == (long *)puVar8) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = puVar4[3];
          plVar13 = (long *)0x0;
          puVar4 = local_78[0];
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + -0x50);
          }
          goto joined_r0x0165b490;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0165b97c:
  plVar13 = (long *)0x0;
  puVar4 = local_78[0];
joined_r0x0165b490:
  local_78[0] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar4;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (plVar13 == (long *)0x0) goto LAB_0165b3e8;
  FUN_0199c048(local_78,plVar13);
  if (local_78[0] == (undefined8 *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_00ccf754(&local_80);
    puVar4 = local_78[0];
    if (local_78[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78[0] + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
  }
  if (local_80 == (long *)0x0) {
    *param_1 = 0;
    goto LAB_0165b738;
  }
  FUN_019bbcc0(local_78);
  if (local_78[0] == (undefined8 *)0x0) {
    local_88 = (long *)0x0;
LAB_0165b524:
    if (local_88 == (long *)0x0) goto LAB_0165babc;
LAB_0165b52c:
    lVar12 = *param_2;
    if (lVar12 < 0x54b378194cdeb91) {
      if (-0x1dd0adb5519bcc82 < lVar12) {
        if (lVar12 == -0x6235008465b5e4b) {
LAB_0165b578:
          lVar12 = local_88[0x20];
        }
        else {
          if (lVar12 != -0x1dd0adb5519bcc81) {
            if (lVar12 == -0xfd80454da7c130e) goto LAB_0165b8b8;
            goto LAB_0165b6e4;
          }
          lVar12 = local_88[0x22];
        }
        goto LAB_0165b57c;
      }
      if (lVar12 < -0x4d118af24327002a) {
        if (lVar12 < -0x54d617e4dd1e690f) {
          if (((lVar12 == -0x7d23213ee1b46fd4) || (lVar12 == -0x6a954a84341db53e)) ||
             (lVar12 == -0x5b1ffaa205491ea9)) goto LAB_0165b8b8;
        }
        else if (lVar12 == -0x54d617e4dd1e690f) {
LAB_0165b608:
          lVar12 = local_88[0x1e];
          goto LAB_0165b60c;
        }
      }
      else {
        if (-0x3552dfc285400b0b < lVar12) {
          if (lVar12 == -0x3552dfc285400b0a) {
LAB_0165b918:
            lVar12 = local_88[0x21];
          }
          else {
            if (lVar12 != -0x212501632f6fc7bf) goto LAB_0165b6e4;
            lVar12 = local_88[0x23];
          }
LAB_0165b57c:
          param_1[8] = 0;
          *(long *)(param_1 + 0x10) = lVar12;
          goto LAB_0165b6f0;
        }
        if ((lVar12 == -0x4d118af24327002a) || (lVar12 == -0x486bd439f77d5dd8)) goto LAB_0165b8b8;
        if (lVar12 == -0x3f64457daa7334ef) goto LAB_0165b578;
      }
LAB_0165b6e4:
      param_1[8] = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      if (lVar12 < 0x78891ea1eb1719b7) {
        if (0x3b78ea5acf12b68e < lVar12) {
          if (0x4a182f2782ffd34d < lVar12) {
            if (lVar12 == 0x57ba8020944ad222) {
              lVar12 = local_88[0x1b];
            }
            else {
              if (lVar12 == 0x4a182f2782ffd34e) goto LAB_0165b918;
              if (lVar12 != 0x63cfde902fa005e7) goto LAB_0165b6e4;
              lVar12 = local_88[0x24];
            }
            goto LAB_0165b57c;
          }
          if (lVar12 != 0x43264d2aeb95f420) {
            if (lVar12 == 0x3b78ea5acf12b68f) goto LAB_0165b8b8;
            if (lVar12 != 0x474d107bf9969edc) goto LAB_0165b6e4;
          }
          lVar12 = local_88[0x1d];
          goto LAB_0165b57c;
        }
        if ((lVar12 == 0x2e11b56c5a55e9e8) || (lVar12 == 0x54b378194cdeb91)) goto LAB_0165b8b8;
        if (lVar12 == 0x114fe10eedd9d9be) goto LAB_0165b608;
        goto LAB_0165b6e4;
      }
      if (lVar12 != 0x7e23ecd43ce201a1) {
        if ((lVar12 == 0x78891ea1eb1719b7) || (lVar12 == 0x7dacdfc0f3964597)) {
LAB_0165b8b8:
          lVar12 = local_88[0x1c];
          goto LAB_0165b57c;
        }
        goto LAB_0165b6e4;
      }
      lVar12 = local_88[0x1f];
LAB_0165b60c:
      param_1[8] = 1;
      *(long *)(param_1 + 0x10) = lVar12;
    }
LAB_0165b6f0:
    *param_1 = 1;
    lVar12 = local_88[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  else {
    FUN_0165ce38(&local_88);
    if (local_78[0] == (undefined8 *)0x0) goto LAB_0165b524;
    piVar1 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 != 0) goto LAB_0165b524;
    local_78[0][2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar12;
    local_68 = *local_78[0];
    FUN_02a44274(lVar12 + 0xd8,&local_68);
    if (local_88 != (long *)0x0) goto LAB_0165b52c;
LAB_0165babc:
    *param_1 = 0;
  }
  if (local_80 != (long *)0x0) {
    lVar12 = local_80[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
LAB_0165b738:
  lVar12 = plVar13[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    return;
  }
  return;
}


