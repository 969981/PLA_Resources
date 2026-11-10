/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b76fa0; name: FUN_01b76fa0
 */


void FUN_01b76fa0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 in_d3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3f;
  long *local_28;
  
  local_70 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_50 = *(undefined8 *)PTR_DAT_0437a120;
  uStack_48 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_3f = 0x1010101;
  local_a0 = *param_2;
  local_98 = param_2[1];
  local_90 = param_2[2];
  local_88 = (long *)0x0;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = plVar6;
  FUN_009c69bc(&local_28,param_1);
  (**(code **)(*local_28 + 0x40))();
  local_70 = in_d3;
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_01b770a4(param_1,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return;
}


