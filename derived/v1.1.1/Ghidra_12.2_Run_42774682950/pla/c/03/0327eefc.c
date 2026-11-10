/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327eefc; name: FUN_0327eefc
 */


void FUN_0327eefc(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined **local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 *local_4f8;
  undefined8 local_4f0;
  undefined1 auStack_4e8 [768];
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [128];
  long *local_158;
  undefined8 local_150;
  long alStack_148 [32];
  long local_48;
  
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x38d490) == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar11;
    lVar15 = *(long *)(lVar11 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar2 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TthkaiCollisionAvoidance::System::step";
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
  }
  local_508 = 0xffffffff;
  uStack_500 = 1;
  local_4f8 = auStack_4e8;
  local_510 = &PTR_LAB_04350ee8;
  local_4f0 = 0x8000002000000000;
  local_1e8 = auStack_1d8;
  local_158 = alStack_148;
  local_1e0 = -0x7fffffe000000000;
  local_150 = -0x7fffffe000000000;
  local_48 = lVar15;
  FUN_0327f6b0(&local_510,param_1,param_3,0xffff);
  uVar8 = FUN_0333bff4(&local_510,param_2,0);
  (**(code **)(*param_2 + 0x60))(param_2,uVar8);
  if ((int)local_4f0 != 0) {
    (**(code **)(*param_2 + 0x20))(param_2,local_4f8 + 0x10,local_4f0 & 0xffffffff,0x18);
    if (0 < (int)local_4f0) {
      lVar11 = 0;
      lVar13 = 0x10;
      do {
        *(undefined8 *)(local_4f8 + lVar13) = 0;
        lVar11 = lVar11 + 1;
        lVar13 = lVar13 + 0x18;
      } while (lVar11 < (int)local_4f0);
    }
  }
  (*(code *)local_510[4])(&local_510);
  plVar7 = local_158;
  puVar5 = PTR_PTR_0434a080;
  local_510 = &PTR_LAB_04350ee8;
  if ((int)local_150 == 0) {
LAB_0327f114:
    lVar11 = local_150;
    uVar10 = (ulong)local_150._4_4_;
    local_150 = (ulong)local_150._4_4_ << 0x20;
    if ((-1 < lVar11) && (local_158 != (long *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_158,(uVar10 & 0x3fffffff) << 3);
    }
    lVar11 = local_1e0;
    uVar6 = local_1e0._4_4_;
    local_158 = (long *)0x0;
    local_150 = CONCAT44(0x80000000,(int)local_150);
    local_1e0 = (ulong)local_1e0._4_4_ << 0x20;
    if ((-1 < lVar11) && (local_1e8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_1e8,uVar6 << 2);
    }
    uVar10 = local_4f0;
    uVar12 = (ulong)local_4f0._4_4_;
    local_1e8 = (undefined1 *)0x0;
    local_1e0 = CONCAT44(0x80000000,(undefined4)local_1e0);
    local_4f0 = (ulong)local_4f0._4_4_ << 0x20;
    if ((-1 < (long)uVar10) && (local_4f8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_4f8,(uVar12 & 0x3fffffff) * 0x18);
    }
    if (lVar15 != 0) {
      puVar2 = *(undefined8 **)(lVar15 + 8);
      uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
         (*(ulong *)(lVar15 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_0390f40e;
        uVar8 = nn::os::GetSystemTick();
        puVar2[1] = uVar8;
      }
    }
    return;
  }
  plVar14 = local_158 + (long)(int)local_150 + -1;
  plVar9 = (long *)*plVar14;
  if (plVar9 == (long *)0x0) goto LAB_0327f0e0;
  if (plVar9[1] == 0) goto LAB_0327f0e0;
  plVar1 = plVar9 + 2;
  do {
    lVar11 = *plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
LAB_0327f0e0:
    do {
      if (plVar14 == plVar7) goto LAB_0327f114;
      plVar14 = plVar14 + -1;
      plVar9 = (long *)*plVar14;
    } while ((plVar9 == (long *)0x0) || (plVar9[1] == 0));
    plVar1 = plVar9 + 2;
    do {
      lVar11 = *plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while( true );
}


