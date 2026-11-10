/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5d0f8; name: FUN_01a5d0f8
 */


void FUN_01a5d0f8(undefined4 param_1,float param_2,float param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  float fVar19;
  undefined8 local_b0 [3];
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long local_78;
  
  puVar5 = PTR_DAT_043794a0;
  *(undefined4 *)(param_4 + 0x168) = param_1;
  *(float *)(param_4 + 0x169) = param_2;
  puVar7 = PTR_DAT_04382480;
  puVar6 = PTR_DAT_04382478;
  plVar18 = param_4 + 0x110;
  *(float *)((long)param_4 + 0xb44) = param_3;
LAB_01a5d170:
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_01a68600(&local_90,plVar18);
  puVar8 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    puVar4 = local_90;
    if (*(int *)((long)local_90 + 0xc) != 0) {
      piVar1 = (int *)((long)local_90 + 0xc);
      iVar11 = *(int *)((long)local_90 + 0xc);
      do {
        plVar13 = (long *)puVar8[2];
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar12 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          puVar4 = local_90;
          if (plVar13 == (long *)0x0) goto joined_r0x01a5d44c;
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01a5d1d8;
          lVar14 = puVar8[3];
          if (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x44) != 1) {
              lVar15 = *(long *)(lVar14 + 8);
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar11 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto joined_r0x01a5d430;
            }
            lVar15 = *(long *)(lVar14 + 0xc0);
            if ((int)((ulong)(*(long *)(lVar14 + 200) - lVar15) >> 4) * -0x5cc0ed73 < 1)
            goto LAB_01a5d35c;
            uVar17 = 0;
            local_78 = 0x414;
            goto LAB_01a5d290;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a5d1d8:
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
    goto joined_r0x01a5d44c;
  }
  goto LAB_01a5d188;
LAB_01a5d290:
  do {
    if (*(char *)(lVar15 + local_78 + -0x3b4) == '\0') {
      FUN_01a5d00c(local_b0,(long *)(lVar14 + -0x50),uVar17 & 0xffffffff);
      uVar9 = (**(code **)(*param_4 + 0x3d0))(param_4,local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      lVar15 = *(long *)(lVar14 + 0xc0);
      lVar16 = (long)((int)((ulong)(*(long *)(lVar14 + 200) - lVar15) >> 4) * -0x5cc0ed73);
      if ((uVar9 & 1) == 0) {
        if ((long)uVar17 < lVar16) {
          *(undefined4 *)(lVar15 + local_78) = param_1;
        }
      }
      else if ((long)uVar17 < lVar16) {
        fVar19 = *(float *)((long)param_4 + 0xb4c) * param_2;
        goto LAB_01a5d350;
      }
    }
    else {
      fVar19 = *(float *)((long)param_4 + 0xb4c) * param_3;
LAB_01a5d350:
      *(float *)(lVar15 + local_78) = fVar19;
    }
    uVar17 = uVar17 + 1;
    lVar15 = *(long *)(lVar14 + 0xc0);
    local_78 = local_78 + 0x450;
  } while ((long)uVar17 <
           (long)((int)((ulong)(*(long *)(lVar14 + 200) - lVar15) >> 4) * -0x5cc0ed73));
LAB_01a5d35c:
  lVar15 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar11 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x01a5d430:
  puVar4 = local_90;
  if (iVar11 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))();
    puVar4 = local_90;
  }
joined_r0x01a5d44c:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar4[2] = 0;
      local_90 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar5;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_b0[0] = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,local_b0);
    }
  }
LAB_01a5d188:
  plVar18 = plVar18 + 2;
  if (plVar18 == param_4 + 0x114) {
    return;
  }
  goto LAB_01a5d170;
}


