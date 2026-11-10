/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec85fc; name: FUN_01ec85fc
 */


undefined1 *
FUN_01ec85fc(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,byte param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *local_90 [3];
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_0437a708;
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar6 = PTR_DAT_0437a718;
  puVar5 = PTR_DAT_0437a710;
  uVar9 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar9;
  uVar10 = FUN_010ab2e8(uVar9,param_2,param_4 & 1,param_5 & 1);
  if ((uVar10 & 1) == 0) {
    puVar12 = &DAT_cbf29ce484222645;
  }
  else {
    *(byte *)(param_1 + 0x398) = param_5 & 1;
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar9 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar9;
    uVar9 = FUN_010ab0e0(uVar9,param_2,param_4 & 1,param_5 & 1);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_008c4b3c(&local_70,param_3);
    FUN_01ec7ec4(param_1,uVar9,&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_90[0] = (undefined1 *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,local_90);
      }
    }
    FUN_0108c26c(local_90,uVar9);
    FUN_01ec82a8(param_1,local_90,param_5 & 1);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    FUN_0108c26c(local_90,uVar9);
    puVar12 = local_90[0];
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return puVar12;
}


