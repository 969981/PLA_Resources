/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285645c; name: FUN_0285645c
 */


void FUN_0285645c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0 [2];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [104];
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00d62910(local_c0,*(undefined8 *)(param_1 + 8),param_1 + 0x48,param_1 + 0x2b8);
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    FUN_0284d5a8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x140),local_c0,0,
                 &local_140);
    pcVar4 = local_138;
    if (local_138 == (code *)0x0) {
      local_138 = (code *)0x0;
      pcVar4 = local_a8;
    }
    else {
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      local_138 = (code *)0x0;
      (*pcVar4)(&local_120);
      pcVar4 = local_a8;
    }
    local_a8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar4)(auStack_90);
    }
    if (local_c0[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0[0] + 1);
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
        local_c0[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_28 = *local_c0[0];
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
  }
  return;
}


