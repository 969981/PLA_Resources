/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257abf0; name: FUN_0257abf0
 */


void FUN_0257abf0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  uint local_a0;
  undefined2 local_9c;
  undefined4 local_94;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  
  plVar13 = *(long **)(param_1 + 0x2c8);
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar14 = 0;
LAB_0257ac7c:
  iVar10 = *(int *)(param_1 + uVar14 * 0xc + 0x670);
  if (iVar10 == 0) {
    lVar15 = *(long *)(param_1 + 0x5c8) - *(long *)(param_1 + 0x5c0);
    if (lVar15 == 0) {
      uVar11 = 0;
    }
    else {
      uVar8 = (lVar15 >> 1) * -0x5555555555555555;
      uVar11 = *(int *)(param_1 + 0x6f8) - 2;
      iVar7 = (int)uVar8;
      iVar10 = uVar11 - iVar7;
      do {
        uVar11 = uVar11 + iVar7;
        iVar10 = iVar10 + iVar7;
      } while (iVar10 < 0);
      do {
        iVar10 = uVar11 - iVar7;
        uVar11 = uVar11 - iVar7;
      } while (uVar8 <= (ulong)(long)iVar10);
    }
    puVar4 = (uint *)(*(long *)(param_1 + 0x5c0) + (ulong)uVar11 * 6);
    local_9c = (undefined2)puVar4[1];
    local_a0 = *puVar4;
    if ((local_a0 & 0xffff) != 0 && local_a0 >> 0x10 != 0) {
      lVar15 = *(long *)(param_1 + 0x4a8);
      if (lVar15 == 0) {
LAB_0257b098:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      local_80 = &DAT_03996322;
      local_94 = 0;
      local_90 = (long *)0x0;
      puStack_88 = &DAT_cbf29ce484222645;
      local_68 = 0;
      local_78 = 0;
      local_70 = (long *)0x0;
      FUN_0284eb30(&local_90,&local_94);
      uVar8 = FUN_02c4d8d4(*(undefined8 *)(lVar15 + uVar14 * 0xc0 + 8),&local_90,local_94,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = lVar15 + uVar14 * 0xc0;
        *(undefined1 *)(lVar15 + 0x30) = 0;
        *(undefined4 *)(lVar15 + 0x34) = 0;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      FUN_0257a6e4(param_1,uVar14 & 0xffffffff,&local_a0);
      plVar12 = (long *)plVar13[0x29];
      lVar15 = plVar13[0x2a];
      if ((lVar15 != 0) && (*plVar12 != (&DAT_0425d718)[uVar14 * 3])) {
        plVar9 = plVar12 + lVar15 * 6;
        lVar15 = lVar15 * 0x30;
        plVar5 = plVar12;
        do {
          lVar15 = lVar15 + -0x30;
          if (lVar15 == 0) goto LAB_0257aff0;
          plVar12 = plVar5 + 6;
          plVar1 = plVar5 + 6;
          plVar5 = plVar12;
        } while (*plVar1 != (&DAT_0425d718)[uVar14 * 3]);
      }
      goto LAB_0257ac60;
    }
    plVar12 = (long *)plVar13[0x29];
    lVar15 = plVar13[0x2a];
    if ((lVar15 != 0) && (*plVar12 != (&DAT_0425d718)[uVar14 * 3])) {
      plVar9 = plVar12 + lVar15 * 6;
      lVar15 = lVar15 * 0x30;
      plVar5 = plVar12;
      do {
        lVar15 = lVar15 + -0x30;
        if (lVar15 == 0) goto LAB_0257b03c;
        plVar12 = plVar5 + 6;
        plVar1 = plVar5 + 6;
        plVar5 = plVar12;
      } while (*plVar1 != (&DAT_0425d718)[uVar14 * 3]);
    }
    goto LAB_0257b040;
  }
  if (iVar10 == 4) {
    lVar15 = *(long *)(param_1 + 0x5c8) - *(long *)(param_1 + 0x5c0);
    if (lVar15 == 0) {
      uVar11 = 0;
    }
    else {
      uVar8 = (lVar15 >> 1) * -0x5555555555555555;
      uVar11 = *(int *)(param_1 + 0x6f8) + 2;
      iVar7 = (int)uVar8;
      iVar10 = uVar11 - iVar7;
      do {
        uVar11 = uVar11 + iVar7;
        iVar10 = iVar10 + iVar7;
      } while (iVar10 < 0);
      do {
        iVar10 = uVar11 - iVar7;
        uVar11 = uVar11 - iVar7;
      } while (uVar8 <= (ulong)(long)iVar10);
    }
    puVar4 = (uint *)(*(long *)(param_1 + 0x5c0) + (ulong)uVar11 * 6);
    local_9c = (undefined2)puVar4[1];
    local_a0 = *puVar4;
    if ((local_a0 & 0xffff) == 0 || local_a0 >> 0x10 == 0) {
      plVar12 = (long *)plVar13[0x29];
      lVar15 = plVar13[0x2a];
      if ((lVar15 != 0) && (*plVar12 != (&DAT_0425d718)[uVar14 * 3])) {
        plVar9 = plVar12 + lVar15 * 6;
        lVar15 = lVar15 * 0x30;
        plVar5 = plVar12;
        do {
          lVar15 = lVar15 + -0x30;
          if (lVar15 == 0) goto LAB_0257b03c;
          plVar12 = plVar5 + 6;
          plVar1 = plVar5 + 6;
          plVar5 = plVar12;
        } while (*plVar1 != (&DAT_0425d718)[uVar14 * 3]);
      }
      goto LAB_0257b040;
    }
    lVar15 = *(long *)(param_1 + 0x4a8);
    if (lVar15 == 0) goto LAB_0257b098;
    local_70 = (long *)0x0;
    local_68 = 0;
    local_94 = 0;
    local_80 = &DAT_03996322;
    local_78 = 0;
    local_90 = (long *)0x0;
    puStack_88 = &DAT_cbf29ce484222645;
    FUN_0284eb30(&local_90,&local_94);
    uVar8 = FUN_02c4d8d4(*(undefined8 *)(lVar15 + uVar14 * 0xc0 + 8),&local_90,local_94,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = lVar15 + uVar14 * 0xc0;
      *(undefined1 *)(lVar15 + 0x30) = 0;
      *(undefined4 *)(lVar15 + 0x34) = 0;
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    FUN_0257a6e4(param_1,uVar14 & 0xffffffff,&local_a0);
    plVar12 = (long *)plVar13[0x29];
    lVar15 = plVar13[0x2a];
    if ((lVar15 != 0) && (*plVar12 != (&DAT_0425d718)[uVar14 * 3])) {
      plVar9 = plVar12 + lVar15 * 6;
      lVar15 = lVar15 * 0x30;
      plVar5 = plVar12;
      do {
        lVar15 = lVar15 + -0x30;
        if (lVar15 == 0) goto LAB_0257aff0;
        plVar1 = plVar5 + 6;
        plVar12 = plVar5 + 6;
        plVar5 = plVar5 + 6;
      } while (*plVar1 != (&DAT_0425d718)[uVar14 * 3]);
    }
    goto LAB_0257ac60;
  }
  goto LAB_0257ac70;
LAB_0257b03c:
  plVar12 = plVar9;
LAB_0257b040:
  lVar15 = plVar12[4];
  bVar6 = *(byte *)(lVar15 + 0x58) & 0xfe;
LAB_0257ac6c:
  *(byte *)(lVar15 + 0x58) = bVar6;
LAB_0257ac70:
  uVar14 = uVar14 + 1;
  if (uVar14 == 5) {
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 10;
      do {
        iVar10 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    return;
  }
  goto LAB_0257ac7c;
LAB_0257aff0:
  plVar12 = plVar9;
LAB_0257ac60:
  lVar15 = plVar12[4];
  bVar6 = *(byte *)(lVar15 + 0x58) | 1;
  goto LAB_0257ac6c;
}


