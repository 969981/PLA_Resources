/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9a90; name: FUN_027d9a90
 */


uint FUN_027d9a90(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long alStack_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [13];
  long *local_58;
  long *local_50;
  undefined1 local_44 [4];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  
  if ((*(int *)(param_1 + 0xb8) < 5) ||
     ((*(long *)(param_1 + 0xd8) != 0 && (uVar7 = FUN_027dc64c(), (uVar7 & 1) != 0)))) {
    uVar6 = 0;
  }
  else {
    local_34[0] = *(undefined2 *)(param_1 + 0xa2);
    local_38[0] = *(undefined2 *)(param_1 + 0xa4);
    local_44[0] = *(undefined1 *)(param_1 + 0xa0);
    FUN_027d9d00(&local_50,*(undefined8 *)(param_1 + 8),local_34,local_38,local_44,param_1 + 0xa8,
                 param_1 + 0xb0);
    local_160 = *(undefined1 **)(param_1 + 8);
    FUN_027d9d80(&local_e0,local_160,&local_160);
    puVar10 = local_e0;
    local_e0 = (undefined1 *)0x0;
    lVar9 = *(long *)(param_1 + 0xd8);
    *(undefined1 **)(param_1 + 0xd8) = puVar10;
    if (lVar9 == 0) {
      *(undefined1 **)(param_1 + 0xe8) = local_d0;
      *(undefined1 **)(param_1 + 0xf0) = local_c8;
    }
    else {
      FUN_027dade4(param_1 + 0xe0);
      *(undefined1 **)(param_1 + 0xe8) = local_d0;
      *(undefined1 **)(param_1 + 0xf0) = local_c8;
      puVar10 = *(undefined1 **)(param_1 + 0xd8);
    }
    *(code **)(param_1 + 0xe0) = local_d8;
    local_58 = local_50;
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_e0 = &LAB_027db864;
    local_d8 = FUN_027db8d0;
    local_d0 = &LAB_027db8d4;
    local_c8 = &LAB_027db8e0;
    local_160 = &LAB_027db8ec;
    local_158 = FUN_027db8fc;
    local_150 = &LAB_027db900;
    local_148 = &LAB_027db90c;
    alStack_140[0] = param_1;
    alStack_c0[0] = param_1;
    uVar6 = FUN_027dc564(puVar10,&local_58,&local_e0,&local_160);
    pcVar5 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar5)(alStack_140);
    }
    pcVar5 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar5)(alStack_c0);
    }
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  return uVar6 & 1;
}


