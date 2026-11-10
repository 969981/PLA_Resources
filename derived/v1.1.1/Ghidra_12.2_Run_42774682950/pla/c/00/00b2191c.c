/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b2191c; name: FUN_00b2191c
 */


void FUN_00b2191c(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_38 [2];
  long *local_28;
  
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar6;
  FUN_00b21a7c(&local_28,uVar6,param_2);
  plVar1 = (long *)(param_1 + 8);
  FUN_00b22418(plVar1,&local_28);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      lVar7 = *plVar1;
      goto joined_r0x00b219a0;
    }
  }
  lVar7 = *plVar1;
joined_r0x00b219a0:
  if (lVar7 != 0) {
    FUN_00b21358(local_38,plVar1);
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
      FUN_02a76df0(local_38[0],param_1,1);
    }
    FUN_02a76858(local_38[0]);
    if (local_38[0] != (long *)0x0) {
      lVar7 = local_38[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38[0] + 0x20))();
      }
    }
  }
  return;
}


