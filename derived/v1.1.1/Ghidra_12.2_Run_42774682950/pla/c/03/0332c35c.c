/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332c35c; name: FUN_0332c35c
 */


bool FUN_0332c35c(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    return true;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0x20;
  iVar10 = *(int *)((long)param_1 + 0x14);
  uVar9 = *(uint *)(*param_1 + 0x40) >> 0x15;
  if ((int)uVar9 <= iVar10) {
    uVar7 = 0;
    uVar8 = *(uint *)(*param_1 + 0x40);
    do {
      uVar9 = uVar8 & 0x7f | (uVar8 + 0x80 >> 7 & 0x7f) << 7;
      bVar6 = ((uVar8 ^ uVar8 + 0x80 >> 7) & 0x7f) != 0;
      uVar2 = uVar8 & 0xffffc000 | uVar9;
      if (!bVar6) {
        uVar2 = uVar8 + 0x200000 & 0xffe00000 | uVar8 & 0x1fc000 | uVar9;
      }
      puVar1 = (uint *)(*param_1 + 0x40);
      uVar3 = *puVar1;
      if (uVar3 == uVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (bVar6) {
            bVar6 = *(int *)((long)param_1 + 0xc) == 0x10;
          }
          else {
            *(undefined4 *)((long)param_1 + 0xc) = 0x10;
            bVar6 = true;
          }
          *(uint *)(param_1 + 1) = uVar2 >> 0x15;
          *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
          return bVar6;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (uVar7 != 0x1f) {
        uVar9 = -1 << (ulong)(uVar7 & 0x1f);
        DataMemoryBarrier(2,2);
        Yield();
        if ((int)uVar9 < -1) {
          uVar9 = ~uVar9;
          do {
            uVar9 = uVar9 - 1;
            DataMemoryBarrier(2,2);
            Yield();
          } while (0 < (int)uVar9);
        }
      }
      iVar10 = *(int *)((long)param_1 + 0x14);
      uVar9 = uVar3 >> 0x15;
      if (uVar7 < 8) {
        uVar7 = uVar7 + 1;
      }
      uVar8 = uVar3;
    } while ((int)uVar9 <= iVar10);
  }
  *(int *)((long)param_1 + 0x14) = iVar10 + 1;
  *(uint *)(param_1 + 1) = uVar9;
  return false;
}


