/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025900d4; name: FUN_025900d4
 */


void FUN_025900d4(long *param_1,long param_2,uint param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *local_70;
  undefined8 uStack_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  (**(code **)(*(long *)*param_4 + 0x10))(local_60);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_0087f944(&local_70,local_60);
  puVar5 = local_60[0];
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  plVar12 = local_70;
  if (local_70 == (long *)0x0) {
    lVar9 = 0;
    if (1 < param_3) goto LAB_0259045c;
  }
  else {
    plVar10 = local_70 + 1;
    lVar9 = *local_70;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != 0) goto LAB_025901e8;
    local_70[2] = 0;
    if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_02590460;
    while( true ) {
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_60[0] = (undefined8 *)*plVar12;
      FUN_02a44274(lVar11 + 0xd8,local_60);
LAB_025901e8:
      if (param_3 < 2) break;
LAB_0259045c:
      FUN_02593260();
LAB_02590460:
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
      if (iVar6 != 0) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
    }
  }
  lVar11 = param_2 + (long)(int)param_3 * 0x50;
  *param_1 = 0;
  if (*(long *)(lVar11 + 0x210) == lVar9) {
    lVar9 = *(long *)(param_2 + (long)(int)param_3 * 0x50 + 0x218);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar6 = *(int *)(lVar9 + 0xc);
      do {
        uVar7 = FUN_009b4090(*(undefined8 *)(lVar9 + 0x10));
        if ((uVar7 & 1) == 0) {
          return;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x18);
            if (lVar9 == 0) {
              return;
            }
            lVar11 = *(long *)(lVar9 + 8);
            if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
              plVar12 = (long *)(lVar9 + -0x50);
              if (*(long *)(lVar11 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                *(undefined8 *)(lVar11 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              *param_1 = (long)plVar12;
              lVar9 = *(long *)(lVar9 + 8);
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
                return;
              }
              return;
            }
            goto LAB_02590550;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
  }
  else {
    plVar12 = (long *)FUN_009b421c(*param_4 + 0xf0,local_60);
    if (plVar12 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02590550:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *param_1 = (long)plVar12;
      *(long *)(lVar11 + 0x210) = lVar9;
      (**(code **)(*plVar12 + 0x10))(local_60,plVar12);
      local_70 = (long *)0x0;
      uStack_68 = 0;
      FUN_017dc294(&local_70,local_60);
      puVar5 = local_60[0];
      if (local_60[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60[0] + 1);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_48 = *puVar5;
          FUN_02a44274(lVar9 + 0xd8,&local_48);
        }
      }
      FUN_025936c4(param_2 + (long)(int)param_3 * 0x50 + 0x218,&local_70);
      plVar12 = local_70;
      if (local_70 != (long *)0x0) {
        plVar10 = local_70 + 1;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *(int *)plVar10 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_60[0] = (undefined8 *)*plVar12;
          FUN_02a44274(lVar9 + 0xd8,local_60);
        }
      }
    }
  }
  return;
}


