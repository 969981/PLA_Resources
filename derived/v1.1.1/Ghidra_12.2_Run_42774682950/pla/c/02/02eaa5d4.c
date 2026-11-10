/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa5d4; name: FUN_02eaa5d4
 */


int FUN_02eaa5d4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  iVar4 = FUN_02ecb224();
  if (iVar4 != 1) {
    return iVar4;
  }
  lVar10 = param_1[0x43];
  if (lVar10 == 0) {
    lVar10 = param_1[0x44];
  }
  else {
    puVar6 = *(undefined8 **)(lVar10 + 0x28);
    plVar3 = param_1 + 2;
    uVar7 = *(uint *)(lVar10 + 0x30);
    puVar2 = puVar6;
    if ((uVar7 != 0) && ((long *)*puVar6 != plVar3)) {
      lVar9 = (ulong)uVar7 * 8;
      puVar8 = puVar6;
      do {
        lVar9 = lVar9 + -8;
        puVar2 = puVar6 + uVar7;
        if (lVar9 == 0) break;
        puVar2 = puVar8 + 1;
        puVar1 = puVar8 + 1;
        puVar8 = puVar2;
      } while ((long *)*puVar1 != plVar3);
    }
    if ((puVar2 == (undefined8 *)0x0) || (puVar6 + uVar7 == puVar2)) {
      uVar11 = *(uint *)(lVar10 + 0x34);
      if (uVar11 <= uVar7) {
        iVar4 = uVar11 + (uVar11 >> 1);
        if (uVar11 == 0) {
          iVar4 = 1;
        }
        uVar11 = iVar4 + uVar11;
        puVar6 = (undefined8 *)(*DAT_0442d148)(0,puVar6,(ulong)uVar11 << 3);
        if (puVar6 == (undefined8 *)0x0) goto LAB_02eaa8bc;
        *(undefined8 **)(lVar10 + 0x28) = puVar6;
        *(uint *)(lVar10 + 0x34) = uVar11;
      }
      if (uVar11 <= uVar7) goto LAB_02eaa8bc;
      uVar7 = *(uint *)(lVar10 + 0x30);
      *(uint *)(lVar10 + 0x30) = uVar7 + 1;
      if (puVar6 + uVar7 == (long *)0x0) goto LAB_02eaa8bc;
      puVar6[uVar7] = plVar3;
      if (*(int *)(param_1[0x43] + 0x3c) != 5) {
        (**(code **)(*param_1 + 0xa8))(param_1,0xe,0xffffffff);
        lVar10 = param_1[0x44];
        goto joined_r0x02eaa898;
      }
      uVar5 = FUN_02f0e5a8();
      if ((uVar5 & 1) != 0) {
        *(byte *)((long)param_1 + 0x2a2) = *(byte *)((long)param_1 + 0x2a2) & 0xf8 | 2;
      }
      lVar10 = param_1[0x43];
      puVar6 = *(undefined8 **)(lVar10 + 0x28);
      uVar7 = *(uint *)(lVar10 + 0x30);
      puVar2 = puVar6 + uVar7;
      if ((uVar7 != 0) && ((long *)*puVar6 != plVar3)) {
        lVar9 = (ulong)uVar7 * 8;
        puVar8 = puVar6;
        do {
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) goto LAB_02eaa890;
          puVar6 = puVar8 + 1;
          puVar1 = puVar8 + 1;
          puVar8 = puVar6;
        } while ((long *)*puVar1 != plVar3);
      }
      if (puVar2 != puVar6) {
        if (1 < uVar7) {
          *puVar6 = puVar2[-1];
          uVar7 = *(uint *)(lVar10 + 0x30);
        }
        *(uint *)(lVar10 + 0x30) = uVar7 - 1;
        if (uVar7 - 1 == 0) {
          *(undefined4 *)(lVar10 + 0x3c) = 6;
        }
      }
    }
    else {
LAB_02eaa8bc:
      *(byte *)((long)param_1 + 0x2a2) = *(byte *)((long)param_1 + 0x2a2) & 0xf8 | 2;
    }
LAB_02eaa890:
    param_1[0x43] = 0;
    lVar10 = param_1[0x44];
  }
joined_r0x02eaa898:
  if (lVar10 == 0) goto LAB_02eaa60c;
  puVar6 = *(undefined8 **)(lVar10 + 0x28);
  plVar3 = param_1 + 2;
  uVar7 = *(uint *)(lVar10 + 0x30);
  puVar2 = puVar6;
  if ((uVar7 != 0) && ((long *)*puVar6 != plVar3)) {
    lVar9 = (ulong)uVar7 * 8;
    puVar8 = puVar6;
    do {
      lVar9 = lVar9 + -8;
      puVar2 = puVar6 + uVar7;
      if (lVar9 == 0) break;
      puVar2 = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = puVar2;
    } while ((long *)*puVar1 != plVar3);
  }
  if ((puVar2 == (undefined8 *)0x0) || (puVar6 + uVar7 == puVar2)) {
    uVar11 = *(uint *)(lVar10 + 0x34);
    if (uVar11 <= uVar7) {
      iVar4 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar4 = 1;
      }
      uVar11 = iVar4 + uVar11;
      puVar6 = (undefined8 *)(*DAT_0442d148)(0,puVar6,(ulong)uVar11 << 3);
      if (puVar6 == (undefined8 *)0x0) goto LAB_02eaa7d8;
      *(undefined8 **)(lVar10 + 0x28) = puVar6;
      *(uint *)(lVar10 + 0x34) = uVar11;
    }
    if (uVar7 < uVar11) {
      uVar7 = *(uint *)(lVar10 + 0x30);
      *(uint *)(lVar10 + 0x30) = uVar7 + 1;
      if (puVar6 + uVar7 != (long *)0x0) {
        puVar6[uVar7] = plVar3;
        if (*(int *)(param_1[0x44] + 0x3c) != 5) {
          (**(code **)(*param_1 + 0xa8))(param_1,0xe,0xffffffff);
          goto LAB_02eaa60c;
        }
        uVar5 = FUN_02f0e5a8();
        if (((uVar5 & 1) != 0) && ((*(byte *)((long)param_1 + 0x2a2) & 7) == 0)) {
          *(byte *)((long)param_1 + 0x2a2) = *(byte *)((long)param_1 + 0x2a2) & 0xf8 | 1;
        }
        lVar10 = param_1[0x44];
        puVar6 = *(undefined8 **)(lVar10 + 0x28);
        uVar7 = *(uint *)(lVar10 + 0x30);
        puVar2 = puVar6 + uVar7;
        if ((uVar7 != 0) && ((long *)*puVar6 != plVar3)) {
          lVar9 = (ulong)uVar7 * 8;
          puVar8 = puVar6;
          do {
            lVar9 = lVar9 + -8;
            if (lVar9 == 0) goto LAB_02eaa7d8;
            puVar6 = puVar8 + 1;
            puVar1 = puVar8 + 1;
            puVar8 = puVar6;
          } while ((long *)*puVar1 != plVar3);
        }
        if (puVar2 != puVar6) {
          if (1 < uVar7) {
            *puVar6 = puVar2[-1];
            uVar7 = *(uint *)(lVar10 + 0x30);
          }
          *(uint *)(lVar10 + 0x30) = uVar7 - 1;
          if (uVar7 - 1 == 0) {
            *(undefined4 *)(lVar10 + 0x3c) = 6;
          }
        }
      }
    }
  }
LAB_02eaa7d8:
  param_1[0x44] = 0;
LAB_02eaa60c:
  if ((((*(byte *)((long)param_1 + 0x2a2) & 7) == 0) && (*(int *)((long)param_1 + 700) != 0)) &&
     (param_1[0x44] == 0)) {
    *(byte *)((long)param_1 + 0x2a2) = *(byte *)((long)param_1 + 0x2a2) & 0xf8 | 1;
  }
  return 1;
}


