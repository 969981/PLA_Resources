/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a4cf4; name: FUN_002a4cf4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a4cf4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_180 [8];
  undefined8 local_178;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *plStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *plStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [184];
  long local_40;
  long lStack_38;
  undefined8 local_28;
  
  if (param_2[1] == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)std::__shared_weak_count::lock();
    if ((plVar4 != (long *)0x0) && (*param_2 != 0)) {
      FUN_006de1d0(param_1);
      goto LAB_002a4e5c;
    }
  }
  uVar6 = *(undefined8 *)(_DAT_00000010 + 400);
  plStack_148 = (long *)FUN_00612290();
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  plStack_128 = (long *)FUN_00612290();
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_108 = (long *)FUN_00612290();
  uStack_100 = 0;
  local_110 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_002a4eb0(auStack_180,0x290541);
  FUN_002a5138(auStack_f8,&local_160,0xe,"UserContext already disposed.",auStack_180);
                    /* try { // try from 002a4d9c to 002a4dab has its CatchHandler @ 002a4ea0 */
  local_28 = uVar6;
  FUN_002a6aa4(&local_40,&local_28,auStack_f8);
  *param_1 = local_40;
  param_1[1] = lStack_38;
  if (local_40 != 0) {
    *(undefined1 *)(local_40 + 8) = 1;
  }
  FUN_00290f08(auStack_f8);
  FUN_02767254(auStack_180,local_178);
  if ((local_120 & 1) != 0) {
    (**(code **)(*local_108 + 0x18))(local_108,local_110,local_120 & 0xfffffffffffffffe,1);
  }
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))(plStack_128,local_130,local_140 & 0xfffffffffffffffe,1);
  }
  if ((local_160 & 1) != 0) {
    (**(code **)(*plStack_148 + 0x18))(plStack_148,local_150,local_160 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_002a4e5c:
  plVar1 = plVar4 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


