/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01133b28; name: FUN_01133b28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01133b28(long param_1,uint param_2,int param_3,byte param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ushort *puVar8;
  ushort uVar9;
  long *plVar10;
  ulong uVar11;
  byte local_70 [4];
  undefined4 local_6c;
  undefined1 local_68;
  uint6 uStack_67;
  undefined2 local_61;
  undefined6 uStack_5f;
  uint3 local_58;
  undefined3 uStack_55;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4e;
  byte local_44;
  byte local_43;
  byte local_42;
  
  uVar11 = (ulong)param_2;
  if ((int)param_2 < 0x3d5) {
    lVar7 = param_1 + uVar11 * 0x58;
    *(uint *)(lVar7 + 0xdc) = *(uint *)(lVar7 + 0xdc) | 1;
    if (*(ushort *)(lVar7 + 0xe8) == 0) {
      uVar9 = *(ushort *)(param_1 + 0x72);
      if (uVar9 >> 5 < 0x753) {
        uVar9 = uVar9 + 1;
        *(ushort *)(param_1 + 0x72) = uVar9;
      }
      *(ushort *)(lVar7 + 0xe8) = uVar9;
    }
  }
  if ((param_3 != 0) && (param_4 == 0x12)) {
    param_4 = FUN_02c8dc80(param_3);
  }
  if (param_4 != 0x12) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar7 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar7;
    plVar10 = _DAT_000001c8;
    plVar6 = *(long **)(lVar7 + 0xd0);
    if (plVar6 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar6 = _DAT_000001c8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *(int *)plVar6 = (int)*plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      plVar1 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = (long *)plVar6[0x39];
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 10;
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
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    FUN_013f7a60(*(undefined8 *)(plVar10[0xb] + 8),uVar11,&local_44);
    if ((int)param_2 < 0x3d5) {
      lVar7 = param_1 + 0x6c;
      if ((local_44 != 0x12) && (local_44 == param_4)) {
        puVar8 = (ushort *)(lVar7 + uVar11 * 0x58 + 0x88);
        uVar9 = *puVar8;
        if (uVar9 >> 5 < 0x753) {
          iVar5 = uVar9 + 1;
          *puVar8 = (ushort)iVar5;
          uStack_55 = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
          local_6c = 0;
          local_68 = 0;
          uStack_5f = 0;
          uStack_67 = (uint6)local_58;
          local_61 = 0;
          local_70[0] = param_4;
          FUN_0113442c(param_1,2,iVar5,local_70);
        }
      }
      if ((local_43 != 0x12) && (local_43 == param_4)) {
        puVar8 = (ushort *)(lVar7 + uVar11 * 0x58 + 0x8a);
        uVar9 = *puVar8;
        if (uVar9 >> 5 < 0x753) {
          iVar5 = uVar9 + 1;
          *puVar8 = (ushort)iVar5;
          uStack_55 = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
          local_6c = 0;
          local_68 = 0;
          uStack_5f = 0;
          uStack_67 = (uint6)local_58;
          local_61 = 0;
          local_70[0] = param_4;
          FUN_0113442c(param_1,2,iVar5,local_70);
        }
      }
      if ((local_42 != 0x12) && (local_42 == param_4)) {
        puVar8 = (ushort *)(lVar7 + uVar11 * 0x58 + 0x8c);
        uVar9 = *puVar8;
        if (uVar9 >> 5 < 0x753) {
          iVar5 = uVar9 + 1;
          *puVar8 = (ushort)iVar5;
          uStack_55 = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
          local_6c = 0;
          local_68 = 0;
          uStack_5f = 0;
          uStack_67 = (uint6)local_58;
          local_61 = 0;
          local_70[0] = param_4;
          FUN_0113442c(param_1,2,iVar5,local_70);
        }
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar6 = plVar10 + 10;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return;
}


