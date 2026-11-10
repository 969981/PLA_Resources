/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e599d4; name: FUN_02e599d4
 */


void FUN_02e599d4(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  char local_170 [8];
  undefined4 auStack_168 [56];
  int local_88;
  
  if ((int)param_1[1] != 0) {
    plVar9 = (long *)*param_1;
    do {
      fVar14 = *(float *)((long)plVar9 + 0x84);
      if (*(uint *)(*(long *)(param_3 + 8) + 0x40) < 6) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x28);
      }
      fVar13 = (float)FUN_02ef71a8(uVar2);
      if (fVar14 < fVar13) {
        lVar10 = *plVar9;
        lVar3 = FUN_02e5312c(param_2 + 0x30,*(undefined8 *)(lVar10 + 0x40),local_170);
        if (((((lVar3 != 0) && (local_170[0] != '\0')) && (*(char *)(lVar3 + 0x15) == '\0')) &&
            ((*(int *)(lVar3 + 0x20) != 0 &&
             (lVar4 = FUN_02e5312c(param_3 + 0x30,
                                   *(undefined8 *)(plVar9[(int)plVar9[0x10] - 1] + 0x40),local_170),
             lVar4 != 0)))) && ((local_170[0] != '\0' && (*(int *)(lVar4 + 0x30) != 0)))) {
          uVar11 = 0;
          do {
            memcpy(local_170,(void *)(*(long *)(lVar4 + 0x28) + uVar11 * 0xf0),0xf0);
            uVar1 = (int)plVar9[0x10] - 1;
            if (uVar1 == 0) {
LAB_02e59c1c:
              if (*(int *)(lVar3 + 0x20) != 0) {
                lVar8 = *(long *)(lVar3 + 0x18);
                do {
                  memcpy(&local_290,local_170,0xf0);
                  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x10);
                  local_180 = *(undefined8 *)(lVar5 + 0x78);
                  local_178 = *(undefined4 *)(lVar5 + 0x80);
                  uVar12 = FUN_02e5673c(&local_290,lVar10,lVar8,&local_180,0);
                  if (((uVar12 & 1) != 0) &&
                     (__dest = (void *)FUN_02e5a074(param_4), __dest != (void *)0x0)) {
                    memcpy(__dest,&local_290,0xf0);
                  }
                  lVar8 = lVar8 + 0x8c;
                } while (lVar8 != *(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x8c);
              }
            }
            else {
              uVar12 = (ulong)((int)plVar9[0x10] - 2);
              lVar8 = (ulong)uVar1 << 3;
              do {
                lVar5 = FUN_02e52b20(((undefined8 *)((long)plVar9 + lVar8))[8],plVar9[uVar12],
                                     *(undefined8 *)((long)plVar9 + lVar8));
                if ((lVar5 == 0) || (*(int *)(lVar5 + 0x78) == 0)) {
                  local_290 = 0;
                  local_288 = 0;
                  local_180 = *(undefined8 *)(plVar9[uVar12] + 0x50);
                  local_178 = *(undefined4 *)(plVar9[uVar12] + 0x58);
                  local_190 = *(undefined8 *)(local_170 + (ulong)(local_88 - 1) * 0x10);
                  local_188 = auStack_168[(ulong)(local_88 - 1) * 4];
                  FUN_02e54120(*(undefined8 *)((long)plVar9 + lVar8),&local_190,&local_180,
                               &local_290);
                  local_1a0 = local_290;
                  local_198 = local_288;
                  uVar6 = FUN_02e565fc(local_170,&local_1a0,&local_180);
                }
                else {
                  lVar7 = plVar9[uVar12];
                  local_290 = *(undefined8 *)(lVar7 + 0x50);
                  local_288 = *(undefined4 *)(lVar7 + 0x58);
                  uVar6 = FUN_02e5673c(local_170,*(undefined8 *)((long)plVar9 + lVar8),lVar5,
                                       &local_290,
                                       *(ulong *)(lVar7 + 0x40) <
                                       *(ulong *)(*(long *)((long)plVar9 + lVar8) + 0x40));
                }
                if ((int)uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                lVar8 = lVar8 + -8;
              } while ((uVar6 & 1) != 0);
              if ((uVar6 & 1) != 0) goto LAB_02e59c1c;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(lVar4 + 0x30));
        }
      }
      plVar9 = plVar9 + 0x12;
    } while (plVar9 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x90));
  }
  return;
}


