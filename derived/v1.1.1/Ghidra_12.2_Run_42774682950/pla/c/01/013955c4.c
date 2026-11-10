/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013955c4; name: FUN_013955c4
 */


void FUN_013955c4(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  uStack_50 = *param_1;
  lVar9 = param_1[1];
  local_38 = 0;
  local_58 = 0;
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  local_48 = 0x5c0b81702e05c0;
  uStack_40 = 0;
  lVar10 = param_1[2];
  if (lVar9 != lVar10) {
    do {
      uVar5 = FUN_01121ee0(local_28,lVar9);
      if ((uVar5 & 1) == 0) {
        FUN_0139550c(&local_68,lVar9);
      }
      lVar9 = lVar9 + 0x2c8;
    } while (lVar10 != lVar9);
    if (local_68 != pvStack_60) {
      iVar4 = 0;
      pvVar6 = local_68;
      do {
        pbVar1 = (byte *)((long)pvVar6 + 0x12);
        pvVar6 = (void *)((long)pvVar6 + 0x2c8);
        uVar3 = (uint)*pbVar1;
        if (*pbVar1 < 2) {
          uVar3 = 1;
        }
        iVar4 = iVar4 + uVar3;
      } while (pvStack_60 != pvVar6);
      uVar3 = FUN_013957b0(iVar4 + -1);
      if (local_68 != pvStack_60) {
        pvVar6 = local_68;
        uVar8 = 0;
        do {
          uVar7 = (uint)*(byte *)((long)pvVar6 + 0x12);
          if (*(byte *)((long)pvVar6 + 0x12) < 2) {
            uVar7 = 1;
          }
          if ((uVar8 <= uVar3) && (uVar3 < uVar8 + uVar7)) {
            cVar2 = *(char *)(param_1 + 8);
            memcpy(param_1 + 9,pvVar6,0x2c8);
            if (cVar2 == '\0') {
              *(undefined1 *)(param_1 + 8) = 1;
            }
            uVar3 = FUN_01397210(param_1 + 9);
            *(uint *)((long)param_1 + 0x314) = ~uVar3 & 1;
            break;
          }
          pvVar6 = (void *)((long)pvVar6 + 0x2c8);
          uVar8 = uVar8 + uVar7;
        } while (pvStack_60 != pvVar6);
      }
      goto LAB_01395644;
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
LAB_01395644:
  FUN_01395c2c(&local_68);
  if ((local_28 != (long *)0x0) && (uVar5 = FUN_02a43a5c(local_28[0xb]), (uVar5 & 1) != 0)) {
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return;
}


