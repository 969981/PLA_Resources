/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53ec8; name: FUN_02e53ec8
 */


/* WARNING: Removing unreachable block (ram,0x02e53fcc) */

void FUN_02e53ec8(undefined8 param_1,float param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6,uint param_7,undefined8 *param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined1 auStack_74 [4];
  
  param_8[param_7] = param_4;
  if (*(int *)(param_4 + 0xa8) !=
      *(int *)(*(long *)(*(long *)(*(long *)(param_5 + 8) + 0x38) + 0x28) + 0xf4)) {
    *(undefined4 *)(param_4 + 0x80) = 0;
    *(undefined2 *)(param_4 + 0x94) = 1;
    (*(code *)**(undefined8 **)(param_4 + 0x88))((undefined8 *)(param_4 + 0x88));
    *(undefined4 *)(param_4 + 0xa8) =
         *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_5 + 8) + 0x38) + 0x28) + 0xf4);
  }
  lVar1 = FUN_02e535e4(param_4 + 0x78,*param_8,auStack_74);
  if ((lVar1 != 0) && ((float)param_1 < *(float *)(lVar1 + 0x84))) {
    uVar10 = NEON_fminnm((int)param_3,0x3f800000);
    *(uint *)(lVar1 + 0x80) = param_7 + 1;
    uVar2 = 8;
    if (param_7 + 1 < 8) {
      uVar2 = param_7 + 1;
    }
    *(float *)(lVar1 + 0x84) = (float)param_1;
    *(float *)(lVar1 + 0x88) = param_2;
    *(undefined4 *)(lVar1 + 0x8c) = uVar10;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        puVar7 = (undefined8 *)(lVar1 + 0x40);
        puVar5 = param_8 + 1;
        puVar6 = (undefined8 *)(param_9 + 8);
        do {
          puVar7[-8] = puVar5[-1];
          *puVar7 = puVar6[-1];
          puVar7[-7] = *puVar5;
          lVar4 = lVar4 + 2;
          puVar7[1] = *puVar6;
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 2;
        } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar4);
        if ((uVar2 & 1) == 0) goto LAB_02e54030;
      }
      puVar7 = (undefined8 *)(lVar1 + lVar4 * 8);
      *puVar7 = param_8[lVar4];
      puVar7[8] = *(undefined8 *)(param_9 + lVar4 * 8);
    }
  }
LAB_02e54030:
  uVar3 = (ulong)*(uint *)(param_4 + 0x30);
  if (*(uint *)(param_4 + 0x30) != 0) {
    plVar8 = *(long **)(param_4 + 0x28);
    if (param_7 == 0xffffffff) {
      do {
        plVar9 = plVar8 + 1;
        FUN_02e50d6c(param_1,*(float *)(param_4 + 0xac) * param_2,param_3,*plVar8,param_5,param_6,0,
                     param_8,param_9);
        plVar8 = plVar9;
      } while (plVar9 != (long *)(*(long *)(param_4 + 0x28) + (ulong)*(uint *)(param_4 + 0x30) * 8))
      ;
    }
    else {
      plVar9 = plVar8;
      do {
        lVar1 = 0;
        do {
          if (*(long *)(param_9 + lVar1) == *plVar9) goto LAB_02e54094;
          lVar1 = lVar1 + 8;
        } while ((ulong)(param_7 + 1) * 8 != lVar1);
        FUN_02e50d6c(param_1,*(float *)(param_4 + 0xac) * param_2,param_3,*plVar9,param_5,param_6,
                     (ulong)(param_7 + 1),param_8,param_9);
        plVar8 = *(long **)(param_4 + 0x28);
        uVar3 = (ulong)*(uint *)(param_4 + 0x30);
LAB_02e54094:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar8 + uVar3);
    }
  }
  return;
}


