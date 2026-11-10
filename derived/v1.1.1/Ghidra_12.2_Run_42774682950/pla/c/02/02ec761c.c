/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec761c; name: FUN_02ec761c
 */


void FUN_02ec761c(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  char local_34 [4];
  
  plVar1 = (long *)FUN_02ec7ac8(param_1 + 0x1c,param_2,local_34);
  if ((plVar1 != (long *)0x0) && (local_34[0] != '\0')) {
    puVar6 = (uint *)(plVar1 + 1);
    uVar5 = *puVar6;
    if (uVar5 < 2) {
      uVar2 = (**(code **)(*param_1 + 0x268))(param_1);
      if ((uVar2 & 1) == 0) {
        lVar8 = *plVar1;
        if (lVar8 != 0) {
          FUN_02ea7ffc(lVar8);
        }
        lVar3 = *param_3;
        *param_3 = lVar8;
        if (lVar3 != 0) {
          FUN_02ea800c();
        }
      }
      FUN_02ea800c(*plVar1);
      puVar6 = (uint *)(param_1 + 0x1d);
      uVar5 = *puVar6;
      plVar4 = (long *)(param_1[0x1c] + (ulong)uVar5 * 0x10 + -0x10);
      if (plVar1 < plVar4) {
        uVar2 = (param_1[0x1c] + (ulong)uVar5 * 0x10 + ~(ulong)plVar1) - 0x10;
        plVar7 = plVar1;
        if (((uint)uVar2 >> 4 & 1) == 0) {
          plVar7 = plVar1 + 2;
          *plVar1 = *plVar7;
          *(int *)(plVar1 + 1) = (int)plVar1[3];
        }
        if (0xf < uVar2) {
          do {
            *plVar7 = plVar7[2];
            *(int *)(plVar7 + 1) = (int)plVar7[3];
            plVar1 = plVar7 + 4;
            plVar7[2] = *plVar1;
            *(int *)(plVar7 + 3) = (int)plVar7[5];
            plVar7 = plVar1;
          } while (plVar1 < plVar4);
        }
        uVar5 = *puVar6;
      }
    }
    *puVar6 = uVar5 - 1;
  }
  return;
}


