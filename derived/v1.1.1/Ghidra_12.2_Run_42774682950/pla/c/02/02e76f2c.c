/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76f2c; name: FUN_02e76f2c
 */


undefined4 * FUN_02e76f2c(uint param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  size_t sVar5;
  void *__dest;
  ulong __n;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined4 *)(*DAT_0442d138)(0,param_1 << 5 | 8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = param_1;
    if (param_1 != 0) {
      uVar6 = 0;
      puVar7 = (undefined8 *)(puVar4 + 4);
      puVar8 = (undefined8 *)(param_2 + 8);
      do {
        uVar1 = puVar8[-1];
        uVar2 = *puVar8;
        uVar3 = puVar8[2];
        puVar7[1] = puVar8[1];
        puVar7[2] = uVar3;
        puVar7[-1] = uVar1;
        *puVar7 = uVar2;
        if ((char *)*puVar8 != (char *)0x0) {
          sVar5 = strlen((char *)*puVar8);
          __n = (ulong)((int)sVar5 + 1);
          __dest = (void *)(*DAT_0442d138)(0,__n);
          *puVar7 = __dest;
          if (__dest == (void *)0x0) {
            puVar4[1] = (int)uVar6;
            FUN_02e771a8(puVar4);
            return (undefined4 *)0x0;
          }
          memcpy(__dest,(void *)*puVar8,__n);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
      } while (param_1 != uVar6);
    }
  }
  return puVar4;
}


