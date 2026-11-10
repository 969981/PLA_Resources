/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b68b4c; name: FUN_02b68b4c
 */


ulong FUN_02b68b4c(ulong param_1,int param_2)

{
  long *plVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  
  plVar14 = *(long **)(param_1 + 0x58);
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar14 != plVar7) {
    do {
      sVar2 = *(short *)((long)plVar14 + 10);
      sVar5 = (**(code **)(*(long *)(*(long *)(*plVar14 + 0x58) + 0x58) + 0x10))();
      if ((int)(short)param_2 < (int)sVar2 + (int)sVar5) {
        param_2 = param_2 - (uint)*(ushort *)((long)plVar14 + 10);
        plVar7 = (long *)(*(long *)(*plVar14 + 0x58) + 0x58);
        uVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,param_2);
        if ((~uVar6 & 0xffff) != 0) goto LAB_02b68be0;
        plVar7 = (long *)(*(long *)(*plVar14 + 0x58) + 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        puVar15 = (undefined1 *)*puVar8;
        plVar7 = (long *)puVar8[3];
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        if (puVar15 == &DAT_cbf29ce484222645) {
          bVar4 = false;
          goto joined_r0x02b68d7c;
        }
        plVar1 = *(long **)(param_1 + 0x58);
        goto joined_r0x02b68c64;
      }
      plVar14 = plVar14 + 2;
    } while (plVar7 != plVar14);
  }
  param_1 = 0xffff;
  goto LAB_02b68c44;
joined_r0x02b68c64:
  if (plVar1 != *(long **)(param_1 + 0x60)) {
    puVar9 = *(undefined1 **)(*plVar1 + 0x68);
    if (puVar9 != (undefined1 *)0x0) {
      uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar15);
      }
      else {
        puVar11 = puVar15;
        if (puVar9 <= puVar15) {
          uVar3 = 0;
          if (puVar9 != (undefined1 *)0x0) {
            uVar3 = (ulong)puVar15 / (ulong)puVar9;
          }
          puVar11 = puVar15 + -(uVar3 * (long)puVar9);
        }
      }
      plVar12 = *(long **)(*(long *)(*plVar1 + 0x60) + (long)puVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar12[1] == puVar15) {
              if ((undefined1 *)plVar12[2] == puVar15) goto LAB_02b68d60;
            }
            else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            puVar13 = (undefined1 *)plVar12[1];
            if (puVar13 == puVar15) {
              if ((undefined1 *)plVar12[2] == puVar15) goto LAB_02b68d60;
            }
            else {
              if (puVar9 <= puVar13) {
                uVar10 = 0;
                if (puVar9 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar13 / (ulong)puVar9;
                }
                puVar13 = puVar13 + -(uVar10 * (long)puVar9);
              }
              if (puVar13 != puVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_02b68d68;
  }
  goto LAB_02b68d74;
LAB_02b68d60:
  if (-1 < (short)plVar12[6]) {
    param_1 = (ulong)((uint)*(ushort *)((long)plVar1 + 10) + (int)(short)plVar12[6]);
    bVar4 = true;
    goto joined_r0x02b68d7c;
  }
LAB_02b68d68:
  plVar1 = plVar1 + 2;
  goto joined_r0x02b68c64;
LAB_02b68d74:
  param_1 = 0xffff;
  bVar4 = true;
joined_r0x02b68d7c:
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (!bVar4) {
LAB_02b68be0:
    param_1 = (ulong)(*(ushort *)((long)plVar14 + 10) + uVar6);
  }
LAB_02b68c44:
  return param_1 & 0xffffffff;
}


