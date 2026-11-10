/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e08d34; name: FUN_02e08d34
 */


undefined8 FUN_02e08d34(long *param_1,long *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__s;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  *(uint *)(param_1 + 0xb) = param_4;
  fVar7 = *param_3;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8);
  *param_1 = (long)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (int)(fVar7 * (float)param_4) + 3U & 0xfffffffc;
    *puVar2 = 0;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined8 *)((long)param_1 + 0xc) = 0x100000000;
    if (uVar1 == 0) {
LAB_02e08e20:
      fVar7 = param_3[1];
      puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8);
      param_1[3] = (long)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        uVar1 = (int)(fVar7 * (float)param_4) + 3U & 0xfffffffc;
        *puVar2 = 0;
        *(uint *)(param_1 + 4) = uVar1;
        *(undefined8 *)((long)param_1 + 0x24) = 0x100000000;
        if (uVar1 == 0) {
LAB_02e08edc:
          uVar3 = 1;
          goto LAB_02e08ee0;
        }
        uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar1 << 2);
        *(undefined8 *)param_1[3] = uVar3;
        if (*(long *)param_1[3] != 0) {
          uVar6 = 1;
          uVar3 = 0x34;
          do {
            if (*(uint *)(param_1 + 5) <= uVar6) goto LAB_02e08edc;
            uVar4 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 4) << 2);
            lVar5 = uVar6 * 8;
            uVar6 = uVar6 + 1;
            *(undefined8 *)(param_1[3] + lVar5) = uVar4;
          } while (*(long *)(param_1[3] + lVar5) != 0);
          goto LAB_02e08ee0;
        }
      }
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar1 << 2);
      *(undefined8 *)*param_1 = uVar3;
      if (*(long *)*param_1 != 0) {
        uVar6 = 1;
        uVar3 = 0x34;
        do {
          if (*(uint *)(param_1 + 2) <= uVar6) goto LAB_02e08e20;
          uVar4 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 1) << 2);
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(*param_1 + lVar5) = uVar4;
        } while (*(long *)(*param_1 + lVar5) != 0);
        goto LAB_02e08ee0;
      }
    }
  }
  uVar3 = 0x34;
LAB_02e08ee0:
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[9] = 0x2000000af;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0xaf);
  param_1[7] = (long)__s;
  if (__s != (void *)0x0) {
    memset(__s,0,(ulong)*(uint *)(param_1 + 9));
    uVar6 = param_1[7] + 0xfU & 0xfffffffffffffff0;
    param_1[6] = uVar6;
    *(undefined4 *)(param_1 + 9) = 0x40;
    param_1[8] = uVar6 + 0x40;
  }
  return uVar3;
}


