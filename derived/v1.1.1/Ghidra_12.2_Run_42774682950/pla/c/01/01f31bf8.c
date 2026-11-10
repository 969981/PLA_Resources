/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f31bf8; name: FUN_01f31bf8
 */


void FUN_01f31bf8(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  
  if ((*(long *)(param_1 + 0xb0) != 0) && (*(char *)(param_1 + 0x130) != '\0')) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0xa8) / 0x66) * 8);
    uVar9 = *(ulong *)(param_1 + 0xa8) % 0x66;
    if (lVar8 + uVar9 * 0x28 != 0) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008c4b3c(&local_80);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_00b63bec(&local_70,lVar8 + uVar9 * 0x28 + 0x10);
      local_60 = 0;
      FUN_01f31ed8(param_1 + 0x68);
      lVar8 = *(long *)(param_1 + 0x70);
      lVar6 = *(long *)(param_1 + 0x78);
      uVar9 = 0;
      if (lVar6 - lVar8 != 0) {
        uVar9 = (lVar6 - lVar8 >> 3) * 0x66 - 1;
      }
      uVar7 = *(long *)(param_1 + 0xb0) + *(long *)(param_1 + 0xa8);
      if (uVar9 == uVar7) {
        FUN_01f36178(param_1 + 0x68);
        uVar7 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0);
        lVar8 = *(long *)(param_1 + 0x70);
        lVar6 = *(long *)(param_1 + 0x78);
      }
      if (lVar6 == lVar8) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28;
      }
      FUN_01f370f8(param_1 + 0xb8,lVar8,&local_80);
      puVar4 = local_70;
      lVar8 = *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xb0) = lVar8 + 1;
      if ((lVar8 != -1) && (*(char *)(param_1 + 0x130) != '\0')) {
        uVar9 = *(ulong *)(param_1 + 0xa8) % 0x66;
        lVar8 = *(long *)(*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0xa8) / 0x66) * 8);
        if (lVar8 + uVar9 * 0x28 != 0) {
          *(byte *)(lVar8 + uVar9 * 0x28 + 0x20) = param_2 & 1;
        }
      }
      if (local_70 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_58 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_58);
        }
      }
      puVar4 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_58 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_58);
        }
      }
    }
  }
  return;
}


