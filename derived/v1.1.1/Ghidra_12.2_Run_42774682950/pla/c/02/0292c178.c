/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292c178; name: FUN_0292c178
 */


void FUN_0292c178(long param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined4 uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *local_78;
  char *pcStack_70;
  size_t local_68;
  long *local_60;
  undefined8 local_58;
  
  puVar12 = (ushort *)((long)param_3 - (long)*param_3);
  uVar3 = *puVar12;
  if ((uVar3 < 5) || ((ulong)puVar12[2] == 0)) {
    lVar15 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + (ulong)puVar12[2]);
    lVar15 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar14 = &DAT_cbf29ce484222645;
  local_68 = strlen((char *)(lVar15 + 4));
  bVar2 = *(byte *)(lVar15 + 4);
  if (bVar2 != 0) {
    pbVar10 = (byte *)(lVar15 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  local_60 = (long *)0x0;
  if (uVar3 < 7) {
    uVar11 = 0;
  }
  else {
    if ((ulong)puVar12[3] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)((long)param_3 + (ulong)puVar12[3]);
    }
    if (8 < uVar3) {
      if ((ulong)puVar12[4] == 0) {
        uVar13 = 3;
      }
      else {
        uVar13 = *(undefined4 *)((long)param_3 + (ulong)puVar12[4]);
      }
      if (uVar3 < 0xb) {
        bVar6 = false;
        bVar5 = false;
        bVar7 = false;
      }
      else {
        if ((ulong)puVar12[5] == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((long)param_3 + (ulong)puVar12[5]) != '\0';
        }
        if (uVar3 < 0xd) {
          bVar6 = false;
          bVar7 = false;
        }
        else {
          if ((ulong)puVar12[6] == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)((long)param_3 + (ulong)puVar12[6]) != '\0';
          }
          if ((uVar3 < 0xf) || ((ulong)puVar12[7] == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)param_3 + (ulong)puVar12[7]) != '\0';
          }
        }
      }
      goto LAB_0292c2e8;
    }
  }
  bVar6 = false;
  bVar5 = false;
  bVar7 = false;
  uVar13 = 3;
LAB_0292c2e8:
  local_78 = puVar14;
  pcStack_70 = (char *)(lVar15 + 4);
  FUN_00befc74(param_1,&local_78);
  *(undefined4 *)(param_1 + 8) = uVar11;
  *(undefined4 *)(param_1 + 0xc) = uVar13;
  *(bool *)(param_1 + 0x10) = bVar5;
  *(bool *)(param_1 + 0x11) = bVar6;
  *(bool *)(param_1 + 0x12) = bVar7;
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar8 != 0))
  {
    local_58 = FUN_00938550();
    puVar4 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_58);
    FUN_00100250(PTR_LAB_0437a8d8,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar9 = *(long **)PTR_DAT_0437a7d0;
  *(long **)(param_1 + 0x18) = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x34) = 4;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


