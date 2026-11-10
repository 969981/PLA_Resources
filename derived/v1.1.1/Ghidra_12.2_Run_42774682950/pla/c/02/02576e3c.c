/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02576e3c; name: FUN_02576e3c
 */


void FUN_02576e3c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100 [2];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar9 = *(long *)(param_1 + 0x4a8);
  lVar8 = 0;
  do {
    local_120 = 0xf15c9a8069383d68;
    pcStack_118 = "work_pokeget_item_change_00";
    local_110 = 0x1b;
    local_108 = (long *)0x0;
    local_140 = (&DAT_0425d718)[lVar8 * 3];
    puStack_138 = (&PTR_s_pane_P_icon_current_00_0425d720)[lVar8 * 3];
    local_130 = (&DAT_0425d728)[lVar8 * 3];
    local_128 = (long *)0x0;
    FUN_00d62910(local_100,*(undefined8 *)(param_1 + 0x2c8),&local_120,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    FUN_0284d5a8(lVar9 + lVar8 * 0xc0,*(undefined8 *)(param_1 + 8),local_100,0,&local_1c0);
    pcVar4 = local_1b8;
    if (local_1b8 == (code *)0x0) {
      local_1b8 = (code *)0x0;
      pcVar4 = local_e8;
    }
    else {
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = (code *)0x0;
      (*pcVar4)(&local_1a0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar4)(auStack_d0);
    }
    puVar5 = local_100[0];
    if (local_100[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_100[0] + 1);
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
        local_100[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_120 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_120);
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 5);
  return;
}


