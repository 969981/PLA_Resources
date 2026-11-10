/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e90470; name: FUN_00e90470
 */


void FUN_00e90470(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long local_40;
  long local_38;
  long *local_28;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar8 = *(long **)(lVar7 + 0xc0);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_00e9068c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_38 = plVar8[0x18];
  local_40 = local_38 + plVar8[0x19] * 8;
  FUN_00e91e90(&local_28,&local_38,&local_40);
  if (local_28 != (long *)(plVar8[0x18] + plVar8[0x19] * 8)) {
    lVar7 = *local_28;
    puVar6 = (undefined8 *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar4 != 0)) {
      uVar5 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar5;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar6 != (undefined8 *)0x0) {
LAB_00e90554:
      if (puVar6 != (undefined8 *)PTR_DAT_0437c680) goto LAB_00e905f4;
      *param_1 = lVar7;
      lVar7 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (plVar8 == (long *)0x0) {
          return;
        }
        goto LAB_00e905a0;
      }
      goto LAB_00e9068c;
    }
  }
LAB_00e905fc:
  *param_1 = 0;
  if (plVar8 != (long *)0x0) {
LAB_00e905a0:
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e905f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8);
      return;
    }
  }
  return;
LAB_00e905f4:
  puVar6 = (undefined8 *)*puVar6;
  if (puVar6 == (undefined8 *)0x0) goto LAB_00e905fc;
  goto LAB_00e90554;
}


