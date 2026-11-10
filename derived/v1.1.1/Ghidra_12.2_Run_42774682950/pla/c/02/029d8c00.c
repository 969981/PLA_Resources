/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d8c00; name: FUN_029d8c00
 */


void FUN_029d8c00(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  uVar6 = 7;
  *param_2 = 7;
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_3[2] + 10) != '\x12') {
    uVar5 = FUN_0296f140(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],
                         *(char *)(param_3[2] + 10),*(undefined1 *)(param_3 + 3));
    if (*(char *)(param_3 + 3) == '\0') {
      bVar4 = *(char *)(param_3[2] + 10) != '\x04';
      uVar1 = *param_3;
      uVar2 = param_3[1];
      *(undefined1 *)(param_2 + 1) = 0;
      if (uVar5 == 0) {
        if ((bVar4) ||
           ((lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x300),
            *(int *)(*(long *)(*(long *)(lVar8 + 0x10) + 0x28) + 0x1b0) == 0 &&
            (uVar7 = FUN_029701e4(*(undefined8 *)(lVar8 + 0x38),uVar2,1), (uVar7 & 1) != 0)))) {
          uVar5 = 0;
        }
        else {
          uVar5 = 7;
        }
      }
      else if ((((!bVar4) &&
                (lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x300),
                *(int *)(*(long *)(*(long *)(lVar8 + 0x10) + 0x28) + 0x1b0) == 0)) &&
               (uVar7 = FUN_029701e4(*(undefined8 *)(lVar8 + 0x38),uVar2,0), (uVar7 & 1) != 0)) &&
              (uVar7 = FUN_02970744(*(undefined8 *)(param_1 + 0x38),uVar1,uVar2), (uVar7 & 1) == 0))
      {
        uVar5 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
    if ((*(char *)(param_3[2] + 10) == '\t') && ((*(byte *)(param_3[1] + 0x1f0) & 7) != 0)) {
      uVar9 = ((&DAT_03a84a4c)[(int)uVar5] & 0x1ffffff) << 1;
      if (0xfff < uVar9) {
        uVar9 = 0x1000;
      }
      bVar4 = uVar5 != 0;
      uVar5 = 0;
      if (uVar9 == 0 && bVar4) {
        uVar9 = 1;
      }
      do {
        if (uVar5 == 0x20) {
          uVar5 = 0;
          goto LAB_029d8d3c;
        }
        uVar3 = uVar5 & 0x1f;
        uVar5 = uVar5 + 1;
      } while ((1 << (ulong)uVar3 & uVar9) == 0);
      if (0xc < uVar5) {
        uVar5 = 0xd;
      }
    }
LAB_029d8d3c:
    uVar6 = FUN_0296fda4(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],
                         *(char *)(param_3[2] + 10),uVar5);
  }
  *param_2 = uVar6;
  return;
}


