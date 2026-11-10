/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021c1b4; name: FUN_0021c1b4
 */


void FUN_0021c1b4(uint *param_1,undefined8 param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  long local_50;
  long lStack_48;
  
  if (((DAT_0438edb8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0438edb8), iVar4 != 0)) {
    DAT_0438ee08 = 0xff;
    DAT_0438ee2c = 0xff;
    DAT_0438edfc = 0x3f8000003f800000;
    DAT_0438ee20 = 0x3f8000003f800000;
    DAT_0438ee30 = 0;
    DAT_0438edf0 = 0;
    DAT_0438edf8 = 0x3f800000;
    DAT_0438ee0c = 0;
    DAT_0438ee04 = 0x3f800000;
    DAT_0438ee28 = 0x3f800000;
    DAT_0438edd0 = 0;
    DAT_0438edd8 = 0;
    DAT_0438edc0 = 0;
    DAT_0438edc8 = 0;
    DAT_0438ede0 = 0;
    DAT_0438ede8 = 0;
    DAT_0438ee10 = 0;
    DAT_0438ee18 = 0x3f80000000000000;
    __cxa_guard_release(&DAT_0438edb8);
    pbVar6 = *(byte **)(param_1 + 0x2c);
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x2c);
  }
  if ((pbVar6 != (byte *)0x0) && (0 < (int)param_1[0x26])) {
    lVar8 = *(long *)(pbVar6 + 0x20);
    uVar11 = lVar8 + 0x7fU & -lVar8;
    uVar10 = (lVar8 + (uVar11 << ((ulong)*(byte *)((long)param_1 + 0xb9) & 0x3f))) - 1 & -lVar8;
    plVar1 = &DAT_0438edc0;
    if (param_3 != (long *)0x0) {
      plVar1 = param_3;
    }
    if ((*pbVar6 & 1) == 0) {
      uVar9 = *(ulong *)(pbVar6 + 0x40);
      *(ulong *)(pbVar6 + 0x40) = uVar9 + uVar10;
      *param_1 = (uint)uVar9;
      lVar8 = *(long *)(*(long *)(param_1 + 0x2c) + 0x38);
    }
    else {
      puVar7 = *(ulong **)(pbVar6 + 0x40);
      do {
        uVar9 = *puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *puVar7 = uVar9 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = (uint)uVar9;
      lVar8 = *(long *)(*(long *)(param_1 + 0x2c) + 0x38);
    }
    if (lVar8 != 0) {
      lVar8 = lVar8 + (uVar9 & 0xffffffff);
      if (*(char *)((long)param_1 + 0xb9) != '\0') {
        local_b8 = *plVar1;
        local_b0 = plVar1[1];
        lStack_a8 = plVar1[2];
        local_a0 = plVar1[3];
        lStack_98 = plVar1[4];
        local_90 = plVar1[5];
        lStack_88 = plVar1[6];
        lStack_68 = plVar1[10];
        local_50 = plVar1[0xd];
        lStack_48 = plVar1[0xe];
        local_60 = (undefined4)plVar1[0xb];
        local_80 = plVar1[5];
        local_78 = CONCAT44((int)((ulong)plVar1[8] >> 0x20),(int)plVar1[6]);
        local_70 = CONCAT71((int7)((ulong)plVar1[9] >> 8),0xff);
        local_54 = *(undefined4 *)((long)plVar1 + 0x54);
        uStack_5c = (undefined4)*(undefined8 *)((long)plVar1 + 0x4c);
        uStack_58 = (undefined4)((ulong)*(undefined8 *)((long)plVar1 + 0x4c) >> 0x20);
        FUN_0021c3f0(param_1,lVar8,param_2,&local_b8);
        lVar8 = *(long *)(*(long *)(param_1 + 0x2c) + 0x38) + uVar11 + *param_1;
      }
      FUN_0021c3f0(param_1,lVar8,param_2,plVar1);
    }
    FUN_0021c56c(param_1,plVar1,param_4 & 1,param_5 & 1);
    uVar5 = *(uint *)(plVar1 + 0xe);
    param_1[2] = uVar5;
    if (*plVar1 != 0) {
      uVar5 = uVar5 | 2;
      param_1[2] = uVar5;
    }
    if (plVar1[1] != 0) {
      param_1[2] = uVar5 | 4;
    }
  }
  return;
}


