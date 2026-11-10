/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285a534; name: FUN_0285a534
 */


void FUN_0285a534(long param_1,char param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  if (param_2 == '\x02') {
    local_44 = 0xffff0105;
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    local_58 = 0;
    uVar6 = *(undefined8 *)PTR_DAT_04379698;
    *(undefined8 *)PTR_DAT_043796a0 = uVar6;
    FUN_0286ba94(uVar6,&local_58);
  }
  else {
    local_44 = 0xffff0305;
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    local_58 = 0;
    uVar6 = *(undefined8 *)PTR_DAT_04379698;
    *(undefined8 *)PTR_DAT_043796a0 = uVar6;
    FUN_0286bc28(uVar6,&local_58);
  }
  *(char *)(param_1 + 0x30) = param_2;
  plVar9 = *(long **)(lVar11 + 0xc0);
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
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
  }
  FUN_0285e0a0(&local_58,plVar9,local_40,&local_40,&local_44,(char *)(param_1 + 0x30));
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,&local_58);
  puVar8 = (undefined8 *)CONCAT44(uStack_54,local_58);
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *puVar8;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  if (plVar9 == (long *)0x0) {
LAB_0285a6d0:
    lVar11 = *plVar2;
    puVar8 = (undefined8 *)0x0;
    if (lVar11 == 0) goto LAB_0285a71c;
  }
  else {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285a6d0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
    lVar11 = *plVar2;
    if (lVar11 == 0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_0285a71c;
    }
  }
  puVar10 = *(undefined8 **)(lVar11 + 0x18);
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar6 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar6;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == (undefined8 *)PTR_DAT_0437f808) {
          puVar8 = puVar10 + -10;
          break;
        }
        puVar7 = (undefined8 *)*puVar7;
        puVar8 = (undefined8 *)0x0;
      } while (puVar7 != (undefined8 *)0x0);
      goto LAB_0285a71c;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_0285a71c:
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  return;
}


