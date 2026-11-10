/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165b1f8; name: FUN_0165b1f8
 */


uint FUN_0165b1f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char local_60 [8];
  char local_58;
  long local_50;
  undefined8 local_48;
  
  FUN_0165b3b0(local_60);
  if (local_60[0] == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_01f05b24(&local_a0);
    if (local_a0 == (long *)0x0) {
      uVar5 = 0;
      if (local_50 != 0) {
        local_a0 = (long *)*param_1;
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        uStack_68 = 0;
        uStack_98 = param_2;
        local_90 = param_3;
        uStack_88 = param_4;
        local_80 = param_5;
        FUN_0165c784(local_50,&local_a0);
        puVar4 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
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
            local_78[2] = 0;
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
        uVar5 = 1;
      }
    }
    else {
      lVar7 = local_a0[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
      if (local_58 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_016693c0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    if (local_60[0] != '\0') {
    }
  }
  return uVar5 & 1;
}


