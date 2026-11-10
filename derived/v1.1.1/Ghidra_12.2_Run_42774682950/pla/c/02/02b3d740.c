/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3d740; name: FUN_02b3d740
 */


void FUN_02b3d740(long *param_1,long *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  char *pcVar10;
  void *__dest;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong local_88 [2];
  undefined4 local_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar11 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar3 = (uint *)((long)param_3 + uVar11);
    lVar14 = (long)puVar3 + (ulong)*puVar3;
  }
  uVar11 = (param_1[1] - *param_1 >> 3) * 0x38e38e39;
  if ((int)uVar11 != 0) {
    puVar3 = (uint *)(lVar14 + 4 + (ulong)param_4 * 4);
    piVar17 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (4 - (long)*piVar17)));
    uVar4 = *(uint *)(*param_1 + 0x40);
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = *(uint *)((long)puVar3 + (ulong)*puVar3) / uVar4;
    }
    uVar19 = 0;
    do {
      puVar3 = (uint *)(lVar14 + 4 + (ulong)((int)uVar19 + param_4) * 4);
      piVar17 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar13 == 0)) {
        lVar20 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar17 + uVar13);
        lVar20 = (long)puVar3 + (ulong)*puVar3;
      }
      lVar15 = *param_1;
      lVar16 = lVar15 + uVar19 * 0x48;
      *(uint *)(lVar16 + 0x44) = uVar8;
      local_88[1] = 4;
      local_78 = 0;
      piVar17 = (int *)(lVar16 + 0x40);
      local_88[0] = (ulong)(*piVar17 * uVar8);
      local_70 = *param_2;
      lVar16 = FUN_01b34908(auStack_68,*(undefined8 *)(local_70 + 8),&local_70);
      if (lVar16 != 0) {
        piVar1 = (int *)(lVar16 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_02bbfe84(lVar16,local_88,1,0,0);
      plVar18 = (long *)(lVar15 + uVar19 * 0x48 + 0x38);
      plVar9 = (long *)*plVar18;
      *plVar18 = 0;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 10;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *plVar18 = lVar16;
      lVar16 = *(long *)(lVar15 + uVar19 * 0x48 + 0x38);
      uVar4 = *(uint *)(lVar16 + 0xa0);
      uVar13 = *(ulong *)(*(long *)(lVar16 + 0x98) + 0x138);
      uVar12 = (uint)uVar13;
      if (uVar4 < 3) {
        uVar12 = uVar12 & uVar4 - 1;
      }
      else {
        iVar7 = 0;
        if ((ulong)uVar4 != 0) {
          iVar7 = (int)(uVar13 / uVar4);
        }
        uVar12 = uVar12 - iVar7 * uVar4;
      }
      pcVar10 = (char *)FUN_02bc0470((long)(int)uVar12,lVar16 + 0x58);
      if (*pcVar10 == '\0' || *(long *)(pcVar10 + 8) == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (*(long *)(*(long *)(pcVar10 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        __dest = (void *)(*DAT_043f0470)();
      }
      memcpy(__dest,(void *)(lVar20 + 4),(ulong)(*piVar17 * uVar8));
      uVar19 = uVar19 + 1;
    } while (uVar19 != (uVar11 & 0xffffffff));
  }
  return;
}


