/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d27fb8; name: FUN_02d27fb8
 */


void FUN_02d27fb8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_88 [5];
  
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  FUN_008802f0(&local_110,*(long *)(param_1 + 0x70) + 0x58);
  local_170 = 0;
  uStack_168 = 0;
  FUN_02cd5d0c(&local_170,&local_110);
  puVar5 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_110 + 1);
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
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_88[0] = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,local_88);
    }
  }
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0x584ab694d0c8f3ac;
  pcStack_130 = "LeaveSession";
  local_128 = 0xc;
  uStack_120 = 0;
  local_148 = 1;
  local_140 = 0x2000;
  FUN_02cd6d54(&local_158,&local_170);
  plVar7 = (long *)FUN_013b2b18();
  lVar8 = *plVar7;
  *(long *)PTR_DAT_0437b480 = lVar8;
  plVar7 = *(long **)(lVar8 + 0x50);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  FUN_02cd6d54(&local_110,&local_158);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar8);
}


