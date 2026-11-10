/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269b934; name: FUN_0269b934
 */


undefined8 FUN_0269b934(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ushort *puVar15;
  byte *pbVar16;
  long lVar17;
  uint *puVar18;
  undefined *local_70;
  long local_68 [2];
  long local_58;
  long local_50;
  long local_48;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar10 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar10;
  lVar10 = *(long *)(lVar10 + 0x78);
  local_70 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(local_68,lVar10 + 0x130);
  local_58 = *(long *)(lVar10 + 0x140);
  if (local_58 != 0) {
    piVar1 = (int *)(local_58 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(long *)(lVar10 + 0x148);
  if (local_50 != 0) {
    piVar1 = (int *)(local_50 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_48 = *(long *)(lVar10 + 0x150);
  if (local_48 != 0) {
    lVar10 = *(long *)(local_48 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_70 = PTR_DAT_0437a508 + 0x10;
  puVar18 = *(uint **)(local_68[0] + 0x250);
  uVar6 = *puVar18;
  piVar1 = (int *)((long)puVar18 + (ulong)uVar6);
  FUN_00936104(&local_70);
  uVar11 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar11);
  uVar14 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar14);
  puVar12 = puVar2 + 1;
  uVar13 = (ulong)*puVar2;
  if (uVar13 != 0) {
    puVar2 = puVar12 + uVar13;
    lVar10 = (long)puVar18 + uVar11 + uVar6 + uVar14 + 8;
    do {
      piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar15 < 5) || ((ulong)puVar15[2] == 0)) {
        lVar17 = 0;
      }
      else {
        puVar18 = (uint *)((long)piVar1 + (ulong)puVar15[2]);
        lVar17 = (long)puVar18 + (ulong)*puVar18;
      }
      bVar3 = *(byte *)(lVar17 + 4);
      puVar9 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar9 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar17 + 5);
        do {
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar3 != 0);
      }
      if (puVar9 == (undefined1 *)*param_1) {
        puVar18 = (uint *)((long)piVar1 + (ulong)puVar15[3]);
        uVar11 = (ulong)*puVar18;
        uVar13 = (ulong)*(uint *)((long)puVar18 + uVar11);
        lVar17 = uVar13 << 2;
        if (uVar13 != 0) {
          uVar13 = 0;
          uVar6 = 0;
          do {
            uVar6 = *(int *)(lVar10 + uVar11 + puVar15[3] + (ulong)*puVar12 + uVar13 * 4) + uVar6;
            if (param_2 <= uVar6) {
              lVar10 = (uVar13 & 0xffffffff) * 4;
              *param_3 = *(undefined4 *)
                          ((long)((long)piVar1 + (ulong)puVar15[4]) +
                          lVar10 + (ulong)*(uint *)((long)piVar1 + (ulong)puVar15[4]) + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
              param_3[1] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0xc - (long)*piVar1)));
              param_3[2] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0xe - (long)*piVar1)));
              param_3[3] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)*piVar1)));
              param_3[4] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)*piVar1)));
              param_3[5] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x14 - (long)*piVar1)));
              param_3[6] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x16 - (long)*piVar1)));
              param_3[7] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x18 - (long)*piVar1)));
              param_3[8] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              puVar12 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (0x1a - (long)*piVar1)));
              param_3[9] = *(undefined4 *)((long)puVar12 + lVar10 + (ulong)*puVar12 + 4);
              return 1;
            }
            uVar13 = uVar13 + 1;
            lVar17 = lVar17 + -4;
          } while (lVar17 != 0);
        }
      }
      puVar12 = puVar12 + 1;
      lVar10 = lVar10 + 4;
    } while (puVar12 != puVar2);
  }
  return 0;
}


