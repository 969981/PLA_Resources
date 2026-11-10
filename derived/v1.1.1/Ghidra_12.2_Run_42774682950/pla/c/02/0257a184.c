/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a184; name: FUN_0257a184
 */


void FUN_0257a184(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  uint local_a0;
  undefined2 local_9c;
  undefined4 local_94;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar12 = 0;
  do {
    local_a0 = 0;
    local_9c = 1;
    if (*(long *)(param_1 + 0x5c0) == *(long *)(param_1 + 0x5c8)) {
LAB_0257a324:
      plVar8 = (long *)plVar11[0x29];
      lVar7 = plVar11[0x2a];
      if ((lVar7 != 0) && (*plVar8 != (&DAT_0425d718)[uVar12 * 3])) {
        plVar10 = plVar8 + lVar7 * 6;
        lVar7 = lVar7 * 0x30;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) {
            plVar8 = plVar10;
            break;
          }
          plVar2 = plVar8 + 6;
          plVar1 = plVar8 + 6;
          plVar8 = plVar2;
        } while (*plVar1 != (&DAT_0425d718)[uVar12 * 3]);
      }
      lVar7 = plVar8[4];
      bVar9 = *(byte *)(lVar7 + 0x58) & 0xfe;
    }
    else {
      lVar7 = param_1 + uVar12 * 0xc;
      local_9c = *(undefined2 *)(lVar7 + 0x66c);
      local_a0 = *(uint *)(lVar7 + 0x668);
      if ((local_a0 & 0xffff) == 0 || local_a0 >> 0x10 == 0) goto LAB_0257a324;
      lVar7 = *(long *)(param_1 + 0x4a8);
      if (lVar7 == 0) {
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
      uVar6 = FUN_02c4d8d4(*(undefined8 *)(lVar7 + uVar12 * 0xc0 + 8),&local_90,local_94,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = lVar7 + uVar12 * 0xc0;
        *(undefined1 *)(lVar7 + 0x30) = 0;
        *(undefined4 *)(lVar7 + 0x34) = 0;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      FUN_0257a6e4(param_1,uVar12 & 0xffffffff,&local_a0);
      plVar8 = (long *)plVar11[0x29];
      lVar7 = plVar11[0x2a];
      if ((lVar7 != 0) && (*plVar8 != (&DAT_0425d718)[uVar12 * 3])) {
        plVar10 = plVar8 + lVar7 * 6;
        lVar7 = lVar7 * 0x30;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) {
            plVar8 = plVar10;
            break;
          }
          plVar2 = plVar8 + 6;
          plVar1 = plVar8 + 6;
          plVar8 = plVar2;
        } while (*plVar1 != (&DAT_0425d718)[uVar12 * 3]);
      }
      lVar7 = plVar8[4];
      bVar9 = *(byte *)(lVar7 + 0x58) | 1;
    }
    uVar12 = uVar12 + 1;
    *(byte *)(lVar7 + 0x58) = bVar9;
    if (uVar12 == 5) {
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 10;
        do {
          iVar5 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      return;
    }
  } while( true );
}


