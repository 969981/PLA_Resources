/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01133e60; name: FUN_01133e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01133e60(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ushort *puVar11;
  ushort uVar12;
  long *plVar13;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_70;
  uint6 uStack_6f;
  undefined2 local_69;
  undefined6 uStack_67;
  uint3 local_60;
  undefined3 uStack_5d;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  uVar8 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar8 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    iVar6 = FUN_02c6849c();
    sVar5 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
    if (iVar6 < 0x225) {
      if ((iVar6 != 0x3b) && (iVar6 != 0x65)) goto LAB_01133ee8;
    }
    else if ((iVar6 != 0x225) && (iVar6 != 0x2c9)) {
      if ((iVar6 == 900) && (sVar5 == 1)) {
        return;
      }
      goto LAB_01133ee8;
    }
    if (sVar5 != 2) {
LAB_01133ee8:
      *(long *)(param_1 + 0x1f440) = param_2;
      uVar7 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
      if ((int)uVar7 < 0x3d5) {
        lVar10 = param_1 + (ulong)uVar7 * 0x58;
        *(uint *)(lVar10 + 0xdc) = *(uint *)(lVar10 + 0xdc) | 1;
        if (*(ushort *)(lVar10 + 0xe8) == 0) {
          uVar12 = *(ushort *)(param_1 + 0x72);
          if (uVar12 >> 5 < 0x753) {
            uVar12 = uVar12 + 1;
            *(ushort *)(param_1 + 0x72) = uVar12;
          }
          *(ushort *)(lVar10 + 0xe8) = uVar12;
        }
      }
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar10 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar10;
      plVar13 = _DAT_000001c8;
      plVar9 = *(long **)(lVar10 + 0xd0);
      if (plVar9 == (long *)0x0) {
        if (_DAT_000001c8 != (long *)0x0) {
          plVar9 = _DAT_000001c8 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = (int)*plVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        plVar1 = plVar9 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar13 = (long *)plVar9[0x39];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      FUN_013f7888(*(undefined8 *)(plVar13[0xb] + 8),uVar7,&local_50);
      if ((int)uVar7 < 0x3d5) {
        uVar8 = (ulong)uVar7;
        lVar10 = param_1 + 0x6c;
        if ((local_50 != 0) && (local_50 == param_3)) {
          puVar11 = (ushort *)(lVar10 + uVar8 * 0x58 + 0x80);
          uVar12 = *puVar11;
          if (uVar12 >> 5 < 0x753) {
            iVar6 = uVar12 + 1;
            *puVar11 = (ushort)iVar6;
            uStack_5d = 0;
            uStack_5a = 0;
            uStack_58 = 0;
            uStack_56 = 0;
            local_78[0] = 0;
            local_70 = 0;
            uStack_67 = 0;
            uStack_6f = (uint6)local_60;
            local_69 = 0;
            local_74 = param_3;
            FUN_0113442c(param_1,1,iVar6,local_78);
          }
        }
        if ((local_4c != 0) && (local_4c == param_3)) {
          puVar11 = (ushort *)(lVar10 + uVar8 * 0x58 + 0x82);
          uVar12 = *puVar11;
          if (uVar12 >> 5 < 0x753) {
            iVar6 = uVar12 + 1;
            *puVar11 = (ushort)iVar6;
            uStack_5d = 0;
            uStack_5a = 0;
            uStack_58 = 0;
            uStack_56 = 0;
            local_78[0] = 0;
            local_70 = 0;
            uStack_67 = 0;
            uStack_6f = (uint6)local_60;
            local_69 = 0;
            local_74 = param_3;
            FUN_0113442c(param_1,1,iVar6,local_78);
          }
        }
        if ((local_48 != 0) && (local_48 == param_3)) {
          puVar11 = (ushort *)(lVar10 + uVar8 * 0x58 + 0x84);
          uVar12 = *puVar11;
          if (uVar12 >> 5 < 0x753) {
            iVar6 = uVar12 + 1;
            *puVar11 = (ushort)iVar6;
            uStack_5d = 0;
            uStack_5a = 0;
            uStack_58 = 0;
            uStack_56 = 0;
            local_78[0] = 0;
            local_70 = 0;
            uStack_67 = 0;
            uStack_6f = (uint6)local_60;
            local_69 = 0;
            local_74 = param_3;
            FUN_0113442c(param_1,1,iVar6,local_78);
          }
        }
        if ((local_44 != 0) && (local_44 == param_3)) {
          puVar11 = (ushort *)(lVar10 + uVar8 * 0x58 + 0x86);
          uVar12 = *puVar11;
          if (uVar12 >> 5 < 0x753) {
            iVar6 = uVar12 + 1;
            *puVar11 = (ushort)iVar6;
            uStack_5d = 0;
            uStack_5a = 0;
            uStack_58 = 0;
            uStack_56 = 0;
            local_78[0] = 0;
            local_70 = 0;
            uStack_67 = 0;
            uStack_6f = (uint6)local_60;
            local_69 = 0;
            local_74 = param_3;
            FUN_0113442c(param_1,1,iVar6,local_78);
          }
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar9 = plVar13 + 10;
        do {
          iVar6 = (int)*plVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      return;
    }
  }
  return;
}


