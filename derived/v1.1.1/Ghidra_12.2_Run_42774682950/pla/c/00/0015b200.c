/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b200; name: FUN_0015b200
 */


int FUN_0015b200(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  int local_58;
  int local_54;
  
  uVar6 = *(undefined2 *)(param_1 + 0xc4);
  local_54 = param_3;
  if (*(char *)(param_1 + 0xc) == '\x01') {
LAB_0015b260:
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0xc6) = 1;
    }
    else {
      sVar7 = *(short *)(param_2 + 0xc6);
      *(short *)(param_1 + 0xc6) = sVar7 + 1;
      if (199 < (ushort)(sVar7 + 1U)) {
        plVar12 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
        *(long **)(param_1 + 0x10) = plVar12;
        pcVar9 = "C stack overflow";
        goto LAB_0015b2a8;
      }
    }
    *(undefined2 *)(param_1 + 0xc4) = 0;
    local_58 = FUN_0015a410(param_1,FUN_0015b540,&local_54);
    if (local_58 == -1) {
      local_58 = 2;
    }
    else if (1 < local_58) {
      do {
        iVar2 = local_58;
        lVar8 = *(long *)(param_1 + 0x20);
        if (lVar8 == 0) {
LAB_0015b498:
          plVar12 = *(long **)(param_1 + 0x10);
          *(char *)(param_1 + 0xc) = (char)local_58;
          if (local_58 == 6) {
            lVar8 = FUN_0016d720(param_1,"error in error handling",0x17);
            *plVar12 = lVar8;
            *(uint *)(plVar12 + 1) = *(byte *)(lVar8 + 8) | 0x40;
          }
          else if (local_58 == 4) {
            lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
            *plVar12 = lVar8;
            *(uint *)(plVar12 + 1) = *(byte *)(lVar8 + 8) | 0x40;
          }
          else {
            *plVar12 = plVar12[-2];
            plVar12[1] = plVar12[-1];
          }
          *(long **)(param_1 + 0x10) = plVar12 + 2;
          *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar12 + 2;
          break;
        }
        while ((*(byte *)(lVar8 + 0x42) >> 4 & 1) == 0) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            if (1 < local_58) goto LAB_0015b498;
            goto LAB_0015b510;
          }
        }
        plVar12 = (long *)(*(long *)(param_1 + 0x38) + *(long *)(lVar8 + 0x38));
        FUN_0015c870(param_1,plVar12);
        if (iVar2 == 6) {
          lVar11 = FUN_0016d720(param_1,"error in error handling",0x17);
          *plVar12 = lVar11;
          bVar5 = *(byte *)(lVar11 + 8);
LAB_0015b398:
          *(uint *)(plVar12 + 1) = bVar5 | 0x40;
        }
        else {
          if (iVar2 == 4) {
            lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
            *plVar12 = lVar11;
            bVar5 = *(byte *)(lVar11 + 8);
            goto LAB_0015b398;
          }
          lVar11 = *(long *)(*(long *)(param_1 + 0x10) + -8);
          *plVar12 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
          plVar12[1] = lVar11;
        }
        *(long **)(param_1 + 0x10) = plVar12 + 2;
        *(long *)(param_1 + 0x20) = lVar8;
        bVar5 = *(byte *)(lVar8 + 0x42);
        *(undefined2 *)(param_1 + 0xc4) = 0;
        *(byte *)(param_1 + 0xcc) = bVar5 & 1;
        plVar12 = plVar12 + 2;
        lVar11 = lVar8;
        do {
          puVar1 = (undefined8 *)(lVar11 + 8);
          lVar11 = *(long *)(lVar11 + 0x10);
          plVar4 = (long *)*puVar1;
          if ((long *)*puVar1 <= plVar12) {
            plVar4 = plVar12;
          }
          plVar12 = plVar4;
        } while (lVar11 != 0);
        iVar10 = (int)((ulong)((long)plVar4 - *(long *)(param_1 + 0x38)) >> 4);
        iVar2 = iVar10 + 1;
        iVar3 = iVar10 + 8;
        if (-1 < iVar2) {
          iVar3 = iVar10 + 1;
        }
        iVar3 = iVar2 + (iVar3 >> 3);
        if (0xf4235 < iVar3) {
          iVar3 = 0xf4236;
        }
        if (*(int *)(param_1 + 0xb8) < 0xf4241) {
          FUN_0016cb00(param_1);
        }
        else {
          FUN_0016caa0();
        }
        if ((iVar2 < 0xf423c) && (iVar3 + 10 < *(int *)(param_1 + 0xb8))) {
          FUN_0015a490(param_1);
        }
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar8 + 0x28);
        local_58 = FUN_0015a410(param_1,0x15b610,&local_58);
      } while (1 < local_58);
    }
LAB_0015b510:
    *(undefined2 *)(param_1 + 0xc4) = uVar6;
    *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  }
  else {
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (*(long *)(param_1 + 0x20) == param_1 + 0x60) goto LAB_0015b260;
      plVar12 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
      pcVar9 = "cannot resume non-suspended coroutine";
      *(long **)(param_1 + 0x10) = plVar12;
    }
    else {
      plVar12 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
      *(long **)(param_1 + 0x10) = plVar12;
      pcVar9 = "cannot resume dead coroutine";
    }
LAB_0015b2a8:
    lVar8 = FUN_0016d990(param_1,pcVar9);
    *plVar12 = lVar8;
    *(uint *)(plVar12 + 1) = *(byte *)(lVar8 + 8) | 0x40;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    local_58 = 2;
  }
  return local_58;
}


