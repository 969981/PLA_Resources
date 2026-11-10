/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3a28; name: FUN_031f3a28
 */


void FUN_031f3a28(long param_1,long *param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  byte bVar11;
  undefined1 auStack_260 [16];
  long local_250 [64];
  
  bVar11 = *(byte *)(param_1 + 0x5c);
  pbVar1 = (byte *)(param_1 + 0x5c);
  if (bVar11 == 0) {
    FUN_031f3c0c(local_250);
    uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x198);
    uVar7 = FUN_032cf5b0(0x58);
    FUN_031f3174(uVar7,*(undefined8 *)(param_1 + 0x18),local_250[0],uVar3,0);
    lVar8 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    if (lVar8 != 0) {
      FUN_032d647c();
    }
    if (local_250[0] != 0) {
      FUN_032d647c(local_250[0]);
    }
    puVar2 = (ulong *)(param_2 + 4);
    do {
      uVar9 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = *param_2;
    uVar9 = -(uVar9 >> 0x1f & 1) & 0xfffffff000000000 | (uVar9 & 0xffffffff) << 4;
    *(undefined8 *)(lVar8 + uVar9) = 0;
    plVar10 = (long *)(lVar8 + uVar9 + 8);
    *plVar10 = 0;
    *(undefined4 *)(lVar8 + uVar9) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x194);
    if (*(long *)(param_1 + 0x60) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        *plVar10 = 0;
      }
      else {
        FUN_032d645c();
        lVar8 = *plVar10;
        *plVar10 = *(long *)(param_1 + 0x60);
        if (lVar8 != 0) {
          FUN_032d647c(lVar8);
        }
      }
    }
    do {
      bVar11 = *pbVar1;
      if (bVar11 != 0) {
        ClearExclusiveLocal();
        FUN_031c215c(*(undefined8 *)(param_1 + 0x60),1);
        lVar8 = *(long *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (lVar8 != 0) {
          FUN_032d647c();
        }
        lVar8 = *plVar10;
        *plVar10 = 0;
        if (lVar8 != 0) {
          FUN_032d647c();
        }
        goto LAB_031f3a54;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
LAB_031f3a54:
    if (bVar11 != 4) {
      if (bVar11 == 2) {
        do {
          if (*pbVar1 != 2) {
            ClearExclusiveLocal();
            if (*pbVar1 - 3 < 2) {
              return;
            }
            goto LAB_031f3b94;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = 3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
LAB_031f3b94:
        FUN_0331fefc(auStack_260,local_250,0x200);
        FUN_0332448c(auStack_260,"Invalid state.");
        iVar6 = FUN_03320b30(0x222d3546,local_250,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigatorStaleness.cpp"
                             ,0x79);
        if (iVar6 != 0) {
          CallSupervisor(0x26);
        }
        FUN_0331ff7c(auStack_260);
      }
    }
  }
  return;
}


