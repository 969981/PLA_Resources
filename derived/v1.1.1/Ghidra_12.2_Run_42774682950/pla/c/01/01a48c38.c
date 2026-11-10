/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a48c38; name: FUN_01a48c38
 */


bool FUN_01a48c38(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 in_q3 [16];
  undefined8 uVar15;
  float fVar16;
  long *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  long local_28;
  
  uVar15 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  local_50 = (long *)0x0;
  puStack_48 = (undefined *)0x0;
  FUN_00b63bec(&local_50,param_1 + 0xe100);
  plVar6 = local_50;
  fVar14 = (float)uVar15;
  if (local_50 != (long *)0x0) {
    if (*(int *)((long)local_50 + 0xc) != 0) {
      piVar1 = (int *)((long)local_50 + 0xc);
      iVar9 = *(int *)((long)local_50 + 0xc);
      while( true ) {
        uVar10 = FUN_01a49bec(plVar6[2]);
        fVar14 = (float)uVar15;
        if ((uVar10 & 1) == 0) break;
        iVar3 = *piVar1;
        if (iVar3 == iVar9) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar11 = plVar6[3];
            plVar6 = (long *)0x0;
            plVar7 = local_50;
            if (lVar11 != 0) {
              plVar6 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a48cd8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
        if (iVar3 == 0) break;
      }
    }
    plVar6 = (long *)0x0;
    plVar7 = local_50;
joined_r0x01a48cd8:
    local_50 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        plVar7[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *plVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
    if (plVar6 != (long *)0x0) {
      FUN_00956dac(&local_50,plVar6 + 0x35);
      (**(code **)(*local_50 + 0x40))();
      if (local_50 != (long *)0x0) {
        lVar11 = local_50[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
      local_50 = (long *)&DAT_6723799257d05608;
      puStack_48 = &DAT_03a82288;
      local_40 = 0x1f;
      local_38 = (long *)0x0;
      lVar11 = FUN_02b11e64(DAT_043ef5a8,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (lVar11 == 0) {
        bVar8 = false;
      }
      else {
        fVar16 = (float)((ulong)uVar13 >> 0x20);
        bVar8 = (1.0 / ((float)((ulong)*(undefined8 *)(lVar11 + 0x88) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar11 + 0x58) >> 0x20) * (float)uVar13 +
                       (float)((ulong)*(undefined8 *)(lVar11 + 0x68) >> 0x20) * fVar16 +
                       (float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) * fVar14)) *
                ((float)*(undefined8 *)(lVar11 + 0x88) +
                (float)*(undefined8 *)(lVar11 + 0x58) * (float)uVar13 +
                (float)*(undefined8 *)(lVar11 + 0x68) * fVar16 +
                (float)*(undefined8 *)(lVar11 + 0x78) * fVar14) < 1.1920929e-07;
      }
      lVar12 = plVar6[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (lVar11 != 0) {
        return bVar8;
      }
    }
  }
  return false;
}


