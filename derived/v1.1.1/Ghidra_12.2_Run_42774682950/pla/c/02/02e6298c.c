/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6298c; name: FUN_02e6298c
 */


void FUN_02e6298c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_50;
  uint local_48;
  undefined4 local_44;
  
  if (param_2 < 0x1d) {
    iVar8 = 0x1d;
  }
  else if (param_2 < 0x35) {
    iVar8 = 0x35;
  }
  else if (param_2 < 0x61) {
    iVar8 = 0x61;
  }
  else if (param_2 < 0xc1) {
    iVar8 = 0xc1;
  }
  else if (param_2 < 0x185) {
    iVar8 = 0x185;
  }
  else if (param_2 < 0x301) {
    iVar8 = 0x301;
  }
  else if (param_2 < 0x607) {
    iVar8 = 0x607;
  }
  else if (param_2 < 0xc07) {
    iVar8 = 0xc07;
  }
  else {
    iVar8 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        iVar8 = 0x3001;
      }
      else {
        iVar8 = 0x6011;
        if ((((0x6010 < param_2) && (iVar8 = 0xc005, 0xc004 < param_2)) &&
            (iVar8 = 0x1800d, 0x1800c < param_2)) &&
           ((iVar8 = 0x30005, 0x30004 < param_2 && (iVar8 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            iVar8 = 0xc0001;
          }
          else {
            iVar8 = 0x180005;
            if (((((0x180004 < param_2) && (iVar8 = 0x30000b, 0x30000a < param_2)) &&
                 ((iVar8 = 0x60000d, 0x60000c < param_2 &&
                  (((iVar8 = 0xc00005, 0xc00004 < param_2 &&
                    (iVar8 = 0x1800013, 0x1800012 < param_2)) &&
                   (iVar8 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((iVar8 = 0x6000017, 0x6000016 < param_2 && (iVar8 = 0xc000013, 0xc000012 < param_2)
                 ))) && ((iVar8 = 0x18000005, 0x18000004 < param_2 &&
                         ((iVar8 = 0x30000059, 0x30000058 < param_2 &&
                          (iVar8 = 0x60000005, 0x60000004 < param_2)))))) {
              return;
            }
          }
        }
      }
    }
  }
  puVar10 = (undefined8 *)(param_1 + 8);
  plVar9 = (long *)*puVar10;
  uVar1 = *(uint *)(param_1 + 0x10);
  local_44 = *(undefined4 *)(param_1 + 0x14);
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_50 = plVar9;
  local_48 = uVar1;
  uVar4 = FUN_02e62cb0(puVar10,iVar8);
  if ((uVar4 & 1) == 0) {
    FUN_02e62c4c(puVar10,&local_50);
  }
  else {
    do {
      uVar2 = *(uint *)(param_1 + 0x10);
      if (uVar2 < *(uint *)(param_1 + 0x14)) {
        *(uint *)(param_1 + 0x10) = uVar2 + 1;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
        }
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (uVar1 != 0) {
      uVar4 = 0;
      plVar5 = (long *)*plVar9;
      while( true ) {
        while (plVar5 != (long *)0x0) {
          uVar2 = *(uint *)(param_1 + 0x10);
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = *(uint *)(plVar5 + 1) / uVar2;
          }
          lVar7 = *plVar5;
          lVar6 = (ulong)(*(uint *)(plVar5 + 1) - uVar3 * uVar2) * 8;
          *plVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
          *(long **)(*(long *)(param_1 + 8) + lVar6) = plVar5;
          plVar5 = (long *)lVar7;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 == uVar1) break;
        plVar5 = (long *)plVar9[uVar4];
      }
    }
    if (plVar9 != (long *)0x0) {
      local_48 = 0;
      FUN_02f59e60(0xb,plVar9);
    }
  }
  return;
}


