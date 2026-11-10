/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026520ac; name: FUN_026520ac
 */


void FUN_026520ac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 in_q3 [16];
  long *local_28;
  
  fVar7 = in_q3._4_4_;
  if (*(char *)(param_1 + 0xd50) != '\0') {
    FUN_00956dac(&local_28,param_1 + 0x1a8);
    (**(code **)(*local_28 + 0x40))();
    if (local_28 != (long *)0x0) {
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
    }
    fVar7 = fVar7 - *(float *)(param_1 + 0xd44);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    lVar6 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar6;
    plVar5 = *(long **)(*(long *)(lVar6 + 0x158) + 0x60);
    (**(code **)(*plVar5 + 0x88))(fVar7,plVar5,"CLIMBING_HEIGHT",0xffffffffffffffff,0,4,0);
  }
  return;
}


