/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c07228; name: FUN_02c07228
 */


undefined8 FUN_02c07228(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *local_98;
  undefined7 uStack_90;
  undefined4 local_89;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  long *local_28;
  
  uVar5 = 0;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x1a) & 0xc) == 4)) {
    local_50 = NEON_fmov(0x3f800000,4);
    local_70 = DAT_03aae460;
    uStack_68 = DAT_03aae468;
    local_60 = 0;
    uStack_58 = 0x40ffff00000000;
    local_48 = 0xffffffff3f800000;
    local_40[0] = param_1 - (long)local_40;
    local_40[1] = 0;
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(param_1 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_02fa27bc(&local_70,&DAT_04349b80);
    uStack_90 = 1;
    local_84 = 2;
    local_89 = 0x100;
    local_80 = 0;
    uStack_78 = 0;
    local_98 = &local_70;
    FUN_02f6ce18(&local_28,&local_98);
    plVar1 = local_28;
    local_28 = (long *)0x0;
    plVar4 = (long *)*param_2;
    *param_2 = (long)plVar1;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((lVar6 + -1 == 0) && ((**(code **)(*plVar4 + 0x18))(), local_28 != (long *)0x0)) &&
         (local_28[1] != 0)) {
        plVar1 = local_28 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_28 + 0x18))();
        }
      }
    }
    if (((local_40[0] != 0) &&
        (plVar1 = (long *)(local_40[0] + (long)local_40), plVar1 != (long *)0x0)) &&
       (*(long *)((long)local_40 + local_40[0] + 8) != 0)) {
      plVar4 = (long *)((long)local_40 + local_40[0] + 0x10);
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))();
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


