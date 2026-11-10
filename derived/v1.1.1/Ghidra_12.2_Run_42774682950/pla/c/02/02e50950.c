/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50950; name: FUN_02e50950
 */


void FUN_02e50950(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 auStack_64 [4];
  
  if ((*(int *)(param_3 + 0x54) == *(int *)(param_2 + 0x70)) &&
     (lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x38),
     *(long *)(*(long *)(lVar2 + 0x28) + 0xa8) != *(long *)(param_2 + 0x40))) {
    lVar2 = *(long *)(lVar2 + 0x10);
    local_80 = *(float *)(lVar2 + 0x78);
    local_7c = *(float *)(lVar2 + 0x7c);
    local_78 = *(float *)(lVar2 + 0x80);
    uVar1 = *(uint *)(param_2 + 0x30);
    if (uVar1 != 0) {
      plVar3 = *(long **)(param_2 + 0x28);
      plVar6 = plVar3;
      do {
        lVar2 = *plVar6;
        if (((*(char *)(lVar2 + 0x690) != '\0') &&
            (*(int *)(param_3 + 0x54) == *(int *)(lVar2 + 0xa8))) && (*(int *)(lVar2 + 0x80) != 0))
        {
          plVar3 = *(long **)(lVar2 + 0x78);
          do {
            if (plVar3[(ulong)((int)plVar3[0x10] - 1) + 8] != param_2) {
              lVar4 = *plVar3;
              FUN_02e54328(&local_90,lVar4,&local_80);
              if (SQRT((local_90 - local_80) * (local_90 - local_80) +
                       (fStack_8c - local_7c) * (fStack_8c - local_7c) +
                       (local_88 - local_78) * (local_88 - local_78)) +
                  *(float *)((long)plVar3 + 0x84) < param_1) {
                FUN_02e58fbc(plVar3,param_2,param_4,param_5,auStack_64);
                uVar5 = *(undefined8 *)(lVar4 + 0x40);
                lVar4 = FUN_02e5312c(param_3 + 0x30,uVar5,&local_90);
                if ((lVar4 == 0) || (local_90._0_1_ == '\0')) {
                  FUN_02e53190(param_3 + 0x30,uVar5,&local_90);
                  *param_6 = 1;
                }
                else if (*(char *)(lVar4 + 0x78) == '\x02') {
                  *(undefined1 *)(lVar4 + 0x78) = 1;
                }
              }
            }
            plVar3 = plVar3 + 0x12;
          } while (plVar3 != (long *)(*(long *)(lVar2 + 0x78) +
                                     (ulong)*(uint *)(lVar2 + 0x80) * 0x90));
          plVar3 = *(long **)(param_2 + 0x28);
          uVar1 = *(uint *)(param_2 + 0x30);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar1);
    }
  }
  return;
}


