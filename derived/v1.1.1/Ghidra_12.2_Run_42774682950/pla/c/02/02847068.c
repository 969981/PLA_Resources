/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02847068; name: FUN_02847068
 */


void FUN_02847068(long *param_1,long param_2,int param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_58;
  undefined1 auStack_48 [8];
  
  if (param_3 == 0x24) {
switchD_02847150_caseD_0:
    lVar7 = FUN_028479c8(*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_02847580:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 0;
LAB_02847108:
    FUN_0284abbc(lVar7,uVar8,param_4);
    *param_1 = lVar7;
    return;
  }
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    goto switchD_02847150_caseD_0;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0x1e:
    plVar11 = *(long **)(param_2 + 0x58);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x300,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    lVar12 = *(long *)(param_2 + 0x58);
    local_58 = lVar12;
    FUN_02835b8c(puVar9,lVar12);
    *puVar9 = &PTR_LAB_0426fb48;
    *(undefined1 *)((long)puVar9 + 0x2e4) = 0;
    puVar9[0xd] = &PTR_LAB_0426fcb0;
    puVar9[0x5d] = 0;
    puVar9[9] = &PTR_LAB_0426fc40;
    puVar9[10] = &PTR_LAB_0426fc88;
    *(undefined1 *)(puVar9 + 0x5e) = 0;
    puVar9[0x5f] = 0;
    lVar12 = FUN_02849fc8(auStack_48,lVar12,&local_58);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)puVar9[0x5f];
    puVar9[0x5f] = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    puVar9[0x5f] = lVar12;
    puVar9[9] = &PTR_LAB_0426fdd0;
    puVar9[10] = &PTR_LAB_0426fe18;
    *puVar9 = &PTR_LAB_0426fcd8;
    puVar9[1] = plVar11;
    puVar9[0xd] = &PTR_LAB_0426fe40;
    puVar9[2] = puVar9;
    puVar9[3] = 0x300;
    puVar9[4] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = puVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((param_5 & 1) != 0) {
        puVar9[0xf] = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
      }
      FUN_02849aa4(puVar9,param_4);
      *param_1 = (long)puVar9;
      return;
    }
    goto LAB_02847580;
  default:
    *param_1 = 0;
    break;
  case 0x22:
    FUN_0284759c(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    FUN_02838978(local_58,0,param_4);
    *param_1 = local_58;
    break;
  case 0x23:
    FUN_02847614(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    FUN_02848bf0(local_58,param_4);
    *param_1 = local_58;
    break;
  case 0x25:
    lVar7 = FUN_028479c8(*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02847580;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 1;
    goto LAB_02847108;
  case 0x26:
    FUN_0284768c(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 0;
    lVar7 = local_58;
    goto LAB_02847324;
  case 0x27:
    FUN_0284768c(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 1;
    lVar7 = local_58;
LAB_02847324:
    FUN_0284b220(lVar7,uVar8,param_4);
    *param_1 = lVar7;
    break;
  case 0x28:
    FUN_02847704(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 0;
    lVar7 = local_58;
    goto LAB_02847414;
  case 0x29:
    FUN_02847704(&local_58,*(undefined8 *)(param_2 + 0x58),(undefined8 *)(param_2 + 0x58));
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
    }
    uVar8 = 1;
    lVar7 = local_58;
LAB_02847414:
    FUN_0284b884(lVar7,uVar8,param_4);
    *param_1 = lVar7;
  }
  return;
}


