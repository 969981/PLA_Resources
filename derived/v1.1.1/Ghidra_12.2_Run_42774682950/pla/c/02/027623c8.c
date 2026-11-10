/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027623c8; name: FUN_027623c8
 */


void FUN_027623c8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t __n;
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  void *__dest;
  ulong uVar7;
  
  __dest = (void *)*param_1;
  uVar6 = (long)param_3 - (long)param_2 >> 2;
  if ((ulong)(param_1[2] - (long)__dest >> 2) < uVar6) {
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],__dest,param_1[2] - (long)__dest,4);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar1 = FUN_02762584(param_1,uVar6);
    FUN_0276132c(param_1,uVar1);
    if (param_2 != param_3) {
      puVar2 = (undefined4 *)param_1[1];
      uVar6 = ((long)param_3 - (long)param_2) - 4;
      puVar5 = param_2;
      if (((uint)uVar6 >> 2 & 1) == 0) {
        puVar5 = param_2 + 1;
        *puVar2 = *param_2;
        puVar2 = (undefined4 *)(param_1[1] + 4);
        param_1[1] = puVar2;
      }
      if (3 < uVar6) {
        do {
          *puVar2 = *puVar5;
          lVar3 = param_1[1];
          param_1[1] = lVar3 + 4;
          *(undefined4 *)(lVar3 + 4) = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar2 = (undefined4 *)(param_1[1] + 4);
          param_1[1] = puVar2;
        } while (puVar5 != param_3);
      }
    }
  }
  else {
    uVar7 = param_1[1] - (long)__dest >> 2;
    puVar5 = (undefined4 *)((long)param_2 + (param_1[1] - (long)__dest));
    puVar2 = puVar5;
    if (uVar6 <= uVar7) {
      puVar2 = param_3;
    }
    __n = (long)puVar2 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar7 < uVar6) {
      if (puVar2 != param_3) {
        puVar4 = (undefined4 *)param_1[1];
        uVar6 = (long)param_3 + (~uVar7 * 4 - (long)param_2);
        puVar2 = puVar5;
        if (((uint)uVar6 >> 2 & 1) == 0) {
          puVar2 = puVar5 + 1;
          *puVar4 = *puVar5;
          puVar4 = (undefined4 *)(param_1[1] + 4);
          param_1[1] = puVar4;
        }
        if (3 < uVar6) {
          do {
            *puVar4 = *puVar2;
            lVar3 = param_1[1];
            param_1[1] = lVar3 + 4;
            *(undefined4 *)(lVar3 + 4) = puVar2[1];
            puVar2 = puVar2 + 2;
            puVar4 = (undefined4 *)(param_1[1] + 4);
            param_1[1] = puVar4;
          } while (puVar2 != param_3);
        }
      }
    }
    else {
      param_1[1] = (void *)((long)__dest + ((long)__n >> 2) * 4);
    }
  }
  return;
}


