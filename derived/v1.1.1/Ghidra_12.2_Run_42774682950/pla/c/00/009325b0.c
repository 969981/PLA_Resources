/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009325b0; name: FUN_009325b0
 */


void FUN_009325b0(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_48;
  
  *param_1 = (long)&PTR_FUN_041c2158;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(param_2 + 0xf8) != 0) {
    uVar5 = 0;
    do {
      plVar6 = (long *)(param_2 + uVar5 * 8 + 8);
      local_48 = *plVar6;
      uVar2 = (*(code *)*param_3)(param_3 + 4,&local_48);
      if ((uVar2 & 1) != 0) {
        lVar3 = *plVar6;
        uVar1 = *(uint *)(param_1 + 0x1f);
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar4 = uVar2;
          plVar6 = param_1;
          do {
            plVar6 = plVar6 + 1;
            if (*plVar6 == lVar3) goto LAB_009326a0;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          if (0x1d < uVar1) goto LAB_009326a0;
        }
        *(uint *)(param_1 + 0x1f) = uVar1 + 1;
        param_1[uVar2 + 1] = lVar3;
      }
LAB_009326a0:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0xf8));
  }
  return;
}


