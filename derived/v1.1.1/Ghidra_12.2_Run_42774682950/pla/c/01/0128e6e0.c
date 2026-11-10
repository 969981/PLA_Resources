/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128e6e0; name: FUN_0128e6e0
 */


undefined8 FUN_0128e6e0(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar14 = *(long *)puVar5;
    *(long *)puVar6 = lVar14;
    plVar16 = *(long **)(lVar14 + 0x280);
    if (plVar16 == (long *)0x0) {
      iVar10 = FUN_010dbd58(0,param_3);
    }
    else {
      lVar14 = plVar16[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0128eb80;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar10 = FUN_010dbd58(plVar16,param_3);
      lVar14 = plVar16[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    FUN_00d5e078(param_1,0,iVar10,param_4);
    FUN_01289f50(param_1,0,iVar10);
    lVar13 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8);
    lVar14 = **(long **)(lVar13 + 0x838);
    lVar13 = (*(long **)(lVar13 + 0x838))[1];
    if ((lVar14 != lVar13) &&
       (*(char *)(lVar14 + 0x20) != '\0' || *(int *)(lVar14 + 0x24) != iVar10)) {
      lVar8 = lVar14 + 0x30;
      do {
        lVar15 = lVar8;
        lVar14 = lVar13;
        if (lVar13 == lVar15) break;
        lVar8 = lVar15 + 0x30;
      } while ((*(char *)(lVar15 + 0x20) != '\0') ||
              (lVar14 = lVar15, *(int *)(lVar15 + 0x24) != iVar10));
    }
    if ((lVar14 != 0) && ((lVar13 != lVar14 && (iVar2 = *(int *)(lVar14 + 0x28), iVar2 != -1)))) {
      uVar9 = (**(code **)(*param_1 + 0x1f0))(param_1,0,iVar10);
      FUN_00d5b258(param_1,0,iVar2,uVar9 & 1);
    }
    lVar13 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8);
    lVar14 = **(long **)(lVar13 + 0x838);
    lVar13 = (*(long **)(lVar13 + 0x838))[1];
    if ((lVar14 != lVar13) &&
       (*(char *)(lVar14 + 0x20) != '\0' || *(int *)(lVar14 + 0x24) != iVar10)) {
      lVar8 = lVar14 + 0x30;
      do {
        lVar15 = lVar8;
        lVar14 = lVar13;
        if (lVar13 == lVar15) break;
        lVar8 = lVar15 + 0x30;
      } while ((*(char *)(lVar15 + 0x20) != '\0') ||
              (lVar14 = lVar15, *(int *)(lVar15 + 0x24) != iVar10));
    }
    if ((lVar14 != 0) && ((lVar13 != lVar14 && (iVar2 = *(int *)(lVar14 + 0x28), iVar2 != -1)))) {
      uVar9 = (**(code **)(*param_1 + 0x1f8))(param_1,0,iVar10);
      FUN_00d5b4b0(param_1,0,iVar2,uVar9 & 1);
    }
    FUN_00d57744(param_1,0,iVar10,1);
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar14 = *(long *)puVar5;
  *(long *)puVar6 = lVar14;
  plVar16 = *(long **)(lVar14 + 0x238);
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_0128eb80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_48 = 0;
  uVar12 = FUN_0111d464(plVar16,param_3,(long)&local_48 + 4,&local_48);
  uVar7 = local_48;
  if ((uVar12 & 1) != 0) {
    if (local_48._4_4_ != (int)plVar16[0xa6]) {
      FUN_0111d424(plVar16);
      FUN_00d52298(param_1,param_2,0);
      FUN_00d51790(param_1,param_2,0xffffffff,0xffffffff);
      uVar11 = 1;
      FUN_00d52298(param_1,param_2,1);
      goto joined_r0x0128e87c;
    }
    FUN_00d5e078(param_1,param_2,local_48 & 0xffffffff,param_4);
    FUN_01289f50(param_1,param_2,uVar7 & 0xffffffff);
    FUN_00d5d5c8(param_1,param_2,uVar7 & 0xffffffff);
    FUN_00d5d6bc(param_1,param_2,uVar7 & 0xffffffff);
    FUN_00d57744(param_1,param_2,uVar7 & 0xffffffff,1);
  }
  uVar11 = 0;
joined_r0x0128e87c:
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return uVar11;
}


