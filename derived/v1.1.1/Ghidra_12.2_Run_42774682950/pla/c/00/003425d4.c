/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003425d4; name: FUN_003425d4
 */


long FUN_003425d4(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if (*(int *)(param_2 + 0x7c) == 0) {
    return 0;
  }
  if (*param_1 != 0) {
    std::mutex::lock();
    plVar7 = *(long **)(param_1[4] + 0x188);
    if (plVar7 != (long *)0x0) {
      plVar1 = (long *)(param_1[4] + 0x188);
      uVar11 = plVar7[4];
      plVar6 = plVar1;
      if (param_2 <= uVar11) goto LAB_00342650;
LAB_00342630:
      do {
        plVar7 = plVar7 + 1;
        plVar12 = plVar6;
        do {
          plVar5 = (long *)*plVar7;
          plVar6 = plVar12;
          while( true ) {
            plVar7 = plVar5;
            if (plVar7 == (long *)0x0) {
              if (((plVar6 == plVar1) || (param_2 < (ulong)plVar6[4])) ||
                 ((param_2 <= (ulong)plVar6[4] && (param_3 < (int)plVar6[5])))) goto LAB_0034269c;
              lVar8 = plVar6[6];
              std::mutex::unlock();
              if (lVar8 != 0) {
                return lVar8;
              }
              goto LAB_003426a4;
            }
            uVar11 = plVar7[4];
            if (uVar11 < param_2) goto LAB_00342630;
LAB_00342650:
            if (uVar11 <= param_2) break;
            plVar5 = (long *)*plVar7;
            plVar6 = plVar7;
          }
          plVar12 = plVar7;
        } while (param_3 <= (int)plVar7[5]);
      } while( true );
    }
LAB_0034269c:
    std::mutex::unlock();
LAB_003426a4:
    if (*param_1 != 0) {
      std::mutex::lock();
      bVar3 = false;
      lVar8 = param_1[1];
      puVar4 = PTR_LAB_04373088;
      goto joined_r0x00342728;
    }
  }
  bVar3 = true;
  lVar8 = param_1[1];
  puVar4 = PTR_LAB_04373088;
joined_r0x00342728:
  PTR_LAB_04373088 = puVar4;
  if (lVar8 != 0) {
    lVar8 = param_1[4];
    if (*(long *)(lVar8 + 0x58) != 0) {
      plVar7 = *(long **)(lVar8 + 0x50);
      if (plVar7 != (long *)0x0) {
        bVar2 = *(byte *)(plVar7 + 2);
        plVar1 = (long *)*plVar7;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar4,plVar7[4]);
          }
          FUN_002e2ea0(puVar4,plVar7);
          if (plVar1 == (long *)0x0) break;
          bVar2 = *(byte *)(plVar1 + 2);
          plVar7 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      }
      uVar11 = *(ulong *)(lVar8 + 0x48);
      *(undefined8 *)(lVar8 + 0x50) = 0;
      if (uVar11 != 0) {
        uVar9 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          do {
            lVar13 = lVar10 * 8;
            lVar10 = lVar10 + 4;
            *(undefined8 *)(*(long *)(lVar8 + 0x40) + lVar13) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x40) + lVar13 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x40) + lVar13 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x40) + lVar13 + 0x18) = 0;
          } while (uVar11 - uVar9 != lVar10);
        }
        if (uVar9 != 0) {
          lVar10 = lVar10 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar8 + 0x40) + lVar10) = 0;
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + 8;
          } while (uVar9 != 0);
        }
      }
      *(undefined8 *)(lVar8 + 0x58) = 0;
      lVar8 = param_1[4];
    }
    puVar4 = PTR_LAB_04373088;
    if (*(long *)(lVar8 + 0x30) != 0) {
      plVar7 = *(long **)(lVar8 + 0x28);
      if (plVar7 != (long *)0x0) {
        bVar2 = *(byte *)(plVar7 + 2);
        plVar1 = (long *)*plVar7;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar4,plVar7[4]);
          }
          FUN_002e2ea0(puVar4,plVar7);
          if (plVar1 == (long *)0x0) break;
          bVar2 = *(byte *)(plVar1 + 2);
          plVar7 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      }
      uVar11 = *(ulong *)(lVar8 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = 0;
      if (uVar11 != 0) {
        uVar9 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          do {
            lVar13 = lVar10 * 8;
            lVar10 = lVar10 + 4;
            *(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar13) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar13 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar13 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar13 + 0x18) = 0;
          } while (uVar11 - uVar9 != lVar10);
        }
        if (uVar9 != 0) {
          lVar10 = lVar10 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar10) = 0;
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + 8;
          } while (uVar9 != 0);
        }
      }
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
  }
  plVar7 = *(long **)(param_1[4] + 0x188);
  if (plVar7 != (long *)0x0) {
    plVar1 = (long *)(param_1[4] + 0x188);
    uVar11 = plVar7[4];
    plVar6 = plVar1;
    if (param_2 <= uVar11) goto LAB_003428e4;
LAB_003428c4:
    do {
      plVar7 = plVar7 + 1;
      plVar12 = plVar6;
      do {
        plVar5 = (long *)*plVar7;
        plVar6 = plVar12;
        while( true ) {
          plVar7 = plVar5;
          if (plVar7 == (long *)0x0) {
            if ((((plVar6 == plVar1) || (param_2 < (ulong)plVar6[4])) ||
                ((param_2 <= (ulong)plVar6[4] && (param_3 < (int)plVar6[5])))) ||
               (lVar8 = plVar6[6], lVar8 == 0)) goto LAB_00342938;
            goto joined_r0x00342a14;
          }
          uVar11 = plVar7[4];
          if (uVar11 < param_2) goto LAB_003428c4;
LAB_003428e4:
          if (uVar11 <= param_2) break;
          plVar5 = (long *)*plVar7;
          plVar6 = plVar7;
        }
        plVar12 = plVar7;
      } while (param_3 <= (int)plVar7[5]);
    } while( true );
  }
LAB_00342938:
                    /* try { // try from 00342940 to 0034296f has its CatchHandler @ 00342a54 */
  if ((param_1[3] == 0) || (lVar8 = FUN_003425d4(param_1[3],param_2,param_3), lVar8 == 0)) {
    uVar11 = FUN_00342a6c(param_1,param_2,param_3);
    if ((uVar11 & 1) != 0) {
      plVar7 = *(long **)(param_1[4] + 0x188);
      if (plVar7 != (long *)0x0) {
        plVar1 = (long *)(param_1[4] + 0x188);
        uVar11 = plVar7[4];
        plVar6 = plVar1;
        if (param_2 <= uVar11) goto LAB_003429b8;
LAB_00342998:
        do {
          plVar7 = plVar7 + 1;
          plVar12 = plVar6;
          do {
            plVar5 = (long *)*plVar7;
            plVar6 = plVar12;
            while( true ) {
              plVar7 = plVar5;
              if (plVar7 == (long *)0x0) {
                if ((((plVar6 == plVar1) || (param_2 < (ulong)plVar6[4])) ||
                    ((param_2 <= (ulong)plVar6[4] && (param_3 < (int)plVar6[5])))) ||
                   (lVar8 = plVar6[6], lVar8 == 0)) goto LAB_00342a0c;
                goto joined_r0x00342a14;
              }
              uVar11 = plVar7[4];
              if (uVar11 < param_2) goto LAB_00342998;
LAB_003429b8:
              if (uVar11 <= param_2) break;
              plVar5 = (long *)*plVar7;
              plVar6 = plVar7;
            }
            plVar12 = plVar7;
          } while (param_3 <= (int)plVar7[5]);
        } while( true );
      }
    }
LAB_00342a0c:
    lVar8 = 0;
  }
joined_r0x00342a14:
  if (!bVar3) {
    std::mutex::unlock();
  }
  return lVar8;
}


