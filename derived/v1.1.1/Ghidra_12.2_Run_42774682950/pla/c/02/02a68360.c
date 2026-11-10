/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a68360; name: FUN_02a68360
 */


void FUN_02a68360(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  FUN_02a6f65c();
  *param_1 = &DAT_0427e7a0;
  param_1[0x71] = 0;
  param_1[9] = &PTR_LAB_0427e828;
  param_1[10] = &PTR_LAB_0427e870;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 1;
  *(byte *)((long)param_1 + 0x39c) = param_4 & 1;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x20))(local_40,param_3);
    FUN_01800100(param_1 + 0x71,local_40);
    if (local_40[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40[0] + 1);
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
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_28 = *local_40[0];
        FUN_02a44274(lVar5 + 0xd8,&local_28);
      }
    }
  }
  return;
}


