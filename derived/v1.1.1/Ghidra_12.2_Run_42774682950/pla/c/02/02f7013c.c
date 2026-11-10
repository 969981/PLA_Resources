/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7013c; name: FUN_02f7013c
 */


void FUN_02f7013c(long param_1,long param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar7 = param_4;
  if (param_4 == 0) {
    lVar7 = tpidr_el0;
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    lVar6 = *(long *)(lVar6 + 8);
    uVar14 = (ulong)(int)(param_3 * 2 + 0x7f & 0xffffff80);
    if (uVar14 <= *(ulong *)(lVar6 + 0x10)) {
      lVar7 = *(long *)(lVar6 + 0x18);
      uVar14 = lVar7 + uVar14;
      if (uVar14 <= *(ulong *)(lVar6 + 0x20)) {
        *(ulong *)(lVar6 + 0x18) = uVar14;
        goto LAB_02f70178;
      }
    }
    lVar7 = FUN_032ce670();
  }
LAB_02f70178:
  if (0 < (int)param_3) {
    uVar21 = NEON_fmov(0x3f800000,4);
    uVar14 = 0;
    do {
      uVar12 = *(uint *)(param_1 + 0x58);
      if (uVar12 == 0xffffffff) {
        uVar11 = 0xffff;
      }
      else {
        puVar1 = (undefined8 *)(param_2 + uVar14 * 0x40);
        plVar13 = puVar1 + 6;
        if (*plVar13 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar13 + (long)plVar13;
        }
        if ((int)uVar12 < 0) {
          FUN_02f6d730(param_1 + 0x48,8);
          uVar12 = (uint)*(ushort *)(param_1 + 0x58);
        }
        uVar11 = (undefined2)uVar12;
        puVar2 = (undefined8 *)
                 (*(long *)(param_1 + 0x48) + param_1 + 0x48 + (ulong)(uVar12 & 0xffff) * 0x40);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)puVar2 + 0x2c);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        uVar15 = DAT_03aae468;
        *puVar2 = DAT_03aae460;
        puVar2[1] = uVar15;
        puVar2[2] = 0;
        puVar2[3] = 0x40ffff00000000;
        puVar2[5] = 0xffffffff3f800000;
        puVar2[4] = uVar21;
        puVar2[7] = 0;
        plVar8 = puVar2 + 6;
        *plVar8 = 0;
        uVar16 = puVar1[1];
        uVar15 = *puVar1;
        uVar18 = puVar1[3];
        uVar17 = puVar1[2];
        uVar19 = puVar1[4];
        uVar20 = puVar1[7];
        lVar9 = *plVar13;
        puVar2[5] = puVar1[5];
        puVar2[4] = uVar19;
        puVar2[1] = uVar16;
        *puVar2 = uVar15;
        puVar2[3] = uVar18;
        puVar2[2] = uVar17;
        puVar2[7] = uVar20;
        *plVar8 = lVar9;
        lVar9 = 0;
        if (*plVar13 != 0) {
          lVar9 = (long)plVar13 + (*plVar13 - (long)plVar8);
        }
        *plVar8 = lVar9;
        if (((lVar9 != 0) && (lVar9 = lVar9 + (long)plVar8, lVar9 != 0)) &&
           (*(long *)(lVar9 + 8) != 0)) {
          plVar13 = (long *)(lVar9 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        iVar5 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0xc0))(lVar6);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar5;
        lVar6 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0x48))(lVar6);
        if (lVar6 != 0) {
          *(undefined1 *)(param_1 + 0x94) = 1;
          FUN_02f6df44(param_1,puVar1,(ulong)(uVar12 & 0xffff));
        }
      }
      *(undefined2 *)(lVar7 + uVar14 * 2) = uVar11;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_3);
  }
  FUN_02f9aef8(param_1,lVar7,param_3);
  if (param_4 == 0) {
    lVar6 = tpidr_el0;
    lVar9 = *(long *)(lVar6 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar9;
    }
    lVar6 = *(long *)(lVar9 + 8);
    uVar14 = (ulong)(int)(param_3 * 2 + 0x7f & 0xffffff80);
    if (((*(ulong *)(lVar6 + 0x10) < uVar14) || (*(long *)(lVar6 + 0x18) != lVar7 + uVar14)) ||
       (*(long *)(lVar6 + 0x28) == lVar7)) {
      FUN_032cedf0(lVar6,lVar7);
    }
    else {
      *(long *)(lVar6 + 0x18) = lVar7;
    }
  }
  uVar14 = FUN_02f9b898(param_1);
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  uVar10 = 2;
  if ((uVar14 & 1) != 0) {
    uVar10 = 3;
  }
  FUN_02f6ff60(param_1 + 0xa0,param_1,uVar10);
  return;
}


