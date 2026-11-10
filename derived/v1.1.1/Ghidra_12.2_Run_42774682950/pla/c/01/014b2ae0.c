/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b2ae0; name: FUN_014b2ae0
 */


undefined8 FUN_014b2ae0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (((*(long *)(param_1 + 0x30) == 0) && (lVar10 = *(long *)(param_1 + 8), lVar10 != 0)) &&
       (*(char *)(lVar10 + 0x1e1) != '\0')) {
      *(ulong *)(param_1 + 0x30) =
           (long)*(uint **)(lVar10 + 0x250) + (ulong)**(uint **)(lVar10 + 0x250);
      puVar5 = PTR_DAT_04379660;
      local_60 = 0xf;
      local_58 = (long *)0x0;
      local_70 = 0xd775f810c84a8de5;
      pcStack_68 = "appli_staffroll";
      local_90 = 0xf5d945ce91eea8de;
      pcStack_88 = "startDelay";
      local_80 = 10;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar7 = PTR_DAT_04379670;
      puVar6 = PTR_DAT_04379668;
      uVar9 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar9;
      FUN_00d7d9e4(&local_48,uVar9,&local_70);
      if (local_48 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_00d7905c(local_48,&local_90);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x48) = uVar12;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xf;
      local_58 = (long *)0x0;
      local_90 = 0x3e10ea5bf89fec27;
      pcStack_88 = "scrollSpeed";
      local_70 = 0xd775f810c84a8de5;
      pcStack_68 = "appli_staffroll";
      local_80 = 0xb;
      local_78 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar9 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar9;
      FUN_00d7d9e4(&local_48,uVar9,&local_70);
      if (local_48 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_00d7905c(local_48,&local_90);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x40) = uVar12;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 0xf;
      local_58 = (long *)0x0;
      local_90 = 0x89f3e9a053e754f5;
      pcStack_88 = "textHeight";
      local_70 = 0xd775f810c84a8de5;
      pcStack_68 = "appli_staffroll";
      local_80 = 10;
      local_78 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar9 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar9;
      FUN_00d7d9e4(&local_48,uVar9,&local_70);
      if (local_48 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_00d7905c(local_48,&local_90);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x44) = uVar12;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      piVar11 = *(int **)(param_1 + 0x30);
      uVar9 = 1;
      puVar2 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (4 - (long)*piVar11)));
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((long)puVar2 + (ulong)*puVar2);
      *(undefined1 *)(param_1 + 0x54) = 1;
      *(float *)(param_1 + 0x4c) =
           (*(float *)(param_1 + 0x44) + 1080.0) / *(float *)(param_1 + 0x40);
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}


