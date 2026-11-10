/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02565550; name: FUN_02565550
 */


undefined8 FUN_02565550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_58;
  long *local_50 [2];
  long *local_38;
  
  puVar5 = PTR_DAT_04379d30;
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar7 = PTR_DAT_04379d40;
  puVar6 = PTR_DAT_04379d38;
  uVar9 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar9;
  FUN_02565774(&local_38,uVar9,param_2,param_3,param_4);
  plVar10 = (long *)(param_1 + 8);
  FUN_02566138(plVar10,&local_38);
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      lVar11 = *plVar10;
      goto joined_r0x025656ec;
    }
  }
  lVar11 = *plVar10;
joined_r0x025656ec:
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_02563ec4(local_50,plVar10);
    if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
      bVar2 = *puVar5;
    }
    else {
      FUN_02a76df0(local_50[0],param_1,1);
      bVar2 = *puVar5;
    }
    if (((bVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d30);
    }
    uVar9 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar9;
    FUN_00939b4c(&local_58,uVar9,*(undefined8 *)(param_1 + 8));
    plVar10 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x28) = local_58;
    if (local_50[0] != (long *)0x0) {
      lVar11 = local_50[0][0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}


