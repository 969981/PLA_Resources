/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e47f4; name: FUN_001e47f4
 */


size_t FUN_001e47f4(long param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulong __n;
  
  if (param_3 == 0) {
    sVar8 = 0;
  }
  else {
    sVar8 = 0;
    do {
      sVar9 = 0;
      if (8 < *(uint *)(param_1 + 0x88)) goto switchD_001e4868_caseD_5;
      puVar11 = *(undefined8 **)(param_1 + 0x90);
      switch(*(uint *)(param_1 + 0x88)) {
      case 0:
        uVar4 = 4;
        if ((*(uint *)(param_1 + 0x80) & 2) == 0) {
          uVar4 = 1;
        }
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        break;
      case 1:
        if (puVar11 == (undefined8 *)0x0) {
          *(undefined4 *)(param_1 + 0x88) = 2;
          uVar5 = *(undefined8 *)(param_1 + 0x58);
        }
        else {
LAB_001e4a2c:
          pcVar10 = (char *)*puVar11;
          sVar9 = strlen(pcVar10);
          uVar7 = *(ulong *)(param_1 + 0x98);
          uVar6 = uVar7 - sVar9;
          if (uVar7 < sVar9) {
            uVar6 = sVar9 - uVar7;
            pcVar10 = pcVar10 + uVar7;
LAB_001e4a6c:
            sVar9 = param_3;
            if (uVar6 <= param_3) {
              sVar9 = uVar6;
            }
            memcpy(param_2,pcVar10,sVar9);
            *(size_t *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + sVar9;
            if (sVar9 != 0) goto switchD_001e4868_caseD_5;
          }
          else if (uVar6 < 2) {
            pcVar10 = &DAT_038a006b + uVar6;
            uVar6 = 2 - uVar6;
            goto LAB_001e4a6c;
          }
          uVar5 = puVar11[1];
        }
        break;
      case 2:
        if (puVar11 == (undefined8 *)0x0) {
          uVar4 = 3;
          goto LAB_001e4aa8;
        }
        lVar2 = FUN_001e537c(puVar11,"Content-Type",0xc);
        if (lVar2 == 0) goto LAB_001e4a2c;
        uVar5 = puVar11[1];
        *(undefined4 *)(param_1 + 0x88) = 2;
        break;
      case 3:
        uVar6 = *(ulong *)(param_1 + 0x98);
        if (uVar6 < 2) {
          sVar9 = param_3;
          if (2 - uVar6 <= param_3) {
            sVar9 = 2 - uVar6;
          }
          memcpy(param_2,&DAT_038a006b + uVar6,sVar9);
          *(size_t *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + sVar9;
          if (sVar9 != 0) goto switchD_001e4868_caseD_5;
        }
        uVar4 = 4;
        goto LAB_001e4aa8;
      case 4:
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        uVar4 = 7;
LAB_001e4aa8:
        sVar9 = 0;
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
      default:
        goto switchD_001e4868_caseD_5;
      case 7:
        if (*(long *)(param_1 + 0xa0) == 0) {
          if (*(code **)(param_1 + 0x28) != (code *)0x0) {
            sVar9 = (**(code **)(param_1 + 0x28))(param_2,1,param_3,*(undefined8 *)(param_1 + 0x40))
            ;
            goto LAB_001e4ae8;
          }
        }
        else {
          bVar1 = 0;
          sVar9 = 0;
          pvVar12 = param_2;
          uVar6 = param_3;
LAB_001e494c:
          do {
            uVar7 = *(ulong *)(param_1 + 0xb0);
            __n = *(ulong *)(param_1 + 0xb8);
            if ((bool)(__n <= uVar7 & (bVar1 ^ 1))) {
LAB_001e4988:
              if (uVar7 != 0) {
                __n = __n - uVar7;
                if (__n != 0) {
                  memmove((void *)(param_1 + 0xc0),(void *)(param_1 + uVar7 + 0xc0),__n);
                }
                *(undefined8 *)(param_1 + 0xb0) = 0;
                *(ulong *)(param_1 + 0xb8) = __n;
              }
              if (0xff < __n) {
                if (sVar9 == 0) {
                  sVar9 = 0xffffffffffffffff;
                  goto LAB_001e4b88;
                }
                break;
              }
              if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                sVar3 = (**(code **)(param_1 + 0x28))
                                  (param_1 + __n + 0xc0,1,0x100 - __n,
                                   *(undefined8 *)(param_1 + 0x40));
                if (1 < sVar3 - 0x10000000) {
                  if (sVar3 == 0) goto LAB_001e4a00;
                  if (sVar3 != 0xffffffffffffffff) {
                    *(size_t *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + sVar3;
                    goto LAB_001e494c;
                  }
                }
LAB_001e4ad8:
                if (sVar9 != 0) {
                  sVar3 = sVar9;
                }
                sVar9 = sVar3;
                break;
              }
LAB_001e4a00:
              bVar1 = 1;
              goto LAB_001e494c;
            }
            sVar3 = (**(code **)(*(long *)(param_1 + 0xa0) + 8))(pvVar12,uVar6,bVar1,param_1);
            if (sVar3 == 0) {
              if (bVar1 == 0) {
                uVar7 = *(ulong *)(param_1 + 0xb0);
                __n = *(ulong *)(param_1 + 0xb8);
                goto LAB_001e4988;
              }
              break;
            }
            if (sVar3 - 0x10000000 < 2 || sVar3 == 0xffffffffffffffff) goto LAB_001e4ad8;
            sVar9 = sVar3 + sVar9;
            pvVar12 = (void *)((long)pvVar12 + sVar3);
            uVar6 = uVar6 - sVar3;
          } while (uVar6 != 0);
LAB_001e4ae8:
          if ((sVar9 - 0x10000000 < 2) || (sVar9 == 0xffffffffffffffff)) goto LAB_001e4b88;
          if (sVar9 != 0) goto switchD_001e4868_caseD_5;
        }
        *(undefined4 *)(param_1 + 0x88) = 8;
        sVar9 = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0x18) == 2) {
          if (*(long *)(param_1 + 0x48) == 0) {
            sVar9 = 0;
          }
          else {
            FUN_002055a4();
            sVar9 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
          }
        }
LAB_001e4b88:
        if (sVar8 != 0) {
          sVar9 = sVar8;
        }
        return sVar9;
      case 8:
        goto switchD_001e4868_caseD_8;
      }
      sVar9 = 0;
      *(undefined8 *)(param_1 + 0x90) = uVar5;
      *(undefined8 *)(param_1 + 0x98) = 0;
switchD_001e4868_caseD_5:
      sVar8 = sVar9 + sVar8;
      param_2 = (void *)((long)param_2 + sVar9);
      param_3 = param_3 - sVar9;
    } while (param_3 != 0);
  }
switchD_001e4868_caseD_8:
  return sVar8;
}


