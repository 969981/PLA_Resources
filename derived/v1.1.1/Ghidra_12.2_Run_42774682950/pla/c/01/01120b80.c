/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01120b80; name: FUN_01120b80
 */


void FUN_01120b80(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  FUN_01120830(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      lVar6 = *param_3;
      uVar2 = FUN_0111ea04((short)*puVar3,(short)*puVar5);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x53a) = 1;
      }
      else {
        uVar1 = *puVar3;
        lVar6 = lVar7;
        do {
          lVar8 = lVar6;
          *(undefined4 *)((long)param_1 + lVar8 + 0xc) = *(undefined4 *)((long)param_1 + lVar8 + 8);
          if (lVar8 == -8) {
            puVar4 = param_1;
            goto LAB_01120c44;
          }
          lVar9 = *param_3;
          uVar2 = FUN_0111ea04(uVar1 & 0xffff,*(undefined2 *)((long)param_1 + lVar8 + 4));
          lVar6 = lVar8 + -4;
        } while ((uVar2 & 1) != 0);
        *(undefined1 *)(lVar9 + 0x53a) = 1;
        puVar4 = (uint *)((long)param_1 + lVar8 + 8);
LAB_01120c44:
        *puVar4 = uVar1;
      }
      lVar7 = lVar7 + 4;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}


