/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50670; name: FUN_02e50670
 */


void FUN_02e50670(float param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 *param_7,undefined1 *param_8)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  
  if (*(int *)(param_4 + 0x54) == *(int *)(param_2 + 0x70)) {
    lVar4 = *(long *)(*(long *)(param_4 + 8) + 0x38);
    if (*(long *)(*(long *)(lVar4 + 0x28) + 0xa8) != *(long *)(param_2 + 0x40)) {
      lVar6 = *(long *)(**(long **)(*(long *)(param_3 + 8) + 0x38) + 0x20);
      local_90 = *(float *)(lVar6 + 0x18);
      local_8c = *(float *)(lVar6 + 0x1c);
      local_88 = *(float *)(lVar6 + 0x20);
      if (*(uint *)(*(long *)(param_4 + 8) + 0x40) < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x10);
      }
      local_a0 = *(float *)(lVar4 + 0x78);
      local_9c = *(float *)(lVar4 + 0x7c);
      local_98 = *(float *)(lVar4 + 0x80);
      uVar3 = *(uint *)(param_2 + 0x30);
      if (uVar3 != 0) {
        plVar5 = *(long **)(param_2 + 0x28);
        plVar8 = plVar5;
        do {
          lVar4 = *plVar8;
          if (((*(char *)(lVar4 + 0x690) != '\0') &&
              (*(int *)(param_4 + 0x54) == *(int *)(lVar4 + 0xa8))) && (*(int *)(lVar4 + 0x80) != 0)
             ) {
            plVar5 = *(long **)(lVar4 + 0x78);
            do {
              if (plVar5[(ulong)((int)plVar5[0x10] - 1) + 8] != param_2) {
                FUN_02e54328(&local_b0,lVar4,&local_90);
                fVar9 = local_b0 - local_90;
                lVar6 = *plVar5;
                fVar11 = local_a8 - local_88;
                fVar10 = local_ac - local_8c;
                FUN_02e54328(&local_b0,lVar6,&local_a0);
                if (*(float *)((long)plVar5 + 0x84) +
                    SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) +
                    SQRT((local_b0 - local_a0) * (local_b0 - local_a0) +
                         (local_ac - local_9c) * (local_ac - local_9c) +
                         (local_a8 - local_98) * (local_a8 - local_98)) < param_1) {
                  FUN_02e58fbc(plVar5,param_2,param_5,param_6,param_7);
                  uVar1 = FUN_02e5be68(param_3);
                  if (((uVar1 & 1) != 0) || (uVar1 = FUN_02e5bed8(param_3), (uVar1 & 1) != 0)) {
                    lVar2 = FUN_02e5312c(param_3 + 0x30,*(undefined8 *)(lVar4 + 0x40),&local_b0);
                    if ((lVar2 == 0) || (local_b0._0_1_ == '\0')) {
                      FUN_02e53190(param_3 + 0x30,*(undefined8 *)(lVar4 + 0x40),&local_b0);
                      *param_7 = 1;
                    }
                    else if (*(char *)(lVar2 + 0x78) == '\x02') {
                      *(undefined1 *)(lVar2 + 0x78) = 1;
                    }
                  }
                  uVar7 = *(undefined8 *)(lVar6 + 0x40);
                  lVar6 = FUN_02e5312c(param_4 + 0x30,uVar7,&local_b0);
                  if ((lVar6 == 0) || (local_b0._0_1_ == '\0')) {
                    FUN_02e53190(param_4 + 0x30,uVar7,&local_b0);
                    *param_8 = 1;
                  }
                  else if (*(char *)(lVar6 + 0x78) == '\x02') {
                    *(undefined1 *)(lVar6 + 0x78) = 1;
                  }
                }
              }
              plVar5 = plVar5 + 0x12;
            } while (plVar5 != (long *)(*(long *)(lVar4 + 0x78) +
                                       (ulong)*(uint *)(lVar4 + 0x80) * 0x90));
            plVar5 = *(long **)(param_2 + 0x28);
            uVar3 = *(uint *)(param_2 + 0x30);
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar5 + uVar3);
      }
    }
  }
  return;
}


