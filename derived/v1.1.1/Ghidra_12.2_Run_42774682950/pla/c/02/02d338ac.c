/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d338ac; name: FUN_02d338ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02d338ac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_130 [17];
  undefined8 local_a8 [7];
  undefined8 local_70 [2];
  
  FUN_013b1c3c(local_130);
  if (local_130[0] == (undefined8 *)0x0) {
    local_70[0] = 0;
  }
  else {
    FUN_013b20c8(local_70);
    if (local_130[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130[0] + 1);
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
        local_130[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_a8[0] = *local_130[0];
        FUN_02a44274(lVar7 + 0xd8,local_a8);
      }
    }
  }
  plVar8 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  if (puVar6 == (undefined8 *)0x0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
    _DAT_00000070 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    _DAT_00000068 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8();
  }
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  *puVar6 = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


