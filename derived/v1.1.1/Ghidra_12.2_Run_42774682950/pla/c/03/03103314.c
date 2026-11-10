/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103314; name: FUN_03103314
 */


ulong FUN_03103314(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *local_100;
  uint local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_48 [2];
  
  iVar4 = FUN_031035b0(param_1 + 1,&local_100);
  plVar3 = local_100;
  if (iVar4 < 0) {
    uVar11 = 0xffffff;
  }
  else {
    uVar11 = (ulong)(*(int *)(param_1[1] + ((ulong)local_100 & 0xffffffff) * 0x10 + 8) + 0x1000000)
             & 0xff000000 | (ulong)local_100 & 0xffffffff;
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    plVar6 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x1700,0);
    FUN_030fb8b0(plVar6,*param_1,param_2,uVar11,param_1[7]);
    plVar5 = (long *)(param_1[1] + ((ulong)plVar3 & 0xffffff) * 0x10);
    plVar7 = (long *)*plVar5;
    if (((plVar7 != plVar6) && (*plVar5 = (long)plVar6, plVar7 != (long *)0x0)) && (plVar7[1] != 0))
    {
      plVar5 = plVar7 + 2;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    FUN_02ffefa0(&local_100);
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x58,0);
    FUN_02fe9c88(plVar5,plVar6);
    if ((local_100 != (long *)0x0) && (local_100[1] != 0)) {
      plVar7 = local_100 + 2;
      do {
        lVar10 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        lVar10 = *local_100;
        local_100 = plVar5;
        (**(code **)(lVar10 + 0x18))();
        plVar5 = local_100;
      }
    }
    local_100 = plVar5;
    local_d8 = 0;
    local_f0 = *(undefined4 *)(param_2 + 0x8c);
    local_e0 = *(undefined8 *)(param_2 + 0x90);
    local_ec = *(undefined2 *)(param_2 + 0x88);
    local_f8 = local_f8 | 0x10;
    FUN_032c7c38(auStack_e8,"hknpParticlesCollider");
    lVar10 = (**(code **)(*(long *)*param_1 + 0xc0))((long *)*param_1,&local_100,0xffffffffffffffff)
    ;
    plVar6[0x29] = lVar10;
    if (lVar10 < 0) {
      local_48[0] = (undefined4)lVar10;
    }
    else {
      uVar8 = FUN_032c0fa4(*param_1 + 0x948,lVar10,local_48);
      if ((uVar8 & 1) == 0) {
        local_48[0] = 0xffffff;
      }
    }
    *(undefined4 *)(plVar6 + 0x2a) = local_48[0];
    *(int *)(param_1[1] + ((ulong)plVar3 & 0xffffff) * 0x10 + 8) = (int)uVar11;
    FUN_03035580(*param_1 + 0x7b8,*param_1,uVar11);
    FUN_02fff010(&local_100);
  }
  return uVar11;
}


