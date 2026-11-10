/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005099a8; name: FUN_005099a8
 */


ulong * FUN_005099a8(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *__s;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    __s = param_1 + 1;
    uVar3 = 0x20;
    puVar2 = __s;
    if (uVar8 >> 1 == 0x20) {
LAB_00509a08:
      uVar9 = uVar3 << 1;
      puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar3 << 4);
      puVar5 = puVar2;
      goto LAB_00509a24;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar3 = param_1[2];
    puVar2 = __s;
    if (uVar8 >> 1 == uVar3) goto LAB_00509a08;
  }
  uVar9 = 0;
  __s = puVar2;
  puVar5 = (ulong *)0x0;
LAB_00509a24:
  uVar10 = uVar8 >> 1;
  uVar3 = *param_2;
  *param_2 = 0;
  puVar2[uVar10] = uVar3;
  if (puVar5 == (ulong *)0x0) {
    uVar8 = *param_1;
  }
  else {
    if (uVar10 != 0) {
      uVar8 = uVar8 >> 1 & 1;
      puVar11 = __s;
      if (uVar10 == 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          uVar3 = *puVar11;
          puVar12 = puVar5 + lVar4;
          *puVar11 = 0;
          *puVar12 = uVar3;
          uVar3 = puVar11[1];
          lVar4 = lVar4 + 2;
          puVar11[1] = 0;
          puVar11 = puVar11 + 2;
          puVar12[1] = uVar3;
        } while (uVar10 - uVar8 != lVar4);
      }
      if (uVar8 != 0) {
        uVar8 = *puVar11;
        *puVar11 = 0;
        puVar5[lVar4] = uVar8;
      }
    }
    puVar1 = PTR_LAB_04373088;
    if (__s != (ulong *)0x0) {
      if (uVar10 != 0) {
        uVar8 = uVar10;
        do {
          uVar8 = uVar8 - 1;
          puVar11 = (ulong *)__s[uVar8];
          __s[uVar8] = 0;
          if (puVar11 != (ulong *)0x0) {
            uVar3 = *puVar11;
            if ((uVar3 & 1) == 0) {
              puVar12 = puVar11 + 1;
joined_r0x00509b1c:
              if (uVar3 >> 1 != 0) {
                uVar6 = uVar3 >> 1;
                do {
                  uVar7 = uVar6 - 1;
                  puVar13 = (undefined8 *)puVar12[uVar6 - 1];
                  puVar12[uVar6 - 1] = 0;
                  if (puVar13 != (undefined8 *)0x0) {
                    (**(code **)*puVar13)(puVar13);
                    FUN_002e2ea0(puVar1,puVar13);
                  }
                  uVar6 = uVar7;
                } while (uVar7 != 0);
              }
              memset(puVar12,0xab,(uVar3 >> 1) << 3);
              if ((*puVar11 & 1) != 0) {
                uVar3 = puVar11[1];
                goto LAB_00509acc;
              }
            }
            else {
              puVar12 = (ulong *)puVar11[1];
              if (puVar12 != (ulong *)0x0) goto joined_r0x00509b1c;
              uVar3 = 0;
LAB_00509acc:
              FUN_002e2ea0(puVar1,uVar3);
            }
            FUN_002e2ea0(puVar1,puVar11);
          }
        } while (uVar8 != 0);
      }
      memset(__s,0xab,uVar10 << 3);
    }
    uVar8 = *param_1;
    if ((uVar8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar9;
  }
  *param_1 = uVar8 + 2;
  return puVar2 + uVar10;
}


