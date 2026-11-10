/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ce800; name: FUN_010ce800
 */


undefined1  [16] FUN_010ce800(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_2c [4];
  long local_28;
  undefined8 local_18;
  
  local_18 = param_3;
  if (param_4 == 0) {
    if ((*PTR_DAT_04379d30 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379d30);
      if (iVar4 != 0) {
        FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d30);
      }
    }
    lVar6 = *(long *)PTR_DAT_04379d38;
    *(long *)PTR_DAT_04379d40 = lVar6;
    local_2c[0] = 0;
    FUN_010cf9e8(&local_28,*(undefined8 *)(lVar6 + 8),param_2,&local_18,local_2c);
  }
  else {
    local_2c[0] = 0;
    FUN_010cf95c(&local_28,param_4,param_2,&local_18,local_2c);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *param_1 = local_28;
  auVar7 = FUN_02a8d3d0();
  if (((auVar7._0_8_ & 0xff00000000) == 0) || (auVar7._8_4_ != 0)) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
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
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  auVar7._8_8_ = auVar7._8_8_ & 0xffffffff;
  return auVar7;
}


