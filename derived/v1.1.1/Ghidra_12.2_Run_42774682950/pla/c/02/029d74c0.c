/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d74c0; name: FUN_029d74c0
 */


undefined8 FUN_029d74c0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 auStack_780 [16];
  byte local_770;
  undefined1 local_76f;
  undefined2 uStack_76e;
  undefined1 uStack_76c;
  undefined1 uStack_76b;
  undefined2 uStack_76a;
  uint uStack_768;
  undefined4 uStack_764;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined2 local_74c;
  undefined1 uStack_74a;
  undefined1 uStack_749;
  ulong local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  int local_33c;
  
  lVar10 = *(long *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lVar10 + 0x58) + 0x1041) >> 2 & 1) != 0) {
    bVar4 = *(byte *)(param_2 + 0x7d);
    uVar12 = (ulong)bVar4;
    cVar5 = '\x03';
    if (0x17 < bVar4) {
      cVar5 = (bVar4 < 0x1e) << 2;
    }
    cVar2 = '\x01';
    if (0x11 < bVar4) {
      cVar2 = cVar5;
    }
    cVar5 = '\x02';
    if (0xb < bVar4) {
      cVar5 = cVar2;
    }
    cVar2 = '\0';
    if (5 < bVar4) {
      cVar2 = cVar5;
    }
    if ((*(char *)(lVar10 + 0x130) != cVar2) && ((*(byte *)(param_2 + 0x38b) >> 3 & 1) == 0)) {
      local_76f = 1;
      uStack_76e._0_1_ = 0;
      uStack_76e._1_1_ = 1;
      uStack_76c = 0;
      local_748 = local_748 & 0xffffffff00000000;
      uStack_76b = 0;
      local_758 = 0;
      uStack_754 = 0;
      uStack_750 = 0;
      local_74c = 0;
      uStack_74a = 0;
      uStack_749 = 0;
      uStack_768 = 0;
      uStack_764 = 0;
      local_760 = 0;
      uStack_75c = 0;
      lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0xc80);
      local_770 = bVar4;
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x10) + 8) + uVar12 * 8 + 0x120) + 0x87)
           >> 5 & 1) == 0) {
        FUN_029e3c38(lVar9,&local_770);
        lVar10 = *(long *)(param_1 + 8);
      }
      plVar13 = *(long **)(lVar10 + 0x1e8);
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_009463f0(&local_770,plVar13 + 0xc);
      FUN_00945e04(&local_770);
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      uVar8 = FUN_029506a8(param_2,0xe);
      local_33c = (uVar8 & 0xffff) * local_33c;
      uStack_76e = (short)((ulong)((long)local_33c * 0x51eb851f) >> 0x25) -
                   (short)(local_33c >> 0x1f);
      local_74c = 0;
      uStack_74a = 0;
      uStack_749 = 0;
      uStack_754 = 0;
      uStack_750 = 0;
      uStack_75c = 0;
      local_758 = 0;
      uStack_764 = 0;
      local_760 = 0;
      uStack_76c = 0;
      uStack_76b = 0;
      uStack_76a = 0;
      uStack_768 = 0;
      local_770 = bVar4;
      FUN_029f2d28(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xf40),auStack_780,&local_770);
      uVar11 = (ulong)*(byte *)(param_2 + 0x368);
      if (uVar11 != 0) {
        lVar10 = 0;
        puVar14 = (undefined1 *)(param_2 + 0x305);
        lVar9 = uVar11 - 1;
        while( true ) {
          uStack_76e._0_1_ = 0;
          uStack_76e._1_1_ = 0;
          local_748 = local_748 & 0xffffffff00000000;
          local_758 = 0;
          uStack_754 = 0;
          uStack_750 = 0;
          local_74c = 0;
          uStack_74a = 0;
          uStack_749 = 0;
          uStack_768 = 0;
          uStack_764 = 0;
          local_760 = 0;
          uStack_75c = 0;
          local_76f = (undefined1)lVar10;
          if (((uint)lVar10 & 0xff) < (uint)uVar11) {
            uStack_76e._0_1_ = *puVar14;
          }
          uStack_76c = 1;
          local_770 = bVar4;
          FUN_029e6a60(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xf20),auStack_780,&local_770);
          if (lVar9 == lVar10) break;
          uVar11 = (ulong)*(byte *)(param_2 + 0x368);
          lVar10 = lVar10 + 1;
          puVar14 = puVar14 + 0x1c;
        }
      }
      lVar10 = 0;
      do {
        uVar3 = *(undefined4 *)((long)&DAT_03a8052c + lVar10);
        uStack_750 = 0;
        local_74c = 0;
        local_760 = 0;
        uStack_75c = 0;
        local_758 = 0;
        uStack_754 = 0;
        uStack_764 = 0;
        local_730 = 0;
        uStack_728 = 0;
        local_740 = 0;
        uStack_738 = 0;
        uStack_76c = (undefined1)uVar3;
        uStack_76b = (undefined1)((uint)uVar3 >> 8);
        uStack_76a = (undefined2)((uint)uVar3 >> 0x10);
        uStack_768 = (uint)bVar4;
        uStack_74a = 1;
        local_748 = 0x1000000;
        local_770 = bVar4;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_780,&local_770);
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x34);
      lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xee0);
      if (*(short *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x10) + 8) + uVar12 * 8 + 0x120) + 0x74)
          != 0) {
        lVar10 = *(long *)(lVar10 + 0x20);
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 8) + uVar12 * 8 +
                         0x120);
        if (*(char *)(lVar9 + 0x2e4) != '\x01') {
          *(undefined1 *)(lVar9 + 0x2e4) = 1;
          *(undefined1 *)(lVar9 + 0x2e7) = 0;
        }
        if (*(char *)(lVar9 + 0x2e5) != '\x01') {
          *(undefined1 *)(lVar9 + 0x2e5) = 1;
          *(undefined1 *)(lVar9 + 0x2e8) = 0;
        }
        if (*(char *)(lVar9 + 0x2e6) != '\x01') {
          *(undefined1 *)(lVar9 + 0x2e6) = 1;
          *(undefined1 *)(lVar9 + 0x2e9) = 0;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar10 + 0x18),0x11,bVar4);
      }
      lVar10 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 8) +
                        (ulong)*(byte *)(param_2 + 0x7d) * 8 + 0x120);
      *(byte *)(lVar9 + 0x38b) = *(byte *)(lVar9 + 0x38b) | 8;
      FUN_02a3e6b8(*(undefined8 *)(lVar10 + 0x18),0x22,*(undefined1 *)(param_2 + 0x7d),3);
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,1,0x9f);
      return 1;
    }
  }
  return 0;
}


