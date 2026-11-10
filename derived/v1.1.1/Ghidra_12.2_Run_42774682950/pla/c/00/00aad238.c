/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad238; name: FUN_00aad238
 */


undefined1  [16] FUN_00aad238(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar8;
  undefined1 auVar7 [16];
  undefined8 *local_38 [2];
  long *local_28;
  undefined8 local_18;
  
  lVar5 = FUN_009b807c(*param_1 + 0xf0,local_38);
  if (lVar5 != 0) {
    FUN_01a73650(local_38);
    FUN_00956dac(&local_28,local_38);
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
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
        local_38[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar4 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_18 = *local_38[0];
        FUN_02a44274(lVar5 + 0xd8,&local_18);
      }
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0x17];
      lVar5 = local_28[0x16];
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
      goto LAB_00aad2fc;
    }
  }
  lVar8 = *(long *)(*param_1 + 0xb8);
  lVar5 = *(long *)(*param_1 + 0xb0);
LAB_00aad2fc:
  auVar7._8_8_ = lVar8;
  auVar7._0_8_ = lVar5;
  return auVar7;
}


