/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01289b94; name: FUN_01289b94
 */


void FUN_01289b94(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  undefined4 local_88;
  short local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar10 = *(long **)(lVar8 + 0x280);
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01289f38;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar12 = FUN_010dac08(plVar10,0);
    if ((int)uVar12 != 0) {
      uVar11 = 0;
      do {
        uVar12 = FUN_010dac08(uVar12,0);
        if ((uVar11 < (uVar12 & 0xffffffff)) &&
           (uVar2 = *(uint *)((long)plVar10 + uVar11 * 4 + 0x68),
           0xffff < uVar2 && (uVar2 & 0xffff) != 0)) {
          local_88 = 2;
          local_84 = (short)uVar2;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0xffffffff00000000;
          local_68 = 3;
          FUN_00d4dce8(param_1,&local_88,0);
          FUN_01289f50(param_1,0,uVar11 & 0xffffffff);
        }
        else {
          local_88 = 1;
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0xffffffff00000000;
          local_68 = 3;
          FUN_00d4dce8(param_1,&local_88,0);
        }
        uVar11 = uVar11 + 1;
        uVar12 = FUN_010dac08(plVar10,0);
      } while (uVar11 < (uVar12 & 0xffffffff));
    }
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        pcVar9 = *(code **)(*plVar10 + 0x20);
LAB_01289eb8:
        (*pcVar9)(plVar10);
      }
    }
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x238);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01289f38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar6 = (int)plVar10[0xa6];
  uVar12 = 0;
  psVar13 = (short *)((long)plVar10 + (ulong)(uint)(iVar6 * 0x1e) * 4 + 0x6a);
  sVar3 = *(short *)((long)plVar10 + (ulong)(uint)(iVar6 * 0x1e) * 4 + 0x68);
  if (sVar3 != 0) goto LAB_01289ca0;
LAB_01289c58:
  do {
    local_88 = 1;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0xffffffff00000000;
    local_68 = 3;
    FUN_00d4dce8(param_1,&local_88,param_2);
    psVar14 = psVar13;
    while( true ) {
      uVar12 = uVar12 + 1;
      psVar13 = psVar14 + 2;
      if (uVar12 == 0x1e) {
        lVar8 = plVar10[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 + -1 != 0) {
          return;
        }
        *(undefined8 *)(lVar8 + 0x18) = 0;
        pcVar9 = *(code **)(*plVar10 + 0x20);
        goto LAB_01289eb8;
      }
      sVar3 = psVar14[1];
      if (sVar3 == 0) goto LAB_01289c58;
LAB_01289ca0:
      if (*psVar13 == 0) break;
      local_88 = 2;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0xffffffff00000000;
      local_68 = 3;
      local_84 = sVar3;
      FUN_00d4dce8(param_1,&local_88,param_2);
      FUN_01289f50(param_1,param_2,uVar12 & 0xffffffff);
      psVar14 = psVar13;
    }
    FUN_0111e970(plVar10,iVar6,uVar12 & 0xffffffff);
  } while( true );
}


