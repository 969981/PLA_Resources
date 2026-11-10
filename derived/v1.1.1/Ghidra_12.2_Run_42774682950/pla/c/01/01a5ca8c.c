/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5ca8c; name: FUN_01a5ca8c
 */


void FUN_01a5ca8c(undefined4 param_1,float param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_90 [3];
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_3 + 0x168) = param_1;
  *(float *)(param_3 + 0x169) = param_2;
  *(float *)((long)param_3 + 0xb44) = param_2;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_01a68600(&local_70,param_3 + 0x110);
  puVar7 = local_70;
  puVar6 = PTR_DAT_04382480;
  puVar5 = PTR_DAT_04382478;
  if (local_70 != (undefined8 *)0x0) {
    puVar4 = local_70;
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar9 = *(int *)((long)local_70 + 0xc);
      do {
        plVar16 = (long *)puVar7[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar11 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          puVar4 = local_70;
          if (plVar16 == (long *)0x0) goto joined_r0x01a5cd48;
          if (plVar16 == (long *)puVar6) break;
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
          if (cVar2 != '\0') goto LAB_01a5cb58;
          lVar15 = puVar7[3];
          if (lVar15 != 0) {
            plVar16 = (long *)(lVar15 + -0x50);
            if (*(int *)(lVar15 + 0x44) != 1) {
              lVar15 = *(long *)(lVar15 + 8);
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar9 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto joined_r0x01a5cd2c;
            }
            lVar12 = *(long *)(lVar15 + 0xc0);
            lVar13 = *(long *)(lVar15 + 200);
            if ((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73 < 1) goto LAB_01a5cc94;
            uVar14 = 0;
            lVar17 = 0x414;
            goto LAB_01a5cbe0;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a5cb58:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
    goto joined_r0x01a5cd48;
  }
  goto LAB_01a5cadc;
LAB_01a5ce3c:
  do {
    if (*(char *)(lVar12 + lVar17 + -0x3b4) == '\0') {
      FUN_01a5d00c(local_90,plVar16,uVar14 & 0xffffffff);
      uVar10 = (**(code **)(*param_3 + 0x3d0))(param_3,local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      lVar12 = *(long *)(lVar15 + 0xc0);
      lVar13 = *(long *)(lVar15 + 200);
      if ((uVar10 & 1) != 0) goto LAB_01a5ce90;
      if ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73)) {
        *(undefined4 *)(lVar12 + lVar17) = param_1;
      }
    }
    else {
LAB_01a5ce90:
      if ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73)) {
        *(float *)(lVar12 + lVar17) = *(float *)((long)param_3 + 0xb4c) * param_2;
      }
    }
    lVar12 = *(long *)(lVar15 + 0xc0);
    lVar13 = *(long *)(lVar15 + 200);
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 0x450;
  } while ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73));
LAB_01a5cef0:
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 != 0) goto LAB_01a5cf0c;
LAB_01a5cf8c:
  *(undefined8 *)(lVar15 + 0x18) = 0;
  (**(code **)(*plVar16 + 0x20))(plVar16);
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_01a5cf14;
LAB_01a5cbe0:
  do {
    if (*(char *)(lVar12 + lVar17 + -0x3b4) == '\0') {
      FUN_01a5d00c(local_90,plVar16,uVar14 & 0xffffffff);
      uVar10 = (**(code **)(*param_3 + 0x3d0))(param_3,local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      lVar12 = *(long *)(lVar15 + 0xc0);
      lVar13 = *(long *)(lVar15 + 200);
      if ((uVar10 & 1) != 0) goto LAB_01a5cc34;
      if ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73)) {
        *(undefined4 *)(lVar12 + lVar17) = param_1;
      }
    }
    else {
LAB_01a5cc34:
      if ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73)) {
        *(float *)(lVar12 + lVar17) = *(float *)((long)param_3 + 0xb4c) * param_2;
      }
    }
    lVar12 = *(long *)(lVar15 + 0xc0);
    lVar13 = *(long *)(lVar15 + 200);
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 0x450;
  } while ((long)uVar14 < (long)((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73));
LAB_01a5cc94:
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar9 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x01a5cd2c:
  puVar4 = local_70;
  if (iVar9 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    puVar4 = local_70;
  }
joined_r0x01a5cd48:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
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
      puVar4[2] = 0;
      local_70 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_90[0] = *puVar4;
      FUN_02a44274(lVar15 + 0xd8,local_90);
    }
  }
LAB_01a5cadc:
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_01a68600(&local_70,param_3 + 0x112);
  puVar7 = local_70;
  puVar6 = PTR_DAT_04382480;
  puVar5 = PTR_DAT_04382478;
  if (local_70 != (undefined8 *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar9 = *(int *)((long)local_70 + 0xc);
      do {
        plVar16 = (long *)puVar7[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar11 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01a5cf0c;
          if (plVar16 == (long *)puVar6) break;
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
          if (cVar2 != '\0') goto LAB_01a5cdb4;
          lVar15 = puVar7[3];
          if (lVar15 != 0) {
            plVar16 = (long *)(lVar15 + -0x50);
            if (*(int *)(lVar15 + 0x44) != 1) {
              lVar15 = *(long *)(lVar15 + 8);
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) goto LAB_01a5cf8c;
              break;
            }
            lVar12 = *(long *)(lVar15 + 0xc0);
            lVar13 = *(long *)(lVar15 + 200);
            if ((int)((ulong)(lVar13 - lVar12) >> 4) * -0x5cc0ed73 < 1) goto LAB_01a5cef0;
            uVar14 = 0;
            lVar17 = 0x414;
            goto LAB_01a5ce3c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a5cdb4:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a5cf0c:
    if (local_70 != (undefined8 *)0x0) {
LAB_01a5cf14:
      puVar7 = local_70;
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
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_90[0] = *puVar7;
        FUN_02a44274(lVar15 + 0xd8,local_90);
      }
    }
  }
  return;
}


