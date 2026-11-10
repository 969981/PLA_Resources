/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edfd6c; name: FUN_02edfd6c
 */


void FUN_02edfd6c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  
  if (*(int *)(param_2 + 0x58) == 0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x50);
    bVar6 = false;
    do {
      uVar1 = *(uint *)(param_1 + 1);
      if (uVar1 != 0) {
        uVar2 = *(uint *)(lVar5 + 4);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        for (puVar4 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 8);
            puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
          if (*puVar4 == uVar2) {
            FUN_02ee1924(puVar4,param_2);
            bVar6 = true;
            break;
          }
        }
      }
      if (*(long *)(lVar5 + 8) != 0) {
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x20);
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (bVar6) goto LAB_02edfe80;
  }
  if ((int)param_1[1] != 0) {
    lVar5 = *(long *)*param_1;
    if (lVar5 == 0) {
      uVar7 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar7) goto LAB_02edfe80;
        uVar7 = uVar7 + 1;
        lVar5 = ((long *)*param_1)[uVar7 & 0xffffffff];
      } while (lVar5 == 0);
    }
    else {
      uVar7 = 0;
    }
    do {
      do {
        FUN_02ee1924(lVar5,param_2);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
      do {
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1) goto LAB_02edfe80;
        lVar5 = *(long *)(*param_1 + (ulong)uVar1 * 8);
      } while (lVar5 == 0);
    } while( true );
  }
LAB_02edfe80:
  FUN_02ec55d0(DAT_0440a180,param_2,0);
  return;
}


