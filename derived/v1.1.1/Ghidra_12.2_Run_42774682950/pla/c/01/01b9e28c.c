/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9e28c; name: FUN_01b9e28c
 */


void FUN_01b9e28c(long *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  float fVar14;
  undefined8 *puVar15;
  undefined1 in_q3 [16];
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_58;
  
  uVar11 = in_q3._8_8_;
  puVar15 = in_q3._0_8_;
  FUN_01a71784();
  *(undefined1 *)((long)param_1 + 0xb11) = 0;
  if ((int)param_1[0xca] == 1) {
    FUN_009c69bc(&local_58,param_1);
    (**(code **)(*local_58 + 0x40))();
    local_70 = puVar15;
    uStack_68 = uVar11;
    uVar9 = FUN_0177ecc4(param_1 + 0xc9,&local_70);
    if (local_58 == (long *)0x0) {
LAB_01b9e4c0:
      cVar3 = *(char *)((long)param_1 + 0x8d2);
    }
    else {
      lVar10 = local_58[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 != 0) goto LAB_01b9e4c0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))(local_58);
      cVar3 = *(char *)((long)param_1 + 0x8d2);
    }
    if ((uVar9 & 1) == 0) {
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x140))(param_1);
        *(undefined1 *)((long)param_1 + 0x8d2) = 0;
      }
    }
    else if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x150))(param_1);
      *(undefined1 *)((long)param_1 + 0x8d2) = 1;
    }
  }
  else if ((int)param_1[0xca] == 2) {
    FUN_01b9ea08(param_1);
  }
  ppuVar1 = (undefined8 **)((long)param_1 + 0x8d4);
  if (*(char *)((long)param_1 + 0x8d2) == '\0') {
    if (1.0 <= *(float *)((long)param_1 + 0x8d4)) goto LAB_01b9e2ec;
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar14 = *(float *)((long)param_1 + 0x8d4) +
             (float)((double)*(long *)(lVar10 + 8) / 1000000000.0) * 0.8;
    *(float *)((long)param_1 + 0x8d4) = fVar14;
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0x3f800000);
    ppuVar12 = &local_70;
    if (fVar14 <= 1.0) {
      ppuVar12 = ppuVar1;
    }
    *(undefined4 *)((long)param_1 + 0x8d4) = *(undefined4 *)ppuVar12;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00ac3fa4(&local_70,param_1 + 0x49);
    FUN_0099c748(&local_78,&local_70);
    puVar15 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_70 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58 = (long *)*puVar15;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    if (local_78 == (long *)0x0) goto LAB_01b9e2ec;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00ae8374(&local_70,local_78 + 0x44);
    puVar15 = local_70;
    puVar6 = PTR_DAT_04379e80;
    puVar5 = PTR_DAT_04379e78;
    if (local_70 != (undefined8 *)0x0) {
      if (*(int *)((long)local_70 + 0xc) != 0) {
        piVar2 = (int *)((long)local_70 + 0xc);
        iVar8 = *(int *)((long)local_70 + 0xc);
        do {
          plVar13 = (long *)puVar15[2];
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar11 = FUN_0095a420();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01b9e8dc;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar2;
          if (iVar7 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = puVar15[3];
              plVar13 = (long *)0x0;
              puVar15 = local_70;
              if (lVar10 != 0) {
                plVar13 = (long *)(lVar10 + -0x50);
              }
              goto joined_r0x01b9e900;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_01b9e8dc:
      plVar13 = (long *)0x0;
      puVar15 = local_70;
joined_r0x01b9e900:
      local_70 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar15 + 1);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          puVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_58 = (long *)*puVar15;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
        }
      }
      if (plVar13 != (long *)0x0) {
        FUN_01bdbed8(*(undefined4 *)ppuVar1,plVar13);
        lVar10 = plVar13[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
    }
    if (local_78 == (long *)0x0) goto LAB_01b9e2ec;
    lVar10 = local_78[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*(float *)((long)param_1 + 0x8d4) <= 0.0) goto LAB_01b9e2ec;
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar14 = *(float *)((long)param_1 + 0x8d4) +
             (float)((double)*(long *)(lVar10 + 8) / -1000000000.0) * 0.5;
    *(float *)((long)param_1 + 0x8d4) = fVar14;
    local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff00000000);
    if (fVar14 < 0.0) {
      ppuVar12 = &local_70;
    }
    else {
      ppuVar12 = ppuVar1;
    }
    *(undefined4 *)((long)param_1 + 0x8d4) = *(undefined4 *)ppuVar12;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00ac3fa4(&local_70,param_1 + 0x49);
    FUN_0099c748(&local_78,&local_70);
    puVar15 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_70 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58 = (long *)*puVar15;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    if (local_78 == (long *)0x0) goto LAB_01b9e2ec;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00ae8374(&local_70,local_78 + 0x44);
    puVar15 = local_70;
    puVar6 = PTR_DAT_04379e80;
    puVar5 = PTR_DAT_04379e78;
    if (local_70 != (undefined8 *)0x0) {
      if (*(int *)((long)local_70 + 0xc) != 0) {
        piVar2 = (int *)((long)local_70 + 0xc);
        iVar8 = *(int *)((long)local_70 + 0xc);
        do {
          plVar13 = (long *)puVar15[2];
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar11 = FUN_0095a420();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01b9e768;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar2;
          if (iVar7 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = puVar15[3];
              plVar13 = (long *)0x0;
              puVar15 = local_70;
              if (lVar10 != 0) {
                plVar13 = (long *)(lVar10 + -0x50);
              }
              goto joined_r0x01b9e78c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_01b9e768:
      plVar13 = (long *)0x0;
      puVar15 = local_70;
joined_r0x01b9e78c:
      local_70 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar15 + 1);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          puVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_58 = (long *)*puVar15;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
        }
      }
      if (plVar13 != (long *)0x0) {
        FUN_01bdbed8(*(undefined4 *)ppuVar1,plVar13);
        lVar10 = plVar13[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
    }
    if (local_78 == (long *)0x0) goto LAB_01b9e2ec;
    lVar10 = local_78[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar8 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_78 + 0x20))();
  }
LAB_01b9e2ec:
  FUN_01ba827c(param_1[0x156]);
  iVar8 = (int)param_1[299] + -1;
  if ((0 < (int)param_1[299]) && (*(int *)(param_1 + 299) = iVar8, iVar8 == 0)) {
    FUN_01b9ee74(param_1);
  }
  return;
}


