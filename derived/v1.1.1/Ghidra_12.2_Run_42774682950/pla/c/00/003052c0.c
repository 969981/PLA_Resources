/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003052c0; name: FUN_003052c0
 */


void FUN_003052c0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  size_t __n;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  plVar8 = param_1 + 2;
  lVar9 = *plVar8;
  lVar7 = *param_2;
  if ((lVar9 != 0) && (lVar7 == 0)) {
    if (*(long *)(param_1[1] + (lVar9 + -1) * 0x20) == 0) {
      pbVar10 = (byte *)(param_1[1] + (lVar9 + -1) * 0x20 + 8);
      bVar4 = *pbVar10;
      uVar11 = (ulong)bVar4;
      if (uVar11 < 0x17) {
        pbVar6 = (byte *)(param_2 + 1);
        if ((uint)*pbVar6 + (uint)bVar4 < 0x18) {
          memcpy(pbVar10 + uVar11 + 1,(void *)((long)param_2 + 9),(ulong)*pbVar6);
          *pbVar10 = *pbVar6 + bVar4;
        }
        else {
          __n = -uVar11 + 0x17;
          memcpy(pbVar10 + uVar11 + 1,(void *)((long)param_2 + 9),__n);
          *pbVar10 = 0x17;
          if (*plVar8 == 0) {
            lVar7 = *param_1;
            param_1[1] = lVar7;
          }
          else {
            lVar7 = param_1[1];
            if ((lVar7 - *param_1 >> 5) + *plVar8 == param_1[3]) {
              FUN_00306350(param_1);
              lVar7 = param_1[1];
            }
          }
          puVar2 = (undefined8 *)(lVar7 + lVar9 * 0x20);
          *plVar8 = lVar9 + 1;
          *puVar2 = 0;
          *(byte *)(puVar2 + 1) = *pbVar6 - (char)__n;
          memcpy((void *)((long)puVar2 + 9),pbVar6 + -uVar11 + 0x18,*pbVar6 - __n);
        }
        plVar8 = param_1 + 4;
        lVar9 = *plVar8 + (ulong)*pbVar6;
        goto LAB_003053b8;
      }
    }
  }
  lVar13 = param_2[3];
  lVar12 = param_2[2];
  uVar11 = param_2[1];
  if (lVar9 == 0) {
    lVar5 = *param_1;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = param_1[1];
    if ((lVar5 - *param_1 >> 5) + lVar9 == param_1[3]) {
      FUN_00306350(param_1);
      lVar5 = param_1[1];
    }
  }
  plVar1 = (long *)(lVar5 + lVar9 * 0x20);
  *plVar1 = lVar7;
  plVar1[1] = uVar11;
  plVar1[3] = lVar13;
  plVar1[2] = lVar12;
  uVar3 = uVar11 & 0xff;
  if (lVar7 != 0) {
    uVar3 = uVar11;
  }
  param_1[4] = param_1[4] + uVar3;
  lVar9 = lVar9 + 1;
LAB_003053b8:
  *plVar8 = lVar9;
  return;
}


