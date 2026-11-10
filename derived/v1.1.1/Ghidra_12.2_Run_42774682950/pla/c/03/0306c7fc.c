/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c7fc; name: FUN_0306c7fc
 */


void FUN_0306c7fc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  param_1[4] = param_1[1];
  puVar4 = (uint *)param_1[1];
  do {
    if (puVar4 == (uint *)0x0) {
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[5] = 0;
      return;
    }
    iVar3 = *(int *)((long)param_1 + 0x14) + -1;
    puVar5 = puVar4 + 4;
    param_1[1] = (long)puVar5;
    *(int *)((long)param_1 + 0x14) = iVar3;
    if (iVar3 < 1) {
      uVar2 = *(uint *)(param_1 + 2);
      if (uVar2 == 0) {
        puVar5 = (uint *)0x0;
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        puVar5 = *(uint **)(*param_1 + 8);
        *param_1 = (long)puVar5;
        if (puVar5 != (uint *)0x0) {
          uVar1 = *puVar5 & 0xffff;
          if ((int)uVar2 <= (int)(*puVar5 & 0xffff)) {
            uVar1 = uVar2;
          }
          if (0 < (int)uVar1) {
            *(uint *)(param_1 + 2) = uVar2 - uVar1;
            *(uint *)((long)param_1 + 0x14) = uVar1;
            puVar5 = puVar5 + 8;
            param_1[1] = (long)puVar5;
            goto LAB_0306c814;
          }
        }
        puVar5 = (uint *)0x0;
        param_1[1] = 0;
      }
    }
LAB_0306c814:
    if (puVar4[2] != 0) {
      *(uint *)(param_1 + 6) = puVar4[2] - 1;
      param_1[5] = (long)puVar5;
      return;
    }
    param_1[4] = (long)puVar5;
    puVar4 = puVar5;
  } while( true );
}


