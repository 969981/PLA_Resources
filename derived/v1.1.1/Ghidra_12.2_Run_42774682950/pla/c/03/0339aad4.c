/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339aad4; name: FUN_0339aad4
 */


undefined8 FUN_0339aad4(long *param_1,char *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong *extraout_x1;
  ulong *puVar3;
  char *__s2;
  ulong *extraout_x1_00;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0x10;
    do {
      if ((int)param_1[1] <= lVar5) break;
      lVar5 = lVar5 + 1;
      plVar2 = (long *)(*param_1 + lVar6);
      lVar6 = lVar6 + 0x18;
    } while (*plVar2 != param_3);
  }
  if ((int)lVar5 < (int)param_1[1]) {
    lVar5 = (long)(int)lVar5;
    do {
      lVar6 = *param_1;
      plVar2 = *(long **)(lVar6 + lVar5 * 0x18 + 0x10);
      if (plVar2 == (long *)0x0) {
LAB_0339ac14:
        __s2 = (char *)(*(ulong *)(lVar6 + lVar5 * 0x18 + 8) & 0xfffffffffffffffe);
joined_r0x0339ac20:
        if ((__s2 != (char *)0x0) && (iVar1 = strcmp(param_2,__s2), iVar1 == 0)) {
          return *(undefined8 *)(*param_1 + lVar5 * 0x18 + 0x10);
        }
      }
      else {
        if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
          FUN_032e0ab0(plVar2,&DAT_043568f0);
          puVar3 = extraout_x1_00;
        }
        else {
          (**(code **)*plVar2)();
          puVar3 = extraout_x1;
        }
        if (puVar3 == (ulong *)0x0) goto LAB_0339ac14;
        do {
          uVar4 = (uint)*puVar3;
          if ((uVar4 >> 3 & 1) != 0) {
            uVar4 = (uVar4 & 7) - (uVar4 >> 1 & 1);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            __s2 = (char *)puVar3[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2];
            goto joined_r0x0339ac20;
          }
        } while (((*puVar3 & 1) == 0) && (puVar3 = (ulong *)puVar3[1], puVar3 != (ulong *)0x0));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  return 0;
}


