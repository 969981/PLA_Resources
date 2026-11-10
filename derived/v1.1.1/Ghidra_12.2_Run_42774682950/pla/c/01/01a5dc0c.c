/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5dc0c; name: FUN_01a5dc0c
 */


void FUN_01a5dc0c(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long local_a8;
  undefined8 local_a0 [3];
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  
  puVar5 = PTR_DAT_04382478;
  plVar15 = param_3 + 0x110;
LAB_01a5dc68:
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_01a68600(&local_80,plVar15);
  puVar6 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    puVar4 = local_80;
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar9 = *(int *)((long)local_80 + 0xc);
      do {
        plVar11 = (long *)puVar6[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)PTR_DAT_04382480 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          puVar4 = local_80;
          if (plVar11 == (long *)0x0) goto joined_r0x01a5df80;
          if (plVar11 == (long *)PTR_DAT_04382480) break;
          plVar11 = (long *)*plVar11;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01a5dccc;
          lVar12 = puVar6[3];
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x44) != 1) {
              lVar13 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar9 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto joined_r0x01a5df64;
            }
            lVar13 = *(long *)(lVar12 + 0xc0);
            lVar14 = *(long *)(lVar12 + 200);
            if ((int)((ulong)(lVar14 - lVar13) >> 4) * -0x5cc0ed73 < 1) goto LAB_01a5dec4;
            uVar16 = 0;
            local_a8 = 0x344;
            goto LAB_01a5dd8c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a5dccc:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
    goto joined_r0x01a5df80;
  }
  goto LAB_01a5dc80;
LAB_01a5dd8c:
  do {
    if (*(char *)(lVar13 + local_a8 + -0x2e4) == '\0') {
      FUN_01a5d00c(local_a0,(long *)(lVar12 + -0x50),uVar16 & 0xffffffff);
      uVar7 = (**(code **)(*param_3 + 0x3d0))(param_3,local_a0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      lVar13 = *(long *)(lVar12 + 0xc0);
      lVar14 = *(long *)(lVar12 + 200);
      if ((uVar7 & 1) != 0) goto LAB_01a5ddec;
      lVar14 = (long)((int)((ulong)(lVar14 - lVar13) >> 4) * -0x5cc0ed73);
      if ((long)uVar16 < lVar14) {
        *(undefined4 *)(lVar13 + local_a8) = param_1;
        lVar13 = *(long *)(lVar12 + 0xc0);
        lVar14 = (long)((int)((ulong)(*(long *)(lVar12 + 200) - lVar13) >> 4) * -0x5cc0ed73);
      }
      if ((long)uVar16 < lVar14) {
        *(undefined4 *)(lVar13 + local_a8 + -0x2e8) = param_4;
      }
    }
    else {
LAB_01a5ddec:
      lVar14 = (long)((int)((ulong)(lVar14 - lVar13) >> 4) * -0x5cc0ed73);
      if ((long)uVar16 < lVar14) {
        *(undefined4 *)(lVar13 + local_a8) = param_2;
        lVar13 = *(long *)(lVar12 + 0xc0);
        lVar14 = (long)((int)((ulong)(*(long *)(lVar12 + 200) - lVar13) >> 4) * -0x5cc0ed73);
      }
      if ((long)uVar16 < lVar14) {
        *(undefined4 *)(lVar13 + local_a8 + -0x2e8) = param_5;
      }
    }
    lVar13 = *(long *)(lVar12 + 0xc0);
    lVar14 = *(long *)(lVar12 + 200);
    uVar16 = uVar16 + 1;
    local_a8 = local_a8 + 0x450;
  } while ((long)uVar16 < (long)((int)((ulong)(lVar14 - lVar13) >> 4) * -0x5cc0ed73));
LAB_01a5dec4:
  lVar13 = *(long *)(lVar12 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar9 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x01a5df64:
  puVar4 = local_80;
  if (iVar9 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
    puVar4 = local_80;
  }
joined_r0x01a5df80:
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
      local_80 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_a0[0] = *puVar4;
      FUN_02a44274(lVar12 + 0xd8,local_a0);
    }
  }
LAB_01a5dc80:
  plVar15 = plVar15 + 2;
  if (plVar15 == param_3 + 0x114) {
    return;
  }
  goto LAB_01a5dc68;
}


