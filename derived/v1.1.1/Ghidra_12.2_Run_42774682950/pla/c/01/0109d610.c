/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109d610; name: FUN_0109d610
 */


void FUN_0109d610(long *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  iVar2 = FUN_02c58424();
  if (iVar2 != 0) {
    uVar6 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar6);
      iVar2 = FUN_02c6849c(*(undefined8 *)(lVar4 + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(lVar4 + 0x98));
      if (iVar2 < 0x225) {
        if (iVar2 == 0x3b) {
          if (sVar1 == 2) {
            lVar5 = 2;
            goto LAB_0109d720;
          }
        }
        else if (iVar2 == 0x65 && sVar1 == 2) {
          lVar5 = 3;
LAB_0109d720:
          FUN_02c62fcc(lVar4,(&DAT_03a789ae)[lVar5 * 4],0);
        }
      }
      else if (iVar2 == 900) {
        if (sVar1 == 1) {
          lVar5 = 0;
          goto LAB_0109d720;
        }
      }
      else if (iVar2 == 0x225) {
        if (sVar1 == 2) {
          lVar5 = 1;
          goto LAB_0109d720;
        }
      }
      else if (iVar2 == 0x2c9 && sVar1 == 2) {
        lVar5 = 4;
        goto LAB_0109d720;
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_02c58424(param_1);
    } while (uVar6 < uVar3);
  }
  FUN_02c592a8(param_1);
  return;
}


