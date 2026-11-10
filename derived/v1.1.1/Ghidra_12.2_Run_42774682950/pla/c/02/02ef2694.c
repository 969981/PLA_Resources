/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2694; name: FUN_02ef2694
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02ef2694(long param_1,long param_2,float *param_3,uint param_4,byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__s;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_44 [4];
  
  uVar6 = *(uint *)(param_1 + 0x38);
  if (uVar6 != 0) {
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = (uint)param_2 / uVar6;
    }
    for (plVar11 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar6) * 8
                             ); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[1] == param_2) {
        if ((*(int *)(plVar11[2] + 0x40) == 0) ||
           (lVar12 = **(long **)(plVar11[2] + 0x38), lVar12 == 0)) {
          uVar5 = 2;
          goto joined_r0x02ef28fc;
        }
        uVar6 = (uint)*(ushort *)(lVar12 + 0x38);
        if (uVar6 == param_4) {
joined_r0x02ef28f0:
          if (uVar6 == 0) goto LAB_02ef27b0;
        }
        else {
          if (*(long *)(lVar12 + 0x20) != 0) {
            *(undefined2 *)(lVar12 + 0x38) = 0;
            (*DAT_0442d150)(5);
            *(undefined8 *)(lVar12 + 0x20) = 0;
          }
          if (param_4 != 0) {
            __s = (void *)(*DAT_0442d138)(5,(ulong)param_4 * 0x28);
            if (__s != (void *)0x0) {
              memset(__s,0,(ulong)param_4 * 0x28);
              *(void **)(lVar12 + 0x20) = __s;
              *(short *)(lVar12 + 0x38) = (short)param_4;
              uVar6 = param_4 & 0xffff;
              goto joined_r0x02ef28f0;
            }
            goto LAB_02ef27b0;
          }
          if (*(short *)(lVar12 + 0x38) == 0) goto LAB_02ef27b0;
        }
        puVar7 = *(undefined8 **)(lVar12 + 0x20);
        *puVar7 = *(undefined8 *)param_3;
        uVar5 = *(undefined8 *)(param_3 + 2);
        uVar2 = *(undefined8 *)(param_3 + 4);
        uVar10 = *(undefined8 *)(param_3 + 6);
        *(float *)(puVar7 + 4) = param_3[8];
        puVar7[1] = uVar5;
        puVar7[2] = uVar2;
        puVar7[3] = uVar10;
        *(float *)(*(long *)(lVar12 + 0x20) + 0x24) = param_3[9];
        if (1 < *(ushort *)(lVar12 + 0x38)) {
          lVar8 = 0;
          uVar9 = 1;
          do {
            lVar1 = *(long *)(lVar12 + 0x20) + lVar8;
            *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((long)param_3 + lVar8 + 0x28);
            uVar10 = *(undefined8 *)((long)param_3 + lVar8 + 0x40);
            uVar5 = *(undefined8 *)((long)param_3 + lVar8 + 0x30);
            uVar2 = *(undefined8 *)((long)param_3 + lVar8 + 0x38);
            *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)((long)param_3 + lVar8 + 0x48);
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            *(undefined8 *)(lVar1 + 0x40) = uVar10;
            *(undefined8 *)(lVar1 + 0x30) = uVar5;
            lVar4 = lVar8 + 0x4c;
            lVar1 = *(long *)(lVar12 + 0x20) + lVar8;
            lVar8 = lVar8 + 0x28;
            *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)((long)param_3 + lVar4);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar12 + 0x38));
        }
LAB_02ef27b0:
        *(byte *)(lVar12 + 0x3a) = *(byte *)(lVar12 + 0x3a) & 0xf8 | param_5 & 7;
        uVar5 = 1;
        *(byte *)(lVar12 + 0x54) = *(byte *)(lVar12 + 0x54) | 1;
joined_r0x02ef28fc:
        if (param_4 == 0) {
          return uVar5;
        }
        if (*(uint *)(plVar11[2] + 0x40) < 3) {
          return uVar5;
        }
        lVar12 = *(long *)(*(long *)(plVar11[2] + 0x38) + 0x10);
        if (lVar12 == 0) {
          return uVar5;
        }
        *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)param_3;
        uVar10 = *(undefined8 *)(param_3 + 6);
        uVar5 = *(undefined8 *)(param_3 + 2);
        uVar2 = *(undefined8 *)(param_3 + 4);
        *(float *)(lVar12 + 0x80) = param_3[8];
        *(undefined8 *)(lVar12 + 0x70) = uVar2;
        *(undefined8 *)(lVar12 + 0x78) = uVar10;
        *(undefined8 *)(lVar12 + 0x68) = uVar5;
        fVar13 = param_3[4];
        fVar14 = param_3[5];
        fVar15 = *param_3;
        fVar16 = param_3[1];
        fVar17 = param_3[2];
        fVar18 = param_3[3];
        *(undefined4 *)(lVar12 + 0x48) = *(undefined4 *)(lVar12 + 0x6c);
        *(undefined4 *)(lVar12 + 0x4c) = *(undefined4 *)(lVar12 + 0x70);
        *(undefined4 *)(lVar12 + 0x58) = *(undefined4 *)(lVar12 + 100);
        *(int *)(lVar12 + 0x5c) = (int)uVar5;
        *(float *)(lVar12 + 0x3c) = fVar17 * fVar13 - fVar16 * fVar14;
        *(float *)(lVar12 + 0x40) = fVar15 * fVar14 - fVar18 * fVar17;
        *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(lVar12 + 0x74);
        *(undefined4 *)(lVar12 + 0x54) = *(undefined4 *)(lVar12 + 0x60);
        *(float *)(lVar12 + 0x44) = fVar18 * fVar16 - fVar15 * fVar13;
        FUN_02e44d58(&DAT_0440a0e8,*(undefined8 *)(*(long *)(lVar12 + 8) + 0x48),auStack_44);
        return 1;
      }
    }
  }
  return 2;
}


