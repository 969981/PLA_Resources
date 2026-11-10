/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02585ee4; name: FUN_02585ee4
 */


void FUN_02585ee4(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,int param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long *plVar10;
  long *local_70;
  long local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    if (param_6 < 1) {
      if (param_2 < 7) {
        local_60[0] = *(undefined4 *)(&DAT_03a7d668 + (long)(int)param_2 * 4);
      }
      else {
        local_60[0] = 0x2a;
      }
      local_50 = *param_4;
      local_58 = *param_3;
      uVar9 = 0xfb;
      if (param_7 != 1) {
        uVar9 = 0xa0;
      }
      local_48 = 0xa0;
      if (param_7 != 0) {
        local_48 = uVar9;
      }
      plVar10 = *(long **)(param_1 + 8);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0xa0,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
      }
      FUN_025841e4(lVar7,local_60);
      *(long **)(lVar7 + 8) = plVar10;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0xa0;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x58);
        if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_02586238;
        if (*(long *)(lVar6 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
          *(undefined8 *)(lVar6 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar10 != (long *)0x0) {
        lVar6 = plVar10[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
    }
    else {
      if (param_2 < 7) {
        local_60[0] = *(undefined4 *)(&DAT_03a7d668 + (long)(int)param_2 * 4);
      }
      else {
        local_60[0] = 0x2a;
      }
      local_50 = *param_4;
      local_58 = *param_3;
      uVar9 = 0xfb;
      if (param_7 != 1) {
        uVar9 = 0xa0;
      }
      local_48 = 0xa0;
      if (param_7 != 0) {
        local_48 = uVar9;
      }
      local_40 = *param_5;
      _local_38 = CONCAT44(1,param_6);
      FUN_02586254(&local_68,*(undefined8 *)(param_1 + 8),local_60);
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar10 != (long *)0x0) {
        lVar7 = plVar10[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      lVar7 = local_68;
    }
    local_70 = *(long **)(param_1 + 0x68);
    *(long *)(param_1 + 0x58) = lVar7;
    if (local_70 == (long *)0x0) {
      FUN_02584fec(lVar7,&local_70);
    }
    else {
      lVar6 = local_70[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_02586238:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
      }
      plVar10 = local_70;
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_02584fec(lVar7,&local_70);
      if (plVar10 != (long *)0x0) {
        lVar7 = plVar10[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
    }
  }
  return;
}


