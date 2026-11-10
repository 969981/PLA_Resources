/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e5eec; name: FUN_011e5eec
 */


void FUN_011e5eec(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  local_78 = &LAB_011e6418;
  uStack_70 = 0;
  local_a0 = &LAB_011e6648;
  local_98 = FUN_011e6664;
  local_90 = &LAB_011e6668;
  puStack_88 = &LAB_011e667c;
  local_80 = param_1;
  if ((*(long *)(param_1 + 0x78) == 0) || (lVar7 = FUN_011e1a04(), lVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_011e3f78();
  }
  FUN_011e82fc(&local_a8,*(undefined8 *)(param_1 + 0x90));
  FUN_02c3865c(local_a8,0,0x6e4,uVar6);
  FUN_02c395d0(local_a8,1,uVar6,2,0,1);
  if (local_a8 != (long *)0x0) {
    lVar7 = local_a8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  FUN_011e630c(param_1,0x811db57163cf6cae,&local_a0);
  pcVar5 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar5)(&local_80);
  }
  return;
}


