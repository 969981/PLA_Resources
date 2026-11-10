/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f566c8; name: FUN_01f566c8
 */


uint FUN_01f566c8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_043d4a80 != 0) && (*(int *)(DAT_043d4a80 + 0xc) != 0)) {
    if (((*PTR_DAT_0437b578 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b578), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04382970,PTR_DAT_0437b580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b578);
    }
    lVar7 = *(long *)PTR_DAT_0437b580;
    *(long *)PTR_DAT_0437b588 = lVar7;
    lVar7 = *(long *)(lVar7 + 0x50);
    if (lVar7 != 0) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_01f578c8(&local_58,&DAT_043d4a80);
      uVar5 = FUN_02895dd0(param_1,lVar7,param_2,param_4,&local_58,param_3,param_5);
      puVar4 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_58 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_48 = *puVar4;
          FUN_02a44274(lVar7 + 0xd8,&local_48);
        }
      }
      goto LAB_01f567d8;
    }
  }
  uVar5 = 0;
LAB_01f567d8:
  return uVar5 & 1;
}


