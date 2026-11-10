/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd3474; name: FUN_02cd3474
 */


void FUN_02cd3474(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_008802f0(&local_100,*(long *)(param_1 + 0x70) + 0x58);
  local_168 = 0;
  uStack_160 = 0;
  FUN_02cd5d0c(&local_168,&local_100);
  puVar5 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_100 + 1);
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
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_80 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_80);
    }
  }
  local_178 = 0;
  uStack_170 = 0;
  FUN_02cd8e24(&local_178,param_1 + 0x4f8);
  local_140 = 0;
  uStack_138 = 0;
  local_120 = 0x584ab694d0c8f3ac;
  pcStack_118 = "LeaveSession";
  local_110 = 0xc;
  uStack_108 = 0;
  local_130 = 1;
  local_128 = 0x2000;
  FUN_02cd6d54(&local_140,&local_168);
  local_150 = 0;
  uStack_148 = 0;
  FUN_02cd600c(&local_150,&local_178);
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
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0xa0,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_02cd6d54(&local_100,&local_140);
  local_80 = 0;
  uStack_78 = 0;
  FUN_02cd600c(&local_80,&local_150);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar8);
}


