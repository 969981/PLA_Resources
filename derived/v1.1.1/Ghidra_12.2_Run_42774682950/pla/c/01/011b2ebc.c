/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b2ebc; name: FUN_011b2ebc
 */


void FUN_011b2ebc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *local_1e8;
  undefined1 auStack_1d0 [96];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar6 = FUN_011b2bb4();
  if (lVar6 == 0) {
LAB_011b3174:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_1e8 = (code *)0x0;
  if (*(code **)(lVar6 + 0x90) != (code *)0x0) {
    (**(code **)(lVar6 + 0x90))(lVar6 + 0xa0,auStack_1d0);
    local_1e8 = *(code **)(lVar6 + 0x88);
  }
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  if (*(code **)(lVar6 + 0x110) != (code *)0x0) {
    (**(code **)(lVar6 + 0x110))(lVar6 + 0x120,auStack_150);
    local_170 = *(undefined8 *)(lVar6 + 0x100);
    local_168 = *(code **)(lVar6 + 0x108);
    local_160 = *(undefined8 *)(lVar6 + 0x110);
    uStack_158 = *(undefined8 *)(lVar6 + 0x118);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if (*(code **)(lVar6 + 400) != (code *)0x0) {
    (**(code **)(lVar6 + 400))(lVar6 + 0x1a0,auStack_d0);
    local_f0 = *(undefined8 *)(lVar6 + 0x180);
    local_e8 = *(code **)(lVar6 + 0x188);
    local_e0 = *(undefined8 *)(lVar6 + 400);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x198);
  }
  if (*(code **)(lVar6 + 0x80) != (code *)0x0) {
    local_70 = *(undefined8 *)(lVar6 + 0x78);
    (**(code **)(lVar6 + 0x80))(lVar6 + 0xa0,&local_70);
  }
  if (*(long *)(lVar6 + 0x210) != 0) {
    FUN_011dce68();
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar9 = *(long **)(lVar8 + 0x318);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_011b3174;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((((char)plVar9[0xd] != '\0') && (lVar6 = *(long *)(lVar6 + 0x218), lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x5ab) == '\0')) {
    local_70 = DAT_041f9ea8;
    puStack_68 = PTR_s_anime_wake_041f9eb0;
    local_60 = DAT_041f9eb8;
    uStack_58 = 0;
    if (*(long *)(lVar6 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(lVar6 + 0x2c8),&local_70);
    }
    FUN_00d42690(lVar6,1,1);
    *(undefined1 *)(lVar6 + 0x5ab) = 1;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar6 = plVar9[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcVar4 = local_e8;
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
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
  pcVar4 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar4)(auStack_150);
  }
  if (local_1e8 != (code *)0x0) {
    (*local_1e8)(auStack_1d0);
  }
  return;
}


