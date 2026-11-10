/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc06b4; name: FUN_01bc06b4
 */


void FUN_01bc06b4(char *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*param_1 != '\0') {
    if ((long *)(param_1 + 8) == param_2) {
      return;
    }
    FUN_01bc0820();
    FUN_009575b8(param_1 + 8,*param_2,param_2[1]);
    return;
  }
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  lVar4 = param_2[5];
  lVar3 = param_2[6];
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = lVar1;
  *(long *)(param_1 + 0x30) = lVar4;
  *(long *)(param_1 + 0x38) = lVar3;
  *(long *)(param_1 + 0x28) = lVar2;
  lVar1 = param_2[1] - *param_2;
  if (lVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < (ulong)(lVar1 >> 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1,4);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xb8))();
    }
    *(long *)(param_1 + 8) = lVar4;
    *(long *)(param_1 + 0x10) = lVar4;
    *(long *)(param_1 + 0x18) = lVar4 + (lVar1 >> 2) * 4;
    lVar2 = param_2[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 4) {
      FUN_00957978(plVar6,lVar4,lVar1);
      lVar4 = *(long *)(param_1 + 0x10) + 4;
      *(long *)(param_1 + 0x10) = lVar4;
    }
  }
  *param_1 = '\x01';
  return;
}


