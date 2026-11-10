/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6100; name: FUN_005c6100
 */


void FUN_005c6100(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *__s;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    puVar2 = param_1 + 1;
    uVar3 = 2;
    if (2 < param_3) goto LAB_005c6188;
LAB_005c6138:
    uVar10 = (uVar1 >> 1) - param_3;
    if (param_3 <= uVar1 >> 1) {
      uVar9 = 0;
      __s = puVar2 + param_3 * 3;
      puVar8 = (ulong *)0x0;
      goto joined_r0x005c62a0;
    }
    uVar10 = 0;
    puVar8 = (ulong *)0x0;
    uVar9 = 0;
    __s = (ulong *)0x0;
    puVar4 = puVar2;
  }
  else {
    puVar2 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    if (param_3 <= uVar3) goto LAB_005c6138;
LAB_005c6188:
    uVar10 = uVar1 >> 1;
    uVar9 = param_3;
    if (param_3 <= uVar3 << 1) {
      uVar9 = uVar3 << 1;
    }
    puVar8 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar9 * 0x18);
    __s = puVar2;
    puVar4 = puVar8;
  }
  uVar3 = param_3 - (uVar1 >> 1);
  if (uVar3 != 0) {
    uVar1 = uVar1 >> 1;
    uVar3 = uVar3 & 1;
    if (~uVar1 + param_3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar6 = puVar4 + uVar1 * 3 + 4;
      do {
        lVar5 = lVar5 + -2;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = (ulong)puVar6;
        puVar6[-4] = (ulong)(puVar6 + -3);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 6;
      } while ((uVar1 + uVar3) - param_3 != lVar5);
      lVar5 = -lVar5;
    }
    if (uVar3 != 0) {
      puVar4 = puVar4 + uVar1 * 3 + lVar5 * 3;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = (ulong)(puVar4 + 1);
    }
  }
  if (uVar10 != 0) {
    puVar2 = puVar2 + 1;
    puVar4 = puVar8 + 1;
    uVar1 = uVar10;
    do {
      while( true ) {
        puVar4[-1] = puVar2[-1];
        uVar3 = *puVar2;
        *puVar4 = uVar3;
        uVar7 = puVar2[1];
        puVar4[1] = uVar7;
        if (uVar7 != 0) break;
        puVar4[-1] = (ulong)puVar4;
        puVar2 = puVar2 + 3;
        uVar1 = uVar1 - 1;
        puVar4 = puVar4 + 3;
        if (uVar1 == 0) goto joined_r0x005c62a0;
      }
      *(ulong **)(uVar3 + 0x10) = puVar4;
      puVar2[1] = 0;
      puVar2[-1] = (ulong)puVar2;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
      uVar1 = uVar1 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar1 != 0);
  }
joined_r0x005c62a0:
  if (__s != (ulong *)0x0) {
    if (uVar10 != 0) {
      uVar1 = uVar10;
      puVar2 = __s + uVar10 * 3;
      do {
        uVar1 = uVar1 - 1;
        FUN_0051f624(puVar2 + -3,puVar2[-2]);
        puVar2 = puVar2 + -3;
      } while (uVar1 != 0);
    }
    memset(__s,0xab,uVar10 * 0x18);
  }
  uVar1 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar1 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar1 = *param_1;
    }
    uVar1 = uVar1 | 1;
    *param_1 = uVar1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar9;
  }
  *param_1 = uVar1 & 1 | param_3 << 1;
  return;
}


