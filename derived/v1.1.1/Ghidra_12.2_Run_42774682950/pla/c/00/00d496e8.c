/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d496e8; name: FUN_00d496e8
 */


void FUN_00d496e8(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  long *local_98;
  long alStack_90 [12];
  
  local_b0 = (undefined1 *)0x8ad48bca42a4661b;
  local_a8 = (code *)0x38cb1b6;
  local_a0 = (code *)0xf;
  local_98 = (long *)0x0;
  lVar1 = FUN_00d472a0(param_1 + 0x180,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (lVar1 == 0) {
    return;
  }
  pcVar2 = *(code **)(lVar1 + 1000);
  local_b0 = &LAB_00d63448;
  local_a8 = FUN_00d634f4;
  local_a0 = FUN_00d634f8;
  local_98 = (long *)&LAB_00d63504;
  alStack_90[0] = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_00d497a4:
    (*local_a0)(alStack_90,lVar1 + 0x400);
    *(code **)(lVar1 + 1000) = local_a8;
    *(long **)(lVar1 + 0x3f8) = local_98;
    *(code **)(lVar1 + 0x3f0) = local_a0;
    *(undefined8 *)(lVar1 + 0x3e0) = local_b0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x3f0) = 0;
    *(undefined8 *)(lVar1 + 0x3f8) = 0;
    *(undefined8 *)(lVar1 + 0x3e0) = 0;
    *(undefined8 *)(lVar1 + 1000) = 0;
    (*pcVar2)(lVar1 + 0x400);
    if (local_a0 != (code *)0x0) goto LAB_00d497a4;
  }
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(alStack_90);
  }
  pcVar2 = *(code **)(lVar1 + 0x718);
  local_b0 = &LAB_00d63510;
  local_a8 = FUN_00d635a8;
  local_a0 = FUN_00d635ac;
  local_98 = (long *)&LAB_00d635b8;
  alStack_90[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x720) = 0;
    *(undefined8 *)(lVar1 + 0x728) = 0;
    *(undefined8 *)(lVar1 + 0x710) = 0;
    *(undefined8 *)(lVar1 + 0x718) = 0;
    (*pcVar2)(lVar1 + 0x730);
    if (local_a0 == (code *)0x0) goto LAB_00d4986c;
  }
  (*local_a0)(alStack_90,lVar1 + 0x730);
  *(code **)(lVar1 + 0x718) = local_a8;
  *(long **)(lVar1 + 0x728) = local_98;
  *(code **)(lVar1 + 0x720) = local_a0;
  *(undefined8 *)(lVar1 + 0x710) = local_b0;
LAB_00d4986c:
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(alStack_90);
  }
  return;
}


