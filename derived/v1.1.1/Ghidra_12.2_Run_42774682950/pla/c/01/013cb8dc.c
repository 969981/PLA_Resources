/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cb8dc; name: FUN_013cb8dc
 */


void FUN_013cb8dc(undefined1 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 0x700) == 0) {
    lVar4 = *(long *)(param_2 + 0x5c8);
  }
  else {
    if (*(int *)(param_2 + 0x700) != 1) goto LAB_013cb9a4;
    lVar4 = *(long *)(param_2 + 0x5e8);
  }
  if (lVar4 != 0) {
    if ((ulong)((*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8) >> 2) * -0x79435e50d79435e5) <
        (param_3 & 0xffffffff)) {
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 8) + (param_3 & 0xffffffff) * 0x4c);
    *param_1 = 0;
    uVar1 = *puVar3;
    *(undefined8 *)(param_1 + 0xc) = puVar3[1];
    *(undefined8 *)(param_1 + 4) = uVar1;
    uVar1 = puVar3[2];
    uVar5 = puVar3[3];
    uVar2 = puVar3[4];
    *(undefined8 *)(param_1 + 0x2c) = puVar3[5];
    *(undefined8 *)(param_1 + 0x24) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    uVar1 = puVar3[6];
    uVar2 = puVar3[7];
    uVar5 = puVar3[8];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(puVar3 + 9);
    *(undefined8 *)(param_1 + 0x44) = uVar5;
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    *(undefined8 *)(param_1 + 0x34) = uVar1;
    *param_1 = 1;
    return;
  }
LAB_013cb9a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


