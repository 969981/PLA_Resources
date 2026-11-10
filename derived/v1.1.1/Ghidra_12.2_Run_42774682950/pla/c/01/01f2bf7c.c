/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2bf7c; name: FUN_01f2bf7c
 */


void FUN_01f2bf7c(undefined1 *param_1,long param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  ulong *local_d0;
  undefined8 uStack_c8;
  ulong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  char local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulong local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_2 + 0x130) != '\0') && (*(long *)(param_2 + 0xb0) != 0)) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x70) + (*(ulong *)(param_2 + 0xa8) / 0x66) * 8);
    uVar9 = *(ulong *)(param_2 + 0xa8) % 0x66;
    if (lVar8 + uVar9 * 0x28 != 0) {
      local_90 = 0;
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_008c4b3c(&local_88);
      lVar8 = lVar8 + uVar9 * 0x28;
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00b63bec(&local_78,lVar8 + 0x10);
      local_68 = *(undefined1 *)(lVar8 + 0x20);
      local_a0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_90 = '\x01';
      local_c0 = (ulong *)0x0;
      uStack_b8 = 0;
      local_d0 = (ulong *)0x0;
      uStack_c8 = 0;
      FUN_008c4b3c(&local_d0,&local_88);
      FUN_00b63bec(&local_c0,&local_78);
      FUN_01f28050(local_60,&local_88);
      if ((char)local_60[0] == '\0') {
        FUN_01f281f0(local_60,&local_88);
        cVar3 = (char)local_60[0];
        if ((char)local_60[0] != '\0') {
          local_60[0] = local_60[0] & 0xffffffffffffff00;
        }
        bVar10 = -(cVar3 == '\0');
        local_50 = CONCAT17((byte)((ulong)local_50 >> 0x38) & ~bVar10,
                            CONCAT16((byte)((ulong)local_50 >> 0x30) & ~bVar10,
                                     CONCAT15((byte)((ulong)local_50 >> 0x28) & ~bVar10,
                                              CONCAT14((byte)((ulong)local_50 >> 0x20) & ~bVar10,
                                                       CONCAT13((byte)((ulong)local_50 >> 0x18) &
                                                                ~bVar10,CONCAT12((byte)((ulong)
                                                  local_50 >> 0x10) & ~bVar10,
                                                  CONCAT11((byte)((ulong)local_50 >> 8) & ~bVar10,
                                                           (byte)local_50 & ~bVar10)))))));
        uStack_48 = CONCAT17((byte)((ulong)uStack_48 >> 0x38) & ~bVar10,
                             CONCAT16((byte)((ulong)uStack_48 >> 0x30) & ~bVar10,
                                      CONCAT15((byte)((ulong)uStack_48 >> 0x28) & ~bVar10,
                                               CONCAT14((byte)((ulong)uStack_48 >> 0x20) & ~bVar10,
                                                        CONCAT13((byte)((ulong)uStack_48 >> 0x18) &
                                                                 ~bVar10,CONCAT12((byte)((ulong)
                                                  uStack_48 >> 0x10) & ~bVar10,
                                                  CONCAT11((byte)((ulong)uStack_48 >> 8) & ~bVar10,
                                                           (byte)uStack_48 & ~bVar10)))))));
      }
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_a0 = local_68;
      local_b0 = local_50;
      uStack_a8 = uStack_48;
      FUN_0087fcf0(param_1 + 0x10,&local_d0);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_00b6081c(param_1 + 0x20,&local_c0);
      puVar5 = local_c0;
      *param_1 = 1;
      param_1[0x40] = local_a0;
      *(undefined8 *)(param_1 + 0x30) = local_b0;
      *(undefined8 *)(param_1 + 0x38) = uStack_a8;
      if (local_c0 != (ulong *)0x0) {
        puVar1 = local_c0 + 1;
        do {
          iVar7 = (int)*puVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(int *)puVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_60[0] = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,local_60);
        }
      }
      puVar5 = local_d0;
      if (local_d0 != (ulong *)0x0) {
        puVar1 = local_d0 + 1;
        do {
          iVar7 = (int)*puVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(int *)puVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_60[0] = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,local_60);
        }
      }
      puVar6 = local_78;
      if (local_90 == '\0') {
        return;
      }
      if (local_78 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_78 + 1);
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_d0 = (ulong *)*puVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_d0);
        }
      }
      puVar6 = local_88;
      if (local_88 == (undefined8 *)0x0) {
        return;
      }
      piVar2 = (int *)(local_88 + 1);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 != 0) {
        return;
      }
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_d0 = (ulong *)*puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_d0);
      return;
    }
  }
  *param_1 = 0;
  return;
}


