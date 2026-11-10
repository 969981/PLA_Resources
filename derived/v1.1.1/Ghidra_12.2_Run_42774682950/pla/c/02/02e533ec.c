/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e533ec; name: FUN_02e533ec
 */


undefined8 FUN_02e533ec(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = (*DAT_0442d138)(9,(ulong)uVar1 << 7);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)(lVar4 + lVar6);
          puVar2[3] = 0;
          puVar2[4] = 0;
          *(undefined2 *)((long)puVar2 + 0x14) = 1;
          *(undefined4 *)(puVar2 + 0xd) = 0;
          puVar2[0xe] = 0;
          *(undefined1 *)(puVar2 + 0xf) = 0;
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = &PTR_LAB_042a5e38;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          FUN_02e44b70(puVar2,*param_1 + lVar6);
          FUN_02e4499c(*param_1 + lVar6);
          lVar6 = lVar6 + 0x80;
        } while ((ulong)uVar3 * 0x80 != lVar6);
        lVar6 = *param_1;
      }
      FUN_02f59e60(9,lVar6);
    }
    uVar5 = 1;
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


