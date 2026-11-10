/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261880c; name: FUN_0261880c
 */


void FUN_0261880c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00af7e30(&local_38);
  FUN_01a4c750(param_1,&local_38,param_3);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
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
      local_38[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  *param_1 = &PTR_LAB_04261cd8;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[9] = &PTR_LAB_042620e8;
  param_1[10] = &PTR_LAB_042621c8;
  param_1[0x16c] = *(undefined8 *)(param_3 + 0x4b8);
  param_1[0x16d] = *(undefined8 *)(param_3 + 0x4c0);
  param_1[0x16e] = *(undefined8 *)(param_3 + 0x4c8);
  param_1[0x16f] = *(undefined8 *)(param_3 + 0x4d0);
  param_1[0x170] = *(undefined8 *)(param_3 + 0x4d8);
  param_1[0x171] = *(undefined8 *)(param_3 + 0x4e0);
  uVar6 = *(undefined8 *)(param_3 + 0x4e8);
  uVar8 = *(undefined8 *)(param_3 + 0x4f0);
  param_1[0x174] = *(undefined8 *)(param_3 + 0x4f8);
  param_1[0x173] = uVar8;
  param_1[0x172] = uVar6;
  param_1[0x175] = *(undefined8 *)(param_3 + 0x500);
  param_1[0x176] = *(undefined8 *)(param_3 + 0x508);
  param_1[0x177] = *(undefined8 *)(param_3 + 0x510);
  param_1[0x178] = *(undefined8 *)(param_3 + 0x518);
  param_1[0x179] = *(undefined8 *)(param_3 + 0x520);
  uVar6 = *(undefined8 *)(param_3 + 0x528);
  param_1[0x185] = 0x500000000;
  param_1[0x17b] = 0x3f0000003f800000;
  param_1[0x17c] = 0x5a;
  *(undefined1 *)(param_1 + 0x17d) = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 1;
  param_1[0x17a] = uVar6;
  return;
}


