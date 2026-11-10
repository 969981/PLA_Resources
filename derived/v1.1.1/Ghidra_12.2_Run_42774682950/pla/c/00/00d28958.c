/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d28958; name: FUN_00d28958
 */


undefined8
FUN_00d28958(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_60;
  long *local_58 [2];
  long *local_48;
  
  puVar4 = PTR_DAT_04379d30;
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar6 = PTR_DAT_04379d40;
  puVar5 = PTR_DAT_04379d38;
  uVar8 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar8;
  FUN_00d28ba8(&local_48,uVar8,param_2 & 1,param_3,param_4,param_5,param_6);
  plVar9 = (long *)(param_1 + 8);
  FUN_00d29578(plVar9,&local_48);
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      lVar10 = *plVar9;
      goto joined_r0x00d28ad8;
    }
  }
  lVar10 = *plVar9;
joined_r0x00d28ad8:
  if (lVar10 == 0) {
    return 0;
  }
  FUN_00d28330(local_58,plVar9);
  if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
    FUN_02a76df0(local_58[0],param_1,1);
  }
  if ((param_2 & 1) == 0) {
    FUN_02a76858(local_58[0]);
  }
  else {
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d30);
    }
    uVar8 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar8;
    FUN_00939b4c(&local_60,uVar8,*(undefined8 *)(param_1 + 8));
    plVar9 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x28) = local_60;
  }
  if (local_58[0] != (long *)0x0) {
    lVar10 = local_58[0][0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  return 1;
}


