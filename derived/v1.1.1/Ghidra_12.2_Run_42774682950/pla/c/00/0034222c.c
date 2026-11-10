/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034222c; name: FUN_0034222c
 */


long FUN_0034222c(long *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  byte *local_48;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    std::mutex::lock();
  }
  puVar3 = PTR_LAB_04373088;
  if (param_1[1] != 0) {
    lVar10 = param_1[4];
    if (*(long *)(lVar10 + 0x58) != 0) {
      plVar9 = *(long **)(lVar10 + 0x50);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(plVar9 + 2);
        plVar2 = (long *)*plVar9;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            FUN_002e2ea0(puVar3,plVar9[4]);
          }
          FUN_002e2ea0(puVar3,plVar9);
          if (plVar2 == (long *)0x0) break;
          bVar1 = *(byte *)(plVar2 + 2);
          plVar9 = plVar2;
          plVar2 = (long *)*plVar2;
        }
      }
      uVar6 = *(ulong *)(lVar10 + 0x48);
      *(undefined8 *)(lVar10 + 0x50) = 0;
      if (uVar6 != 0) {
        uVar4 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          do {
            lVar7 = lVar5 * 8;
            lVar5 = lVar5 + 4;
            *(undefined8 *)(*(long *)(lVar10 + 0x40) + lVar7) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x40) + lVar7 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x40) + lVar7 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x40) + lVar7 + 0x18) = 0;
          } while (uVar6 - uVar4 != lVar5);
        }
        if (uVar4 != 0) {
          lVar5 = lVar5 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar10 + 0x40) + lVar5) = 0;
            uVar4 = uVar4 - 1;
            lVar5 = lVar5 + 8;
          } while (uVar4 != 0);
        }
      }
      *(undefined8 *)(lVar10 + 0x58) = 0;
      lVar10 = param_1[4];
    }
    puVar3 = PTR_LAB_04373088;
    if (*(long *)(lVar10 + 0x30) != 0) {
      plVar9 = *(long **)(lVar10 + 0x28);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(plVar9 + 2);
        plVar2 = (long *)*plVar9;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            FUN_002e2ea0(puVar3,plVar9[4]);
          }
          FUN_002e2ea0(puVar3,plVar9);
          if (plVar2 == (long *)0x0) break;
          bVar1 = *(byte *)(plVar2 + 2);
          plVar9 = plVar2;
          plVar2 = (long *)*plVar2;
        }
      }
      uVar6 = *(ulong *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x28) = 0;
      if (uVar6 != 0) {
        uVar4 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          do {
            lVar7 = lVar5 * 8;
            lVar5 = lVar5 + 4;
            *(undefined8 *)(*(long *)(lVar10 + 0x18) + lVar7) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x18) + lVar7 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x18) + lVar7 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x18) + lVar7 + 0x18) = 0;
          } while (uVar6 - uVar4 != lVar5);
        }
        if (uVar4 != 0) {
          lVar5 = lVar5 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar10 + 0x18) + lVar5) = 0;
            uVar4 = uVar4 - 1;
            lVar5 = lVar5 + 8;
          } while (uVar4 != 0);
        }
      }
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
  }
  local_48 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
  }
                    /* try { // try from 00342444 to 003424a7 has its CatchHandler @ 003424e0 */
  lVar10 = FUN_00364b6c(param_1[4] + 0x158,&local_48);
  if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) &&
     ((param_1[3] == 0 || (lVar10 = FUN_0034222c(param_1[3],param_2), lVar10 == 0)))) {
    uVar6 = FUN_003424f8(param_1,param_2);
    if ((uVar6 & 1) != 0) {
      local_48 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        local_48 = *(byte **)(param_2 + 0x10);
      }
      lVar10 = FUN_00364b6c(param_1[4] + 0x158,&local_48);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) goto LAB_003424b8;
    }
    lVar10 = 0;
  }
LAB_003424b8:
  if (lVar8 != 0) {
    std::mutex::unlock();
  }
  return lVar10;
}


