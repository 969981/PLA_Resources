/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03031dfc; name: FUN_03031dfc
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_03031dfc(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  size_t sVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  undefined1 auStack_2e8 [144];
  undefined4 local_258;
  uint local_250;
  undefined2 local_24c;
  long local_248;
  long *local_240;
  ulong local_238;
  long lStack_230;
  undefined2 local_228;
  ulong local_220;
  long local_218;
  
  puVar15 = (ulong *)(param_2 + 1);
  uVar10 = *puVar15;
  if (uVar10 == param_2[2]) {
    FUN_032c4dfc(auStack_2e8,&local_250,0,0x200);
    local_258 = 0;
    FUN_032c53d8(auStack_2e8,
                 "Attempted to constrain body 0x0%16llx to itself. Skipping creation of the constraint."
                 ,*puVar15);
    FUN_03320af0(0x4c873b15,&local_250,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Dynamics/World/hknpWorld.cpp"
                 ,0x795);
    FUN_032c4ce8(auStack_2e8);
    return -1;
  }
  lVar12 = *(long *)(param_1 + 0x488);
  if ((~*(uint *)(lVar12 + 0x24) & 0xffffff) == 0) {
    FUN_03004714(param_1 + 0x760,param_1);
    lVar12 = *(long *)(param_1 + 0x488);
    uVar10 = param_2[1];
  }
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 & 0xffffffff;
    uVar11 = param_2[2];
  }
  else {
    uVar10 = FUN_032c0fa4(param_1 + 0x948,uVar10,&local_250);
    if ((uVar10 & 1) == 0) {
      uVar10 = 0xffffff;
    }
    else {
      uVar10 = (ulong)local_250;
    }
    uVar11 = param_2[2];
  }
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 & 0xffffffff;
  }
  else {
    uVar11 = FUN_032c0fa4(param_1 + 0x948,uVar11,&local_250,uVar10);
    if ((uVar11 & 1) == 0) {
      uVar11 = 0xffffff;
    }
    else {
      uVar11 = (ulong)local_250;
    }
  }
  iVar5 = FUN_03004918(lVar12,param_2,param_3,uVar10,uVar11);
  if (iVar5 == 0x7fffffff) {
    lVar12 = -1;
  }
  else {
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x488) + 8) + (long)iVar5 * 0x68 + 0x28);
    if (-1 < lVar12) {
      iVar6 = FUN_032c11b0(param_1 + 0x968,lVar12,iVar5);
      if (iVar6 != 0) {
        FUN_03005068(*(undefined8 *)(param_1 + 0x488),iVar5);
        return -1;
      }
      *(undefined1 *)(param_1 + 0x980) = 1;
    }
    local_250 = 0x2000040;
    local_24c = 0x2c;
    local_240 = (long *)*param_2;
    if ((local_240 != (long *)0x0) && (local_240[1] != 0)) {
      plVar7 = local_240 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = PTR_PTR_0434a080;
    local_238 = *puVar15;
    lStack_230 = param_2[2];
    local_228 = (undefined2)param_2[3];
    local_220 = 0;
    __s = (char *)(param_2[4] & 0xfffffffffffffffe);
    local_248 = lVar12;
    if (__s != (char *)0x0) {
      sVar8 = strlen(__s);
      uVar1 = (int)sVar8 + 1;
      puVar9 = (undefined8 *)
               (**(code **)(*(long *)puVar4 + 0x10))
                         (puVar4,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar9 = puVar4;
      *(uint *)(puVar9 + 1) = uVar1;
      memcpy(puVar9 + 2,__s,(ulong)uVar1);
      local_220 = (ulong)(puVar9 + 2) | 1;
    }
    local_218 = param_2[5];
    plVar7 = *(long **)(param_1 + 0x7f0);
    uVar10 = local_220;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_250);
      uVar10 = local_220;
    }
    local_220 = uVar10;
    if ((uVar10 & 1) != 0) {
      lVar13 = tpidr_el0;
      lVar14 = *(long *)(lVar13 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar14;
      }
      plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      *(undefined8 *)(uVar10 - 0x11) = 0;
      (**(code **)(*plVar7 + 0x18))
                (plVar7,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
    }
    if ((local_240 != (long *)0x0) && (local_240[1] != 0)) {
      plVar7 = local_240 + 2;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*local_240 + 0x18))();
      }
    }
    FUN_03032170(param_1 + 0x778,param_1,param_2,lVar12);
  }
  return lVar12;
}


