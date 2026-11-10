/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091ebf8; name: FUN_0091ebf8
 */


bool FUN_0091ebf8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if ((*(byte *)(param_2 + 0xa4) & 1) != 0) {
    return false;
  }
  uVar6 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xf);
  if (uVar6 < 6) {
    local_48 = 0x63e2672f9e43a54e;
    pcStack_40 = "battle_logic";
    local_38 = 0xc;
    local_30 = (long *)0x0;
    local_68 = 0x348c0bd899b7da87;
    pcStack_60 = "lowLevelAllowancePer_0";
    local_58 = 0x16;
    local_50 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar8;
    FUN_00d7d9e4(&local_28,uVar8,&local_48);
    if (local_28 == (long *)0x0) {
LAB_0091ef94:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00d78f50(local_28,&local_68);
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          bVar5 = iVar7 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0091ede8:
        if (bVar5) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
  }
  else if (uVar6 < 0xb) {
    local_48 = 0x63e2672f9e43a54e;
    pcStack_40 = "battle_logic";
    local_38 = 0xc;
    local_30 = (long *)0x0;
    local_68 = 0x348c0ad899b7d8d4;
    pcStack_60 = "lowLevelAllowancePer_1";
    local_58 = 0x16;
    local_50 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar8;
    FUN_00d7d9e4(&local_28,uVar8,&local_48);
    if (local_28 == (long *)0x0) goto LAB_0091ef94;
    uVar6 = FUN_00d78f50(local_28,&local_68);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        bVar5 = iVar7 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_0091ede8;
    }
  }
  else {
    if (0xf < uVar6) {
      uVar6 = 0;
      goto LAB_0091ec3c;
    }
    local_48 = 0x63e2672f9e43a54e;
    pcStack_40 = "battle_logic";
    local_38 = 0xc;
    local_30 = (long *)0x0;
    local_68 = 0x348c0dd899b7dded;
    pcStack_60 = "lowLevelAllowancePer_2";
    local_58 = 0x16;
    local_50 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar8;
    FUN_00d7d9e4(&local_28,uVar8,&local_48);
    if (local_28 == (long *)0x0) goto LAB_0091ef94;
    uVar6 = FUN_00d78f50(local_28,&local_68);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        bVar5 = iVar7 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_0091ede8;
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
LAB_0091ec3c:
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0xc0);
  uVar10 = *(ulong *)(lVar9 + 0x70);
  uVar11 = *(ulong *)(lVar9 + 0x78);
  do {
    uVar12 = uVar10 ^ uVar11;
    iVar7 = (int)uVar11;
    uVar11 = uVar12 >> 0x1b | uVar12 << 0x25;
    uVar2 = (int)uVar10 + iVar7 & 0x7f;
    uVar10 = uVar12 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar12 << 0x10;
  } while (99 < uVar2);
  *(ulong *)(lVar9 + 0x70) = uVar10;
  *(ulong *)(lVar9 + 0x78) = uVar11;
  return uVar2 < uVar6;
}


