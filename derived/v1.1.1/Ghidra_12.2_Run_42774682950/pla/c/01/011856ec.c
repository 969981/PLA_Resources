/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011856ec; name: FUN_011856ec
 */


void FUN_011856ec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  uVar9 = *(undefined8 *)(param_1 + 0x4c8);
  local_58 = (undefined8 *)&DAT_e2c06acab97c29c2;
  pcStack_50 = "CommonOptionBar";
  local_48 = 0xf;
  local_40 = (long *)0x0;
  lVar6 = FUN_0118c80c(uVar9,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = (undefined8 *)&DAT_6741161af454b321;
  pcStack_50 = "View_List";
  local_48 = 9;
  local_40 = (long *)0x0;
  lVar7 = FUN_0118ca5c(uVar9,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = (undefined8 *)&DAT_174e0926ba16a64f;
  pcStack_50 = "View_Over";
  local_48 = 9;
  local_40 = (long *)0x0;
  uVar9 = FUN_0118cba0(uVar9,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if ((*(long *)(lVar7 + 0x440) != 0) && (*(long *)(lVar6 + 0x440) != 0)) {
    FUN_02831644();
  }
  FUN_011a0d50(lVar7);
  FUN_011a1334(lVar7,uVar9);
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_58);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01160f90(&local_68,&local_58);
  puVar4 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
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
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  lVar6 = FUN_0118a8c0(&local_68);
  puVar4 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
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
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_58 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_58);
    }
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0118f914(lVar6,0);
  FUN_0118f920(lVar6);
  FUN_00d4e2dc(lVar7);
  FUN_011a9c20(uVar9);
  return;
}


