/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaffe8; name: FUN_02eaffe8
 */


undefined8 FUN_02eaffe8(long *param_1,long param_2,ushort param_3,float *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ushort *puVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x80))();
  uVar7 = 0;
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      do {
        puVar9 = *(ushort **)(lVar11 + 0x20);
        fVar13 = 1.0;
        if (puVar9 != (ushort *)0x0) {
          uVar8 = 0;
          pfVar10 = (float *)((long)puVar9 + ((ulong)((uint)*puVar9 * 2 + 5) & 0x3fffc));
          do {
            if (puVar9[uVar8 + 1] == param_3) {
              fVar13 = 1.0;
              if ((char)param_1[1] != '\0') {
                fVar13 = *pfVar10;
              }
              goto LAB_02eb00b0;
            }
            uVar8 = uVar8 + 1;
            pfVar10 = pfVar10 + 4;
          } while (uVar8 < *puVar9);
          fVar13 = 1.0;
        }
LAB_02eb00b0:
        uVar3 = *(uint *)(param_2 + 0x50);
        uVar12 = *(uint *)(param_2 + 0x54);
        uVar4 = *(undefined4 *)(lVar11 + 0x38);
        if (uVar3 < uVar12) {
LAB_02eb00f0:
          if (uVar3 < uVar12) {
            uVar12 = *(uint *)(param_2 + 0x50);
            *(uint *)(param_2 + 0x50) = uVar12 + 1;
            puVar2 = (undefined4 *)(*(long *)(param_2 + 0x48) + (ulong)uVar12 * 0x10);
            if (puVar2 != (undefined4 *)0x0) {
              lVar6 = *(long *)(param_2 + 0x48) + (ulong)uVar12 * 0x10;
              *puVar2 = 2;
              *(undefined4 *)(lVar6 + 4) = uVar4;
              *(ushort *)(lVar6 + 8) = param_3;
              *(float *)(lVar6 + 0xc) = fVar13;
            }
          }
        }
        else {
          iVar1 = uVar12 + (uVar12 >> 1);
          if (uVar12 == 0) {
            iVar1 = 1;
          }
          uVar12 = iVar1 + uVar12;
          lVar6 = (*DAT_0442d148)(0,*(undefined8 *)(param_2 + 0x48),(ulong)uVar12 << 4);
          if (lVar6 != 0) {
            *(long *)(param_2 + 0x48) = lVar6;
            *(uint *)(param_2 + 0x54) = uVar12;
            goto LAB_02eb00f0;
          }
        }
        *param_4 = *param_4 * fVar13;
        lVar11 = *(long *)(lVar11 + 0x10);
      } while (lVar11 != 0);
      uVar7 = 1;
    }
  }
  return uVar7;
}


