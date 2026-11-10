/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e622bc; name: FUN_02e622bc
 */


void FUN_02e622bc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d158)(0xb);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  uVar3 = FUN_02e62368(param_1,(int)param_2[1]);
  if (((int)param_2[1] != 0) && ((uVar3 & 1) != 0)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar4);
      puVar2 = (undefined8 *)(*param_1 + lVar4);
      lVar4 = lVar4 + 0x20;
      uVar5 = puVar1[1];
      puVar2[3] = puVar1[3];
      puVar2[1] = uVar5;
      uVar5 = *puVar1;
      puVar2[2] = puVar1[2];
      *puVar2 = uVar5;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 1));
  }
  return;
}


