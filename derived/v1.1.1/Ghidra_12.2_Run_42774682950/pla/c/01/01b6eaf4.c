/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6eaf4; name: FUN_01b6eaf4
 */


void FUN_01b6eaf4(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 in_d3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5f;
  long local_50;
  long *local_48;
  long local_40;
  long *local_38;
  
  local_48 = &local_40;
  local_50 = param_2;
  local_40 = param_1;
  FUN_01b787a4(&local_e0,&local_50);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_5f = 0x1010101;
  local_60 = 0;
  local_78 = 0;
  local_c0 = local_e0;
  uStack_b8 = uStack_d8;
  local_70 = *(undefined8 *)PTR_DAT_0437a120;
  uStack_68 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  local_b0 = local_d0;
  local_a8 = (long *)0x0;
  if (plStack_c8 != (long *)0x0) {
    (**(code **)(*plStack_c8 + 0x18))(plStack_c8);
  }
  local_a8 = plStack_c8;
  local_a0 = *(undefined8 *)(param_1 + 8);
  FUN_009c69bc(&local_38,param_1);
  (**(code **)(*local_38 + 0x40))();
  local_90 = in_d3;
  if (local_38 != (long *)0x0) {
    lVar5 = local_38[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    (**(code **)(*plStack_c8 + 0x20))(plStack_c8);
  }
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  FUN_01b770a4(local_40,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  return;
}


